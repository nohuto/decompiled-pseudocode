/*
 * XREFs of ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C0125DFC
 * Callers:
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C011AAC0 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C011D204 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     ?DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z @ 0x1C011D5F0 (-DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z.c)
 *     ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C0122FC0 (-NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z.c)
 *     ?NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z @ 0x1C0123180 (-NotifyCaptureChangedIfCapturedDelegate@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@PEAG@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C01297AC (WPP_RECORDER_SF_L.c)
 */

__int64 __fastcall CTouchProcessor::SetDelegateActionInt(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  switch ( a3 )
  {
    case 1:
      *(_DWORD *)(a2 + 464) |= 1u;
      break;
    case 2:
      *(_DWORD *)(a2 + 464) |= 2u;
      break;
    case 3:
      *(_DWORD *)(a2 + 464) |= 4u;
      break;
    case 4:
      *(_DWORD *)(a2 + 464) |= 8u;
      break;
    case 5:
      *(_DWORD *)(a2 + 464) |= 0x10u;
      break;
    case 6:
      *(_DWORD *)(a2 + 464) |= 0x20u;
      break;
    default:
      return WPP_RECORDER_SF_L(*(_QWORD *)(a1 + 8), a2, a3, 281);
  }
  return result;
}
