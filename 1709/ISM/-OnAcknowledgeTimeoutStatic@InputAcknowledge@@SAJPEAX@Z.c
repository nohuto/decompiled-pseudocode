/*
 * XREFs of ?OnAcknowledgeTimeoutStatic@InputAcknowledge@@SAJPEAX@Z @ 0x180082DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcknowledgeDelivery@InputQueue@@QEAAJPEAUInputDeliveryAcknowledgeData@@@Z @ 0x180082698 (-AcknowledgeDelivery@InputQueue@@QEAAJPEAUInputDeliveryAcknowledgeData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputAcknowledge::OnAcknowledgeTimeoutStatic(
        InputQueue **a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+44h] [rbp+Ch]
  InputQueue **v10; // [rsp+48h] [rbp+10h]

  v10 = a1;
  if ( a1 )
    (*((void (__fastcall **)(InputQueue **))*a1 + 1))(a1);
  if ( *((_BYTE *)a1 + 16) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x52,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputacknowledge.cpp",
      a4);
    __debugbreak();
  }
  v8 = *((_DWORD *)a1 + 5);
  v9 = 4;
  v5 = InputQueue::AcknowledgeDelivery(a1[3], (struct InputDeliveryAcknowledgeData *)&v8, a3, a4);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x58,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputacknowledge.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  *((_BYTE *)a1 + 16) = 1;
  (*((void (__fastcall **)(InputQueue **))*a1 + 2))(a1);
  return 0LL;
}
