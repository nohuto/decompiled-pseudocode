/*
 * XREFs of ?RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x14004252C
 * Callers:
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x14000A600 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000EC10 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x14003077C (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x1400307A4 (-CopyTo@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CConnectionInstance::RemoveCaptureConnection(
        CConnectionInstance *this,
        struct IAudioProcessor *a2,
        __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // [rsp+60h] [rbp+20h] BYREF
  __int64 v10; // [rsp+78h] [rbp+38h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 40) == 2 )
    {
      if ( (int)ATL::CComPtrBase<IAudioProcessingObject>::CopyTo((_QWORD *)(*(_QWORD *)(v6 + 32) + 40LL), &v10) < 0 )
        goto LABEL_18;
      (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 104LL))(
        a2,
        a3,
        v10,
        *((_QWORD *)this + 1));
      ATL::CComPtrBase<IAudioProcessingObject>::Release(&v10);
    }
    else if ( *(_DWORD *)(v6 + 40) == 1 || *(_DWORD *)(v6 + 40) == 3 )
    {
      if ( (****(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(v6 + 32))(
             **(_QWORD **)(v6 + 32),
             &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
             &v9) < 0 )
        goto LABEL_18;
      (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64))(*(_QWORD *)a2 + 136LL))(a2, a3, v9);
      ATL::CComPtrBase<IAudioProcessingObject>::Release(&v9);
    }
  }
  v7 = *((_QWORD *)this + 3);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 40);
    if ( v8 == 2 )
    {
      if ( (int)ATL::CComPtrBase<IAudioProcessingObject>::CopyTo((_QWORD *)(*(_QWORD *)(v7 + 32) + 40LL), &v10) >= 0 )
      {
        (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 80LL))(
          a2,
          a3,
          v10,
          *((_QWORD *)this + 1));
        ATL::CComPtrBase<IAudioProcessingObject>::Release(&v10);
      }
    }
    else if ( (v8 == 1 || v8 == 3 || v8 == 5)
           && (****(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(v7 + 32))(
                **(_QWORD **)(v7 + 32),
                &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
                &v9) >= 0 )
    {
      (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64))(*(_QWORD *)a2 + 136LL))(a2, a3, v9);
      ATL::CComPtrBase<IAudioProcessingObject>::Release(&v9);
    }
  }
LABEL_18:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
}
