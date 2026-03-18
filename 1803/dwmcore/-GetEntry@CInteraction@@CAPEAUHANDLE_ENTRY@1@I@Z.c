/*
 * XREFs of ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800C47A8
 * Callers:
 *     ?Release@CInteraction@@UEAAKXZ @ 0x1800282A0 (-Release@CInteraction@@UEAAKXZ.c)
 *     ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x1800286F4 (--0CInteraction@@IEAA@PEAVCComposition@@@Z.c)
 *     ?ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z @ 0x180192824 (-ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z.c)
 * Callees:
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180088964 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 */

struct CInteraction::HANDLE_ENTRY *__fastcall CInteraction::GetEntry(unsigned int a1)
{
  __int64 v1; // r8
  int v2; // r9d

  if ( HANDLE_TABLE::ValidEntry((HANDLE_TABLE *)&CInteraction::s_InteractionHandleTable, a1) )
    return (struct CInteraction::HANDLE_ENTRY *)((char *)qword_1802D4368 + (unsigned int)(v2 * Size));
  return (struct CInteraction::HANDLE_ENTRY *)v1;
}
