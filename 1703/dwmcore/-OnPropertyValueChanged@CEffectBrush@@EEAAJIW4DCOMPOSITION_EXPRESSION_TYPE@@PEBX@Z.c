/*
 * XREFs of ?OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800107D0
 * Callers:
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180031BF0 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x180010C38 (-HasValidTemplate@CEffectBrush@@AEBA_NXZ.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x18008D4C4 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::OnPropertyValueChanged(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  CSpriteVisualContent *v4; // rdi
  __int64 v9; // rsi
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  _DWORD v14[4]; // [rsp+40h] [rbp-28h] BYREF
  char v15; // [rsp+70h] [rbp+8h] BYREF

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
              &v15,
              v14);
      v11 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2BEu);
        return v11;
      }
      if ( v15 || (v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 48LL))(v9), v14[0] != v12 - 1) )
        CSpriteVisualContent::ReleasePrimitiveCaches(v4);
      CResource::NotifyOnChanged(v4, 0LL, 0LL);
    }
    return 0;
  }
  else
  {
    v11 = -2147483634;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147483634, 0x2AFu);
  }
  return v11;
}
