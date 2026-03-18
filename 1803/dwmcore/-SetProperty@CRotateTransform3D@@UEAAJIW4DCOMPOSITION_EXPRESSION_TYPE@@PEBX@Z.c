/*
 * XREFs of ?SetProperty@CRotateTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801ABDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRotateTransform3D::SetProperty(CVisual *a1, int a2, int a3, float *a4)
{
  unsigned int v5; // ebx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  __int64 v11; // rax
  double *v12; // rcx
  double v13; // xmm1_8

  if ( a3 != 18 )
    goto LABEL_19;
  v5 = 0;
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
            v10 = v9 - 1;
            if ( v10 )
            {
              if ( v10 != 1 )
              {
LABEL_19:
                v5 = -2147024809;
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x7C0u);
                return v5;
              }
              v11 = 176LL;
            }
            else
            {
              v11 = 168LL;
            }
          }
          else
          {
            v11 = 160LL;
          }
        }
        else
        {
          v11 = 200LL;
        }
      }
      else
      {
        v11 = 192LL;
      }
    }
    else
    {
      v11 = 184LL;
    }
  }
  else
  {
    v11 = 152LL;
  }
  v12 = (double *)((char *)a1 + v11);
  if ( !v12 )
    goto LABEL_19;
  v13 = *a4;
  if ( *v12 != v13 )
  {
    *v12 = v13;
    CResource::NotifyOnChanged(a1, 0LL, 0LL);
  }
  return v5;
}
