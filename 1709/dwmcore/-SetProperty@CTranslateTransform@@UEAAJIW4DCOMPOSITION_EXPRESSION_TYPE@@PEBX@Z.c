/*
 * XREFs of ?SetProperty@CTranslateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800B47A0
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x18002D090 (-UpdateAnimateValues@CAnimation@@UEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CTranslateTransform::SetProperty(CGradientBrush *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  double *v6; // rax
  double v7; // xmm1_8

  v4 = 0;
  if ( a3 != 18 )
    goto LABEL_10;
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
  v6 = (double *)((char *)a1 + v5);
  if ( !v6 )
  {
LABEL_10:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0xBD4u);
    return v4;
  }
  v7 = *a4;
  if ( *v6 != v7 )
  {
    *v6 = v7;
    CResource::NotifyOnChanged(a1, 0, 0LL);
  }
  return v4;
}
