/*
 * XREFs of ?ClearOverrideImmuneApplication@CReportWindowVisibilityChange@@QEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x180105AD0
 * Callers:
 *     ?RestoreApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x18010A6B0 (-RestoreApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?erase@?$vector@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x180111A04 (-erase@-$vector@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CReportWindowVisibilityChange::ClearOverrideImmuneApplication(
        CReportWindowVisibilityChange *this,
        struct IUnknown *a2)
{
  char *v3; // r14
  struct IUnknown **v4; // r15
  bool v5; // di
  struct IUnknown **i; // rsi
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IUnknown *v9; // [rsp+50h] [rbp+8h] BYREF
  struct IUnknown **v10; // [rsp+58h] [rbp+10h]

  try
  {
    v3 = (char *)this + 48;
    v4 = (struct IUnknown **)*((_QWORD *)this + 7);
    for ( i = (struct IUnknown **)*((_QWORD *)this + 6); i != v4; ++i )
    {
      v9 = *i;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v9);
      v10 = &v9;
      v5 = (unsigned int)SHIsSameObject(a2, v9) != 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
      if ( v5 )
        break;
    }
    std::vector<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::erase(v3, &v9, i);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x82,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\amcommon.h",
      v7);
  }
}
