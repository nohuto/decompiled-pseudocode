/*
 * XREFs of sub_1800FECE0 @ 0x1800FECE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008414 @ 0x180008414 (sub_180008414.c)
 *     RtlLockHeap @ 0x18001F870 (RtlLockHeap.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlUnlockHeap @ 0x180021980 (RtlUnlockHeap.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800FE774 @ 0x1800FE774 (sub_1800FE774.c)
 *     sub_1800FEC74 @ 0x1800FEC74 (sub_1800FEC74.c)
 */

__int64 __fastcall sub_1800FECE0(__int64 a1, __int64 a2)
{
  int v3; // r15d
  int v5; // eax
  volatile signed __int64 *v6; // rdi
  bool v7; // zf
  __int64 v8; // rax
  int v9; // esi
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 (__fastcall *v15)(unsigned __int64 *, __int64, __int64); // rax
  volatile signed __int64 *v17; // [rsp+20h] [rbp-49h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-41h] BYREF
  __int64 v19; // [rsp+30h] [rbp-39h]
  unsigned __int64 v20; // [rsp+38h] [rbp-31h]
  unsigned __int64 v21[6]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v22[4]; // [rsp+70h] [rbp+7h] BYREF

  v3 = 0;
  v5 = sub_1800FEC74(a1, 0, &v17);
  v6 = v17;
  if ( v5 < 0 )
    v6 = 0LL;
  v17 = v6;
  memset(v22, 0, sizeof(v22));
  v7 = *(_DWORD *)(a1 + 16) == -571548178;
  LODWORD(v22[0]) = 524290;
  v22[1] = a1;
  if ( v7 )
  {
    v22[3] = *(_QWORD *)a1;
    v8 = *(_QWORD *)(a1 + 8);
    v22[3] <<= 12;
    v6 = v17;
    v22[2] = v8 << 12;
  }
  else
  {
    v22[2] = *(_QWORD *)(a1 + 544) - *(_QWORD *)(a1 + 632);
    v22[3] = *(_QWORD *)(a1 + 536);
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(a2 + 16))(v22, 32LL, *(_QWORD *)(a2 + 24));
  if ( v9 >= 0 )
  {
    memset(v21, 0, sizeof(v21));
    if ( v6 )
    {
      v3 = 1;
      RtlAcquireSRWLockShared(v6);
    }
    RtlLockHeap(a1);
    while ( 1 )
    {
      LOBYTE(v10) = 1;
      if ( (int)sub_180008414(a1, v21, v10) < 0 )
        break;
      if ( (v21[2] & 0x10000) != 0 )
      {
        v18 = v21[0];
        v20 = v21[1];
        if ( v6 )
        {
          v11 = sub_1800FE774((__int64)v6, v21[0]);
          if ( v11 )
            v19 = *(_QWORD *)(v11 + 16);
        }
        else
        {
          v19 = 0LL;
        }
        v9 = (*(__int64 (__fastcall **)(unsigned __int64 *, __int64, _QWORD))(a2 + 16))(
               &v18,
               24LL,
               *(_QWORD *)(a2 + 24));
        if ( v9 < 0 )
          goto LABEL_20;
      }
    }
    v14 = *(_QWORD *)(a2 + 24);
    v18 = 305450479LL;
    v20 = 0xFFFFFFFFLL;
    v15 = *(__int64 (__fastcall **)(unsigned __int64 *, __int64, __int64))(a2 + 16);
    v19 = 0LL;
    v9 = v15(&v18, 24LL, v14);
    if ( v9 >= 0 )
      v9 = 0;
LABEL_20:
    RtlUnlockHeap(a1, v12, v10, v13);
    if ( v3 )
      RtlReleaseSRWLockShared(v6);
  }
  return (unsigned int)v9;
}
