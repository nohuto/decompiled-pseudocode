/*
 * XREFs of ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C00A1008
 * Callers:
 *     ?CancelActivePointers@CTouchProcessor@@QEAAXXZ @ 0x1C00A10E0 (-CancelActivePointers@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_LHH @ 0x1C00A11DC (WPP_RECORDER_SF_LHH.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C011E9D4 (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0124D9C (-ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C01265C4 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0128478 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
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
