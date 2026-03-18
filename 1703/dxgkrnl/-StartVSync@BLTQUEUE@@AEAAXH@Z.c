/*
 * XREFs of ?StartVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C0103E30
 * Callers:
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C0103BF4 (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C0103F08 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C011F164 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C01B4584 (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0006E80 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?StartHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C01B67F8 (-StartHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::StartVSync(BLTQUEUE *this, int a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v7; // rdi
  struct _KTHREAD **v8; // rdx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  v4 = *((_DWORD *)this + 212);
  if ( (v4 & 8) != 0 && (v4 & 2) == 0 )
  {
    v7 = 0LL;
    if ( *((_BYTE *)this + 316) )
    {
      KeSetTimerEx((PKTIMER)((char *)this + 472), (LARGE_INTEGER)(-10000000LL * (unsigned int)dword_1C006FEEC), 0, 0LL);
      DXGDODPRESENT::StartHwVSync(*(DXGDODPRESENT **)this);
    }
    else
    {
      v8 = 0LL;
      if ( !a2 )
        v8 = (struct _KTHREAD **)((char *)this + 248);
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v9, v8, a3, a4);
      if ( !a2 )
      {
        DXGPUSHLOCK::AcquireExclusive(v10);
        v11 = 2;
      }
      if ( !*((_BYTE *)this + 317) )
        v7 = (unsigned int)(10000000 * *((_DWORD *)this + 53)) / *((_DWORD *)this + 52);
      ExSetTimer(
        *((_QWORD *)this + 58),
        -10000000LL * *((unsigned int *)this + 53) / *((unsigned int *)this + 52),
        v7,
        0LL,
        v9,
        v10);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v9);
    }
    *((_DWORD *)this + 212) |= 2u;
  }
}
