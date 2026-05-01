/*
 * XREFs of ??$CreateRefCountedObj@UViewEventRegistration@@@@YA?AV?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@XZ @ 0x1800FED98
 * Callers:
 *     ?RegisterForViewEventsWithOptions@ViewEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x1800F64C0 (-RegisterForViewEventsWithOptions@ViewEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIViewWr.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

char **__fastcall CreateRefCountedObj<ViewEventRegistration>(char **a1)
{
  char *v2; // rax
  char *v3; // rdi

  v2 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset(v2 + 8, 0, 0x28uLL);
    *((_QWORD *)v3 + 1) = 0LL;
    *((_QWORD *)v3 + 2) = 0LL;
    *((_QWORD *)v3 + 4) = 0LL;
    *((_DWORD *)v3 + 12) = 0;
    *(_QWORD *)v3 = &CRefCountedObject<ViewEventRegistration>::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  if ( v3 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 8LL))(v3);
  return a1;
}
