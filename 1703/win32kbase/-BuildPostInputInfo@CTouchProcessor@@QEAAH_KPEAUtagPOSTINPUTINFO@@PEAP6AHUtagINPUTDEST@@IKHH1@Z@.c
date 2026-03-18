/*
 * XREFs of ?BuildPostInputInfo@CTouchProcessor@@QEAAH_KPEAUtagPOSTINPUTINFO@@PEAP6AHUtagINPUTDEST@@IKHH1@Z@Z @ 0x1C011B398
 * Callers:
 *     BuildPostPointerInputInfo @ 0x1C0129670 (BuildPostPointerInputInfo.c)
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011E448 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 */

_BOOL8 __fastcall CTouchProcessor::BuildPostInputInfo(
        CTouchProcessor *this,
        __int64 a2,
        struct tagPOSTINPUTINFO *a3,
        int (__high **a4)(struct tagINPUTDEST, unsigned int, unsigned int, int, int, struct tagPOSTINPUTINFO *))
{
  __int64 v4; // rbp
  struct CPointerInputFrame *FrameById; // rax
  __int64 v9; // rdx
  int (__high *v10)(struct tagINPUTDEST, unsigned int, unsigned int, int, int, struct tagPOSTINPUTINFO *); // rax
  struct _ERESOURCE *v11; // rcx
  BOOL v12; // edi

  v4 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  *(_DWORD *)a3 = 0;
  CInpLockGuard::LockExclusive((PERESOURCE *)(v4 + 200));
  if ( a2 )
  {
    FrameById = CTouchProcessor::FindFrameById((CTouchProcessor *)v4, *(_DWORD *)(a2 + 28));
    if ( FrameById )
    {
      v9 = *((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(a2 + 32);
      if ( v9 )
      {
        v10 = (int (__high *)(struct tagINPUTDEST, unsigned int, unsigned int, int, int, struct tagPOSTINPUTINFO *))CBaseProcessor::_spfnPiCallback;
        *(_DWORD *)a3 = 1;
        *(_OWORD *)((char *)a3 + 8) = *(_OWORD *)(v9 + 248);
        *(_OWORD *)((char *)a3 + 24) = *(_OWORD *)(v9 + 264);
        *(_OWORD *)((char *)a3 + 40) = *(_OWORD *)(v9 + 280);
        *(_OWORD *)((char *)a3 + 56) = *(_OWORD *)(v9 + 296);
        *(_OWORD *)((char *)a3 + 72) = *(_OWORD *)(v9 + 312);
        *(_OWORD *)((char *)a3 + 88) = *(_OWORD *)(v9 + 328);
        *a4 = v10;
      }
    }
  }
  v11 = *(struct _ERESOURCE **)(v4 + 200);
  v12 = *(_DWORD *)a3 != 0;
  *(_QWORD *)(v4 + 232) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v11);
  return v12;
}
