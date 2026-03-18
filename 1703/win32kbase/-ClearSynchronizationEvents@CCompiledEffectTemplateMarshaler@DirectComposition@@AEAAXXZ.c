/*
 * XREFs of ?ClearSynchronizationEvents@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAAXXZ @ 0x1C0002D30
 * Callers:
 *     ?ReleaseAllReferences@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0002A90 (-ReleaseAllReferences@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAXPEAVCApplicationC.c)
 *     ?SetRemarshalingFlags@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0144D50 (-SetRemarshalingFlags@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C008207C (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

void __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::ClearSynchronizationEvents(
        DirectComposition::CCompiledEffectTemplateMarshaler *this,
        unsigned int a2)
{
  DirectComposition::CEvent *v3; // rcx
  __int64 v4; // rcx
  unsigned int v5; // edx
  DirectComposition::CEvent *v6; // rcx

  v3 = (DirectComposition::CEvent *)*((_QWORD *)this + 10);
  if ( v3 )
  {
    DirectComposition::CEvent::`scalar deleting destructor'(v3, a2);
    *((_QWORD *)this + 10) = 0LL;
  }
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    KeSetEvent(*(PRKEVENT *)(v4 + 8), 1, 0);
    v6 = (DirectComposition::CEvent *)*((_QWORD *)this + 9);
    if ( v6 )
      DirectComposition::CEvent::`scalar deleting destructor'(v6, v5);
    *((_QWORD *)this + 9) = 0LL;
  }
}
