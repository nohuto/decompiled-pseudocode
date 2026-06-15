/*
 * XREFs of ?AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x140040D3C
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140009D30 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x14002F324 (-CopyTo@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CConnectionInstance::AddCaptureConnection(
        CConnectionInstance *this,
        struct IAudioProcessor *a2,
        __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // edi
  __int64 *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 *v16; // rcx
  _QWORD *v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 *v24; // rcx
  _QWORD *v25; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 *v27; // [rsp+60h] [rbp+20h] BYREF

  v6 = *((_QWORD *)this + 4);
  if ( !v6 )
  {
    if ( !*((_QWORD *)this + 3) )
    {
      v7 = 430LL;
LABEL_4:
      v8 = -2005139396;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
        (const char *)0x887C003CLL);
      return v8;
    }
    goto LABEL_29;
  }
  if ( *(_DWORD *)(v6 + 40) != 2 )
  {
    if ( *(_DWORD *)(v6 + 40) != 1 && *(_DWORD *)(v6 + 40) != 3 )
    {
      v7 = 459LL;
      goto LABEL_4;
    }
    v17 = *(_QWORD **)(v6 + 32);
    v27 = 0LL;
    v18 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 **))*v17)(
            *v17,
            &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
            &v27);
    v8 = v18;
    if ( v18 < 0 )
    {
      v19 = 454LL;
      goto LABEL_24;
    }
    v18 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 104LL))(
            a2,
            a3,
            *((_QWORD *)this + 1),
            v27);
    v8 = v18;
    if ( v18 < 0 )
    {
      v19 = 455LL;
      goto LABEL_24;
    }
    v16 = v27;
    if ( v27 )
    {
      v15 = *v27;
      goto LABEL_28;
    }
LABEL_29:
    v20 = *((_QWORD *)this + 3);
    if ( !v20 )
      return 0LL;
    v21 = *(_DWORD *)(v20 + 40);
    if ( v21 == 2 )
    {
      v22 = *(_QWORD *)(v20 + 32);
      v27 = 0LL;
      v11 = ATL::CComPtrBase<IAudioProcessingObject>::CopyTo((_QWORD *)(v22 + 40), &v27);
      v12 = v11;
      v13 = v27;
      if ( v11 < 0 )
      {
        v14 = 472LL;
        goto LABEL_12;
      }
      v11 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, __int64 *, _QWORD))(*(_QWORD *)a2 + 72LL))(
              a2,
              a3,
              v27,
              *((_QWORD *)this + 1));
      v12 = v11;
      if ( v11 < 0 )
      {
        v14 = 473LL;
        goto LABEL_12;
      }
      if ( v13 )
      {
        v23 = *v13;
        v24 = v13;
LABEL_37:
        (*(void (__fastcall **)(__int64 *))(v23 + 16))(v24);
      }
      return 0LL;
    }
    if ( ((v21 - 1) & 0xFFFFFFF9) != 0 || v21 == 7 )
    {
      v7 = 490LL;
      goto LABEL_4;
    }
    v25 = *(_QWORD **)(v20 + 32);
    v27 = 0LL;
    v18 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 **))*v25)(
            *v25,
            &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
            &v27);
    v8 = v18;
    if ( v18 >= 0 )
    {
      v18 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 112LL))(
              a2,
              a3,
              *((_QWORD *)this + 1),
              v27);
      v8 = v18;
      if ( v18 >= 0 )
      {
        v24 = v27;
        if ( !v27 )
          return 0LL;
        v23 = *v27;
        goto LABEL_37;
      }
      v19 = 486LL;
    }
    else
    {
      v19 = 485LL;
    }
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
      (const char *)(unsigned int)v18);
    if ( v27 )
      (*(void (__fastcall **)(__int64 *))(*v27 + 16))(v27);
    return v8;
  }
  v10 = *(_QWORD *)(v6 + 32);
  v27 = 0LL;
  v11 = ATL::CComPtrBase<IAudioProcessingObject>::CopyTo((_QWORD *)(v10 + 40), &v27);
  v12 = v11;
  v13 = v27;
  if ( v11 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(struct IAudioProcessor *, __int64, __int64 *, _QWORD))(*(_QWORD *)a2 + 88LL))(
            a2,
            a3,
            v27,
            *((_QWORD *)this + 1));
    v12 = v11;
    if ( v11 < 0 )
    {
      v14 = 442LL;
      goto LABEL_12;
    }
    if ( v13 )
    {
      v15 = *v13;
      v16 = v13;
LABEL_28:
      (*(void (__fastcall **)(__int64 *))(v15 + 16))(v16);
      goto LABEL_29;
    }
    goto LABEL_29;
  }
  v14 = 441LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
    (const char *)(unsigned int)v11);
  if ( v13 )
    (*(void (__fastcall **)(__int64 *))(*v13 + 16))(v13);
  return v12;
}
