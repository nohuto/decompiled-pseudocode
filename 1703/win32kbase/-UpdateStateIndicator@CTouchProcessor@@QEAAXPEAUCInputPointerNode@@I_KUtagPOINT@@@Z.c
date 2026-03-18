/*
 * XREFs of ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x1C01292BC
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPEAIK@Z @ 0x1C012876C (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV3@PEAKPEAGPE.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     PtInRect @ 0x1C007268C (PtInRect.c)
 *     ?PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z @ 0x1C0123330 (-PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z.c)
 */

void __fastcall CTouchProcessor::UpdateStateIndicator(
        CTouchProcessor *this,
        struct CInputPointerNode *a2,
        int a3,
        __int64 a4,
        struct tagPOINT a5)
{
  struct CInputPointerNode *v7; // rbx
  bool v9; // zf
  int v10; // r10d
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d
  int v13; // r8d
  int v14; // eax

  v7 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      11,
      56,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  if ( (a3 & 0x10000) != 0 )
  {
    *((_DWORD *)v7 + 86) &= 0xFFFFFFFC;
    v9 = *((_DWORD *)v7 + 10) == 3;
    *((_QWORD *)v7 + 33) = a4;
    v10 = 300;
    if ( !v9 )
      v10 = 270;
    *((_DWORD *)v7 + 68) = a5.x - v10;
    *((_DWORD *)v7 + 69) = a5.y - v10;
    *((_DWORD *)v7 + 70) = v10 + a5.x;
    *((_DWORD *)v7 + 71) = v10 + a5.y;
    v11 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v12 = 57;
LABEL_20:
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        v11->DeviceExtension,
        (_DWORD)a2,
        11,
        v12,
        (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    }
  }
  else
  {
    if ( (a3 & 0x40004) == 0 )
    {
      *((_DWORD *)v7 + 86) &= 0xFFFFFFFC;
      *((_QWORD *)v7 + 33) = 0LL;
      *((_QWORD *)v7 + 34) = 0LL;
      *((_QWORD *)v7 + 35) = 0LL;
      v11 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return;
      v12 = 58;
      goto LABEL_20;
    }
    if ( (*((_DWORD *)v7 + 86) & 2) == 0 && !PtInRect((_DWORD *)v7 + 68, *(_QWORD *)&a5) )
      *((_DWORD *)v7 + 86) = v13 | 2;
    v14 = *((_DWORD *)v7 + 86);
    if ( (v14 & 2) == 0
      && (v14 & 1) == 0
      && (unsigned int)CTouchProcessor::PassedHoldTime(this, *((_DWORD *)v7 + 10), *((_QWORD *)v7 + 33), a4) )
    {
      *((_DWORD *)v7 + 86) |= 1u;
    }
    v11 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v12 = 59;
      goto LABEL_20;
    }
  }
}
