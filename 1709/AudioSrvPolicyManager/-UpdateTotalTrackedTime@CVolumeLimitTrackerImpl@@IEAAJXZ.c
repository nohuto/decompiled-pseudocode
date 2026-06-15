/*
 * XREFs of ?UpdateTotalTrackedTime@CVolumeLimitTrackerImpl@@IEAAJXZ @ 0x1800229B8
 * Callers:
 *     ?Shutdown@CVolumeLimitTrackerImpl@@IEAAXXZ @ 0x180021F28 (-Shutdown@CVolumeLimitTrackerImpl@@IEAAXXZ.c)
 *     ?UpdateTrackingState@CVolumeLimitTrackerImpl@@UEAAJXZ @ 0x180022760 (-UpdateTrackingState@CVolumeLimitTrackerImpl@@UEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     McTemplateU0dsdp @ 0x180021C98 (McTemplateU0dsdp.c)
 *     ?ShowWarningDialog@CVolumeLimitTrackerImpl@@IEAAJXZ @ 0x180022D80 (-ShowWarningDialog@CVolumeLimitTrackerImpl@@IEAAJXZ.c)
 *     ?SetRegValueDWORD@CVolumeLimitTrackerImpl@@KAJPEAUHKEY__@@PEBGK@Z @ 0x180022F6C (-SetRegValueDWORD@CVolumeLimitTrackerImpl@@KAJPEAUHKEY__@@PEBGK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeLimitTrackerImpl::UpdateTotalTrackedTime(CVolumeLimitTrackerImpl *this)
{
  int v2; // edi
  struct _RTL_CRITICAL_SECTION *v3; // r15
  __int64 v4; // rcx
  ULONGLONG TickCount64; // r14
  int v6; // esi
  unsigned __int64 v7; // rax
  unsigned int v8; // r12d
  int v9; // esi
  const unsigned __int16 *v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rcx
  unsigned int Data; // [rsp+80h] [rbp+30h] BYREF
  DWORD cbData; // [rsp+88h] [rbp+38h] BYREF

  v2 = 0;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  TickCount64 = GetTickCount64();
  Data = 0;
  v6 = *((_DWORD *)this + 16) != 0 ? 0x8000FFFF : 0;
  if ( *((_DWORD *)this + 16) )
  {
    if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
      McTemplateU0dsdp(
        v4,
        &EUVolumePolicy_Error_Propagation,
        v6,
        "CVolumeLimitTrackerImpl::UpdateTotalTrackedTime",
        81,
        (char)this);
LABEL_4:
    v2 = v6;
    goto LABEL_23;
  }
  if ( !*((_DWORD *)this + 15) )
    goto LABEL_32;
  if ( TickCount64 >= *((_QWORD *)this + 9) )
  {
    v7 = TickCount64 - *((_QWORD *)this + 9);
    v8 = -1;
    if ( v7 <= 0xFFFFFFFF )
      v8 = TickCount64 - *((_DWORD *)this + 18);
    v9 = v7 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v7 <= 0xFFFFFFFF )
    {
      cbData = 4;
      RegQueryValueExW(*((HKEY *)this + 14), L"VolumeLimitTimer", 0LL, 0LL, (LPBYTE)&Data, &cbData);
      v10 = (const unsigned __int16 *)(v8 / 0x3E8);
      v11 = (_DWORD)v10 + Data;
      Data = v11;
      if ( v11 >= *((_DWORD *)this + 20) )
      {
        CVolumeLimitTrackerImpl::ShowWarningDialog(this);
        v11 = 0;
        Data = 0;
      }
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, &WPP_b0ca754e0f2d3c7c76d04bc667a3e56e_Traceguids, v11);
        v11 = Data;
      }
      v6 = CVolumeLimitTrackerImpl::SetRegValueDWORD(*((HKEY *)this + 14), v10, v11);
      if ( v6 < 0 )
      {
        if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
          McTemplateU0dsdp(
            v12,
            &EUVolumePolicy_Error_Propagation,
            v6,
            "CVolumeLimitTrackerImpl::UpdateTotalTrackedTime",
            108,
            (char)this);
        goto LABEL_4;
      }
      *((_QWORD *)this + 9) = TickCount64;
    }
    else
    {
      if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
        McTemplateU0dsdp(
          0xFFFFFFFFLL,
          &EUVolumePolicy_Error_Propagation,
          v9,
          "CVolumeLimitTrackerImpl::UpdateTotalTrackedTime",
          89,
          (char)this);
      v2 = v9;
    }
LABEL_23:
    if ( v2 >= 0 )
      goto LABEL_32;
    goto LABEL_28;
  }
  if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
    McTemplateU0dsdp(
      v4,
      &EUVolumePolicy_Error_Propagation,
      -2147024362,
      "CVolumeLimitTrackerImpl::UpdateTotalTrackedTime",
      88,
      (char)this);
  v2 = -2147024362;
LABEL_28:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, &WPP_b0ca754e0f2d3c7c76d04bc667a3e56e_Traceguids, v2);
  }
LABEL_32:
  LeaveCriticalSection(v3);
  return (unsigned int)v2;
}
