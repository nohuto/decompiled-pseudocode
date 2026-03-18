/*
 * XREFs of ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x18016E628
 * Callers:
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18016D390 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z @ 0x18016E600 (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z.c)
 *     _lambda_2ee6e74848a4ca29603542c81c185b92_::operator() @ 0x180188754 (_lambda_2ee6e74848a4ca29603542c81c185b92_--operator().c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker::ShouldChainAllForAxis(__int64 a1, int a2, __int64 a3)
{
  int v3; // edx
  char v5; // r9
  int v7; // [rsp+A8h] [rbp-10h]

  v7 = *(_DWORD *)(a3 + 404);
  if ( !a2 )
  {
    v5 = (unsigned __int8)v7 >> 3;
    return (v5 & 1) == 0;
  }
  v3 = a2 - 1;
  if ( !v3 )
  {
    v5 = (unsigned __int8)v7 >> 4;
    return (v5 & 1) == 0;
  }
  return v3 == 1;
}
