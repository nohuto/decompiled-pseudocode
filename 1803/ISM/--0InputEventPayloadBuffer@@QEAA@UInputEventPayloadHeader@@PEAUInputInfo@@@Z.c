/*
 * XREFs of ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z @ 0x1800623CC
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800187C0 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@InputDestTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180082F20 (-DeliverInput@InputDestTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?InternalDeliverInput@MPCSharedWorldInputTarget@@AEAAJPEAUInputInfo@@_N@Z @ 0x180088A88 (-InternalDeliverInput@MPCSharedWorldInputTarget@@AEAAJPEAUInputInfo@@_N@Z.c)
 *     ?DeliverInput@InputRedirectionTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800B5BE0 (-DeliverInput@InputRedirectionTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E212C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800E3217 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputEventPayloadBuffer::InputEventPayloadBuffer(__int64 a1, int a2, int *a3, const char *a4)
{
  size_t v7; // rsi
  void *v8; // rax
  void *v9; // rcx
  _DWORD *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)(a1 + 8) = 0LL;
  v7 = a3[6];
  if ( !(_DWORD)v7 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xD,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\lib\\helpers.cpp",
      a4);
    JUMPOUT(0x180062464LL);
  }
  *(_DWORD *)a1 = v7 + 8;
  v8 = operator new[]((int)v7 + 8);
  v9 = *(void **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v8;
  if ( v9 )
    operator delete(v9);
  v10 = *(_DWORD **)(a1 + 8);
  *v10 = a2;
  memcpy_0(v10 + 2, a3, v7);
  return a1;
}
