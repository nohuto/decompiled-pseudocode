/*
 * XREFs of ??4?$unique_call@P6AXXZ$1?CDPShutdown@@YAXXZ@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801A2FA8
 * Callers:
 *     ??0TaskFlowImmersiveShellBroker@@QEAA@XZ @ 0x1801A2B60 (--0TaskFlowImmersiveShellBroker@@QEAA@XZ.c)
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A5F64 (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char *__fastcall wil::unique_call<void (*)(void),&void CDPShutdown(void)>::operator=(char *a1, char *a2)
{
  char v4; // al

  if ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0;
    if ( v4 )
      CDPShutdown();
    *a1 = *a2;
    *a2 = 0;
  }
  return a1;
}
