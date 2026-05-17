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

__int64 __fastcall sub_18005E4EC(unsigned __int64 a1, unsigned __int64 *a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // r14
  __int64 v15; // rbx
  unsigned __int64 v17; // rdx
  unsigned __int64 *v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  char v21; // al
  unsigned __int64 v22; // [rsp+20h] [rbp-40h] BYREF
  __int64 v23; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v24[4]; // [rsp+30h] [rbp-30h] BYREF

  v4 = *a2;
  v24[0] = 0x10000000100000LL;
  v6 = (unsigned __int64)a3;
  v24[1] = 0x4000000000200000LL;
  if ( !v4 )
    __int2c();
  v9 = (unsigned __int64)(*(unsigned __int16 *)(a1 + 40) << 20) >> 1;
  v22 = v4;
  if ( v4 <= v9 )
  {
    v10 = v4 >> 20;
    RtlAcquireSRWLockExclusive(a1, (unsigned __int64)a2, a3, a4);
    v11 = sub_18005E6EC(a1, (unsigned __int16)v10, (unsigned __int16)(v6 >> 20), v24, v22);
    v12 = v11;
    if ( v11 )
    {
      RtlRbRemoveNode(a1 + 8, v11);
      v13 = v24[0];
      if ( v24[0] != v12 )
      {
        *(_QWORD *)v12 = 0LL;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = 0LL;
        *(_BYTE *)v12 = 1;
        v21 = *(_BYTE *)(a1 + 44);
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_BYTE *)(v12 + 1) = v21;
        sub_18005E9A0(a1, v12, (v13 - v12) >> 5);
        sub_18005E81C(a1, v12);
        v12 = v13;
      }
      goto LABEL_7;
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
    v12 = sub_18005EA08(a1);
    if ( v12 )
    {
      RtlAcquireSRWLockExclusive(a1, v17, v18, v19);
LABEL_7:
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)
          + ((v12 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL)) >> *(_DWORD *)(*(_QWORD *)(a1 + 24) + 88LL) << 20);
      *(_QWORD *)v12 = 0LL;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = 0LL;
      *(_BYTE *)v12 = 1;
      *(_BYTE *)(v12 + 1) = *(_BYTE *)(a1 + 44);
      *(_QWORD *)(v12 + 8) = a4;
      if ( *(_WORD *)(v12 + 24) > (unsigned __int16)v10 )
      {
        v20 = sub_18005E9A0(a1, v12, (unsigned __int16)v10);
        sub_18005E81C(a1, v20);
      }
      v23 = v14;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
      return v23;
    }
    return 0LL;
  }
  if ( (unsigned __int64)a3 <= *((unsigned int *)v24 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 46) >> 1) & 3)) )
    v6 = *((unsigned int *)v24 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 46) >> 1) & 3));
  v22 = v4 - ((v6 - 1) & (v6 + v4 - 1)) + v6 - 1;
  v23 = sub_18005F008(a1, &v22, v6);
  v15 = v23;
  if ( v23 )
  {
    memset(v24, 0, sizeof(v24));
    BYTE1(v24[0]) = *(_BYTE *)(a1 + 44);
    v24[3] = v22 >> 20;
    LOBYTE(v24[0]) = 5;
    v24[1] = a4;
    if ( sub_18005EAA4(a1, v23, v24) )
    {
      *a2 = v22;
      return v23;
    }
    ZwFreeVirtualMemory(-1LL, &v23, &v22, 0x8000LL);
    return 0LL;
  }
  return v15;
}
