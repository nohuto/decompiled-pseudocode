/*
 * XREFs of FeedbackGetWindowSetting @ 0x1C01BC5F4
 * Callers:
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01BB688 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 *     ?GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z @ 0x1C01BBC7C (-GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z.c)
 *     ?GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z @ 0x1C01BBDB0 (-GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z.c)
 *     NtUserGetWindowFeedbackSetting @ 0x1C01E7440 (NtUserGetWindowFeedbackSetting.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 */

__int64 __fastcall FeedbackGetWindowSetting(__int64 a1, unsigned int a2, unsigned __int8 a3, _DWORD *a4)
{
  int v4; // ebx
  __int64 v8; // r11
  __int16 v9; // r15
  int v10; // edi
  int Prop; // eax
  unsigned int v12; // r8d
  __int64 v13; // r11
  __int64 v14; // r11
  __int64 result; // rax
  unsigned __int8 v16; // cf

  v4 = 0;
  v8 = a1;
  if ( !a1 )
    return 0LL;
  v9 = gatomFeedbackSettings;
  v10 = 0x10000 << a2;
  while ( 1 )
  {
    Prop = GetProp(v8, v9, 1);
    if ( (v10 & Prop) != 0 )
      break;
    if ( (a3 & (unsigned __int8)v12) == 0 || (unsigned int)IsTopLevelWindow(v13) )
      v8 = 0LL;
    else
      v8 = *(_QWORD *)(v14 + 104);
    if ( !v8 )
      return 0LL;
  }
  v16 = _bittest(&Prop, a2);
  result = v12;
  LOBYTE(v4) = v16;
  *a4 = v4;
  return result;
}
