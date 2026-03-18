/*
 * XREFs of ?OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180082680
 * Callers:
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A64A0 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180022644 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x180082AEC (-HasValidTemplate@CEffectBrush@@AEBA_NXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::OnPropertyValueChanged(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  CSpriteVisualContent *v4; // rdi
  __int64 v9; // rsi
  signed int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  double (__fastcall *v13)(CSpriteVisualContent *, _QWORD, _QWORD); // rax
  _DWORD v15[4]; // [rsp+40h] [rbp-28h] BYREF
  char v16; // [rsp+70h] [rbp+8h] BYREF

  v4 = (CSpriteVisualContent *)(a1 - 80);
  if ( CEffectBrush::HasValidTemplate((CEffectBrush *)(a1 - 80)) )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL) + 48LL);
    if ( a2 < (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9) )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char *, _DWORD *))(**(_QWORD **)(a1 + 24) + 32LL))(
              *(_QWORD *)(a1 + 24),
              a2,
              a3,
              a4,
              &v16,
              v15);
      v11 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x2CEu);
        return v11;
      }
      if ( v16 || (v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 48LL))(v9), v15[0] != v12 - 1) )
        CSpriteVisualContent::ReleasePrimitiveCaches(v4);
      v13 = *(double (__fastcall **)(CSpriteVisualContent *, _QWORD, _QWORD))(*(_QWORD *)v4 + 64LL);
      if ( (char *)v13 == (char *)CResource::NotifyOnChanged )
        CResource::NotifyOnChanged(v4, 0LL, 0LL);
      else
        v13(v4, 0LL, 0LL);
    }
    return 0;
  }
  else
  {
    v11 = -2147483634;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8000000E, 0x2BFu);
  }
  return v11;
}
