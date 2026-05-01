/*
 * XREFs of ?ConvertForMonitorAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@HHPEAUIApplicationViewTitlebarConfiguration@@PEAU2@@Z @ 0x180025AB0
 * Callers:
 *     ?_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x180022E5C (-_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z @ 0x180025CE0 (-ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180054260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180097C44 (--1-$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowSizeConverter::ConvertForMonitorAndChromeConfiguration(
        WindowSizeConverter *this,
        struct tagSIZE a2,
        struct IImmersiveMonitor *a3,
        int a4,
        int a5,
        struct IApplicationViewTitlebarConfiguration *a6,
        struct tagSIZE *a7)
{
  struct SizeConversionViewInfo *v11; // rax
  struct SizeConversionViewInfo *v12; // rbx
  void (*v13)(void); // rax
  struct IImmersiveMonitor *v14; // rcx
  struct IApplicationViewTitlebarConfiguration *v15; // rcx
  int ScaleFactorForMonitor; // eax
  int v17; // esi
  void (__fastcall *v18)(struct SizeConversionViewInfo *); // rax
  int v19; // eax
  struct SizeConversionViewInfo *v20; // rcx
  void (*v21)(void); // rax
  __int64 v23; // rdx
  int v24; // [rsp+20h] [rbp-48h] BYREF
  struct SizeConversionViewInfo *v25; // [rsp+28h] [rbp-40h]
  struct SizeConversionViewInfo *v26; // [rsp+30h] [rbp-38h] BYREF
  __int64 v27; // [rsp+38h] [rbp-30h] BYREF
  __int64 v28[5]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v28[1] = -2LL;
  v25 = 0LL;
  v11 = (struct SizeConversionViewInfo *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  v26 = v11;
  if ( !v11 )
  {
    Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v26);
    v17 = -2147024882;
    goto LABEL_41;
  }
  *((_DWORD *)v11 + 3) = 1;
  *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    v13 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
    if ( (char *)v13 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
    else
      v13();
  }
  *(_QWORD *)v12 = &SizeConversionViewInfo::`vftable';
  *((_QWORD *)v12 + 2) = 0LL;
  *((_DWORD *)v12 + 6) = 0;
  *((_QWORD *)v12 + 4) = 0LL;
  *((_DWORD *)v12 + 10) = 100;
  v28[0] = (__int64)v12;
  v26 = 0LL;
  v14 = (struct IImmersiveMonitor *)*((_QWORD *)v12 + 2);
  if ( v14 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a3 + 8LL))(a3);
      v14 = (struct IImmersiveMonitor *)*((_QWORD *)v12 + 2);
    }
    *((_QWORD *)v12 + 2) = a3;
    if ( v14 )
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = (struct IApplicationViewTitlebarConfiguration *)*((_QWORD *)v12 + 4);
  if ( v15 != a6 )
  {
    if ( a6 )
    {
      (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)a6 + 8LL))(a6);
      v15 = (struct IApplicationViewTitlebarConfiguration *)*((_QWORD *)v12 + 4);
    }
    *((_QWORD *)v12 + 4) = a6;
    if ( v15 )
      (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  if ( a5 )
    *((_DWORD *)v12 + 6) |= 1u;
  if ( a4 )
    *((_DWORD *)v12 + 6) |= 2u;
  ScaleFactorForMonitor = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v12 + 2) + 40LL))(
                            *((_QWORD *)v12 + 2),
                            &v27);
  v17 = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v23 = 60LL;
LABEL_39:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)ScaleFactorForMonitor,
      v24);
    if ( v17 >= 0 )
      goto LABEL_22;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v28);
    Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>(&v26);
LABEL_41:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13B,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v17,
      v24);
    goto LABEL_29;
  }
  ScaleFactorForMonitor = GetScaleFactorForMonitor(v27, &v24);
  v17 = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v23 = 63LL;
    goto LABEL_39;
  }
  *((_DWORD *)v12 + 10) = v24;
LABEL_22:
  if ( v12 )
    (*(void (__fastcall **)(struct SizeConversionViewInfo *))(*(_QWORD *)v12 + 8LL))(v12);
  v25 = v12;
  if ( v12 )
  {
    v18 = *(void (__fastcall **)(struct SizeConversionViewInfo *))(*(_QWORD *)v12 + 16LL);
    if ( (char *)v18 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v12);
    else
      v18(v12);
  }
  v19 = WindowSizeConverter::ConvertWithViewInfo((WindowSizeConverter *)((char *)this - 88), a2, v25, a7);
  v17 = v19;
  if ( v19 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13C,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v19,
      v24);
  else
    v17 = 0;
LABEL_29:
  v20 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    v21 = *(void (**)(void))(*(_QWORD *)v20 + 16LL);
    if ( (char *)v21 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v20);
    else
      v21();
  }
  return (unsigned int)v17;
}
