/*
 * XREFs of xxxCleanupThreadPointerInputInfo @ 0x1C00F8720
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00F8798 (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?FreeThreadPointerHookData@@YAXPEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01CAFA8 (-FreeThreadPointerHookData@@YAXPEAUtagTHREADPOINTERDATA@@@Z.c)
 *     ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01CC1A8 (-UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C01E11E4 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01E1B50 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 */

void __fastcall xxxCleanupThreadPointerInputInfo(__int64 a1)
{
  struct tagTHREADINPUTPOINTERLIST *v2; // rdi
  struct tagTHREADPOINTERDATA *v3; // rcx

  if ( a1 == gptiManipulationThread )
    xxxCleanupManipulationThread((struct tagTHREADINFO *)a1);
  v2 = (struct tagTHREADINPUTPOINTERLIST *)(a1 + 1056);
  v3 = *(struct tagTHREADPOINTERDATA **)(a1 + 1080);
  if ( v3 )
  {
    FreeThreadPointerHookData(v3);
    *(_QWORD *)(a1 + 1080) = 0LL;
  }
  while ( *(struct tagTHREADINPUTPOINTERLIST **)v2 != v2 )
    UnlinkAndFreeThreadPointerData(v2, *(struct tagTHREADPOINTERDATA **)v2);
  if ( a1 == qword_1C0327730 )
  {
    qword_1C0327730 = 0LL;
    if ( qword_1C03276B0 )
      dword_1C0327738 |= 1u;
  }
  if ( word_1C0327710 )
  {
    if ( a1 == qword_1C0327718 )
    {
      ForceCompletePendingPromotion();
      xxxProcessMousePromotionQueue();
    }
  }
}
