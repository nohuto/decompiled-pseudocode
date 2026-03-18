/*
 * XREFs of ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x1C0128B6C
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPEAIK@Z @ 0x1C0127FAC (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPE.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     PtInRect @ 0x1C005DDC8 (PtInRect.c)
 *     ?PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z @ 0x1C0122980 (-PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z.c)
 */

void __fastcall CTouchProcessor::UpdateStateIndicator(
        CTouchProcessor *this,
        struct CInputPointerNode *a2,
        int a3,
        __int64 a4,
        struct tagPOINT a5)
{
  bool v9; // zf
  int v10; // r10d
  PDEVICE_OBJECT v11; // rcx
  unsigned __int16 v12; // r9
  int v13; // r8d
  int v14; // eax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x38u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  if ( (a3 & 0x10000) != 0 )
  {
    *((_DWORD *)a2 + 86) &= 0xFFFFFFFC;
    v9 = *((_DWORD *)a2 + 10) == 3;
    *((_QWORD *)a2 + 33) = a4;
    v10 = 300;
    if ( !v9 )
      v10 = 270;
    *((_DWORD *)a2 + 68) = a5.x - v10;
    *((_DWORD *)a2 + 69) = a5.y - v10;
    *((_DWORD *)a2 + 70) = v10 + a5.x;
    *((_DWORD *)a2 + 71) = v10 + a5.y;
    v11 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v12 = 57;
LABEL_20:
      WPP_RECORDER_SF_(
        (__int64)v11->DeviceExtension,
        5u,
        0xBu,
        v12,
        (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    }
  }
  else
  {
    if ( (a3 & 0x40004) == 0 )
    {
      *((_DWORD *)a2 + 86) &= 0xFFFFFFFC;
      *((_QWORD *)a2 + 33) = 0LL;
      *((_QWORD *)a2 + 34) = 0LL;
      *((_QWORD *)a2 + 35) = 0LL;
      v11 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return;
      v12 = 58;
      goto LABEL_20;
    }
    if ( (*((_DWORD *)a2 + 86) & 2) == 0 && !PtInRect((_DWORD *)a2 + 68, *(_QWORD *)&a5) )
      *((_DWORD *)a2 + 86) = v13 | 2;
    v14 = *((_DWORD *)a2 + 86);
    if ( (v14 & 2) == 0
      && (v14 & 1) == 0
      && (unsigned int)CTouchProcessor::PassedHoldTime(this, *((_DWORD *)a2 + 10), *((_QWORD *)a2 + 33), a4) )
    {
      *((_DWORD *)a2 + 86) |= 1u;
    }
    v11 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v12 = 59;
      goto LABEL_20;
    }
  }
}
