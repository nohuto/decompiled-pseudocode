/*
 * XREFs of ?SetProperty@CTranslateTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801AC100
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTranslateTransform3D::SetProperty(CVisual *a1, int a2, int a3, float *a4)
{
  unsigned int v5; // ebx
  int v6; // edx
  __int64 v7; // rax
  double *v8; // rcx
  double v9; // xmm1_8

  if ( a3 != 18 )
    goto LABEL_11;
  v5 = 0;
  if ( a2 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
      {
LABEL_11:
        v5 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xC49u);
        return v5;
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
    CResource::NotifyOnChanged(a1, 0LL, 0LL);
  }
  return v5;
}
