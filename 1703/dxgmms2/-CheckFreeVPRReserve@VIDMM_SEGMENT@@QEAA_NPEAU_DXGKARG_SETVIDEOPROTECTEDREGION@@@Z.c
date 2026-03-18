/*
 * XREFs of ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00A1554
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0049C70 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?DeferredSetVprCallback@@YAXPEAX@Z @ 0x1C00A0930 (-DeferredSetVprCallback@@YAXPEAX@Z.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A29D8 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00A40CC (-UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C005E1C0 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A1BF4 (-FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

char __fastcall VIDMM_SEGMENT::CheckFreeVPRReserve(VIDMM_SEGMENT *this, struct _DXGKARG_SETVIDEOPROTECTEDREGION *a2)
{
  char v2; // di
  VIDMM_GLOBAL *v6; // r14
  _QWORD v7[12]; // [rsp+20h] [rbp-68h] BYREF

  v2 = 0;
  if ( !*((_QWORD *)this + 60) )
    return 0;
  if ( *((_QWORD *)this + 55) + *((_QWORD *)this + 61) == *((_QWORD *)this + 56) )
  {
    v6 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)v6 + 8LL) )
    {
      VIDMM_SEGMENT::FreeVPRReserve(this);
    }
    else
    {
      memset(v7, 0, 0x58uLL);
      LODWORD(v7[6]) = 0;
      v2 = 1;
      LODWORD(v7[0]) = 128;
      v7[5] = this;
      VIDMM_GLOBAL::QueueSystemCommandAndWait(v6, (struct _VIDMM_SYSTEM_COMMAND *)v7, 1);
    }
    a2->NewSize = 0LL;
    a2->NewStartOffset = *((_QWORD *)this + 56);
  }
  return v2;
}
