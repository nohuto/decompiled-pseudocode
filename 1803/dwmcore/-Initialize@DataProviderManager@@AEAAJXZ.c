/*
 * XREFs of ?Initialize@DataProviderManager@@AEAAJXZ @ 0x1800C4A70
 * Callers:
 *     ?Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800C494C (-Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??$CreateServer@VDataProviderRegistrarConnection@@@BamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDataProviderRegistrarConnection@@@Z @ 0x1800C4B7C (--$CreateServer@VDataProviderRegistrarConnection@@@BamoConnection@Bamo@Microsoft@@SAJPEAUIMessag.c)
 *     ??0BamoDataProviderRegistrarPrincipal@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z @ 0x1800C4CC4 (--0BamoDataProviderRegistrarPrincipal@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180142BE4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall DataProviderManager::Initialize(DataProviderManager *this)
{
  const char *v2; // r9
  int v3; // ebx
  int v4; // r9d
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct Microsoft::Bamo::BamoConnection **v7; // rsi
  BamoDataProviderRegistrarPrincipal *v8; // rax
  BamoDataProviderRegistrarPrincipal *v9; // rbx
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  int v15; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PSECURITY_DESCRIPTOR v17; // [rsp+58h] [rbp+10h] BYREF

  v17 = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;0x01;;;WD)(A;;0x01;;;AC)(A;;0x01;;;S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-"
           "3968301570-1997628692-1435953622)",
          1u,
          &v17,
          0LL) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x6A,
             (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
             v2);
  v3 = (*(__int64 (__fastcall **)(_QWORD, PSECURITY_DESCRIPTOR, char *))(**((_QWORD **)this + 2) + 56LL))(
         *((_QWORD *)this + 2),
         v17,
         (char *)this + 24);
  if ( v3 < 0 )
  {
    v12 = 108LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)(unsigned int)v3,
      v13);
    return (unsigned int)v3;
  }
  v14 = 0LL;
  v5 = *((_QWORD *)this + 3);
  v6 = *((_QWORD *)this + 2);
  v15 = 1;
  v7 = (struct Microsoft::Bamo::BamoConnection **)((char *)this + 32);
  v3 = Microsoft::Bamo::BamoConnection::CreateServer<DataProviderRegistrarConnection>(
         v6,
         v5,
         (unsigned int)&v14,
         v4,
         (__int64)this + 32);
  if ( v3 < 0 )
  {
    v12 = 120LL;
    goto LABEL_11;
  }
  *((_QWORD *)*v7 + 19) = this;
  v8 = (BamoDataProviderRegistrarPrincipal *)WPF::ProcessHeapImpl::AllocClear(0x40uLL);
  v9 = v8;
  if ( !v8 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  BamoDataProviderRegistrarPrincipal::BamoDataProviderRegistrarPrincipal(v8, *v7);
  *(_QWORD *)v9 = &DataProviderRegistrarPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)v9 + 1) = &BamoDataProviderRegistrarPrincipal::`vftable'{for `IDataProviderRegistrarPrincipal'};
  v10 = *((_QWORD *)this + 5);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  *((_QWORD *)this + 5) = v9;
  result = 0LL;
  *((_QWORD *)v9 + 7) = this;
  return result;
}
