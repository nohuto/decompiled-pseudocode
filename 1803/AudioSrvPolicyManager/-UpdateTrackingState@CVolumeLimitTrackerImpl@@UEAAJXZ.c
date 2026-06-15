/*
 * XREFs of ?UpdateTrackingState@CVolumeLimitTrackerImpl@@UEAAJXZ @ 0x18002BC20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x18000B1DC (WPP_SF_.c)
 *     ?UpdateTotalTrackedTime@CVolumeLimitTrackerImpl@@IEAAJXZ @ 0x18002BE18 (-UpdateTotalTrackedTime@CVolumeLimitTrackerImpl@@IEAAJXZ.c)
 *     ?ShowWarningDialog@CVolumeLimitTrackerImpl@@IEAAJXZ @ 0x18002C128 (-ShowWarningDialog@CVolumeLimitTrackerImpl@@IEAAJXZ.c)
 */

__int64 __fastcall CVolumeLimitTrackerImpl::UpdateTrackingState(CVolumeLimitTrackerImpl *this)
{
  int updated; // ebp
  _QWORD *v3; // rdi
  __int64 v4; // rsi
  unsigned int v5; // r9d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r10
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // rdx
  __int64 v13; // rcx

  updated = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v3 = (_QWORD *)*((_QWORD *)this + 17);
  while ( v3 )
  {
    v4 = v3[2];
    v3 = (_QWORD *)*v3;
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 32));
    if ( *(_QWORD *)(v4 + 120) )
    {
      v5 = *(_DWORD *)(v4 + 128);
      v6 = 0LL;
      if ( !v5 )
      {
LABEL_7:
        v7 = 0LL;
        goto LABEL_15;
      }
      while ( 1 )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(v4 + 112) + 8 * v6);
        if ( v7 )
          break;
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= v5 )
          goto LABEL_7;
      }
      while ( 1 )
      {
        v8 = v7;
        v9 = *(_QWORD *)(v7 + 16);
        if ( !v9 )
        {
          v10 = *(_DWORD *)(v7 + 24) % v5 + 1;
          do
          {
            if ( (unsigned int)v10 >= v5 )
              break;
            v11 = *(_QWORD *)(v4 + 112);
            if ( *(_QWORD *)(v11 + 8 * v10) )
              v9 = *(_QWORD *)(v11 + 8 * v10);
            v10 = (unsigned int)(v10 + 1);
          }
          while ( !v9 );
        }
        v7 = v9;
        if ( (float)(*(float *)(v4 + 96) * *(float *)(v8 + 8)) > *(float *)(v4 + 104) )
          break;
LABEL_15:
        if ( !v7 )
          goto LABEL_16;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 32));
      LODWORD(v3) = 1;
      break;
    }
LABEL_16:
    LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 32));
  }
  if ( !*((_DWORD *)this + 31) )
  {
    v12 = (_QWORD *)*((_QWORD *)this + 17);
    while ( v12 )
    {
      v13 = v12[2];
      v12 = (_QWORD *)*v12;
      if ( (float)(*(float *)(v13 + 96) - *(float *)(v13 + 104)) > 0.00001 )
      {
        if ( *((_DWORD *)this + 15) || (_DWORD)v3 )
          updated = CVolumeLimitTrackerImpl::ShowWarningDialog(this);
        break;
      }
    }
  }
  if ( *((_DWORD *)this + 15) && updated >= 0 )
  {
    if ( !(_DWORD)v3 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, &WPP_18fb3d0d2a0b30815cd5f223c20501f0_Traceguids);
      }
      updated = CVolumeLimitTrackerImpl::UpdateTotalTrackedTime(this);
      if ( updated >= 0 )
      {
        *((_DWORD *)this + 15) = 0;
LABEL_40:
        SetEvent(*((HANDLE *)this + 12));
      }
    }
  }
  else if ( (_DWORD)v3 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, &WPP_18fb3d0d2a0b30815cd5f223c20501f0_Traceguids);
    }
    *((_QWORD *)this + 9) = GetTickCount64();
    *((_DWORD *)this + 15) = 1;
    goto LABEL_40;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  return (unsigned int)updated;
}
