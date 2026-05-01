/*
 * XREFs of ??_EDummyAsyncOperation@?A0x15489d95@@UEAAPEAXI@Z @ 0x180012F20
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180010C30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall `anonymous namespace'::DummyAsyncOperation::`vector deleting destructor'(char *Block, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v4 = *((_QWORD *)Block + 21);
  if ( v4 )
  {
    *((_QWORD *)Block + 21) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  _Mtx_destroy_in_situ((_Mtx_t)(Block + 88));
  v5 = *((_QWORD *)Block + 10);
  if ( v5 )
  {
    *((_QWORD *)Block + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)Block + 9);
  if ( v6 )
  {
    *((_QWORD *)Block + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)Block + 8);
  if ( v7 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release((volatile signed __int32 *)(2 * v7));
  v8 = *((_QWORD *)Block + 6);
  if ( v8 )
  {
    *((_QWORD *)Block + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
