/*
 * XREFs of ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14000D790
 * Callers:
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000BCE0 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000BDA0 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14002FFDC (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031DE4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?DoSpatialAudioProcessBlockRegistration@CAudioDeviceGraph@@AEAAJPEAUISpatialAudioProcessBlockRT@@PEAUIAdaptiveSpatialAudioRenderer@@_N@Z @ 0x14004149C (-DoSpatialAudioProcessBlockRegistration@CAudioDeviceGraph@@AEAAJPEAUISpatialAudioProcessBlockRT@.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CAudioDeviceGraph::RegisterSpatialPipe(CAudioDeviceGraph *this, struct CPipeInstance *a2, bool a3)
{
  int v5; // r12d
  __int64 v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  int v13; // ebx
  _QWORD *v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rbx
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  __int64 *v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r14
  __int64 v23; // rbx
  _QWORD *v24; // rax
  _QWORD *v25; // rbx
  int v27; // ebx
  CAudioDeviceGraph *v28; // rcx
  int v29; // ebx
  CAudioDeviceGraph *v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // [rsp+20h] [rbp-30h] BYREF
  _QWORD *v33; // [rsp+28h] [rbp-28h] BYREF
  _QWORD *v34; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v35; // [rsp+38h] [rbp-18h]
  __int64 v36; // [rsp+40h] [rbp-10h]
  struct IAdaptiveSpatialAudioRenderer *v37; // [rsp+90h] [rbp+40h] BYREF
  struct ISpatialAudioProcessBlockRT *v38; // [rsp+A8h] [rbp+58h] BYREF

  v36 = -2LL;
  v5 = 0;
  v6 = *((_QWORD *)this + 16);
  v7 = 0LL;
  v33 = 0LL;
  v37 = 0LL;
  v8 = *(_QWORD *)(v6 + 24);
  v9 = *(_QWORD *)(v6 + 72);
  if ( !v8 )
    goto LABEL_48;
  while ( 1 )
  {
    v10 = *(_QWORD *)(v8 + 16);
    v8 = *(_QWORD *)(v8 + 8);
    v11 = *(_QWORD **)(v9 + 16);
    v9 = *(_QWORD *)(v9 + 8);
    if ( !*v11 )
      ATL::AtlThrowImpl(-2147467259);
    if ( *(_DWORD *)(v10 + 40) != 2 )
      goto LABEL_10;
    v12 = *(_QWORD **)(*(_QWORD *)(v10 + 32) + 40LL);
    v34 = v12;
    if ( v12 )
      (*(void (__fastcall **)(_QWORD *))(*v12 + 8LL))(v12);
    v38 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD *, GUID *, struct ISpatialAudioProcessBlockRT **))*v12)(
           v12,
           &GUID_24bdc606_d710_4d62_be35_be665fbc3e00,
           &v38) >= 0 )
      break;
    if ( v38 )
      (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v38 + 16LL))(v38);
    (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
LABEL_10:
    if ( !v8 )
      goto LABEL_48;
  }
  v7 = v12;
  v34 = 0LL;
  v33 = v12;
  if ( v38 )
    (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v38 + 16LL))(v38);
  if ( !v12 )
  {
LABEL_48:
    if ( v7 )
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
    goto LABEL_45;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, struct IAdaptiveSpatialAudioRenderer **))*v12)(
          v12,
          &GUID_24bdc606_d710_4d62_be35_be665fbc3e00,
          &v37);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v33);
  if ( v13 < 0 )
    goto LABEL_45;
  v14 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v15 = *((_QWORD *)a2 + 3);
  v16 = *((_QWORD *)a2 + 9);
  if ( !v15 )
    goto LABEL_26;
  while ( 1 )
  {
    v17 = *(_QWORD *)(v15 + 16);
    v15 = *(_QWORD *)(v15 + 8);
    v18 = *(_QWORD **)(v16 + 16);
    v16 = *(_QWORD *)(v16 + 8);
    if ( !*v18 )
      ATL::AtlThrowImpl(-2147467259);
    if ( *(_DWORD *)(v17 + 40) != 2 )
      goto LABEL_25;
    v19 = *(_QWORD **)(*(_QWORD *)(v17 + 32) + 40LL);
    v34 = v19;
    if ( v19 )
      (*(void (__fastcall **)(_QWORD *))(*v19 + 8LL))(v19);
    v38 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD *, GUID *, struct ISpatialAudioProcessBlockRT **))*v19)(
           v19,
           &GUID_ff4fd0e7_dae6_4f9f_b627_53d3bfbc611a,
           &v38) >= 0 )
      break;
    if ( v38 )
      (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v38 + 16LL))(v38);
    (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
LABEL_25:
    if ( !v15 )
      goto LABEL_26;
  }
  v14 = v19;
  v34 = 0LL;
  v32 = v19;
  if ( v38 )
    (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v38 + 16LL))(v38);
  if ( !v19 )
  {
LABEL_26:
    if ( v14 )
      (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
    goto LABEL_28;
  }
  v27 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD **))*v19)(
          v19,
          &GUID_ff4fd0e7_dae6_4f9f_b627_53d3bfbc611a,
          &v33);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v32);
  if ( v27 >= 0 )
  {
    v38 = 0LL;
    v5 = (*(__int64 (__fastcall **)(_QWORD *, struct ISpatialAudioProcessBlockRT **))(*v33 + 24LL))(v33, &v38);
    if ( v5 >= 0 )
      v5 = CAudioDeviceGraph::DoSpatialAudioProcessBlockRegistration(v28, v38, v37, a3);
    if ( v38 )
      (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v38 + 16LL))(v38);
    if ( v5 < 0 )
      goto LABEL_41;
  }
LABEL_28:
  v20 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  v21 = *((_QWORD *)a2 + 3);
  v22 = *((_QWORD *)a2 + 9);
  if ( !v21 )
    goto LABEL_38;
  while ( 2 )
  {
    v23 = *(_QWORD *)(v21 + 16);
    v21 = *(_QWORD *)(v21 + 8);
    v24 = *(_QWORD **)(v22 + 16);
    v22 = *(_QWORD *)(v22 + 8);
    if ( !*v24 )
      ATL::AtlThrowImpl(-2147467259);
    if ( *(_DWORD *)(v23 + 40) != 2 )
    {
LABEL_37:
      if ( !v21 )
        goto LABEL_38;
      continue;
    }
    break;
  }
  v25 = *(_QWORD **)(*(_QWORD *)(v23 + 32) + 40LL);
  v35 = v25;
  if ( v25 )
    (*(void (__fastcall **)(_QWORD *))(*v25 + 8LL))(v25);
  v38 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD *, GUID *, struct ISpatialAudioProcessBlockRT **))*v25)(
         v25,
         &GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065,
         &v38) < 0 )
  {
    if ( v38 )
      (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v38 + 16LL))(v38);
    (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
    goto LABEL_37;
  }
  v20 = v25;
  v35 = 0LL;
  v34 = v25;
  if ( v38 )
    (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v38 + 16LL))(v38);
  if ( v25 )
  {
    v29 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD **))*v25)(
            v25,
            &GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065,
            &v32);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v34);
    if ( v29 >= 0 )
    {
      v38 = 0LL;
      v5 = (*(__int64 (__fastcall **)(_QWORD *, struct ISpatialAudioProcessBlockRT **))(*v32 + 24LL))(v32, &v38);
      if ( v5 >= 0 )
        v5 = CAudioDeviceGraph::DoSpatialAudioProcessBlockRegistration(v30, v38, v37, a3);
      if ( v38 )
      {
        v31 = *(_QWORD *)v38;
        goto LABEL_71;
      }
    }
    goto LABEL_39;
  }
LABEL_38:
  if ( v20 )
  {
    v31 = *v20;
LABEL_71:
    (*(void (**)(void))(v31 + 16))();
  }
LABEL_39:
  if ( v32 )
    (*(void (__fastcall **)(_QWORD *))(*v32 + 16LL))(v32);
LABEL_41:
  if ( v33 )
    (*(void (__fastcall **)(_QWORD *))(*v33 + 16LL))(v33);
  if ( v5 < 0 )
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::RegisterSpatialPipe", 0x765u, v5);
LABEL_45:
  if ( v37 )
    (*(void (__fastcall **)(struct IAdaptiveSpatialAudioRenderer *))(*(_QWORD *)v37 + 16LL))(v37);
  return (unsigned int)v5;
}
