/*
 * XREFs of ?ShowWarningDialog@CVolumeLimitTrackerImpl@@IEAAJXZ @ 0x180022D80
 * Callers:
 *     ?UpdateTrackingState@CVolumeLimitTrackerImpl@@UEAAJXZ @ 0x180022760 (-UpdateTrackingState@CVolumeLimitTrackerImpl@@UEAAJXZ.c)
 *     ?UpdateTotalTrackedTime@CVolumeLimitTrackerImpl@@IEAAJXZ @ 0x1800229B8 (-UpdateTotalTrackedTime@CVolumeLimitTrackerImpl@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A80 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0dsdp @ 0x180021C98 (McTemplateU0dsdp.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeLimitTrackerImpl::ShowWarningDialog(CVolumeLimitTrackerImpl *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // edi
  __int64 v6; // rcx
  _QWORD *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+38h] [rbp-20h] BYREF
  __int64 v16; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v16 = -2LL;
  v2 = 0;
  v15 = 1;
  v3 = RtlPublishWnfStateData(WNF_AVLC_SHOW_VOLUMELIMITWARNING, 0LL, &v15, 4LL, 0LL);
  v5 = v3 | 0x10000000;
  if ( v3 >= 0 )
  {
    v7 = (_QWORD *)*((_QWORD *)this + 17);
    while ( v7 )
    {
      v8 = v7[2];
      v7 = (_QWORD *)*v7;
      v14 = 0LL;
      if ( (*(int (__fastcall **)(struct IVolumeProvider *, _QWORD, __int64 *))(*(_QWORD *)g_pVolumeProvider + 48LL))(
             g_pVolumeProvider,
             *(_QWORD *)(v8 + 88),
             &v14) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 184LL))(v14);
      *(_DWORD *)(v8 + 100) = *(_DWORD *)(v8 + 96);
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v8 + 72) + 56LL))(
              *(_QWORD *)(v8 + 72),
              v9,
              0LL);
      v5 = v10;
      if ( v10 >= 0 )
      {
        v11 = v14;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        v5 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xCF,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\euvolumepolicy\\trackedendpoint.cpp",
          (const char *)(unsigned int)v10);
        v11 = v14;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      if ( v5 < 0 )
      {
        if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
        {
          McTemplateU0dsdp(
            v11,
            &EUVolumePolicy_Error_Propagation,
            v5,
            "CVolumeLimitTrackerImpl::LowerEndpointVolumes",
            201,
            (char)this);
          if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
            McTemplateU0dsdp(
              v12,
              &EUVolumePolicy_Error_Propagation,
              v5,
              "CVolumeLimitTrackerImpl::ShowWarningDialog",
              40,
              (char)this);
        }
        return (unsigned int)v5;
      }
    }
  }
  else
  {
    if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
    {
      McTemplateU0dsdp(
        v4,
        &EUVolumePolicy_Error_Propagation,
        v5,
        "CVolumeLimitTrackerImpl::SendWnfNotify",
        178,
        (char)this);
      if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
        McTemplateU0dsdp(
          v6,
          &EUVolumePolicy_Error_Propagation,
          v5,
          "CVolumeLimitTrackerImpl::ShowWarningDialog",
          37,
          (char)this);
    }
    return (unsigned int)v5;
  }
  return v2;
}
