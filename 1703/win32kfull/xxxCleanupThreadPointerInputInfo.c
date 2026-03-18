/*
 * XREFs of xxxCleanupThreadPointerInputInfo @ 0x1C0008850
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0008530 (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0069314 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?FreeThreadPointerHookData@@YAXPEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01C5704 (-FreeThreadPointerHookData@@YAXPEAUtagTHREADPOINTERDATA@@@Z.c)
 *     ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01C758C (-UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C01D4964 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01D5280 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxCleanupThreadPointerInputInfo(__int64 a1)
{
  struct tagTHREADPOINTERDATA **v2; // rdi
  struct tagTHREADPOINTERDATA *v3; // rcx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 == gptiManipulationThread )
    xxxCleanupManipulationThread((struct tagTHREADINFO *)a1);
  v2 = (struct tagTHREADPOINTERDATA **)(a1 + 968);
  v4 = 0;
  ++gdwInAtomicOperation;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)&v4);
  v3 = *(struct tagTHREADPOINTERDATA **)(a1 + 992);
  if ( v3 )
  {
    FreeThreadPointerHookData(v3);
    *(_QWORD *)(a1 + 992) = 0LL;
  }
  while ( *v2 != (struct tagTHREADPOINTERDATA *)v2 )
    UnlinkAndFreeThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 968), *v2);
  if ( !v4 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v4);
  }
  if ( a1 == qword_1C032C4B0 )
  {
    qword_1C032C4B0 = 0LL;
    if ( qword_1C032C430 )
      dword_1C032C4B8 |= 1u;
  }
  if ( word_1C032C490 )
  {
    if ( a1 == qword_1C032C498 )
    {
      ForceCompletePendingPromotion();
      xxxProcessMousePromotionQueue();
    }
  }
}
