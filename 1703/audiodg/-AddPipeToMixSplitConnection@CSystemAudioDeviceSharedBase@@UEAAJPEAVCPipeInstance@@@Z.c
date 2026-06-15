/*
 * XREFs of ?AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400055E0
 * Callers:
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x1400037B0 (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x1400062A0 (-ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?GetLatency@CSystemAudioDeviceSharedBase@@UEAA_JXZ @ 0x140004D10 (-GetLatency@CSystemAudioDeviceSharedBase@@UEAA_JXZ.c)
 *     ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400060A0 (-QueryInterface@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000F1A0 (-AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::AddPipeToMixSplitConnection(
        CSystemAudioDeviceSharedBase *this,
        struct CPipeInstance *a2)
{
  __int64 (__fastcall *v4)(CSystemAudioDeviceSharedBase *); // rax
  void (__fastcall ***v5)(_QWORD, GUID *, CAudioDeviceGraph **); // rcx
  void (__fastcall *v6)(_QWORD, GUID *, CAudioDeviceGraph **); // rax
  __int64 (__fastcall *v7)(CAudioDeviceGraph *__hidden, struct CPipeInstance *); // rax
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
  v11 = 0LL;
  if ( !v5 )
    goto LABEL_14;
  v6 = **v5;
  if ( (char *)v6 == (char *)ATL::CComObject<CAudioDeviceGraph>::QueryInterface )
    ATL::CComObject<CAudioDeviceGraph>::QueryInterface(v5, &GUID_a58eaafa_16b4_41ca_82d6_645113442e7d, &v11);
  else
    v6(v5, &GUID_a58eaafa_16b4_41ca_82d6_645113442e7d, &v11);
  if ( v11 )
  {
    v7 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden, struct CPipeInstance *))(*(_QWORD *)v11 + 24LL);
    if ( v7 == CAudioDeviceGraph::AddPipeToMixSplitConnection )
      v8 = CAudioDeviceGraph::AddPipeToMixSplitConnection(v11, a2);
    else
      v8 = v7(v11, a2);
    v9 = v8;
    if ( v11 )
      (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  else
  {
LABEL_14:
    v9 = -2147467262;
  }
  EtwEventActivityIdControl(4LL, &v13);
  return v9;
}
