/*
 * XREFs of ?FindCriticalAPO@CEndpointCharacteristics@@AEAAHPEAUIAudioSystemEffects2@@@Z @ 0x1800EABD8
 * Callers:
 *     ?InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ @ 0x1800EC1C0 (-InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::FindCriticalAPO(
        CEndpointCharacteristics *this,
        struct IAudioSystemEffects2 *a2)
{
  unsigned int v2; // edx
  unsigned int v3; // ebx
  __int64 v4; // rax
  CEndpointCharacteristics *v6; // [rsp+50h] [rbp+8h] BYREF
  LPVOID pv; // [rsp+58h] [rbp+10h] BYREF

  v6 = this;
  pv = 0LL;
  if ( ((int (__fastcall *)(struct IAudioSystemEffects2 *, LPVOID *, CEndpointCharacteristics **, _QWORD))a2->lpVtbl->GetEffectsList)(
         a2,
         &pv,
         &v6,
         0LL) >= 0
    && (v2 = 0, (_DWORD)v6) )
  {
    v3 = 1;
    while ( 1 )
    {
      v4 = *((_QWORD *)pv + 2 * v2) - *(_QWORD *)&GUID_6f64adcc_8211_11e2_8c70_2c27d7f001fa.Data1;
      if ( !v4 )
        v4 = *((_QWORD *)pv + 2 * v2 + 1) - *(_QWORD *)GUID_6f64adcc_8211_11e2_8c70_2c27d7f001fa.Data4;
      if ( !v4 )
        break;
      if ( ++v2 >= (unsigned int)v6 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v3 = 0;
  }
  CoTaskMemFree(pv);
  return v3;
}
