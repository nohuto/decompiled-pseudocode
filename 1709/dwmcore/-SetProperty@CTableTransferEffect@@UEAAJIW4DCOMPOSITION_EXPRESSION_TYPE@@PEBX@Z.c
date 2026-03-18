/*
 * XREFs of ?SetProperty@CTableTransferEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180176A00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?PropertyIdToColorChannelAndIndex@CTableTransferEffect@@QEBA_NIPEAI0@Z @ 0x18017677C (-PropertyIdToColorChannelAndIndex@CTableTransferEffect@@QEBA_NIPEAI0@Z.c)
 */

__int64 __fastcall CTableTransferEffect::SetProperty(CTableTransferEffect *a1, unsigned int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float v5; // xmm1_4
  __int64 v6; // r11
  float *v7; // rdx
  unsigned int v9[6]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  if ( a3 == 18
    && (v5 = *a4, CTableTransferEffect::PropertyIdToColorChannelAndIndex(a1, a2, &v10, v9))
    && (v7 = (float *)(*(_QWORD *)(v6 + 40 * (v10 + 5LL)) + 4LL * v9[0])) != 0LL )
  {
    if ( *v7 != v5 )
    {
      *v7 = v5;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, 0LL, 0LL);
    }
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x8Fu);
  }
  return v4;
}
