/*
 * XREFs of ??$EnumerateStubs@PEAVBamoControllerNavigationManagerPrincipalImpl@BamoImpl@@@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@PEAVBamoControllerNavigationManagerPrincipalImpl@1@@Z1@Z @ 0x1800300E8
 * Callers:
 *     ?SetEnabled@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z @ 0x18002FF60 (-SetEnabled@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z.c)
 *     ?SetPaused@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z @ 0x180030180 (-SetPaused@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<BamoImpl::BamoControllerNavigationManagerPrincipalImpl *>(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64),
        __int64 a3)
{
  __int64 i; // rbx
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = *(_QWORD *)(a1 + 32); i; i = *(_QWORD *)(i + 48) )
  {
    if ( *(_BYTE *)(i + 32) )
    {
      v6 = a2(i, a3);
      v7 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1BC,
          (__int64)"internal\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
          (const char *)(unsigned int)v6);
        return v7;
      }
    }
  }
  return 0;
}
