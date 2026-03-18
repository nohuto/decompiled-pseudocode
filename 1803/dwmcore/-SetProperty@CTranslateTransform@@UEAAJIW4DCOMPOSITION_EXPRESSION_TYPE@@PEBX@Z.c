/*
 * XREFs of ?SetProperty@CTranslateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180019AE0
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x18003FCC0 (-UpdateAnimateValues@CAnimation@@UEAAXXZ.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTranslateTransform::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  double *v6; // rax
  double v7; // xmm1_8

  if ( a3 != 18 )
    goto LABEL_10;
  v4 = 0;
  if ( a2 )
  {
    if ( a2 != 1 )
      goto LABEL_10;
    v5 = 160LL;
  }
  else
  {
    v5 = 152LL;
  }
  v6 = (double *)(a1 + v5);
  if ( !v6 )
  {
LABEL_10:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xBECu);
    return v4;
  }
  v7 = *a4;
  if ( *v6 != v7 )
  {
    *v6 = v7;
    CResource::NotifyOnChanged(a1, 0LL, 0LL);
  }
  return v4;
}
