/*
 * XREFs of ?RemoveRenderConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x140010EB0
 * Callers:
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000EC10 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140009270 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x14003077C (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CConnectionInstance::RemoveRenderConnection(
        CConnectionInstance *this,
        struct IAudioProcessor *a2,
        __int64 a3)
{
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rbx
  void (*v12)(void); // rax
  CCrossProcessBaseServerEndpoint *v13; // rcx
  CCrossProcessBaseServerEndpoint *v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h]

  v15 = 0LL;
  v14 = 0LL;
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 40);
    if ( v7 == 2 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 40LL);
      v15 = v8;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 80LL))(
        a2,
        a3,
        v8,
        *((_QWORD *)this + 1));
      if ( v8 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
    }
    else if ( v7 == 1 || v7 == 3 )
    {
      if ( (****(int (__fastcall *****)(_QWORD, GUID *, CCrossProcessBaseServerEndpoint **))(v6 + 32))(
             **(_QWORD **)(v6 + 32),
             &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
             &v14) < 0 )
        goto LABEL_14;
      (*(void (__fastcall **)(struct IAudioProcessor *, __int64, CCrossProcessBaseServerEndpoint *))(*(_QWORD *)a2 + 136LL))(
        a2,
        a3,
        v14);
      ATL::CComPtrBase<IAudioProcessingObject>::Release(&v14);
    }
  }
  v9 = *((_QWORD *)this + 3);
  if ( !v9 )
    goto LABEL_14;
  v10 = *(_DWORD *)(v9 + 40);
  if ( v10 == 2 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 40LL);
    v15 = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    (*(void (__fastcall **)(struct IAudioProcessor *, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 104LL))(
      a2,
      a3,
      v11,
      *((_QWORD *)this + 1));
    if ( v11 )
    {
      v15 = 0LL;
      v12 = *(void (**)(void))(*(_QWORD *)v11 + 16LL);
LABEL_13:
      v12();
    }
  }
  else if ( (v10 == 3 || v10 == 1)
         && (****(int (__fastcall *****)(_QWORD, GUID *, CCrossProcessBaseServerEndpoint **))(v9 + 32))(
              **(_QWORD **)(v9 + 32),
              &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
              &v14) >= 0 )
  {
    (*(void (__fastcall **)(struct IAudioProcessor *, __int64, CCrossProcessBaseServerEndpoint *))(*(_QWORD *)a2 + 136LL))(
      a2,
      a3,
      v14);
    v13 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      v12 = *(void (**)(void))(*(_QWORD *)v13 + 16LL);
      if ( (char *)v12 != (char *)ATL::CComObject<CCrossProcessServerInputEndpoint>::Release )
        goto LABEL_13;
      ATL::CComObject<CCrossProcessServerInputEndpoint>::Release(v13);
    }
  }
LABEL_14:
  if ( v14 )
    (*(void (__fastcall **)(CCrossProcessBaseServerEndpoint *))(*(_QWORD *)v14 + 16LL))(v14);
}
