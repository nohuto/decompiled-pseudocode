/*
 * XREFs of ?SetProperty@CRotateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18017BBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CRotateTransform::SetProperty(CGradientBrush *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  int v6; // edx
  __int64 v7; // rax
  double *v8; // rcx
  double v9; // xmm1_8

  v4 = 0;
  if ( a3 != 18 )
    goto LABEL_11;
  if ( a2 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
      {
LABEL_11:
        v4 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x73Fu);
        return v4;
      }
      v7 = 168LL;
    }
    else
    {
      v7 = 160LL;
    }
  }
  else
  {
    v7 = 152LL;
  }
  v8 = (double *)((char *)a1 + v7);
  if ( !v8 )
    goto LABEL_11;
  v9 = *a4;
  if ( *v8 != v9 )
  {
    *v8 = v9;
    CResource::NotifyOnChanged(a1, 0, 0LL);
  }
  return v4;
}
