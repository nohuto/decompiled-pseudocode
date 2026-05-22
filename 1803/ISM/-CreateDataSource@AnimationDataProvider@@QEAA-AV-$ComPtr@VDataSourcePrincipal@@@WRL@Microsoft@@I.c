/*
 * XREFs of ?CreateDataSource@AnimationDataProvider@@QEAA?AV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I@Z @ 0x18008F23C
 * Callers:
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180065138 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBamoConnection@Bamo@2@@Z @ 0x18000AD9C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBamoConnection@Bamo@2@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall AnimationDataProvider::CreateDataSource(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rbx
  DWORD CurrentThreadId; // eax
  const char *v10; // r9
  __int64 v12; // rsi
  int v13; // edx
  const char *v14; // r9
  __int64 i; // rcx
  _QWORD *v16; // r14
  struct Microsoft::Bamo::BamoConnection *v17; // rdx
  int v18; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 16LL);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 32) + 24LL);
  CurrentThreadId = GetCurrentThreadId();
  if ( *(_DWORD *)(v8 + 136) != CurrentThreadId && *(_DWORD *)(v8 + 24) != CurrentThreadId )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x538,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      v10);
    __debugbreak();
  }
  v12 = 0LL;
  v13 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6) + 36);
  for ( i = *(_QWORD *)(v7 + 48); i && *(_DWORD *)(*(_QWORD *)(i + 40) + 36LL) != v13; i = *(_QWORD *)(i + 48) )
    ;
  if ( i && (i & -(__int64)(*(_BYTE *)(i + 32) != 0)) != 0 )
    v12 = (i & -(__int64)(*(_BYTE *)(i + 32) != 0)) - 16;
  if ( !v12 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x60,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      v14);
    __debugbreak();
  }
  *a2 = 0LL;
  v16 = operator new(0x40uLL);
  v17 = *(struct Microsoft::Bamo::BamoConnection **)a1;
  *v16 = &BamoDataSourcePrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v16[1] = &BamoDataSourcePrincipal::`vftable'{for `IDataSourcePrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(v16 + 2), v17);
  v16[2] = &BamoImpl::BamoDataSourcePrincipalImpl::`vftable';
  *((_DWORD *)v16 + 14) = 0;
  *v16 = &DataSourcePrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v16[1] = &BamoDataSourcePrincipal::`vftable'{for `IDataSourcePrincipal'};
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
  *a2 = v16;
  (*(void (__fastcall **)(_QWORD *, _QWORD))(v16[1] + 104LL))(v16 + 1, a3);
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v12 + 8) + 24LL))(v12 + 8, *a2);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      (const char *)(unsigned int)v18);
    JUMPOUT(0x18008F3F6LL);
  }
  return a2;
}
