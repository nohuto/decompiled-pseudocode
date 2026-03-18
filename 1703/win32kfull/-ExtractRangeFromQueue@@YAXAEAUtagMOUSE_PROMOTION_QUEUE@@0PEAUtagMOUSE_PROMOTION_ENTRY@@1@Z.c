/*
 * XREFs of ?ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01D481C
 * Callers:
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1C01D45A4 (-CancelAutoPromotion@@YAXXZ.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HH@Z @ 0x1C01D4C3C (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ExtractRangeFromQueue(
        struct tagMOUSE_PROMOTION_ENTRY **a1,
        struct tagMOUSE_PROMOTION_QUEUE *a2,
        struct tagMOUSE_PROMOTION_ENTRY *a3,
        struct tagMOUSE_PROMOTION_ENTRY *a4)
{
  struct tagMOUSE_PROMOTION_ENTRY *v4; // rax
  struct tagMOUSE_PROMOTION_ENTRY *v6; // r10
  struct tagMOUSE_PROMOTION_ENTRY *v7; // rdx
  struct tagMOUSE_PROMOTION_ENTRY *v8; // r11

  v4 = *a1;
  if ( *a1 )
  {
    if ( !a4 )
      a4 = a1[1];
    v6 = a1[1];
    v7 = 0LL;
    if ( v4 != a3 )
    {
      v7 = *a1;
      do
      {
        v8 = *(struct tagMOUSE_PROMOTION_ENTRY **)v7;
        if ( *(struct tagMOUSE_PROMOTION_ENTRY **)v7 == a3 )
          break;
        v7 = *(struct tagMOUSE_PROMOTION_ENTRY **)v7;
      }
      while ( v8 );
    }
    *(_QWORD *)a2 = a3;
    *((_QWORD *)a2 + 1) = a4;
    if ( v4 == a3 )
    {
      if ( v6 == a4 )
      {
        *a1 = 0LL;
        a1[1] = 0LL;
      }
      else
      {
        *a1 = *(struct tagMOUSE_PROMOTION_ENTRY **)a4;
      }
    }
    else if ( v6 == a4 )
    {
      a1[1] = v7;
      *(_QWORD *)v7 = 0LL;
    }
    else
    {
      *(_QWORD *)v7 = *(_QWORD *)a4;
    }
    *(_QWORD *)a4 = 0LL;
  }
}
