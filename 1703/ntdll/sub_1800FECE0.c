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

__int64 __fastcall sub_1800FECE0(_DWORD *HeapHandle, __int64 a2)
{
  int v3; // r15d
  NTSTATUS v5; // eax
  _RTL_SRWLOCK *v6; // rdi
  bool v7; // zf
  __int64 v8; // rax
  int v9; // esi
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 (__fastcall *v13)(__int64 *, __int64, __int64); // rax
  _RTL_SRWLOCK *v15; // [rsp+20h] [rbp-49h] BYREF
  __int64 v16; // [rsp+28h] [rbp-41h] BYREF
  __int64 v17; // [rsp+30h] [rbp-39h]
  __int64 v18; // [rsp+38h] [rbp-31h]
  __int64 v19[6]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v20[4]; // [rsp+70h] [rbp+7h] BYREF

  v3 = 0;
  v5 = sub_1800FEC74((__int64)HeapHandle, 0, (PVOID *)&v15);
  v6 = v15;
  if ( v5 < 0 )
    v6 = 0LL;
  v15 = v6;
  memset(v20, 0, sizeof(v20));
  v7 = HeapHandle[4] == -571548178;
  LODWORD(v20[0]) = 524290;
  v20[1] = HeapHandle;
  if ( v7 )
  {
    v20[3] = *(_QWORD *)HeapHandle;
    v8 = *((_QWORD *)HeapHandle + 1);
    v20[3] <<= 12;
    v6 = v15;
    v20[2] = v8 << 12;
  }
  else
  {
    v20[2] = *((_QWORD *)HeapHandle + 68) - *((_QWORD *)HeapHandle + 79);
    v20[3] = *((_QWORD *)HeapHandle + 67);
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(a2 + 16))(v20, 32LL, *(_QWORD *)(a2 + 24));
  if ( v9 >= 0 )
  {
    memset(v19, 0, sizeof(v19));
    if ( v6 )
    {
      v3 = 1;
      RtlAcquireSRWLockShared(v6);
    }
    RtlLockHeap(HeapHandle);
    while ( 1 )
    {
      LOBYTE(v10) = 1;
      if ( (int)sub_180008414((__int64)HeapHandle, v19, v10) < 0 )
        break;
      if ( (v19[2] & 0x10000) != 0 )
      {
        v16 = v19[0];
        v18 = v19[1];
        if ( v6 )
        {
          v11 = sub_1800FE774((__int64)v6, v19[0]);
          if ( v11 )
            v17 = *(_QWORD *)(v11 + 16);
        }
        else
        {
          v17 = 0LL;
        }
        v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(a2 + 16))(&v16, 24LL, *(_QWORD *)(a2 + 24));
        if ( v9 < 0 )
          goto LABEL_20;
      }
    }
    v12 = *(_QWORD *)(a2 + 24);
    v16 = 305450479LL;
    v18 = 0xFFFFFFFFLL;
    v13 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64))(a2 + 16);
    v17 = 0LL;
    v9 = v13(&v16, 24LL, v12);
    if ( v9 >= 0 )
      v9 = 0;
LABEL_20:
    RtlUnlockHeap(HeapHandle);
    if ( v3 )
      RtlReleaseSRWLockShared(v6);
  }
  return (unsigned int)v9;
}
