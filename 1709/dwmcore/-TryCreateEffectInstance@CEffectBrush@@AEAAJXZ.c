/*
 * XREFs of ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x180082B00
 * Callers:
 *     ?OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180082D10 (-OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETTEMPLATE@@@Z @ 0x18008308C (-ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETTEMPLATE@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x180082AEC (-HasValidTemplate@CEffectBrush@@AEBA_NXZ.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x180084604 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::TryCreateEffectInstance(CEffectBrush *this)
{
  unsigned int v1; // ebx
  __int64 **v2; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  signed int v7; // eax
  __int64 v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rbx
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rax
  signed int v12; // eax

  v1 = 0;
  v2 = (__int64 **)((char *)this + 104);
  if ( !*((_QWORD *)this + 13) && CEffectBrush::HasValidTemplate(this) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 88) + 72LL) + 48LL);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v6 + 96LL))(v6, v2);
    v1 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x19Cu);
      return v1;
    }
    v8 = *((_QWORD *)this + 12);
    if ( v8 )
      *(_QWORD *)(v8 + 136) = (char *)this + 80;
  }
  if ( *v2 )
  {
    if ( !(*(__int64 (__fastcall **)(__int64 *))(**v2 + 64))(*v2) )
    {
      if ( CCompiledEffectTemplate::GetCompiledEffectNoRef(*((CCompiledEffectTemplate **)this + 11)) )
      {
        v9 = *v2;
        v10 = *v9;
        CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(*((CCompiledEffectTemplate **)this + 11));
        v12 = (*(__int64 (__fastcall **)(__int64 *, const struct Windows::UI::Composition::ICompiledEffect *))(v10 + 56))(
                v9,
                CompiledEffectNoRef);
        v1 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x1ADu);
      }
    }
  }
  return v1;
}
