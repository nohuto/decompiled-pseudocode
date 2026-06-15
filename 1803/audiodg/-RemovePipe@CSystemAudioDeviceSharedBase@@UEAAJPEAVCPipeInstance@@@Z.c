/*
 * XREFs of ?RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x140012680
 * Callers:
 *     ?DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140004A80 (-DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?RemovePipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140005420 (-RemovePipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000DB40 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140012FF0 (-QueryInterface@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::RemovePipe(
        CSystemAudioDeviceSharedBase *this,
        struct CPipeInstance *a2)
{
  void (__fastcall ***v4)(_QWORD, GUID *, CAudioDeviceGraph **); // rax
  CAudioDeviceGraph *v5; // rcx
  __int64 (__fastcall *v6)(CAudioDeviceGraph *, struct CPipeInstance *); // rax
  unsigned int v7; // eax
  unsigned int v8; // ebx
  CAudioDeviceGraph *v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+28h] [rbp-30h]
  __int128 v12; // [rsp+38h] [rbp-20h] BYREF

  v11 = *(_OWORD *)((char *)this - 56);
  v12 = v11;
  EtwEventActivityIdControl(4LL, &v12);
  v4 = (void (__fastcall ***)(_QWORD, GUID *, CAudioDeviceGraph **))*((_QWORD *)this + 3);
  v5 = 0LL;
  v10 = 0LL;
  if ( !v4 )
    goto LABEL_11;
  if ( (char *)**v4 == (char *)ATL::CComObject<CAudioDeviceGraph>::QueryInterface )
    ATL::CComObject<CAudioDeviceGraph>::QueryInterface(v4, &GUID_394afc11_8be4_4e54_b91c_8fcc82d1f0a6, &v10);
  else
    (**v4)(v4, &GUID_394afc11_8be4_4e54_b91c_8fcc82d1f0a6, &v10);
  v5 = v10;
  if ( v10 )
  {
    v6 = *(__int64 (__fastcall **)(CAudioDeviceGraph *, struct CPipeInstance *))(*(_QWORD *)v10 + 48LL);
    if ( v6 == CAudioDeviceGraph::RemovePipe )
      v7 = CAudioDeviceGraph::RemovePipe(v10, a2);
    else
      v7 = v6(v10, a2);
    v5 = v10;
    v8 = v7;
  }
  else
  {
LABEL_11:
    v8 = -2147467262;
  }
  if ( v5 )
    (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)v5 + 16LL))(v5);
  EtwEventActivityIdControl(4LL, &v12);
  return v8;
}
