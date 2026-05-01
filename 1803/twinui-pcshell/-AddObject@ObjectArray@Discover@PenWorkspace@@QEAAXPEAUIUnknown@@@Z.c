/*
 * XREFs of ?AddObject@ObjectArray@Discover@PenWorkspace@@QEAAXPEAUIUnknown@@@Z @ 0x180191C54
 * Callers:
 *     ??$MakeAndInitialize@VObjectArray@Discover@PenWorkspace@@V123@AEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVObjectArray@Discover@PenWorkspace@@AEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18019085C (--$MakeAndInitialize@VObjectArray@Discover@PenWorkspace@@V123@AEAV-$vector@V-$ComPtr@UIDiscoverR.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D5D0 (-InternalAddRef@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$emplace_back@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@Z @ 0x180190EA4 (--$emplace_back@V-$ComPtr@UIUnknown@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIUnknown@@@WRL@Microso.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PenWorkspace::Discover::ObjectArray::AddObject(
        PenWorkspace::Discover::ObjectArray *this,
        struct IUnknown *a2)
{
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CWinRTApplicationView *v5; // [rsp+40h] [rbp+8h] BYREF

  try
  {
    v5 = (CWinRTApplicationView *)a2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef((__int64 *)&v5);
    std::vector<Microsoft::WRL::ComPtr<IUnknown>>::emplace_back<Microsoft::WRL::ComPtr<IUnknown>>(
      (__int64)this + 48,
      (__int64 *)&v5);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x21,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ObjectArray.h",
      v3);
  }
}
