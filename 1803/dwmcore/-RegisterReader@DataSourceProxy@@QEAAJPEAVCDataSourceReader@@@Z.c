/*
 * XREFs of ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x18016B810
 * Callers:
 *     ?ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DATASOURCEREADER_SETLOOKUPID@@@Z @ 0x1801888C8 (-ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DATASOURCEREADER_SETL.c)
 * Callees:
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x180034994 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPeerId@BamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x180153918 (-GetPeerId@BamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?DoesReaderHaveAccess@DataSourceProxy@@AEAA_NPEAVCDataSourceReader@@@Z @ 0x18016B26C (-DoesReaderHaveAccess@DataSourceProxy@@AEAA_NPEAVCDataSourceReader@@@Z.c)
 *     ??$emplace_back@AEBQEAVCProjectedShadowCaster@@@?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@QEAAXAEBQEAVCProjectedShadowCaster@@@Z @ 0x1801A1C04 (--$emplace_back@AEBQEAVCProjectedShadowCaster@@@-$vector@PEAVCProjectedShadowCaster@@V-$allocato.c)
 */

__int64 __fastcall DataSourceProxy::RegisterReader(DataSourceProxy *this, struct CDataSourceReader *a2)
{
  CComposition *v5; // rcx
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CWeakReferenceBase *v10; // [rsp+40h] [rbp+18h] BYREF

  if ( DataSourceProxy::DoesReaderHaveAccess(this, a2) )
  {
    v5 = (CComposition *)*((_QWORD *)a2 + 2);
    v10 = 0LL;
    CComposition::GetWeakReferenceBase(v5, a2, &v10);
    std::vector<CProjectedShadowCaster *>::emplace_back<CProjectedShadowCaster * const &>((char *)this + 192, &v10);
    v6 = *((_DWORD *)this + 10);
    HIDWORD(v10) = Microsoft::Bamo::BamoPeer::GetPeerId(*(Microsoft::Bamo::BamoPeer **)(*((_QWORD *)this + 4) + 16LL));
    v7 = *((_QWORD *)this + 23);
    LODWORD(v10) = v6;
    ++*(_DWORD *)(v7 + 56);
    v8 = v7 + 8;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v7 + 8) + 64LL))(v7 + 8, *(unsigned int *)(v7 + 56));
    (*(void (__fastcall **)(__int64, struct CWeakReferenceBase *))(*(_QWORD *)v8 + 24LL))(v8, v10);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18F,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\datasourceproxy.cpp",
      (const char *)0x80070005LL);
    return 2147942405LL;
  }
}
