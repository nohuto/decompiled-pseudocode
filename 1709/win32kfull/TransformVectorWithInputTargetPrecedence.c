/*
 * XREFs of TransformVectorWithInputTargetPrecedence @ 0x1C0111504
 * Callers:
 *     EditionMouseSpeedHitTest @ 0x1C005DBF0 (EditionMouseSpeedHitTest.c)
 *     EditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1C0111360 (EditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 *     EditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C0111490 (EditionGetLogicalPointForMouseCaptureButtonEvent.c)
 * Callees:
 *     GetMonitorTransform @ 0x1C005D640 (GetMonitorTransform.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     TransformVector @ 0x1C01D6334 (TransformVector.c)
 */

__int64 __fastcall TransformVectorWithInputTargetPrecedence(__int64 a1, int a2, int a3)
{
  _BYTE *v6; // rbx
  unsigned int v7; // edi
  __int64 result; // rax
  __int64 v9; // rsi
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  _BYTE v14[64]; // [rsp+30h] [rbp-88h] BYREF

  memset(v14, 0, sizeof(v14));
  v6 = 0LL;
  v7 = 0;
  result = GetTopLevelWindow(gspwndInternalCapture);
  v9 = result;
  if ( result )
  {
    v10 = result == GetTopLevelWindow(a1);
    v11 = *(_QWORD *)(a1 + 16);
    if ( v10 )
    {
      v12 = *(_QWORD *)(v11 + 648);
      if ( v12 && *(_QWORD *)(v12 + 16) == v9 )
      {
        if ( (unsigned int)GetMonitorTransform(*(_QWORD *)(v12 + 208), a1, (__int64)v14) )
          v6 = v14;
        goto LABEL_11;
      }
    }
    else
    {
      v13 = *(_QWORD *)(v11 + 408);
      if ( !v13
        || v13 != *(_QWORD *)(*(_QWORD *)(gspwndInternalCapture + 16LL) + 408LL)
        || *(_QWORD *)(v13 + 104) != gspwndInternalCapture )
      {
        return v7;
      }
    }
    v6 = *(_BYTE **)(v9 + 288);
LABEL_11:
    v7 = 1;
    if ( v6 )
      TransformVector((_DWORD)v6, a2, a2 + 4, a3, 1);
    return v7;
  }
  return result;
}
