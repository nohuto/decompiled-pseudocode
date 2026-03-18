/*
 * XREFs of ?StartVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C007F3D4
 * Callers:
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C007F4AC (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C007FC5C (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C0105A38 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C01CE0B8 (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002D40 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?StartHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C01CEB5C (-StartHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::StartVSync(BLTQUEUE *this, int a2)
{
  int v2; // eax
  __int64 v5; // rdi
  struct _KTHREAD **v6; // rdx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]

  v2 = *((_DWORD *)this + 212);
  if ( (v2 & 8) != 0 && (v2 & 2) == 0 )
  {
    v5 = 0LL;
    if ( *((_BYTE *)this + 316) )
    {
      KeSetTimerEx((PKTIMER)((char *)this + 472), (LARGE_INTEGER)(-10000000LL * (unsigned int)dword_1C0060D6C), 0, 0LL);
      DXGDODPRESENT::StartHwVSync(*(DXGDODPRESENT **)this);
    }
    else
    {
      v6 = 0LL;
      if ( !a2 )
        v6 = (struct _KTHREAD **)((char *)this + 248);
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v7, v6);
      if ( !a2 )
      {
        DXGPUSHLOCK::AcquireExclusive(v8);
        v9 = 2;
      }
      if ( !*((_BYTE *)this + 317) )
        v5 = (unsigned int)(10000000 * *((_DWORD *)this + 53)) / *((_DWORD *)this + 52);
      ExSetTimer(
        *((_QWORD *)this + 58),
        -10000000LL * *((unsigned int *)this + 53) / *((unsigned int *)this + 52),
        v5,
        0LL,
        v7,
        v8);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v7);
    }
    *((_DWORD *)this + 212) |= 2u;
  }
}
