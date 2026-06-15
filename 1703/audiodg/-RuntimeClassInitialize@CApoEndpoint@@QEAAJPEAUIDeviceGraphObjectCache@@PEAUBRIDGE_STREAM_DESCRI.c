/*
 * XREFs of ?RuntimeClassInitialize@CApoEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x1400351EC
 * Callers:
 *     ??$MakeAndInitialize@VCApoEndpoint@@V1@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAVCApoEndpoint@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Z @ 0x140034B70 (--$MakeAndInitialize@VCApoEndpoint@@V1@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESC.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     memset @ 0x14001DC2C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140034E94 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140034F50 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAUAPOInitSystemEffects2@@@Z @ 0x140034FC0 (-FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAU.c)
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
  _QWORD v15[6]; // [rsp+30h] [rbp-99h] BYREF
  struct APOInitSystemEffects2 v16; // [rsp+60h] [rbp-69h] BYREF

  memset(v15, 0, 0x28uLL);
  v10 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))a5->lpVtbl->GetAudioFormat)(a5);
  inited = CloneWaveFormat(v10, (struct tWAVEFORMATEX **)this + 4);
  if ( *((struct IUnknown **)this + 5) != a2 )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 5, a2);
  if ( inited >= 0 )
  {
    v12 = *((_QWORD *)this + 5);
    LODWORD(v15[2]) = a6;
    LODWORD(v15[4]) = 1094927443;
    v15[3] = a5;
    inited = (*(__int64 (__fastcall **)(__int64, _QWORD *, char *))(*(_QWORD *)v12 + 40LL))(v12, v15, (char *)this + 48);
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
          memset(&v16, 0, sizeof(v16));
          inited = FillAuxiliaryInputInitStruct(a3, a4, &v16);
          if ( inited >= 0 )
          {
            inited = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct APOInitSystemEffects2 *, _QWORD *))(**((_QWORD **)this + 7) + 24LL))(
                       *((_QWORD *)this + 7),
                       v13,
                       88LL,
                       &v16,
                       v15);
            if ( inited >= 0 )
              *((_DWORD *)this + 18) = v13;
          }
          if ( v16.pAPOEndpointProperties )
          {
            ((void (__fastcall *)(IPropertyStore *))v16.pAPOEndpointProperties->lpVtbl->Release)(v16.pAPOEndpointProperties);
            v16.pAPOEndpointProperties = 0LL;
          }
          if ( v16.pAPOSystemEffectsProperties )
          {
            ((void (__fastcall *)(IPropertyStore *))v16.pAPOSystemEffectsProperties->lpVtbl->Release)(v16.pAPOSystemEffectsProperties);
            v16.pAPOSystemEffectsProperties = 0LL;
          }
          if ( v16.pDeviceCollection )
            ((void (__fastcall *)(IMMDeviceCollection *))v16.pDeviceCollection->lpVtbl->Release)(v16.pDeviceCollection);
        }
      }
    }
  }
  return (unsigned int)inited;
}
