/*
 * XREFs of ?OnChanged@CDropShadow@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180160E50
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateShadowIntermediate@CDropShadow@@AEAAX_NAEAUShadowIntermediates@1@@Z @ 0x180160D38 (-InvalidateShadowIntermediate@CDropShadow@@AEAAX_NAEAUShadowIntermediates@1@@Z.c)
 */

__int64 __fastcall CDropShadow::OnChanged(_QWORD *a1, __int64 a2, __int64 *a3)
{
  struct CDropShadow::ShadowIntermediates *v5; // r8
  __int64 **v6; // rsi
  __int64 **i; // rbx

  v5 = (struct CDropShadow::ShadowIntermediates *)(a1 + 25);
  if ( a1[25] && a3 == *(__int64 **)v5 )
    CDropShadow::InvalidateShadowIntermediate((CDropShadow *)a1, 1, v5);
  v6 = (__int64 **)a1[10];
  for ( i = (__int64 **)*v6; i != v6; i = (__int64 **)*i )
  {
    if ( a3 == i[3] )
      CDropShadow::InvalidateShadowIntermediate(
        (CDropShadow *)a1,
        1,
        (struct CDropShadow::ShadowIntermediates *)(i + 3));
  }
  return 1LL;
}
