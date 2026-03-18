/*
 * XREFs of ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C010E18C
 * Callers:
 *     ?CancelActivePointers@CTouchProcessor@@QEAAXXZ @ 0x1C010E280 (-CancelActivePointers@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C0111FF0 (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C011A0B0 (-ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1C011B80C (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C011E1F8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     WPP_RECORDER_SF_LHH @ 0x1C011F814 (WPP_RECORDER_SF_LHH.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CancelActivePointer(
        CTouchProcessor *this,
        struct CInputPointerNode *a2,
        int a3,
        int a4)
{
  unsigned int v6; // esi
  int v7; // edx
  CInputDest *v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rdx

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
  v8 = (struct CInputPointerNode *)((char *)a2 + 48);
  if ( *((_DWORD *)a2 + 12) )
  {
    CInputDest::SetEmpty(v8);
    *((_DWORD *)a2 + 82) &= ~0x10u;
  }
  if ( *((_DWORD *)a2 + 9) == 3
    && *((struct CInputPointerNode **)a2 + 36) == (struct CInputPointerNode *)((char *)a2 + 288) )
  {
    CTouchProcessor::ProcessLostCaptureList(this, *((_WORD *)a2 + 16), 0, 0LL, 0, 0);
    CTouchProcessor::FreeNode(this, a2);
  }
  else
  {
    v9 = (_QWORD *)((char *)a2 + 288);
    v10 = (_QWORD *)*v9;
    if ( (_QWORD *)*v9 == v9 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v10);
      v10 = (_QWORD *)*v9;
    }
    CTouchProcessor::UnreferenceMsgData(this, v10, 1LL);
  }
}
