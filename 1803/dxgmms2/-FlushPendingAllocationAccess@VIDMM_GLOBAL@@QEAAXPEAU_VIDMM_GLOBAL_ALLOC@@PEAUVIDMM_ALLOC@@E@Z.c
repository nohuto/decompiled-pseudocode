/*
 * XREFs of ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x1C00A0430
 * Callers:
 *     ?WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@IK@Z @ 0x1C0068C50 (-WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@IK@Z.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00A05A0 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     VidSchIsDeviceBusy @ 0x1C000382C (VidSchIsDeviceBusy.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005720 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00057D8 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchFlushDevice @ 0x1C0078E70 (VidSchFlushDevice.c)
 */

void __fastcall VIDMM_GLOBAL::FlushPendingAllocationAccess(
        VIDMM_GLOBAL *this,
        DXGFASTMUTEX **a2,
        struct VIDMM_ALLOC *a3,
        char a4)
{
  _QWORD **v5; // rdi
  __int64 v8; // rdx
  _QWORD *i; // r8
  _QWORD *v10; // r10
  __int64 v11; // rbx
  _QWORD *v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // [rsp+20h] [rbp-18h] BYREF
  __int64 v18; // [rsp+28h] [rbp-10h]

  v5 = (_QWORD **)(a2 + 37);
  while ( 1 )
  {
    DXGFASTMUTEX::Acquire(a2[40]);
    v10 = *v5;
    v11 = 0LL;
    if ( *v5 != v5 )
    {
      do
      {
        v12 = v10 - 2;
        for ( i = (_QWORD *)*(v10 - 2); i != v12; i = (_QWORD *)*i )
        {
          if ( i - 5 != (_QWORD *)a3 )
          {
            v13 = *(i - 4);
            if ( !a4 || (v14 = *(_QWORD *)(v13 + 24)) != 0 && !*(_BYTE *)(*(_QWORD *)(v14 + 40) + 322LL) )
            {
              v11 = *(_QWORD *)(v13 + 32);
              if ( VidSchIsDeviceBusy(v11) )
                goto LABEL_13;
            }
          }
        }
        v10 = (_QWORD *)*v10;
      }
      while ( v10 != v5 );
      v11 = 0LL;
    }
LABEL_13:
    DXGFASTMUTEX::Release((struct _KTHREAD **)a2[40], v8, (__int64)i);
    if ( !v11 )
      break;
    v18 = 0LL;
    v17 = 5;
    VidSchFlushDevice(v11, &v17, v15, v16);
  }
}
