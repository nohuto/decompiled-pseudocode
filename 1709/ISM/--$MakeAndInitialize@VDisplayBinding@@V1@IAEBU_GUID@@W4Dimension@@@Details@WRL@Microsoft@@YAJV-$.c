/*
 * XREFs of ??$MakeAndInitialize@VDisplayBinding@@V1@IAEBU_GUID@@W4Dimension@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VDisplayBinding@@@WRL@Microsoft@@@012@$$QEAIAEBU_GUID@@$$QEAW4Dimension@@@Z @ 0x18001F2F4
 * Callers:
 *     ?GetDisplayForDevice@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAPEAUIInputDisplay@@@Z @ 0x18001AD50 (-GetDisplayForDevice@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAPEAUIInputDisplay@@@Z.c)
 * Callees:
 *     ??0DisplayBinding@@QEAA@XZ @ 0x18001FF54 (--0DisplayBinding@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@DisplayBinding@@QEAAJIU_GUID@@W4Dimension@@@Z @ 0x180022F90 (-RuntimeClassInitialize@DisplayBinding@@QEAAJIU_GUID@@W4Dimension@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<DisplayBinding,DisplayBinding,unsigned int,_GUID const &,enum Dimension>(
        DisplayBinding **a1,
        unsigned int *a2,
        __int64 a3,
        unsigned int *a4)
{
  DisplayBinding *v7; // rcx
  DisplayBinding *v8; // rax
  int v9; // esi
  DisplayBinding *v10; // rdi
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF

  v7 = *a1;
  if ( v7 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(DisplayBinding *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *a1 = 0LL;
  v8 = (DisplayBinding *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = DisplayBinding::DisplayBinding(v8);
    v12 = DWM_COMPOSITOR_ID;
    v9 = DisplayBinding::RuntimeClassInitialize(v10, *a2, &v12, *a4);
    if ( v9 >= 0 )
    {
      if ( v10 )
        (*(void (__fastcall **)(DisplayBinding *))(*(_QWORD *)v10 + 8LL))(v10);
      *a1 = v10;
      if ( v10 )
        (*(void (__fastcall **)(DisplayBinding *))(*(_QWORD *)v10 + 16LL))(v10);
      return 0;
    }
    else if ( v10 )
    {
      (*(void (__fastcall **)(DisplayBinding *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
