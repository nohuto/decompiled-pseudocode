/*
 * XREFs of ?OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800953F0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x1800955F8 (-HasValidTemplate@CEffectBrush@@AEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::OnPropertyValueChanged(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  CVisual *v4; // rdi
  __int64 v9; // rsi
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  int v13; // eax
  __int64 (__fastcall *v14)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *); // rax
  _DWORD v16[4]; // [rsp+40h] [rbp-28h] BYREF
  char v17; // [rsp+70h] [rbp+8h] BYREF

  v4 = (CVisual *)(a1 - 72);
  if ( CEffectBrush::HasValidTemplate((CEffectBrush *)(a1 - 72)) )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL) + 48LL);
    if ( a2 < (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9) )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char *, _DWORD *))(**(_QWORD **)(a1 + 24) + 32LL))(
              *(_QWORD *)(a1 + 24),
              a2,
              a3,
              a4,
              &v17,
              v16);
      v11 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x309u);
        return v11;
      }
      v12 = 1;
      if ( v17 || (v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 48LL))(v9), v16[0] != v13 - 1) )
        v12 = 6;
      v14 = *(__int64 (__fastcall **)(CVisual *, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden), CCompositionSurfaceBitmap *))(*(_QWORD *)v4 + 64LL);
      if ( v14 == CResource::NotifyOnChanged )
        CResource::NotifyOnChanged(v4, (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))v12, v4);
      else
        v14(v4, (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))v12, v4);
    }
    return 0;
  }
  else
  {
    v11 = -2147483634;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147483634, 0x2FAu);
  }
  return v11;
}
