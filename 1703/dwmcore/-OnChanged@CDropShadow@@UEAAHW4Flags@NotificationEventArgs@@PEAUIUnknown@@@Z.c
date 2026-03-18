/*
 * XREFs of ?OnChanged@CDropShadow@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180171E70
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateShadowIntermediate@CDropShadow@@AEAAX_N@Z @ 0x180171D9C (-InvalidateShadowIntermediate@CDropShadow@@AEAAX_N@Z.c)
 */

__int64 __fastcall CDropShadow::OnChanged(CDropShadow *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx

  v3 = *((_QWORD *)a1 + 17);
  if ( v3 && a3 == v3 )
    CDropShadow::InvalidateShadowIntermediate(a1, 1);
  return 1LL;
}
