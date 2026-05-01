/*
 * XREFs of ??$CreateRefCountedObj@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@YA?AV?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@XZ @ 0x180044758
 * Callers:
 *     ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x180041C6C (-_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmer.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CreateRefCountedObj<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rcx

  v2 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 0;
    *((_QWORD *)v2 + 2) = 0LL;
    *((_QWORD *)v2 + 3) = 0LL;
    *((_QWORD *)v2 + 4) = 0LL;
    v2[10] = 0;
    *(_QWORD *)v2 = &CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>::`vftable';
    v2[12] = 0;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  if ( v3 )
    (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v3 + 8LL))(v3, 0LL);
  return a1;
}
