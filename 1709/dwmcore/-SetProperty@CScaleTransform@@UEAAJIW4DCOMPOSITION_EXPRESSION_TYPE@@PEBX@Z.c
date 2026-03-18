/*
 * XREFs of ?SetProperty@CScaleTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18017BCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CScaleTransform::SetProperty(CGradientBrush *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  int v6; // edx
  int v7; // edx
  __int64 v8; // rax
  double *v9; // rcx
  double v10; // xmm1_8

  v4 = 0;
  if ( a3 != 18 )
    goto LABEL_13;
  if ( a2 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
        {
LABEL_13:
          v4 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x839u);
          return v4;
        }
        v8 = 176LL;
      }
      else
      {
        v8 = 168LL;
      }
    }
    else
    {
      v8 = 160LL;
    }
  }
  else
  {
    v8 = 152LL;
  }
  v9 = (double *)((char *)a1 + v8);
  if ( !v9 )
    goto LABEL_13;
  v10 = *a4;
  if ( *v9 != v10 )
  {
    *v9 = v10;
    CResource::NotifyOnChanged(a1, 0, 0LL);
  }
  return v4;
}
