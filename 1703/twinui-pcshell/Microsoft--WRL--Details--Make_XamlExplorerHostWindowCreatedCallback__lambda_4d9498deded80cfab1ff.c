/*
 * XREFs of Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_4d9498deded80cfab1ff9f78bf19bcab_____lambda_4d9498deded80cfab1ff9f78bf19bcab___ @ 0x180131594
 * Callers:
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18012D894 (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     XamlExplorerHostWindowCreatedCallback__lambda_4d9498deded80cfab1ff9f78bf19bcab___::XamlExplorerHostWindowCreatedCallback__lambda_4d9498deded80cfab1ff9f78bf19bcab___ @ 0x180131758 (XamlExplorerHostWindowCreatedCallback__lambda_4d9498deded80cfab1ff9f78bf19bcab___--XamlExplorerH.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_4d9498deded80cfab1ff9f78bf19bcab_____lambda_4d9498deded80cfab1ff9f78bf19bcab___(
        __int64 *a1,
        __int64 a2)
{
  void *v4; // rax
  __int64 v5; // rdi

  *a1 = 0LL;
  v4 = operator new(0x198uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = XamlExplorerHostWindowCreatedCallback__lambda_4d9498deded80cfab1ff9f78bf19bcab___::XamlExplorerHostWindowCreatedCallback__lambda_4d9498deded80cfab1ff9f78bf19bcab___(
           v4,
           a2);
    if ( *a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
