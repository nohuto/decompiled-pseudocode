/*
 * XREFs of ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x140010810
 * Callers:
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000EC10 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000EDF0 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140030394 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DoSpatialAudioProcessBlockRegistration@CAudioDeviceGraph@@AEAAJPEAUISpatialAudioProcessBlockRT@@PEAUIAdaptiveSpatialAudioRenderer@@_N@Z @ 0x140040B68 (-DoSpatialAudioProcessBlockRegistration@CAudioDeviceGraph@@AEAAJPEAUISpatialAudioProcessBlockRT@.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CAudioDeviceGraph::RegisterSpatialPipe(CAudioDeviceGraph *this, struct CPipeInstance *a2, bool a3)
{
  struct IAdaptiveSpatialAudioRenderer *v5; // rbx
  int v6; // r15d
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  struct ISpatialAudioProcessBlockRT *v10; // rdi
  int v11; // edi
  __int64 v12; // rsi
  __int64 v13; // rax
  struct ISpatialAudioProcessBlockRT *v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  struct ISpatialAudioProcessBlockRT *v17; // rdi
  int v19; // edi
  CAudioDeviceGraph *v20; // rcx
  int v21; // edi
  CAudioDeviceGraph *v22; // rcx
  struct ISpatialAudioProcessBlockRT *v23; // [rsp+20h] [rbp-30h] BYREF
  struct ISpatialAudioProcessBlockRT *v24; // [rsp+28h] [rbp-28h] BYREF
  struct ISpatialAudioProcessBlockRT *v25; // [rsp+30h] [rbp-20h] BYREF
  struct ISpatialAudioProcessBlockRT *v26; // [rsp+38h] [rbp-18h]
  __int64 v27; // [rsp+40h] [rbp-10h]
  struct IAdaptiveSpatialAudioRenderer *v28; // [rsp+80h] [rbp+30h] BYREF
  struct ISpatialAudioProcessBlockRT *v29; // [rsp+98h] [rbp+48h] BYREF

  v27 = -2LL;
  v5 = 0LL;
  v6 = 0;
  v7 = *((_QWORD *)this + 16);
  v24 = 0LL;
  v28 = 0LL;
  v8 = *(_QWORD *)(v7 + 24);
  if ( !v8 )
    goto LABEL_41;
  while ( 1 )
  {
    v9 = *(_QWORD *)(v8 + 16);
    v8 = *(_QWORD *)(v8 + 8);
    if ( *(_DWORD *)(v9 + 40) == 2 )
      break;
LABEL_9:
    if ( !v8 )
      goto LABEL_64;
  }
  v10 = *(struct ISpatialAudioProcessBlockRT **)(*(_QWORD *)(v9 + 32) + 40LL);
  v25 = v10;
  if ( v10 )
    (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v10 + 8LL))(v10);
  v29 = 0LL;
  if ( (**(int (__fastcall ***)(struct ISpatialAudioProcessBlockRT *, GUID *, struct ISpatialAudioProcessBlockRT **))v10)(
         v10,
         &GUID_24bdc606_d710_4d62_be35_be665fbc3e00,
         &v29) < 0 )
  {
    if ( v29 )
      (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v29 + 16LL))(v29);
    (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v10 + 16LL))(v10);
    goto LABEL_9;
  }
  v25 = 0LL;
  v24 = v10;
  if ( v29 )
    (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v29 + 16LL))(v29);
  if ( !v10 )
  {
LABEL_64:
    v5 = v28;
    goto LABEL_41;
  }
  v11 = (**(__int64 (__fastcall ***)(struct ISpatialAudioProcessBlockRT *, GUID *, struct IAdaptiveSpatialAudioRenderer **))v10)(
          v10,
          &GUID_24bdc606_d710_4d62_be35_be665fbc3e00,
          &v28);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v24);
  if ( v11 < 0 )
    goto LABEL_40;
  v23 = 0LL;
  v24 = 0LL;
  v12 = *((_QWORD *)a2 + 3);
  while ( v12 )
  {
    v13 = *(_QWORD *)(v12 + 16);
    v12 = *(_QWORD *)(v12 + 8);
    if ( *(_DWORD *)(v13 + 40) == 2 )
    {
      v14 = *(struct ISpatialAudioProcessBlockRT **)(*(_QWORD *)(v13 + 32) + 40LL);
      v25 = v14;
      if ( v14 )
        (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v14 + 8LL))(v14);
      v29 = 0LL;
      if ( (**(int (__fastcall ***)(struct ISpatialAudioProcessBlockRT *, GUID *, struct ISpatialAudioProcessBlockRT **))v14)(
             v14,
             &GUID_ff4fd0e7_dae6_4f9f_b627_53d3bfbc611a,
             &v29) >= 0 )
      {
        v25 = 0LL;
        v23 = v14;
        if ( v29 )
          (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v29 + 16LL))(v29);
        if ( v14 )
        {
          v19 = (**(__int64 (__fastcall ***)(struct ISpatialAudioProcessBlockRT *, GUID *, struct ISpatialAudioProcessBlockRT **))v14)(
                  v14,
                  &GUID_ff4fd0e7_dae6_4f9f_b627_53d3bfbc611a,
                  &v24);
          wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v23);
          if ( v19 >= 0 )
          {
            v29 = 0LL;
            v6 = (*(__int64 (__fastcall **)(struct ISpatialAudioProcessBlockRT *, struct ISpatialAudioProcessBlockRT **))(*(_QWORD *)v24 + 24LL))(
                   v24,
                   &v29);
            if ( v6 >= 0 )
              v6 = CAudioDeviceGraph::DoSpatialAudioProcessBlockRegistration(v20, v29, v28, a3);
            if ( v29 )
              (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v29 + 16LL))(v29);
            if ( v6 < 0 )
              goto LABEL_36;
          }
        }
        break;
      }
      if ( v29 )
        (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v29 + 16LL))(v29);
      (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  v25 = 0LL;
  v29 = 0LL;
  v15 = *((_QWORD *)a2 + 3);
  if ( !v15 )
    goto LABEL_34;
  while ( 2 )
  {
    v16 = *(_QWORD *)(v15 + 16);
    v15 = *(_QWORD *)(v15 + 8);
    if ( *(_DWORD *)(v16 + 40) != 2 )
    {
LABEL_32:
      if ( !v15 )
        goto LABEL_33;
      continue;
    }
    break;
  }
  v17 = *(struct ISpatialAudioProcessBlockRT **)(*(_QWORD *)(v16 + 32) + 40LL);
  v26 = v17;
  if ( v17 )
    (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v17 + 8LL))(v17);
  v23 = 0LL;
  if ( (**(int (__fastcall ***)(struct ISpatialAudioProcessBlockRT *, GUID *, struct ISpatialAudioProcessBlockRT **))v17)(
         v17,
         &GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065,
         &v23) < 0 )
  {
    if ( v23 )
      (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v23 + 16LL))(v23);
    (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v17 + 16LL))(v17);
    goto LABEL_32;
  }
  v26 = 0LL;
  v25 = v17;
  if ( v23 )
    (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v23 + 16LL))(v23);
  if ( !v17 )
  {
LABEL_33:
    v5 = v29;
    goto LABEL_34;
  }
  v21 = (**(__int64 (__fastcall ***)(struct ISpatialAudioProcessBlockRT *, GUID *, struct ISpatialAudioProcessBlockRT **))v17)(
          v17,
          &GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065,
          &v29);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v25);
  if ( v21 >= 0 )
  {
    v23 = 0LL;
    v6 = (*(__int64 (__fastcall **)(struct ISpatialAudioProcessBlockRT *, struct ISpatialAudioProcessBlockRT **))(*(_QWORD *)v29 + 24LL))(
           v29,
           &v23);
    if ( v6 >= 0 )
      v6 = CAudioDeviceGraph::DoSpatialAudioProcessBlockRegistration(v22, v23, v28, a3);
    if ( v23 )
      (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v23 + 16LL))(v23);
  }
  v5 = v29;
LABEL_34:
  if ( v5 )
    (*(void (__fastcall **)(struct IAdaptiveSpatialAudioRenderer *))(*(_QWORD *)v5 + 16LL))(v5);
LABEL_36:
  if ( v24 )
    (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v6 < 0 )
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::RegisterSpatialPipe", 0x762u, v6);
LABEL_40:
  v5 = v28;
LABEL_41:
  if ( v5 )
    (*(void (__fastcall **)(struct IAdaptiveSpatialAudioRenderer *))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v6;
}
