/*
 * XREFs of ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x1C011F238
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPEAIK@Z @ 0x1C011E4F0 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPE.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     PtInRect @ 0x1C0055DE4 (PtInRect.c)
 *     ?PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z @ 0x1C0118028 (-PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UpdateStateIndicator(
        struct _KTHREAD **this,
        struct CInputPointerNode *a2,
        int a3,
        __int64 a4,
        struct tagPOINT a5)
{
  int v9; // r8d
  bool v10; // zf
  int v11; // r10d
  PDEVICE_OBJECT v12; // rcx
  unsigned __int16 v13; // r9
  int v14; // r9d

  if ( this[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x44u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  v9 = *((_DWORD *)a2 + 82);
  if ( (a3 & 0x10000) != 0 )
  {
    *((_QWORD *)a2 + 31) = a4;
    v10 = *((_DWORD *)a2 + 10) == 3;
    *((_DWORD *)a2 + 82) = v9 & 0xFFFFFFFC;
    v11 = 300;
    if ( !v10 )
      v11 = 270;
    *((_DWORD *)a2 + 64) = a5.x - v11;
    *((_DWORD *)a2 + 65) = a5.y - v11;
    *((_DWORD *)a2 + 66) = v11 + a5.x;
    *((_DWORD *)a2 + 67) = v11 + a5.y;
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 69;
LABEL_22:
      WPP_RECORDER_SF_(
        (__int64)v12->DeviceExtension,
        5u,
        0xBu,
        v13,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    }
  }
  else
  {
    if ( (a3 & 0x40004) == 0 )
    {
      *((_QWORD *)a2 + 31) = 0LL;
      *((_DWORD *)a2 + 82) = v9 & 0xFFFFFFFC;
      *((_QWORD *)a2 + 32) = 0LL;
      *((_QWORD *)a2 + 33) = 0LL;
      v12 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return;
      v13 = 70;
      goto LABEL_22;
    }
    LOBYTE(v14) = *((_DWORD *)a2 + 82);
    if ( (v9 & 2) == 0 && !PtInRect((_DWORD *)a2 + 64, *(_QWORD *)&a5) )
    {
      v14 |= 2u;
      *((_DWORD *)a2 + 82) = v14;
    }
    if ( (v14 & 2) == 0
      && (v14 & 1) == 0
      && CTouchProcessor::PassedHoldTime(this, *((unsigned int *)a2 + 10), *((_QWORD *)a2 + 31), a4).LowPart )
    {
      *((_DWORD *)a2 + 82) |= 1u;
    }
    v12 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v13 = 71;
      goto LABEL_22;
    }
  }
}
