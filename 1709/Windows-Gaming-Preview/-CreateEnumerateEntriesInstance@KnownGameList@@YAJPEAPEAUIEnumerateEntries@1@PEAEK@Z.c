/*
 * XREFs of ?CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z @ 0x18003E1C0
 * Callers:
 *     ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003BBE0 (-GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGam.c)
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003C5C4 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041970 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KnownGameList::CreateEnumerateEntriesInstance(
        KnownGameList *this,
        struct KnownGameList::IEnumerateEntries **a2,
        unsigned __int8 *a3)
{
  unsigned int v3; // edi
  int v4; // ebp
  __int64 v7; // rdx
  unsigned int v8; // ebx
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  bool v11; // zf
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  v4 = (int)a3;
  if ( !this )
  {
    v7 = 1447LL;
LABEL_5:
    v8 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return v8;
  }
  if ( !a2 )
  {
    v7 = 1448LL;
    goto LABEL_5;
  }
  v9 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( !v9 )
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x5AA,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)0x8007000ELL);
    return v8;
  }
  v11 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
  *(_QWORD *)v9 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *>::`vftable';
  *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,KnownGameList::IEnumerateEntries>::`vftable';
  v9[3] = 1;
  if ( !v11 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  *(_QWORD *)v9 = &CEnumerateEntries::`vftable';
  *((_QWORD *)v9 + 2) = a2;
  v9[6] = v4;
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 16LL))(v10);
  *(_QWORD *)this = v10;
  return v3;
}
