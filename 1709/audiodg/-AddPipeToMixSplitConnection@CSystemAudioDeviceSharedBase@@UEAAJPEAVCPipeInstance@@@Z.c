/*
 * XREFs of ?AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000F780
 * Callers:
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x140001E70 (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x140010340 (-ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000C080 (-AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?GetLatency@CSystemAudioDeviceSharedBase@@UEAA_JXZ @ 0x14000EF60 (-GetLatency@CSystemAudioDeviceSharedBase@@UEAA_JXZ.c)
 *     ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400100D0 (-QueryInterface@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::AddPipeToMixSplitConnection(
        CSystemAudioDeviceSharedBase *this,
        struct CPipeInstance *a2)
{
  __int64 (__fastcall *v4)(CSystemAudioDeviceSharedBase *); // rax
  void (__fastcall ***v5)(_QWORD, GUID *, CAudioDeviceGraph **); // rax
  CAudioDeviceGraph *v6; // rcx
  __int64 (__fastcall *v7)(CAudioDeviceGraph *, struct CPipeInstance *); // rax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  CAudioDeviceGraph *v11; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+28h] [rbp-30h]
  __int128 v13; // [rsp+38h] [rbp-20h] BYREF

  v12 = *(_OWORD *)((char *)this - 56);
  v13 = v12;
  EtwEventActivityIdControl(4LL, &v13);
  v4 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)this + 64LL);
  if ( v4 == CSystemAudioDeviceSharedBase::GetLatency )
    CSystemAudioDeviceSharedBase::GetLatency(this);
  else
    v4(this);
  v5 = (void (__fastcall ***)(_QWORD, GUID *, CAudioDeviceGraph **))*((_QWORD *)this + 3);
  v6 = 0LL;
  v11 = 0LL;
  if ( !v5 )
    goto LABEL_13;
  if ( (char *)**v5 == (char *)ATL::CComObject<CAudioDeviceGraph>::QueryInterface )
    ATL::CComObject<CAudioDeviceGraph>::QueryInterface(v5, &GUID_a58eaafa_16b4_41ca_82d6_645113442e7d, &v11);
  else
    (**v5)(v5, &GUID_a58eaafa_16b4_41ca_82d6_645113442e7d, &v11);
  v6 = v11;
  if ( v11 )
  {
    v7 = *(__int64 (__fastcall **)(CAudioDeviceGraph *, struct CPipeInstance *))(*(_QWORD *)v11 + 24LL);
    if ( v7 == CAudioDeviceGraph::AddPipeToMixSplitConnection )
      v8 = CAudioDeviceGraph::AddPipeToMixSplitConnection(v11, a2);
    else
      v8 = v7(v11, a2);
    v6 = v11;
    v9 = v8;
  }
  else
  {
LABEL_13:
    v9 = -2147467262;
  }
  if ( v6 )
    (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)v6 + 16LL))(v6);
  EtwEventActivityIdControl(4LL, &v13);
  return v9;
}
