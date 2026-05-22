/*
 * XREFs of ??$MakeAndInitialize@VHitTestRequest@@UIHitTestRequest@@PEAUIDisplayBinding@@AEAPEAUIInputTarget@@PEAU4@AEAUInputInfo@@AEAK@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIHitTestRequest@@@WRL@Microsoft@@@012@$$QEAPEAUIDisplayBinding@@AEAPEAUIInputTarget@@$$QEAPEAU5@AEAUInputInfo@@AEAK@Z @ 0x18001F1D0
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x18001A450 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     ?RuntimeClassInitialize@HitTestRequest@@QEAAJPEAUIDisplayBinding@@PEAUIInputTarget@@1AEBUInputInfo@@K@Z @ 0x180022BDC (-RuntimeClassInitialize@HitTestRequest@@QEAAJPEAUIDisplayBinding@@PEAUIInputTarget@@1AEBUInputIn.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<HitTestRequest,IHitTestRequest,IDisplayBinding *,IInputTarget * &,IInputTarget *,InputInfo &,unsigned long &>(
        __int64 *a1,
        struct IDisplayBinding **a2,
        struct IInputTarget **a3,
        struct IInputTarget **a4,
        struct InputInfo *a5,
        unsigned int *a6)
{
  __int64 v8; // rcx
  HitTestRequest *v11; // rax
  HitTestRequest *v12; // rbx
  int v13; // esi
  struct Microsoft::WRL::Details::ModuleBase *v14; // rcx
  __int64 v15; // rax

  v8 = *a1;
  if ( v8 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *a1 = 0LL;
  v11 = (HitTestRequest *)operator new(0xB50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( v11 )
  {
    v14 = Microsoft::WRL::Details::ModuleBase::module_;
    *((_DWORD *)v11 + 3) = 1;
    *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHitTestRequest>::`vftable';
    if ( v14 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v14 + 8LL))(v14);
    *(_QWORD *)v12 = &HitTestRequest::`vftable';
    *((_QWORD *)v12 + 2) = 0LL;
    *((_QWORD *)v12 + 3) = 0LL;
    *((_QWORD *)v12 + 4) = 0LL;
    v13 = HitTestRequest::RuntimeClassInitialize(v12, *a2, *a3, *a4, a5, *a6);
    v15 = *(_QWORD *)v12;
    if ( v13 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(HitTestRequest *, GUID *, __int64 *))v15)(
              v12,
              &GUID_04a8e635_da03_403a_aa97_344412780520,
              a1);
      (*(void (__fastcall **)(HitTestRequest *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    else
    {
      (*(void (__fastcall **)(HitTestRequest *))(v15 + 16))(v12);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v13;
}
