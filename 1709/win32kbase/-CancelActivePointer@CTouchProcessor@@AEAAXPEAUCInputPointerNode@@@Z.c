/*
 * XREFs of ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C011AAF8
 * Callers:
 *     ?CancelActivePointers@CTouchProcessor@@QEAAXXZ @ 0x1C00072A0 (-CancelActivePointers@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C011D874 (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C01243F4 (-ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C0125BA4 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0127CB4 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     WPP_RECORDER_SF_LHH @ 0x1C01290AC (WPP_RECORDER_SF_LHH.c)
 */

void __fastcall CTouchProcessor::CancelActivePointer(
        CTouchProcessor *this,
        struct CInputPointerNode *a2,
        int a3,
        int a4)
{
  unsigned int v6; // edi
  int v7; // edx
  CTouchProcessor *v8; // rcx

  v6 = 0;
  v7 = *((_DWORD *)a2 + 9) - 1;
  if ( v7 )
  {
    if ( v7 == 1 )
      v6 = 0x40000;
    else
      WPP_RECORDER_SF_LHH(*((_QWORD *)this + 1), v7, a3, a4);
  }
  else
  {
    v6 = 0x20000;
  }
  CTouchProcessor::SetNewValidState(this, v6, a2);
  if ( *((_DWORD *)a2 + 12) )
  {
    CInputDest::SetEmpty((struct CInputPointerNode *)((char *)a2 + 48));
    *((_DWORD *)a2 + 86) &= ~0x10u;
  }
  if ( *((_DWORD *)a2 + 9) == 3
    && *((struct CInputPointerNode **)a2 + 38) == (struct CInputPointerNode *)((char *)a2 + 304) )
  {
    CTouchProcessor::ProcessLostCaptureList(this, *((_WORD *)a2 + 16), 0, 0LL, 0, 0);
    CTouchProcessor::FreeNode(v8, a2);
  }
  else
  {
    CTouchProcessor::UnreferenceMsgData(this, *((_QWORD *)a2 + 38), 1LL);
  }
}
