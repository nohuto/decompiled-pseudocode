/*
 * XREFs of ?DisplaySettingsChange@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1802B6710
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@Z @ 0x1800F550C (-GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@.c)
 *     ?EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1800F5564 (-EnsureEntry@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     wil::ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214___ @ 0x1802B5B60 (wil--ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214___.c)
 *     ?EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z @ 0x1802B680C (-EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowSizeConverter::DisplaySettingsChange(__int64 a1, struct IImmersiveMonitor *a2, char a3)
{
  WindowSizeConverter *v6; // rcx
  _QWORD v8[3]; // [rsp+28h] [rbp-18h] BYREF
  struct IApplicationFrame *v9; // [rsp+60h] [rbp+20h] BYREF
  char v10; // [rsp+78h] [rbp+38h] BYREF

  if ( !(unsigned int)SHIsSameObject((struct IUnknown *)a2, *(struct IUnknown **)(a1 + 24)) && *(_DWORD *)(a1 + 56) )
  {
    if ( (a3 & 0x20) != 0
      && (*(int (__fastcall **)(struct IImmersiveMonitor *, struct IApplicationFrame **))(*(_QWORD *)a2 + 48LL))(
           a2,
           &v9) >= 0 )
    {
      if ( (_DWORD)v9 )
      {
        WindowSizeConverter::EnsureEntry((WindowSizeConverter *)(a1 - 96), a2);
      }
      else if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, char *))(*(_QWORD *)a2 + 24LL))(a2, &v10) >= 0 )
      {
        v8[0] = a1 - 96;
        v8[1] = &v10;
        wil::ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214___((__int64)v8);
      }
    }
    if ( (a3 & 0x10) != 0 )
    {
      v9 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
      if ( (int)WindowSizeConverter::GetFrameForMonitor((WindowSizeConverter *)(a1 - 96), a2, &v9) >= 0 )
        WindowSizeConverter::EnsurePosition(v6, a2, v9);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
    }
  }
  return 0LL;
}
