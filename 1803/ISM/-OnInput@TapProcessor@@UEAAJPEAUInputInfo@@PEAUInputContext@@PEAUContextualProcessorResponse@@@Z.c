/*
 * XREFs of ?OnInput@TapProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800B6540
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ResetAndInitializeInteractionContext@TapProcessor@@AEAAJXZ @ 0x1800B6348 (-ResetAndInitializeInteractionContext@TapProcessor@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TapProcessor::OnInput(
        TapProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 v5; // rcx
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_DWORD *)a4 = 4;
  v5 = *((_QWORD *)a4 + 2);
  if ( v5 )
  {
    *((_QWORD *)a4 + 2) = 0LL;
    (*(void (__fastcall **)(__int64, struct InputInfo *, struct InputContext *))(*(_QWORD *)v5 + 16LL))(v5, a2, a3);
  }
  if ( (*(_DWORD *)a2 & *((_DWORD *)this + 19)) == 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xC0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)a4);
    JUMPOUT(0x1800B6623LL);
  }
  if ( *((_DWORD *)a2 + 12) <= 1u )
  {
    if ( (*(_DWORD *)a2 & 4) != 0 )
    {
      if ( (*((_BYTE *)a2 + 524) & 1) != 0 || *((_BYTE *)a2 + 512) )
      {
        if ( *((_BYTE *)this + 72) )
        {
          v8 = (__int64 *)*((_QWORD *)this + 7);
          v11 = 4LL;
          v9 = *v8;
          v12 = 0;
          (*(void (__fastcall **)(__int64 *, __int64 *))(v9 + 48))(v8, &v11);
        }
      }
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 6) + 24LL))(*((_QWORD *)this + 6), a2);
    }
  }
  else
  {
    *(_DWORD *)a4 = 0;
    TapProcessor::ResetAndInitializeInteractionContext(this);
  }
  return 0LL;
}
