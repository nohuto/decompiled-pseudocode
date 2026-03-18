/*
 * XREFs of ?SetProperty@CEffectGroup@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180092A10
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x18002D090 (-UpdateAnimateValues@CAnimation@@UEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CEffectGroup::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  double *v5; // rdi
  double v6; // xmm1_8

  v4 = 0;
  if ( a3 != 18 )
    goto LABEL_8;
  v5 = (double *)(a1 + 72);
  if ( a2 )
    v5 = 0LL;
  if ( v5 )
  {
    v6 = *a4;
    if ( *v5 != v6 )
    {
      *v5 = v6;
      CResource::NotifyOnChanged(a1, 0LL, 0LL);
    }
  }
  else
  {
LABEL_8:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x67u);
  }
  return v4;
}
