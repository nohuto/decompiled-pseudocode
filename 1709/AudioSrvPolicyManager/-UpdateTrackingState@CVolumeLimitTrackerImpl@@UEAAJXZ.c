/*
 * XREFs of ?UpdateTrackingState@CVolumeLimitTrackerImpl@@UEAAJXZ @ 0x180022760
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180006B5C (WPP_SF_.c)
 *     McTemplateU0dsdp @ 0x180021C98 (McTemplateU0dsdp.c)
 *     ?UpdateTotalTrackedTime@CVolumeLimitTrackerImpl@@IEAAJXZ @ 0x1800229B8 (-UpdateTotalTrackedTime@CVolumeLimitTrackerImpl@@IEAAJXZ.c)
 *     ?ShowWarningDialog@CVolumeLimitTrackerImpl@@IEAAJXZ @ 0x180022D80 (-ShowWarningDialog@CVolumeLimitTrackerImpl@@IEAAJXZ.c)
 */

__int64 __fastcall CVolumeLimitTrackerImpl::UpdateTrackingState(CVolumeLimitTrackerImpl *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // rsi
  unsigned int v4; // r9d
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // esi
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // edi
  int updated; // eax
  __int64 v19; // rcx

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v2 = (_QWORD *)*((_QWORD *)this + 17);
  while ( 1 )
  {
    if ( !v2 )
    {
      v12 = 0;
      goto LABEL_21;
    }
    v3 = v2[2];
    v2 = (_QWORD *)*v2;
    EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 32));
    if ( *(_QWORD *)(v3 + 120) )
      break;
LABEL_18:
    LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 32));
  }
  v4 = *(_DWORD *)(v3 + 128);
  v5 = 0LL;
  if ( !v4 )
  {
LABEL_8:
    v7 = 0LL;
    goto LABEL_17;
  }
  v6 = *(_QWORD *)(v3 + 112);
  while ( !*(_QWORD *)(v6 + 8 * v5) )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= v4 )
      goto LABEL_8;
  }
  v7 = *(_QWORD *)(v6 + 8 * v5);
  do
  {
LABEL_17:
    if ( !v7 )
      goto LABEL_18;
    v8 = v7;
    v9 = *(_QWORD *)(v7 + 16);
    if ( !v9 )
    {
      v10 = *(_DWORD *)(v7 + 24) % v4 + 1;
      do
      {
        if ( (unsigned int)v10 >= v4 )
          break;
        v11 = *(_QWORD *)(v3 + 112);
        if ( *(_QWORD *)(v11 + 8 * v10) )
          v9 = *(_QWORD *)(v11 + 8 * v10);
        v10 = (unsigned int)(v10 + 1);
      }
      while ( !v9 );
    }
    v7 = v9;
  }
  while ( (float)(*(float *)(v3 + 96) * *(float *)(v8 + 8)) <= *(float *)(v3 + 104) );
  LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 32));
  v12 = 1;
LABEL_21:
  if ( !*((_DWORD *)this + 31) )
  {
    v13 = (_QWORD *)*((_QWORD *)this + 17);
    while ( v13 )
    {
      v14 = v13[2];
      v13 = (_QWORD *)*v13;
      if ( (float)(*(float *)(v14 + 96) - *(float *)(v14 + 104)) > 0.00001 )
      {
        if ( *((_DWORD *)this + 15) || v12 )
        {
          v15 = CVolumeLimitTrackerImpl::ShowWarningDialog(this);
          v17 = v15;
          if ( v15 < 0 )
          {
            if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
              McTemplateU0dsdp(
                v16,
                &EUVolumePolicy_Error_Propagation,
                v15,
                "CVolumeLimitTrackerImpl::UpdateTrackingState",
                15,
                (char)this);
            goto LABEL_49;
          }
        }
        break;
      }
    }
  }
  if ( !*((_DWORD *)this + 15) )
  {
    if ( v12 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, &WPP_b0ca754e0f2d3c7c76d04bc667a3e56e_Traceguids);
      }
      *((_QWORD *)this + 9) = GetTickCount64();
      *((_DWORD *)this + 15) = 1;
      goto LABEL_47;
    }
LABEL_48:
    v17 = 0;
    goto LABEL_49;
  }
  if ( v12 )
    goto LABEL_48;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, &WPP_b0ca754e0f2d3c7c76d04bc667a3e56e_Traceguids);
  }
  updated = CVolumeLimitTrackerImpl::UpdateTotalTrackedTime(this);
  v17 = updated;
  if ( updated >= 0 )
  {
    *((_DWORD *)this + 15) = 0;
LABEL_47:
    SetEvent(*((HANDLE *)this + 12));
    goto LABEL_48;
  }
  if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
    McTemplateU0dsdp(
      v19,
      &EUVolumePolicy_Error_Propagation,
      updated,
      "CVolumeLimitTrackerImpl::UpdateTrackingState",
      24,
      (char)this);
LABEL_49:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  return v17;
}
