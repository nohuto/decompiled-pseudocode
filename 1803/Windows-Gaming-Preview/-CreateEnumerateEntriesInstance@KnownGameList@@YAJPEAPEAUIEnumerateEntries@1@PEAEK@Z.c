/*
 * XREFs of ?CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z @ 0x1800402EC
 * Callers:
 *     ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003DD60 (-GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGam.c)
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003E6FC (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042918 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KnownGameList::CreateEnumerateEntriesInstance(
        KnownGameList *this,
        struct KnownGameList::IEnumerateEntries **a2,
        unsigned __int8 *a3)
{
  unsigned int v3; // edi
  int v4; // ebp
  unsigned int v7; // ebx
  __int64 v8; // rdx
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  bool v11; // zf
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  v4 = (int)a3;
  if ( !this )
  {
    v7 = -2147467261;
    v8 = 1462LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v7);
    return v7;
  }
  if ( !a2 )
  {
    v7 = -2147467261;
    v8 = 1463LL;
    goto LABEL_10;
  }
  v9 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( !v9 )
  {
    v7 = -2147024882;
    v8 = 1465LL;
    goto LABEL_10;
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
