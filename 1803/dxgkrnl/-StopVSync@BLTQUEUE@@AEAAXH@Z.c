/*
 * XREFs of ?StopVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C01D731C
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C0146204 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C01D4954 (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?DisableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C01D49E0 (-DisableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C01D6408 (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C01D75D4 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0015320 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?StopHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C01D7278 (-StopHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::StopVSync(BLTQUEUE *this, int a2)
{
  struct _KTHREAD **v4; // rdx
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  if ( (*((_DWORD *)this + 212) & 2) != 0 )
  {
    if ( *((_BYTE *)this + 316) )
    {
      KeCancelTimer((PKTIMER)((char *)this + 472));
      KeFlushQueuedDpcs();
      DXGDODPRESENT::StopHwVSync(*(struct _KTHREAD ***)this);
    }
    else
    {
      v4 = 0LL;
      if ( !a2 )
        v4 = (struct _KTHREAD **)((char *)this + 248);
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, v4, 0);
      if ( !a2 )
      {
        DXGPUSHLOCK::AcquireExclusive(v6);
        v7 = 2;
      }
      ExCancelTimer(*((_QWORD *)this + 58), 0LL);
      KeFlushQueuedDpcs();
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
    }
    *((_DWORD *)this + 212) &= ~2u;
  }
}
