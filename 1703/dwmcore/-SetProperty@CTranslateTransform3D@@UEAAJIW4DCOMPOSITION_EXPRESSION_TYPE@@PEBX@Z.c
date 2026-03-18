/*
 * XREFs of ?SetProperty@CTranslateTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180174DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTranslateTransform3D::SetProperty(double *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  int v5; // edx
  double *v6; // rax

  v4 = 0;
  if ( a3 != 18 )
    goto LABEL_11;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
      {
LABEL_11:
        v4 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x6D8u);
        return v4;
      }
      v6 = a1 + 21;
    }
    else
    {
      v6 = a1 + 20;
    }
  }
  else
  {
    v6 = a1 + 19;
  }
  if ( !v6 )
    goto LABEL_11;
  if ( *v6 != *a4 )
  {
    *v6 = *a4;
    CResource::NotifyOnChanged(a1, 0LL, 0LL);
  }
  return v4;
}
