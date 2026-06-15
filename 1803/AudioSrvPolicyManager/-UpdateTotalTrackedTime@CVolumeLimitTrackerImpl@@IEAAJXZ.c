/*
 * XREFs of ?UpdateTotalTrackedTime@CVolumeLimitTrackerImpl@@IEAAJXZ @ 0x18002BE18
 * Callers:
 *     ?Shutdown@CVolumeLimitTrackerImpl@@IEAAXXZ @ 0x18002B738 (-Shutdown@CVolumeLimitTrackerImpl@@IEAAXXZ.c)
 *     ?UpdateTrackingState@CVolumeLimitTrackerImpl@@UEAAJXZ @ 0x18002BC20 (-UpdateTrackingState@CVolumeLimitTrackerImpl@@UEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?ShowWarningDialog@CVolumeLimitTrackerImpl@@IEAAJXZ @ 0x18002C128 (-ShowWarningDialog@CVolumeLimitTrackerImpl@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeLimitTrackerImpl::UpdateTotalTrackedTime(CVolumeLimitTrackerImpl *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  ULONGLONG TickCount64; // rax
  ULONGLONG v4; // rsi
  unsigned __int64 v5; // rdx
  signed int v6; // ebx
  unsigned int v7; // r15d
  unsigned int v8; // eax
  LSTATUS v9; // eax
  unsigned int Data; // [rsp+90h] [rbp+40h] BYREF
  DWORD cbData; // [rsp+98h] [rbp+48h] BYREF
  unsigned int lpData; // [rsp+A0h] [rbp+50h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  TickCount64 = GetTickCount64();
  v4 = TickCount64;
  v5 = 0LL;
  Data = 0;
  v6 = *((_DWORD *)this + 16) != 0 ? 0x8000FFFF : 0;
  if ( *((_DWORD *)this + 15) )
  {
    if ( !*((_DWORD *)this + 16) )
    {
      if ( TickCount64 < *((_QWORD *)this + 9) )
      {
        v5 = -1LL;
        v6 = -2147024362;
      }
      else
      {
        v5 = TickCount64 - *((_QWORD *)this + 9);
        v6 = 0;
      }
    }
    if ( v6 < 0 )
      goto LABEL_23;
    v7 = -1;
    if ( v5 <= 0xFFFFFFFF )
      v7 = v5;
    v6 = v5 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v5 > 0xFFFFFFFF )
      goto LABEL_23;
    cbData = 4;
    RegQueryValueExW(*((HKEY *)this + 14), L"VolumeLimitTimer", 0LL, 0LL, (LPBYTE)&Data, &cbData);
    v8 = v7 / 0x3E8 + Data;
    Data = v8;
    if ( v8 >= *((_DWORD *)this + 20) )
    {
      CVolumeLimitTrackerImpl::ShowWarningDialog(this);
      v8 = 0;
      Data = 0;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, &WPP_18fb3d0d2a0b30815cd5f223c20501f0_Traceguids, v8);
      v8 = Data;
    }
    lpData = v8;
    v9 = RegSetValueExW(*((HKEY *)this + 14), L"VolumeLimitTimer", 0, 4u, (const BYTE *)&lpData, 4u);
    v6 = (unsigned __int16)v9 | 0x80070000;
    if ( v9 <= 0 )
      v6 = v9;
    if ( v6 < 0 )
    {
LABEL_23:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, &WPP_18fb3d0d2a0b30815cd5f223c20501f0_Traceguids, v6);
      }
    }
    else
    {
      *((_QWORD *)this + 9) = v4;
    }
  }
  else
  {
    v6 = 0;
  }
  LeaveCriticalSection(v2);
  return (unsigned int)v6;
}
