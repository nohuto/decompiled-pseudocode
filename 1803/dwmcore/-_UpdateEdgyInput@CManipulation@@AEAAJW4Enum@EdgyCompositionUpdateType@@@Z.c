/*
 * XREFs of ?_UpdateEdgyInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x18019AE14
 * Callers:
 *     ??1CManipulation@@UEAA@XZ @ 0x180198F84 (--1CManipulation@@UEAA@XZ.c)
 *     ?ProcessUpdateEdgyConfiguration@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_UPDATEEDGYCONFIGURATION@@@Z @ 0x180199590 (-ProcessUpdateEdgyConfiguration@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_.c)
 * Callees:
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x180034994 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?UpdateEdgyInput@CInputManager@@QEAAJAEBUEdgyCompositionConfigurationUpdate@@@Z @ 0x1801CDD44 (-UpdateEdgyInput@CInputManager@@QEAAJAEBUEdgyCompositionConfigurationUpdate@@@Z.c)
 */

__int64 __fastcall CManipulation::_UpdateEdgyInput(__int64 a1, int a2)
{
  unsigned int v2; // edi
  int WeakReferenceBase; // eax
  __int64 v6; // rbp
  __int128 v7; // xmm0
  __int64 v8; // rax
  __int128 v9; // xmm1
  int updated; // eax
  __int64 v12; // [rsp+30h] [rbp-58h] BYREF
  int v13; // [rsp+38h] [rbp-50h]
  __int128 v14; // [rsp+40h] [rbp-48h]
  __int128 v15; // [rsp+50h] [rbp-38h]
  __int64 v16; // [rsp+60h] [rbp-28h]
  const void *retaddr; // [rsp+88h] [rbp+0h]

  v2 = 0;
  if ( a2 )
  {
    if ( a2 != 1 )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 1108) )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    if ( !*(_QWORD *)(a1 + 1136) )
    {
      WeakReferenceBase = CComposition::GetWeakReferenceBase(
                            *(CComposition **)(a1 + 16),
                            (struct CResource *)a1,
                            (struct CWeakReferenceBase **)(a1 + 1136));
      v2 = WeakReferenceBase;
      if ( WeakReferenceBase < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WeakReferenceBase, 0x443u);
        return v2;
      }
    }
  }
  v6 = *(_QWORD *)(a1 + 1136);
  if ( v6 )
  {
    memset_0(&v12, 0, 0x38uLL);
    v7 = *(_OWORD *)(a1 + 1096);
    v8 = *(_QWORD *)(a1 + 16);
    v9 = *(_OWORD *)(a1 + 1112);
    v12 = v6;
    v14 = v7;
    v13 = a2;
    v16 = *(_QWORD *)(a1 + 1128);
    v15 = v9;
    updated = CInputManager::UpdateEdgyInput(
                *(CInputManager **)(v8 + 96),
                (const struct EdgyCompositionConfigurationUpdate *)&v12);
    v2 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x459u);
  }
  return v2;
}
