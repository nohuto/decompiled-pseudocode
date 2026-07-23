/*
 * XREFs of sub_18005E4EC @ 0x18005E4EC
 * Callers:
 *     sub_18005E47C @ 0x18005E47C (sub_18005E47C.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x180021260 (RtlRbRemoveNode.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18005E6EC @ 0x18005E6EC (sub_18005E6EC.c)
 *     sub_18005E81C @ 0x18005E81C (sub_18005E81C.c)
 *     sub_18005E9A0 @ 0x18005E9A0 (sub_18005E9A0.c)
 *     sub_18005EA08 @ 0x18005EA08 (sub_18005EA08.c)
 *     sub_18005EAA4 @ 0x18005EAA4 (sub_18005EAA4.c)
 *     sub_18005F008 @ 0x18005F008 (sub_18005F008.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

PVOID __fastcall sub_18005E4EC(PRTL_SRWLOCK SRWLock, ULONG_PTR *a2, unsigned __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v9; // rcx
  ULONG_PTR v10; // rsi
  _RTL_BALANCED_NODE *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r14
  void *v14; // r14
  PVOID v15; // rbx
  __int64 v17; // rax
  char v18; // al
  ULONG_PTR RegionSize; // [rsp+20h] [rbp-40h] BYREF
  PVOID BaseAddress; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v21[4]; // [rsp+30h] [rbp-30h] BYREF

  v4 = *a2;
  v21[0] = 0x10000000100000LL;
  v6 = a3;
  v21[1] = 0x4000000000200000LL;
  if ( !v4 )
    __int2c();
  v9 = (unsigned __int64)(LOWORD(SRWLock[5].Ptr) << 20) >> 1;
  RegionSize = v4;
  if ( v4 <= v9 )
  {
    v10 = v4 >> 20;
    RtlAcquireSRWLockExclusive(SRWLock);
    v11 = (_RTL_BALANCED_NODE *)sub_18005E6EC(
                                  SRWLock,
                                  (unsigned __int16)v10,
                                  (unsigned __int16)(v6 >> 20),
                                  v21,
                                  RegionSize);
    v12 = (__int64)v11;
    if ( v11 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)&SRWLock[1], v11);
      v13 = v21[0];
      if ( v21[0] != v12 )
      {
        *(_QWORD *)v12 = 0LL;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = 0LL;
        *(_BYTE *)v12 = 1;
        v18 = BYTE4(SRWLock[5].Ptr);
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_BYTE *)(v12 + 1) = v18;
        sub_18005E9A0(SRWLock, v12, (v13 - v12) >> 5);
        sub_18005E81C(SRWLock, v12);
        v12 = v13;
      }
      goto LABEL_7;
    }
    RtlReleaseSRWLockExclusive(SRWLock);
    v12 = sub_18005EA08(SRWLock);
    if ( v12 )
    {
      RtlAcquireSRWLockExclusive(SRWLock);
LABEL_7:
      v14 = (void *)(*((_QWORD *)SRWLock[3].Ptr + 1)
                   + ((v12 - *((_QWORD *)SRWLock[3].Ptr + 4)) >> *((_DWORD *)SRWLock[3].Ptr + 22) << 20));
      *(_QWORD *)v12 = 0LL;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = 0LL;
      *(_BYTE *)v12 = 1;
      *(_BYTE *)(v12 + 1) = BYTE4(SRWLock[5].Ptr);
      *(_QWORD *)(v12 + 8) = a4;
      if ( *(_WORD *)(v12 + 24) > (unsigned __int16)v10 )
      {
        v17 = sub_18005E9A0(SRWLock, v12, (unsigned __int16)v10);
        sub_18005E81C(SRWLock, v17);
      }
      BaseAddress = v14;
      RtlReleaseSRWLockExclusive(SRWLock);
      return BaseAddress;
    }
    return 0LL;
  }
  if ( a3 <= *((unsigned int *)v21 + (((unsigned __int64)BYTE6(SRWLock[5].Ptr) >> 1) & 3)) )
    v6 = *((unsigned int *)v21 + (((unsigned __int64)BYTE6(SRWLock[5].Ptr) >> 1) & 3));
  RegionSize = v4 - ((v6 - 1) & (v6 + v4 - 1)) + v6 - 1;
  BaseAddress = (PVOID)sub_18005F008(SRWLock, &RegionSize, v6);
  v15 = BaseAddress;
  if ( BaseAddress )
  {
    memset(v21, 0, sizeof(v21));
    BYTE1(v21[0]) = BYTE4(SRWLock[5].Ptr);
    v21[3] = RegionSize >> 20;
    LOBYTE(v21[0]) = 5;
    v21[1] = a4;
    if ( sub_18005EAA4(SRWLock, BaseAddress, v21) )
    {
      *a2 = RegionSize;
      return BaseAddress;
    }
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    return 0LL;
  }
  return v15;
}
