/*
 * XREFs of ?RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400054E0
 * Callers:
 *     ?DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140006500 (-DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?RemovePipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140006FF0 (-RemovePipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?QueryInterface@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400060A0 (-QueryInterface@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000EC10 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::RemovePipe(
        CSystemAudioDeviceSharedBase *this,
        struct CPipeInstance *a2)
{
  void (__fastcall ***v4)(_QWORD, GUID *, CAudioDeviceGraph **); // rcx
  void (__fastcall *v5)(_QWORD, GUID *, CAudioDeviceGraph **); // rax
  int (*v6)(CAudioDeviceGraph *__hidden, struct CPipeInstance *); // rax
  int v7; // eax
  unsigned int v8; // ebx
  CAudioDeviceGraph *v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+28h] [rbp-30h]
  __int128 v12; // [rsp+38h] [rbp-20h] BYREF

  v11 = *(_OWORD *)((char *)this - 56);
  v12 = v11;
  EtwEventActivityIdControl(4LL, &v12);
  v4 = (void (__fastcall ***)(_QWORD, GUID *, CAudioDeviceGraph **))*((_QWORD *)this + 3);
  v10 = 0LL;
  if ( !v4 )
    goto LABEL_12;
  v5 = **v4;
  if ( (char *)v5 == (char *)ATL::CComObject<CAudioDeviceGraph>::QueryInterface )
    ATL::CComObject<CAudioDeviceGraph>::QueryInterface(v4, &GUID_a58eaafa_16b4_41ca_82d6_645113442e7d, &v10);
  else
    v5(v4, &GUID_a58eaafa_16b4_41ca_82d6_645113442e7d, &v10);
  if ( v10 )
  {
    v6 = *(int (**)(CAudioDeviceGraph *__hidden, struct CPipeInstance *))(*(_QWORD *)v10 + 48LL);
    if ( v6 == CAudioDeviceGraph::RemovePipe )
      v7 = CAudioDeviceGraph::RemovePipe(v10, a2);
    else
      v7 = ((__int64 (__fastcall *)(CAudioDeviceGraph *, struct CPipeInstance *))v6)(v10, a2);
    v8 = v7;
    if ( v10 )
      (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  else
  {
LABEL_12:
    v8 = -2147467262;
  }
  EtwEventActivityIdControl(4LL, &v12);
  return v8;
}
