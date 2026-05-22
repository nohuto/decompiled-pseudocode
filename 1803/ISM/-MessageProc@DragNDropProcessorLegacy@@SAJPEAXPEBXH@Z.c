/*
 * XREFs of ?MessageProc@DragNDropProcessorLegacy@@SAJPEAXPEBXH@Z @ 0x1800B1BA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DragNDropProcessorLegacy::MessageProc(_QWORD *a1, const void *a2, int a3)
{
  unsigned int v6; // ebx

  if ( a1 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v6 = CoreUICallReceive(
         a1[9],
         &DragNDropMessageCall::IDragNDrop_Receive<DragNDropProcessorLegacy>::Type,
         &DragNDropMessageCall::Microsoft::CoreUI::MessageCall::DragNDrop_g_parameters_1cCLB8KVntL8yWCdBhA9_xGJP9o,
         17LL,
         a1,
         a2,
         a3);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
  return v6;
}
