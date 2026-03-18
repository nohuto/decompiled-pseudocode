/*
 * XREFs of ?SetProperty@CGaussianBlurEffect@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180179150
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGaussianBlurEffect::SetProperty(_DWORD *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float *v5; // rax
  float v6; // xmm1_4

  v4 = 0;
  if ( a3 != 18 || a2 || (v5 = (float *)(a1 + 52), v6 = fmaxf(0.0, *a4), a1 == (_DWORD *)-208LL) )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x4Eu);
  }
  else if ( *v5 != v6 )
  {
    *v5 = v6;
    CResource::NotifyOnChanged(a1, 0LL, 0LL);
  }
  return v4;
}
