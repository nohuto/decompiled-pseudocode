/*
 * XREFs of ?SetProperty@CScaleTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801ABFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CScaleTransform::SetProperty(CVisual *a1, int a2, int a3, float *a4)
{
  unsigned int v5; // ebx
  int v6; // edx
  int v7; // edx
  __int64 v8; // rax
  double *v9; // rcx
  double v10; // xmm1_8

  if ( a3 != 18 )
    goto LABEL_13;
  v5 = 0;
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
          v5 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x84Au);
          return v5;
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
    CResource::NotifyOnChanged(a1, 0LL, 0LL);
  }
  return v5;
}
