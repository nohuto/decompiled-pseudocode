/*
 * XREFs of ?SetProperty@CRotateTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800D24B0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRotateTransform3D::SetProperty(double *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  double *v11; // rax

  v4 = 0;
  if ( a3 != 18 )
    goto LABEL_21;
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
                goto LABEL_21;
              v11 = a1 + 22;
            }
            else
            {
              v11 = a1 + 21;
            }
          }
          else
          {
            v11 = a1 + 20;
          }
        }
        else
        {
          v11 = a1 + 25;
        }
      }
      else
      {
        v11 = a1 + 24;
      }
    }
    else
    {
      v11 = a1 + 23;
    }
  }
  else
  {
    v11 = a1 + 19;
  }
  if ( !v11 )
  {
LABEL_21:
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x7D7u);
    return v4;
  }
  if ( *v11 != *a4 )
  {
    *v11 = *a4;
    CResource::NotifyOnChanged(a1, 0LL, 0LL);
  }
  return v4;
}
