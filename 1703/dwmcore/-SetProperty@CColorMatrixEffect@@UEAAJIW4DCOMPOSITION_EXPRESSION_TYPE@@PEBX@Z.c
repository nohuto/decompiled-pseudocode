/*
 * XREFs of ?SetProperty@CColorMatrixEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180179400
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CColorMatrixEffect::SetProperty(_DWORD *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float v6; // xmm1_4
  float *v7; // rcx

  v4 = 0;
  if ( a3 == 18 && (v6 = *a4, (unsigned int)(a2 - 3) <= 0x13) && (v7 = (float *)&a1[a2 - 3 + 52]) != 0LL )
  {
    if ( *v7 != v6 )
    {
      *v7 = v6;
      CResource::NotifyOnChanged(a1, 0LL, 0LL);
    }
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x34u);
  }
  return v4;
}
