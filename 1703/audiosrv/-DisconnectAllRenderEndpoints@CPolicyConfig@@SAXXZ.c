/*
 * XREFs of ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x18009BC68
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x18001CA60 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     PolicyConfigSetAccessibilityAudioMonoMixState @ 0x18009F710 (PolicyConfigSetAccessibilityAudioMonoMixState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x18009BDBC (-DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void CPolicyConfig::DisconnectAllRenderEndpoints(void)
{
  unsigned int i; // ebx
  unsigned int v1; // [rsp+50h] [rbp+10h] BYREF
  __int64 v2; // [rsp+58h] [rbp+18h] BYREF
  struct IMMDevice *v3; // [rsp+60h] [rbp+20h] BYREF

  v2 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         0LL,
         1LL,
         &v2) >= 0 )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v2 + 24LL))(v2, &v1);
    for ( i = 0; i < v1; ++i )
    {
      v3 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v2 + 32LL))(v2, i, &v3) >= 0 )
        CPolicyConfig::DisconnectHelper(v3);
      if ( v3 )
        ((void (__fastcall *)(struct IMMDevice *))v3->lpVtbl->Release)(v3);
    }
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
