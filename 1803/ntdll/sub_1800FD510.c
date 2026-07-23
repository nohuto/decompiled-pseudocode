/*
 * XREFs of sub_1800FD510 @ 0x1800FD510
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     RtlUnlockHeap @ 0x18001FB70 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x18001FC90 (RtlLockHeap.c)
 *     sub_180061F40 @ 0x180061F40 (sub_180061F40.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800FCEAC @ 0x1800FCEAC (sub_1800FCEAC.c)
 *     sub_1800FD4A4 @ 0x1800FD4A4 (sub_1800FD4A4.c)
 */

__int64 __fastcall sub_1800FD510(_DWORD *HeapHandle, __int64 a2)
{
  int v3; // r15d
  NTSTATUS v5; // eax
  _RTL_SRWLOCK *v6; // rbx
  bool v7; // zf
  int v8; // esi
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 (__fastcall *v11)(__int64 *, __int64, __int64); // rax
  _RTL_SRWLOCK *v13; // [rsp+20h] [rbp-59h] BYREF
  __int64 v14; // [rsp+28h] [rbp-51h] BYREF
  __int64 v15; // [rsp+30h] [rbp-49h]
  __int64 v16; // [rsp+38h] [rbp-41h]
  __int64 v17[6]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v18[4]; // [rsp+70h] [rbp-9h] BYREF

  v3 = 0;
  v5 = sub_1800FD4A4((__int64)HeapHandle, 0, (PVOID *)&v13);
  v6 = v13;
  if ( v5 < 0 )
    v6 = 0LL;
  v13 = v6;
  memset(v18, 0, sizeof(v18));
  v7 = HeapHandle[4] == -571548178;
  LODWORD(v18[0]) = 524290;
  v18[1] = HeapHandle;
  if ( v7 )
  {
    v18[3] = *((_QWORD *)HeapHandle + 3) << 12;
    v18[3] += *((_QWORD *)HeapHandle + 12) << 12;
    v18[2] = *((_QWORD *)HeapHandle + 4) << 12;
    v6 = v13;
    v18[2] += *((_QWORD *)HeapHandle + 13) << 12;
  }
  else
  {
    v18[2] = *((_QWORD *)HeapHandle + 68) - *((_QWORD *)HeapHandle + 79);
    v18[3] = *((_QWORD *)HeapHandle + 67);
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(a2 + 16))(v18, 32LL, *(_QWORD *)(a2 + 24));
  if ( v8 >= 0 )
  {
    memset(v17, 0, sizeof(v17));
    if ( v6 )
    {
      v3 = 1;
      RtlAcquireSRWLockShared(v6 + 1);
      ++LODWORD(v6->Ptr);
    }
    RtlLockHeap(HeapHandle);
    while ( (int)sub_180061F40((__int64)HeapHandle, (__int64)v17) >= 0 )
    {
      if ( (v17[2] & 0x10000) != 0 )
      {
        v15 = 0LL;
        v16 = v17[1];
        v14 = v17[0];
        if ( v6 )
        {
          v9 = sub_1800FCEAC((__int64)v6, v17[0]);
          if ( v9 )
            v15 = *(_QWORD *)(v9 + 16);
        }
        else
        {
          v15 = 0LL;
        }
        v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(a2 + 16))(&v14, 24LL, *(_QWORD *)(a2 + 24));
        if ( v8 < 0 )
          goto LABEL_20;
      }
    }
    v10 = *(_QWORD *)(a2 + 24);
    v11 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64))(a2 + 16);
    v14 = 305450479LL;
    v16 = 0xFFFFFFFFLL;
    v15 = 0LL;
    v8 = v11(&v14, 24LL, v10);
    if ( v8 >= 0 )
      v8 = 0;
LABEL_20:
    RtlUnlockHeap(HeapHandle);
    if ( v3 )
    {
      --LODWORD(v6->Ptr);
      RtlReleaseSRWLockShared(v6 + 1);
    }
  }
  return (unsigned int)v8;
}
