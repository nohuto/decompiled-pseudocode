/*
 * XREFs of ?SetProperty@CScaleTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18017BC30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CScaleTransform3D::SetProperty(CGradientBrush *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 v10; // rax
  double *v11; // rcx
  double v12; // xmm1_8

  v4 = 0;
  if ( a3 != 18 )
    goto LABEL_17;
  if ( a2 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 != 1 )
            {
LABEL_17:
              v4 = -2147024809;
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x8A5u);
              return v4;
            }
            v10 = 192LL;
          }
          else
          {
            v10 = 184LL;
          }
        }
        else
        {
          v10 = 176LL;
        }
      }
      else
      {
        v10 = 168LL;
      }
    }
    else
    {
      v10 = 160LL;
    }
  }
  else
  {
    v10 = 152LL;
  }
  v11 = (double *)((char *)a1 + v10);
  if ( !v11 )
    goto LABEL_17;
  v12 = *a4;
  if ( *v11 != v12 )
  {
    *v11 = v12;
    CResource::NotifyOnChanged(a1, 0, 0LL);
  }
  return v4;
}
