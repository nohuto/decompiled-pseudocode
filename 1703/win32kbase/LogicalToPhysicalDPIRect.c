/*
 * XREFs of LogicalToPhysicalDPIRect @ 0x1C0049940
 * Callers:
 *     NtUserLockCursor @ 0x1C00713C0 (NtUserLockCursor.c)
 *     ?TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0KKPEAUtagMONITOR@@@Z @ 0x1C00727C0 (-TransformRectBetweenCoordinateSpacesPerMonitor@@YAHPEAUtagRECT@@0KKPEAUtagMONITOR@@@Z.c)
 *     NtUserClipCursor @ 0x1C0097F10 (NtUserClipCursor.c)
 * Callees:
 *     OriginFromMonFlags @ 0x1C0049C70 (OriginFromMonFlags.c)
 *     ?ValidateMonFlags@@YAHPEAK@Z @ 0x1C0049CB8 (-ValidateMonFlags@@YAHPEAK@Z.c)
 *     ScaleDPIRect @ 0x1C0049D80 (ScaleDPIRect.c)
 *     ?LogicalDpiFromMonFlags@@YAGK@Z @ 0x1C0049ED4 (-LogicalDpiFromMonFlags@@YAGK@Z.c)
 *     HMValidateSharedHandleNoRip @ 0x1C007772C (HMValidateSharedHandleNoRip.c)
 *     ?DpiAwarenessContextFromMonitorFlags@@YAKK@Z @ 0x1C00DE2D0 (-DpiAwarenessContextFromMonitorFlags@@YAKK@Z.c)
 */

__int64 __fastcall LogicalToPhysicalDPIRect(_OWORD *a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 *v8; // rdi
  __int64 v9; // rbx
  unsigned __int16 v10; // ax
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  _DWORD v15[4]; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = a3;
  if ( !(unsigned int)ValidateMonFlags(&v16) || (int)Is_MonitorFromRectSupported() < 0 )
  {
    result = 0LL;
    *a1 = *(_OWORD *)a2;
    return result;
  }
  if ( a4 )
    v14 = *a4;
  else
    v14 = 0LL;
  v8 = &v14;
  if ( a4 )
    v8 = a4;
  if ( (v16 & 0x100) == 0 )
    goto LABEL_11;
  if ( !*v8 )
  {
    if ( **(_DWORD **)gpDispInfo > 1u )
    {
      v12 = DpiAwarenessContextFromMonitorFlags(v16);
      v15[0] = (*(_DWORD *)a2 + *(_DWORD *)(a2 + 8)) / 2;
      v15[1] = (*(_DWORD *)(a2 + 4) + *(_DWORD *)(a2 + 12)) / 2;
      if ( (int)IsDCELogicalSpeedTopLevelHitTestSupported(2LL) < 0 )
        v13 = 0LL;
      else
        v13 = DCELogicalSpeedTopLevelHitTest(v15, v12);
      if ( v13 && (((unsigned __int8)v12 ^ *(_BYTE *)(v13 + 368)) & 0xF) == 0 )
        *v8 = HMValidateSharedHandleNoRip(*(_QWORD *)(v13 + 360));
    }
LABEL_11:
    if ( !*v8 )
      *v8 = _MonitorFromRect(a2, v16);
  }
  v9 = OriginFromMonFlags(v16, *v8);
  OriginFromMonFlags(32LL, *v8);
  v10 = LogicalDpiFromMonFlags(v16);
  ScaleDPIRect((_DWORD)a1, a2, *(unsigned __int16 *)(*(_QWORD *)(*v8 + 40) + 128LL), v10, v11, v9);
  return 1LL;
}
