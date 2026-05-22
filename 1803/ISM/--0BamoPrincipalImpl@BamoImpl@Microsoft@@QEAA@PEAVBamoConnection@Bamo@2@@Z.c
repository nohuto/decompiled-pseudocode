/*
 * XREFs of ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBamoConnection@Bamo@2@@Z @ 0x18000AD9C
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z @ 0x180022894 (--0InputSystem@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z.c)
 *     ??0InputDeliveryServer@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z @ 0x180023514 (--0InputDeliveryServer@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z.c)
 *     ??0MPCManagerClient@@QEAA@PEAVMPCManagerClientConnection@@@Z @ 0x180026800 (--0MPCManagerClient@@QEAA@PEAVMPCManagerClientConnection@@@Z.c)
 *     ??0ControllerNavigationManager@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z @ 0x18002EC30 (--0ControllerNavigationManager@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z.c)
 *     ??0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x1800523EC (--0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18007BDCC (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?SetBootstrapProxy@AnimationDataProvider@@QEAAXPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x18008F0C4 (-SetBootstrapProxy@AnimationDataProvider@@QEAAXPEAVBamoProxy@Bamo@Microsoft@@@Z.c)
 *     ?CreateDataSource@AnimationDataProvider@@QEAA?AV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I@Z @ 0x18008F23C (-CreateDataSource@AnimationDataProvider@@QEAA-AV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
Microsoft::BamoImpl::BamoPrincipalImpl *__fastcall Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::Bamo::BamoConnection *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &Microsoft::BamoImpl::BamoPrincipalImpl::`vftable';
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(struct Microsoft::Bamo::BamoConnection *))(*(_QWORD *)a2 + 40LL))(a2) + 64);
  *((_QWORD *)this + 2) = v3;
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, Microsoft::BamoImpl::BamoPrincipalImpl *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 40LL)
                                                                                           + 24LL))(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 40LL),
         *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 28LL),
         this);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x218,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x18000AE36LL);
  }
  return this;
}
