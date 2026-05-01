/*
 * XREFs of ??$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AEA_KAEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIProcessMemoryReport@System@Windows@@AEA_K1@Z @ 0x18000AC50
 * Callers:
 *     ?GetProcessMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIProcessMemoryReport@23@@Z @ 0x18000B240 (-GetProcessMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIProcessMemoryReport@23@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800077D0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 *     ??0CProcessMemoryReport@System@Windows@@QEAA@XZ @ 0x18000ADA0 (--0CProcessMemoryReport@System@Windows@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::System::CProcessMemoryReport,Windows::System::IProcessMemoryReport,unsigned __int64 &,unsigned __int64 &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rbx
  Windows::System::CProcessMemoryReport *v7; // rax
  int v8; // edi

  *a1 = 0LL;
  v5 = 0LL;
  v7 = (Windows::System::CProcessMemoryReport *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v5 = Windows::System::CProcessMemoryReport::CProcessMemoryReport(v7);
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 72LL))(v5, *a2, *a3);
    if ( v8 >= 0 )
      v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v5)(
             v5,
             &GUID_087305a8_9b70_4782_8741_3a982b6ce5e4,
             a1);
  }
  else
  {
    v8 = -2147024882;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v8;
}
