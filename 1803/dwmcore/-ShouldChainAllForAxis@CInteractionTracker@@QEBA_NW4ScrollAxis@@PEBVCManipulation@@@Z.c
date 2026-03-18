/*
 * XREFs of ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x180196A38
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1801BE9A0 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x1801CA3D8 (-OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipu.c)
 *     _lambda_b08b79b307586b4cb04ea7780a7f8202_::operator() @ 0x1801CBB88 (_lambda_b08b79b307586b4cb04ea7780a7f8202_--operator().c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker::ShouldChainAllForAxis(__int64 a1, int a2, __int64 a3)
{
  int v3; // edx
  char v5; // r9

  if ( !a2 )
  {
    v5 = BYTE4(*(_QWORD *)(a3 + 432));
    return (v5 & 1) == 0;
  }
  v3 = a2 - 1;
  if ( !v3 )
  {
    v5 = (unsigned __int8)BYTE4(*(_QWORD *)(a3 + 432)) >> 1;
    return (v5 & 1) == 0;
  }
  return v3 == 1;
}
