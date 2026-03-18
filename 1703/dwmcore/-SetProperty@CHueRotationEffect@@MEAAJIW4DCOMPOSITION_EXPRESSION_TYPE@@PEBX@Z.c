/*
 * XREFs of ?SetProperty@CHueRotationEffect@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801797C0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHueRotationEffect::SetProperty(_DWORD *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float v5; // xmm1_4
  float *v6; // rdi
  float *v7; // rax

  v4 = 0;
  if ( a3 != 18 )
    goto LABEL_8;
  v5 = *a4;
  v6 = (float *)(a1 + 52);
  if ( a2 )
    v6 = 0LL;
  v7 = v6;
  if ( v6 && *v6 != v5 )
  {
    *v6 = v5;
    CResource::NotifyOnChanged(a1, 0LL, 0LL);
    v7 = v6;
  }
  if ( !v7 )
  {
LABEL_8:
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x2Fu);
  }
  return v4;
}
