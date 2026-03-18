/*
 * XREFs of ?SetProperty@CShadowEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180179710
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CShadowEffect::SetProperty(float *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float v5; // xmm1_4
  int v6; // edx
  int v7; // edx
  int v8; // edx
  float *v9; // rax

  v4 = 0;
  if ( a3 != 18 )
    goto LABEL_15;
  v5 = *a4;
  if ( a2 )
  {
    v6 = a2 - 2;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 != 1 )
          {
LABEL_15:
            v4 = -2147024809;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x5Eu);
            return v4;
          }
          v9 = a1 + 56;
        }
        else
        {
          v9 = a1 + 55;
        }
      }
      else
      {
        v9 = a1 + 54;
      }
    }
    else
    {
      v9 = a1 + 53;
    }
  }
  else
  {
    v9 = a1 + 52;
    v5 = fmaxf(0.0, v5);
  }
  if ( !v9 )
    goto LABEL_15;
  if ( *v9 != v5 )
  {
    *v9 = v5;
    CResource::NotifyOnChanged(a1, 0LL, 0LL);
  }
  return v4;
}
