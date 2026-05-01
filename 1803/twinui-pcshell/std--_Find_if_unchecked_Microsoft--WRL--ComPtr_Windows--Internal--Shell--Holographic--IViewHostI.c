/*
 * XREFs of std::_Find_if_unchecked_Microsoft::WRL::ComPtr_Windows::Internal::Shell::Holographic::IViewHostItem______ptr64__lambda_59ad48e223c0890c092e71751c67a96b___ @ 0x18009EBAC
 * Callers:
 *     ?_FindAndRemoveViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1801B19BC (-_FindAndRemoveViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Sh.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIApplicationViewBackedViewHostItemPrivate@@@?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewBackedViewHostItemPrivate@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801AA240 (--$As@UIApplicationViewBackedViewHostItemPrivate@@@-$ComPtr@UIViewHostItem@Holographic@Shell@Int.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Find_if_unchecked_Microsoft::WRL::ComPtr_Windows::Internal::Shell::Holographic::IViewHostItem______ptr64__lambda_59ad48e223c0890c092e71751c67a96b___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rsi
  int v6; // eax
  int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  for ( i = a1; i != a2; i += 8LL )
  {
    v10 = 0;
    v11 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::As<IApplicationViewBackedViewHostItemPrivate>(
                i,
                &v11) >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v11 + 24LL))(v11, a3, &v10);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1790LL,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v6);
    }
    v7 = v10;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    if ( v7 )
      break;
  }
  return i;
}
