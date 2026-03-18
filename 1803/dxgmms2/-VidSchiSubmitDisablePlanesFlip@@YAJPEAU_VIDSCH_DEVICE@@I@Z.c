/*
 * XREFs of ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C0028540
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0005D0C (VidSchiSetFlipDevice.c)
 * Callees:
 *     VidSchiExecuteMmIoFlip @ 0x1C000D930 (VidSchiExecuteMmIoFlip.c)
 *     ?ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C0014424 (-ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0017A80 (memmove.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0026CA0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0026D64 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     VidSchIsVSyncEnabled @ 0x1C0056B50 (VidSchIsVSyncEnabled.c)
 */

__int64 __fastcall VidSchiSubmitDisablePlanesFlip(struct _VIDSCH_DEVICE *a1, unsigned int a2)
{
  __int64 v2; // rbp
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int *v13; // r12
  void (__fastcall *v14)(_QWORD); // rax
  __int64 v15; // rcx
  unsigned int v16; // r8d
  bool v17; // zf
  int v18; // eax
  char v19; // cl
  __int64 v20; // rdi
  __int64 v21; // rbx
  void *v22; // rcx
  unsigned int v23; // edx
  struct _SLIST_ENTRY *v24[2]; // [rsp+30h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-68h] BYREF
  __int64 v26; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v27; // [rsp+B8h] [rbp+10h]
  int v28; // [rsp+C0h] [rbp+18h]
  int v29; // [rsp+C8h] [rbp+20h]

  v27 = a2;
  v2 = *((_QWORD *)a1 + 4);
  v3 = 0;
  v4 = a2;
  v6 = a2;
  v7 = *(_QWORD *)(v2 + 8LL * a2 + 3032);
  if ( !v7 )
    return 0LL;
  v9 = *(_QWORD *)(v7 + 24);
  if ( !v9 )
    return 0LL;
  v10 = *(_QWORD *)(v2 + 16);
  v24[0] = 0LL;
  v24[1] = *(struct _SLIST_ENTRY **)(v10 + 2464);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v24);
  if ( v24[0] )
  {
    v13 = (unsigned int *)((char *)&v24[0][29].Next + (*((_BYTE *)&v24[0][21].Next + 12) != 0 ? 0x18 : 0) + 8);
    *v13 ^= (*v13 ^ (((1 << *(_DWORD *)(v2 + 132)) - 1) << 10)) & 0xFFC00;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 976));
    _InterlockedIncrement((volatile signed __int32 *)a1 + 303);
    _InterlockedIncrement((volatile signed __int32 *)a1 + v4 + 287);
    VidSchIsVSyncEnabled(v2, (unsigned int)v4);
    if ( *(_DWORD *)(*(_QWORD *)(v2 + 8 * v4 + 3032) + 28128LL) != -1 )
    {
      v14 = *(void (__fastcall **)(_QWORD))(v2 + 2888);
      if ( v14 )
        v14(*(_QWORD *)(v2 + 2952));
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 1904), &LockHandle);
    _InterlockedAdd((volatile signed __int32 *)a1 + v6 + 271, 1u);
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 24LL)
                                + 8LL * *(unsigned int *)(*((_QWORD *)a1 + 4) + 4LL))
                    + 8 * v6
                    + 520);
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 8 * v6 + 6248) + 8LL), 1u);
    _InterlockedAdd((volatile signed __int32 *)(v15 + 8), 1u);
    ++*(_DWORD *)(v2 + 980);
    ++*((_DWORD *)a1 + 304);
    ++*(_DWORD *)(v7 + 2300);
    v16 = ((unsigned __int16)*v13 | (unsigned __int16)(*v13 >> 10)) & 0x3FF;
    v17 = !_BitScanForward((unsigned int *)&v18, v16);
    v28 = v18;
    while ( 1 )
    {
      v19 = -1;
      if ( !v17 )
        v19 = v18;
      if ( !v16 )
        break;
      ++*(_DWORD *)(216LL * v19 + *(_QWORD *)(v2 + 8 * v6 + 3032) + 148);
      v16 &= ~(1 << v19);
      v17 = !_BitScanForward((unsigned int *)&v18, v16);
      v29 = v18;
    }
    v20 = *(unsigned int *)(v9 + 32);
    v21 = v9 + 1280 * v20;
    VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((VIDSCH_FLIP_QUEUE_ENTRY *)(v21 + 56));
    *(_DWORD *)(v21 + 1176) |= 0x190u;
    v22 = *(void **)(v21 + 1216);
    *(_QWORD *)(v21 + 1096) = a1;
    *(_DWORD *)(v21 + 1116) = 0;
    memmove(v22, v13, v13[3]);
    *(_DWORD *)(v9 + 32) = ((_BYTE)v20 + 1) & 0x3F;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 984));
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 2304));
    v23 = v27;
    *(_DWORD *)(v21 + 1108) = 4;
    LOBYTE(v26) = 0;
    VidSchiExecuteMmIoFlip((struct _VIDSCH_GLOBAL *)v2, v23, 0, v20, &v26);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    v12 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v12 + 24) = 19681LL;
    WdLogEvent5_WdLowResource(v12);
    v3 = -1073741801;
  }
  CVidSchSubmitData::~CVidSchSubmitData(v24);
  return v3;
}
