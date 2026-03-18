/*
 * XREFs of ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z @ 0x1801DB4C4
 * Callers:
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1801CFE6C (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 * Callees:
 *     ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z @ 0x1801DCAF4 (-VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x1801DCB2C (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
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
        v5 = *((_BYTE *)v4 + 93);
        if ( (v5 & 0x40) != 0 )
          break;
        *((_BYTE *)v4 + 93) = v5 | 0x40;
        v4 = (struct CVisual *)*((_QWORD *)v4 + 10);
      }
      while ( v4 );
    }
  }
  else if ( a1 )
  {
    do
    {
      v6 = *((_BYTE *)v4 + 93);
      if ( (v6 & 0x40) == 0 )
        break;
      if ( CManipulationContext::VisualHasActiveInteraction(v4, a3) )
        break;
      if ( CManipulationContext::VisualHasAnyChildFlagged(v4) )
        break;
      *((_BYTE *)v4 + 93) = v6 & 0xBF;
      v4 = (struct CVisual *)*((_QWORD *)v4 + 10);
    }
    while ( v4 );
  }
}
