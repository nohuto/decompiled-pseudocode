/*
 * XREFs of ?SetOverrideImmuneApplication@CReportWindowVisibilityChange@@QEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18010B7EC
 * Callers:
 *     ?DisableApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180106700 (-DisableApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x180003D68 (-IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInter.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$emplace_back@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Z @ 0x180103728 (--$emplace_back@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CReportWindowVisibilityChange::SetOverrideImmuneApplication(
        CReportWindowVisibilityChange *this,
        struct IUnknown *a2)
{
  const char *v4; // r9
  unsigned int v5; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *v8; // [rsp+50h] [rbp+18h] BYREF

  try
  {
    v5 = 0;
    if ( CReportWindowVisibilityChange::IsOverrideImmuneApplication(this, a2) )
    {
      v5 = -2147418113;
    }
    else
    {
      v8 = a2;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v8);
      std::vector<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::emplace_back<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>(
        (__int64)this + 48,
        (__int64 *)&v8);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
    }
    result = v5;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x70,
                           (__int64)"pcshell\\twinui\\appmanager\\lib\\amcommon.h",
                           v4);
  }
  return result;
}
