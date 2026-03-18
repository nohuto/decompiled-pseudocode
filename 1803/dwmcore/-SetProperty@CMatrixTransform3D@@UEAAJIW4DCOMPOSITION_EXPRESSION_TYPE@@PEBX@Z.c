/*
 * XREFs of ?SetProperty@CMatrixTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801AD7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMatrixTransform3D::SetProperty(CVisual *a1, unsigned int a2, int a3, float *a4)
{
  float v4; // xmm1_4
  unsigned int v5; // ebx
  float *v6; // rdx

  if ( a3 == 18
    && (v4 = *a4, a2 < 0x10)
    && (v5 = 0, (v6 = (float *)((char *)a1 + 16 * ((unsigned __int64)a2 >> 2) + 4 * (a2 & 3) + 152)) != 0LL) )
  {
    if ( *v6 != v4 )
    {
      *v6 = v4;
      CResource::NotifyOnChanged(a1, 0LL, 0LL);
    }
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x48u);
  }
  return v5;
}
