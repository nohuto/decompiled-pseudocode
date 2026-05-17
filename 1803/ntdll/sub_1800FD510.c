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

__int64 __fastcall sub_1800FD510(__int64 a1, __int64 a2)
{
  int v3; // r15d
  int v5; // eax
  __int64 v6; // rbx
  bool v7; // zf
  int v8; // esi
  char *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 (__fastcall *v14)(__int64 *, __int64, __int64); // rax
  __int64 v16; // [rsp+20h] [rbp-59h] BYREF
  __int64 v17; // [rsp+28h] [rbp-51h] BYREF
  __int64 v18; // [rsp+30h] [rbp-49h]
  __int64 v19; // [rsp+38h] [rbp-41h]
  __int64 v20[6]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v21[4]; // [rsp+70h] [rbp-9h] BYREF

  v3 = 0;
  v5 = sub_1800FD4A4(a1, 0, &v16);
  v6 = v16;
  if ( v5 < 0 )
    v6 = 0LL;
  v16 = v6;
  memset(v21, 0, sizeof(v21));
  v7 = *(_DWORD *)(a1 + 16) == -571548178;
  LODWORD(v21[0]) = 524290;
  v21[1] = a1;
  if ( v7 )
  {
    v21[3] = *(_QWORD *)(a1 + 24) << 12;
    v21[3] += *(_QWORD *)(a1 + 96) << 12;
    v21[2] = *(_QWORD *)(a1 + 32) << 12;
    v6 = v16;
    v21[2] += *(_QWORD *)(a1 + 104) << 12;
  }
  else
  {
    v21[2] = *(_QWORD *)(a1 + 544) - *(_QWORD *)(a1 + 632);
    v21[3] = *(_QWORD *)(a1 + 536);
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(a2 + 16))(v21, 32LL, *(_QWORD *)(a2 + 24));
  if ( v8 >= 0 )
  {
    memset(v20, 0, sizeof(v20));
    if ( v6 )
    {
      v3 = 1;
      RtlAcquireSRWLockShared((volatile signed __int64 *)(v6 + 8), v9, v10, v11);
      ++*(_DWORD *)v6;
    }
    RtlLockHeap(a1);
    while ( (int)sub_180061F40(a1, (__int64)v20) >= 0 )
    {
      if ( (v20[2] & 0x10000) != 0 )
      {
        v18 = 0LL;
        v19 = v20[1];
        v17 = v20[0];
        if ( v6 )
        {
          v12 = sub_1800FCEAC(v6, v20[0]);
          if ( v12 )
            v18 = *(_QWORD *)(v12 + 16);
        }
        else
        {
          v18 = 0LL;
        }
        v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(a2 + 16))(&v17, 24LL, *(_QWORD *)(a2 + 24));
        if ( v8 < 0 )
          goto LABEL_20;
      }
    }
    v13 = *(_QWORD *)(a2 + 24);
    v14 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64))(a2 + 16);
    v17 = 305450479LL;
    v19 = 0xFFFFFFFFLL;
    v18 = 0LL;
    v8 = v14(&v17, 24LL, v13);
    if ( v8 >= 0 )
      v8 = 0;
LABEL_20:
    RtlUnlockHeap(a1);
    if ( v3 )
    {
      --*(_DWORD *)v6;
      RtlReleaseSRWLockShared((volatile signed __int64 *)(v6 + 8));
    }
  }
  return (unsigned int)v8;
}
