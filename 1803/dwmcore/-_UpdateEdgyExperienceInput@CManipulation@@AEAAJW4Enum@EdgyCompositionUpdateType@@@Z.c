/*
 * XREFs of ?_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x18019AC98
 * Callers:
 *     ??1CManipulation@@UEAA@XZ @ 0x180198F84 (--1CManipulation@@UEAA@XZ.c)
 *     ?ProcessUpdateEdgyExperienceSource@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_UPDATEEDGYEXPERIENCESOURCE@@@Z @ 0x180199714 (-ProcessUpdateEdgyExperienceSource@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATI.c)
 * Callees:
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x180034994 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?UpdateEdgyInput@CInputManager@@QEAAJAEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801CDDD0 (-UpdateEdgyInput@CInputManager@@QEAAJAEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 */

__int64 __fastcall CManipulation::_UpdateEdgyExperienceInput(__int64 a1, int a2)
{
  unsigned int v3; // edi
  int WeakReferenceBase; // eax
  __int64 v6; // rsi
  __int64 v7; // rdx
  _OWORD *v8; // rax
  int *v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int updated; // eax
  __int64 v19; // [rsp+30h] [rbp-248h] BYREF
  int v20; // [rsp+38h] [rbp-240h]
  int v21; // [rsp+40h] [rbp-238h] BYREF
  const void *retaddr; // [rsp+278h] [rbp+0h]

  v3 = 0;
  if ( a2 == 2 )
  {
    if ( !*(_DWORD *)(a1 + 572) )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    if ( !*(_QWORD *)(a1 + 1136) )
    {
      WeakReferenceBase = CComposition::GetWeakReferenceBase(
                            *(CComposition **)(a1 + 16),
                            (struct CResource *)a1,
                            (struct CWeakReferenceBase **)(a1 + 1136));
      v3 = WeakReferenceBase;
      if ( WeakReferenceBase < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WeakReferenceBase, 0x473u);
        return v3;
      }
    }
  }
  else if ( a2 != 3 )
  {
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  }
  v6 = *(_QWORD *)(a1 + 1136);
  if ( v6 )
  {
    memset_0(&v19, 0, 0x218uLL);
    v7 = 4LL;
    v19 = v6;
    v20 = a2;
    v8 = (_OWORD *)(a1 + 572);
    v9 = &v21;
    do
    {
      v10 = v8[1];
      *(_OWORD *)v9 = *v8;
      v11 = v8[2];
      *((_OWORD *)v9 + 1) = v10;
      v12 = v8[3];
      *((_OWORD *)v9 + 2) = v11;
      v13 = v8[4];
      *((_OWORD *)v9 + 3) = v12;
      v14 = v8[5];
      *((_OWORD *)v9 + 4) = v13;
      v15 = v8[6];
      *((_OWORD *)v9 + 5) = v14;
      v16 = v8[7];
      v8 += 8;
      *((_OWORD *)v9 + 6) = v15;
      v9 += 32;
      *((_OWORD *)v9 - 1) = v16;
      --v7;
    }
    while ( v7 );
    *(_QWORD *)v9 = *(_QWORD *)v8;
    v21 = *(_DWORD *)(a1 + 1092);
    updated = CInputManager::UpdateEdgyInput(
                *(CInputManager **)(*(_QWORD *)(a1 + 16) + 96LL),
                (const struct EdgyCompositionConfigurationUpdateEx *)&v19);
    v3 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x48Eu);
  }
  return v3;
}
