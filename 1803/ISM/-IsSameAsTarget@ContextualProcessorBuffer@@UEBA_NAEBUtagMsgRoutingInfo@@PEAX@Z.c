/*
 * XREFs of ?IsSameAsTarget@ContextualProcessorBuffer@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z @ 0x1800B0440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall ContextualProcessorBuffer::IsSameAsTarget(
        ContextualProcessorBuffer *this,
        const struct tagMsgRoutingInfo *a2,
        void *a3)
{
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  char v6; // bl
  __int64 v7; // rcx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v5 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 11);
  if ( v5 && (**v5)(v5, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v9) >= 0 )
    v6 = (*(__int64 (__fastcall **)(__int64, const struct tagMsgRoutingInfo *, void *))(*(_QWORD *)v9 + 24LL))(
           v9,
           a2,
           a3);
  else
    v6 = 0;
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v6;
}
