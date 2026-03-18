/*
 * XREFs of ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z @ 0x180193A74
 * Callers:
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18018AF70 (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 * Callees:
 *     ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z @ 0x180195068 (-VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x1801950A4 (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 */

void __fastcall CManipulationContext::PropagateVisualManipulationNotificationFlag(
        struct CVisual *a1,
        char a2,
        unsigned int a3)
{
  struct CVisual *v4; // rbx
  char v5; // al
  char v6; // di

  v4 = a1;
  if ( a2 )
  {
    if ( a1 )
    {
      do
      {
        v5 = *((_BYTE *)v4 + 90);
        if ( (v5 & 4) != 0 )
          break;
        *((_BYTE *)v4 + 90) = v5 | 4;
        v4 = (struct CVisual *)*((_QWORD *)v4 + 10);
      }
      while ( v4 );
    }
  }
  else if ( a1 )
  {
    do
    {
      v6 = *((_BYTE *)v4 + 90);
      if ( (v6 & 4) == 0 )
        break;
      if ( CManipulationContext::VisualHasActiveInteraction(v4, a3) )
        break;
      if ( CManipulationContext::VisualHasAnyChildFlagged(v4) )
        break;
      *((_BYTE *)v4 + 90) = v6 & 0xFB;
      v4 = (struct CVisual *)*((_QWORD *)v4 + 10);
    }
    while ( v4 );
  }
}
