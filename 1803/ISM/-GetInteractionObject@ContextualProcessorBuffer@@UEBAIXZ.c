/*
 * XREFs of ?GetInteractionObject@ContextualProcessorBuffer@@UEBAIXZ @ 0x1800B0650
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContextualProcessorBuffer::GetInteractionObject(ContextualProcessorBuffer *this)
{
  int (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v1 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 11);
  if ( v1 && (**v1)(v1, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v5) >= 0 )
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
  else
    v2 = 0;
  v3 = v5;
  if ( v5 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v2;
}
