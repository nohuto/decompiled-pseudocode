/*
 * XREFs of ?_UpdateEdgyInputConfiguration@CManipulation@@AEAAJW4Enum@EdgyInputSourceUpdateType@@@Z @ 0x180171E28
 * Callers:
 *     ??1CManipulation@@UEAA@XZ @ 0x1801702B8 (--1CManipulation@@UEAA@XZ.c)
 *     ?ProcessUpdateEdgyConfiguration@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_UPDATEEDGYCONFIGURATION@@@Z @ 0x180170880 (-ProcessUpdateEdgyConfiguration@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x1800AA9E4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ?UpdateInputThreadEdgyConfiguration@CInputManager@@QEAAJAEBUEdgyInputSource@@@Z @ 0x1801950D4 (-UpdateInputThreadEdgyConfiguration@CInputManager@@QEAAJAEBUEdgyInputSource@@@Z.c)
 */

__int64 __fastcall CManipulation::_UpdateEdgyInputConfiguration(__int64 a1, int a2)
{
  unsigned int v2; // edi
  signed int WeakReferenceBase; // eax
  __int64 v6; // rsi
  __int128 v7; // xmm0
  __int64 v8; // rax
  __int128 v9; // xmm1
  signed int updated; // eax
  __int64 v12; // [rsp+30h] [rbp-58h] BYREF
  int v13; // [rsp+38h] [rbp-50h]
  __int128 v14; // [rsp+3Ch] [rbp-4Ch]
  __int128 v15; // [rsp+4Ch] [rbp-3Ch]
  __int64 v16; // [rsp+5Ch] [rbp-2Ch]

  v2 = 0;
  if ( a2 == 1 )
    goto LABEL_7;
  if ( !*(_DWORD *)(a1 + 532) )
    RaiseFailFastException(0LL, 0LL, 0);
  if ( *(_QWORD *)(a1 + 560)
    || (WeakReferenceBase = CComposition::GetWeakReferenceBase(
                              *(CComposition **)(a1 + 16),
                              (struct CResource *)a1,
                              (struct CWeakReferenceBase **)(a1 + 560)),
        v2 = WeakReferenceBase,
        WeakReferenceBase >= 0) )
  {
LABEL_7:
    v6 = *(_QWORD *)(a1 + 560);
    if ( v6 )
    {
      memset_0(&v12, 0, 0x38uLL);
      v7 = *(_OWORD *)(a1 + 520);
      v8 = *(_QWORD *)(a1 + 16);
      v9 = *(_OWORD *)(a1 + 536);
      v13 = a2;
      v14 = v7;
      v12 = v6;
      v16 = *(_QWORD *)(a1 + 552);
      v15 = v9;
      updated = CInputManager::UpdateInputThreadEdgyConfiguration(
                  *(CInputManager **)(v8 + 96),
                  (const struct EdgyInputSource *)&v12);
      v2 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, updated, 0x437u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, WeakReferenceBase, 0x42Au);
  }
  return v2;
}
