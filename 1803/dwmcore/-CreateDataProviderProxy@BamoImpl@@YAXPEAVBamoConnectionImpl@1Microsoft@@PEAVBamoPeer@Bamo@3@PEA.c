/*
 * XREFs of ?CreateDataProviderProxy@BamoImpl@@YAXPEAVBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@Bamo@3@PEAPEAVBamoProxy@53@@Z @ 0x1801534A4
 * Callers:
 *     ?MaterializeBamoDataProviderProxy@dataproviderBamoPeerImpl@BamoImpl@@QEAAJI@Z @ 0x180153AB4 (-MaterializeBamoDataProviderProxy@dataproviderBamoPeerImpl@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E0C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154E44 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0DataProviderProxy@@QEAA@XZ @ 0x18016C0FC (--0DataProviderProxy@@QEAA@XZ.c)
 */

void __fastcall BamoImpl::CreateDataProviderProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BamoConnectionImpl *a2,
        struct Microsoft::Bamo::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  DataProviderProxy *v5; // rax
  DataProviderProxy *v6; // rbx
  DataProviderProxy *v7; // rdi
  struct Microsoft::BamoImpl::BamoConnectionImpl *v8; // rbx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Microsoft::BamoImpl::BamoConnectionImpl *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v11,
    this);
  v5 = (DataProviderProxy *)WPF::ProcessHeapImpl::AllocClear(0x88uLL);
  v6 = v5;
  if ( !v5 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  memset_0(v5, 0, 0x88uLL);
  v7 = DataProviderProxy::DataProviderProxy(v6);
  if ( !v7 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataproviderfactory.cpp",
      (const char *)0x8007000ELL);
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x28,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
      (const char *)0x8007000ELL,
      v9);
    __debugbreak();
  }
  v8 = v11;
  if ( v11 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v11 + 96));
    *((_DWORD *)v8 + 34) = GetCurrentThreadId();
  }
  *(_QWORD *)a3 = v7;
}
