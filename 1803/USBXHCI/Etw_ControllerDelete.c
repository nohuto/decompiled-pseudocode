/*
 * XREFs of Etw_ControllerDelete @ 0x1C0035FD8
 * Callers:
 *     Controller_WdfEvtCleanupCallback @ 0x1C000B970 (Controller_WdfEvtCleanupCallback.c)
 * Callees:
 *     McTemplateK0pqqqqqqqsssxqqqt @ 0x1C0036C64 (McTemplateK0pqqqqqqqsssxqqqt.c)
 */

__int64 __fastcall Etw_ControllerDelete(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    return McTemplateK0pqqqqqqqsssxqqqt(
             (int)a2 + 250,
             (unsigned int)&USBXHCI_ETW_EVENT_CONTROLLER_DELETE,
             (int)a2 + 245,
             *(_QWORD *)(a2 + 8),
             *(_DWORD *)(a2 + 180),
             *(_DWORD *)(a2 + 196),
             *(_WORD *)(a2 + 200),
             *(_WORD *)(a2 + 204),
             *(_WORD *)(a2 + 184),
             *(_WORD *)(a2 + 188),
             *(_BYTE *)(a2 + 192),
             a2 + 240,
             a2 + 245,
             a2 + 250,
             *(_QWORD *)(a2 + 264),
             *(_DWORD *)(a2 + 392),
             *(_DWORD *)(a2 + 328),
             *(_DWORD *)(a2 + 176),
             *(_BYTE *)(a2 + 440));
  return result;
}
