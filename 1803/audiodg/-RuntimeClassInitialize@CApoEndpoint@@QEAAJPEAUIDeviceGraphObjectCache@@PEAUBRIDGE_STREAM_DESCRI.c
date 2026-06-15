/*
 * XREFs of ?RuntimeClassInitialize@CApoEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x1400338EC
 * Callers:
 *     ??$MakeAndInitialize@VCApoEndpoint@@V1@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAVCApoEndpoint@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Z @ 0x14003328C (--$MakeAndInitialize@VCApoEndpoint@@V1@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESC.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140033578 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140033634 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAUAPOInitSystemEffects2@@@Z @ 0x1400336A4 (-FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAU.c)
 */

__int64 __fastcall CApoEndpoint::RuntimeClassInitialize(
        CApoEndpoint *this,
        struct IUnknown *a2,
        struct BRIDGE_STREAM_DESCRIPTOR *a3,
        struct IAudioProcessingObject *a4,
        struct IAudioMediaType *a5,
        unsigned int a6)
{
  const struct tWAVEFORMATEX *v10; // rax
  int inited; // ebx
  __int64 v12; // rcx
  unsigned __int32 v13; // edi
  _BYTE v15[16]; // [rsp+30h] [rbp-99h] BYREF
  unsigned int v16; // [rsp+40h] [rbp-89h]
  struct IAudioMediaType *v17; // [rsp+48h] [rbp-81h]
  int v18; // [rsp+50h] [rbp-79h]
  struct APOInitSystemEffects2 v19; // [rsp+60h] [rbp-69h] BYREF

  memset_0(v15, 0, 0x28uLL);
  v10 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))a5->lpVtbl->GetAudioFormat)(a5);
  inited = CloneWaveFormat(v10, (struct tWAVEFORMATEX **)this + 4);
  if ( *((struct IUnknown **)this + 5) != a2 )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 5, a2);
  if ( inited >= 0 )
  {
    v12 = *((_QWORD *)this + 5);
    v16 = a6;
    v18 = 1094927443;
    v17 = a5;
    inited = (*(__int64 (__fastcall **)(__int64, _BYTE *, char *))(*(_QWORD *)v12 + 40LL))(v12, v15, (char *)this + 48);
    if ( inited >= 0 )
    {
      inited = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, char *))a4->lpVtbl->QueryInterface)(
                 a4,
                 &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768,
                 (char *)this + 56);
      if ( inited >= 0 )
      {
        inited = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, char *))a4->lpVtbl->QueryInterface)(
                   a4,
                   &GUID_f851809c_c177_49a0_b1b2_b66f017943ab,
                   (char *)this + 64);
        if ( inited >= 0 )
        {
          do
            v13 = _InterlockedIncrement((volatile signed __int32 *)&g_AuxiliaryInputId);
          while ( !v13 );
          memset_0(&v19, 0, sizeof(v19));
          inited = FillAuxiliaryInputInitStruct(a3, a4, &v19);
          if ( inited >= 0 )
          {
            inited = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct APOInitSystemEffects2 *, _BYTE *))(**((_QWORD **)this + 7) + 24LL))(
                       *((_QWORD *)this + 7),
                       v13,
                       88LL,
                       &v19,
                       v15);
            if ( inited >= 0 )
              *((_DWORD *)this + 18) = v13;
          }
          if ( v19.pAPOEndpointProperties )
          {
            ((void (__fastcall *)(IPropertyStore *))v19.pAPOEndpointProperties->lpVtbl->Release)(v19.pAPOEndpointProperties);
            v19.pAPOEndpointProperties = 0LL;
          }
          if ( v19.pAPOSystemEffectsProperties )
          {
            ((void (__fastcall *)(IPropertyStore *))v19.pAPOSystemEffectsProperties->lpVtbl->Release)(v19.pAPOSystemEffectsProperties);
            v19.pAPOSystemEffectsProperties = 0LL;
          }
          if ( v19.pDeviceCollection )
            ((void (__fastcall *)(IMMDeviceCollection *))v19.pDeviceCollection->lpVtbl->Release)(v19.pDeviceCollection);
        }
      }
    }
  }
  return (unsigned int)inited;
}
