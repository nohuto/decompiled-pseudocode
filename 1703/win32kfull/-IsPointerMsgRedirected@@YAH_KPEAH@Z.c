/*
 * XREFs of ?IsPointerMsgRedirected@@YAH_KPEAH@Z @ 0x1C01C6B14
 * Callers:
 *     xxxPointerCallHook @ 0x1C00071B4 (xxxPointerCallHook.c)
 * Callees:
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C019917C (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 */

int __fastcall IsPointerMsgRedirected(unsigned __int64 a1, int *a2)
{
  struct _LIST_ENTRY *FrameById; // rax
  __int64 v4; // r9
  _DWORD *v5; // r10
  _DWORD *v6; // rcx

  if ( (gdwMitConfig & 4) != 0 )
    return CTouchProcessor::IsPointerMsgRedirected(gpTouchProcessor, a1, a2);
  *a2 = 0;
  if ( !a1 )
    return 0;
  FrameById = FindFrameById(*(_DWORD *)(a1 + 28));
  if ( !FrameById )
    return 0;
  v6 = (_DWORD *)FrameById[5].Blink + 54 * *(unsigned int *)(v4 + 32);
  if ( (v6[1] & 0x80u) != 0 )
    *v5 = 1;
  return -__CFSHR__(*v6, 11);
}
