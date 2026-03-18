/*
 * XREFs of ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C00259C0
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0004150 (VidSchiSetFlipDevice.c)
 * Callees:
 *     VidSchiExecuteMmIoFlip @ 0x1C00029E0 (VidSchiExecuteMmIoFlip.c)
 *     ?ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x1C001493C (-ZeroFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     memmove @ 0x1C00180C0 (memmove.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00241C0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0024284 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 */

__int64 __fastcall VidSchiSubmitDisablePlanesFlip(struct _VIDSCH_DEVICE *a1, unsigned int a2)
{
  __int64 v2; // rbp
  unsigned int v3; // esi
  __int64 v4; // r12
  __int64 v6; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  _DWORD *v12; // rdi
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // r8d
  bool v16; // zf
  int v17; // eax
  char v18; // cl
  __int64 v19; // rdi
  __int64 v20; // rbx
  unsigned int *v21; // rdx
  void *v22; // rcx
  struct _SLIST_ENTRY *v23[2]; // [rsp+30h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-68h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+10h] BYREF
  int v26; // [rsp+C0h] [rbp+18h]
  void *Src; // [rsp+C8h] [rbp+20h]

  v2 = *((_QWORD *)a1 + 4);
  v3 = 0;
  v4 = a2;
  v6 = *(_QWORD *)(v2 + 8LL * a2 + 3008);
  if ( !v6 )
    return 0LL;
  v8 = *(_QWORD *)(v6 + 24);
  if ( !v8 )
    return 0LL;
  v9 = *(_QWORD *)(v2 + 16);
  v23[0] = 0LL;
  v23[1] = *(struct _SLIST_ENTRY **)(v9 + 2312);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v23);
  if ( v23[0] )
  {
    v12 = (_DWORD *)((char *)&v23[0][26].Next + (*((_BYTE *)&v23[0][21].Next + 12) != 0 ? 0x10 : 0) + 8);
    v13 = (1 << *(_DWORD *)(v2 + 128)) - 1;
    Src = v12;
    *v12 ^= (*v12 ^ (v13 << 10)) & 0xFFC00;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 960));
    _InterlockedIncrement((volatile signed __int32 *)a1 + 297);
    _InterlockedIncrement((volatile signed __int32 *)a1 + v4 + 281);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 1888), &LockHandle);
    _InterlockedAdd((volatile signed __int32 *)a1 + v4 + 265, 1u);
    v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 24LL)
                                + 8LL * *(unsigned int *)(*((_QWORD *)a1 + 4) + 4LL))
                    + 8 * v4
                    + 520);
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 8 * v4 + 6056) + 8LL), 1u);
    _InterlockedAdd((volatile signed __int32 *)(v14 + 8), 1u);
    ++*(_DWORD *)(v2 + 964);
    ++*((_DWORD *)a1 + 298);
    ++*(_DWORD *)(v6 + 2940);
    v15 = ((unsigned __int16)*v12 | (unsigned __int16)(*v12 >> 10)) & 0x3FF;
    v16 = !_BitScanForward((unsigned int *)&v17, v15);
    while ( 1 )
    {
      v18 = -1;
      if ( !v16 )
        v18 = v17;
      if ( !v15 )
        break;
      ++*(_DWORD *)(280LL * v18 + *(_QWORD *)(v2 + 8 * v4 + 3008) + 188);
      v15 &= ~(1 << v18);
      v16 = !_BitScanForward((unsigned int *)&v17, v15);
      v26 = v17;
    }
    v19 = *(unsigned int *)(v8 + 32);
    v20 = v8 + 1232 * v19;
    VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((VIDSCH_FLIP_QUEUE_ENTRY *)(v20 + 56));
    v21 = (unsigned int *)Src;
    *(_DWORD *)(v20 + 1176) |= 0x190u;
    v22 = *(void **)(v20 + 1216);
    *(_QWORD *)(v20 + 1096) = a1;
    *(_DWORD *)(v20 + 1116) = 0;
    memmove(v22, v21, v21[3]);
    *(_DWORD *)(v8 + 32) = ((_BYTE)v19 + 1) & 0x3F;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 968));
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 2944));
    *(_DWORD *)(v20 + 1108) = 4;
    LOBYTE(v25) = 0;
    VidSchiExecuteMmIoFlip((struct _VIDSCH_GLOBAL *)v2, v4, 0, v19, &v25);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    v11 = WdLogNewEntry5_WdLowResource(v10, 0LL);
    *(_QWORD *)(v11 + 24) = 19660LL;
    WdLogEvent5_WdLowResource(v11);
    v3 = -1073741801;
  }
  CVidSchSubmitData::~CVidSchSubmitData(v23);
  return v3;
}
