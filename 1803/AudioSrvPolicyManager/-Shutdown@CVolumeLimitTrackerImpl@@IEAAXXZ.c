/*
 * XREFs of ?Shutdown@CVolumeLimitTrackerImpl@@IEAAXXZ @ 0x18002B738
 * Callers:
 *     ??1CVolumeLimitTrackerImpl@@UEAA@XZ @ 0x18002B6E4 (--1CVolumeLimitTrackerImpl@@UEAA@XZ.c)
 * Callees:
 *     ?UpdateTotalTrackedTime@CVolumeLimitTrackerImpl@@IEAAJXZ @ 0x18002BE18 (-UpdateTotalTrackedTime@CVolumeLimitTrackerImpl@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CVolumeLimitTrackerImpl::Shutdown(HKEY *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  HKEY v3; // rbp
  HKEY v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  HKEY v7; // rcx
  HKEY v8; // rcx
  HKEY v9; // rcx
  HKEY v10; // rcx
  _QWORD *v11; // rdi
  _QWORD *v12; // rsi
  __int64 v13; // rcx
  int v14; // eax
  HKEY v15; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)(this + 2);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 2));
  if ( *((_DWORD *)this + 16) )
  {
    LeaveCriticalSection(v2);
  }
  else
  {
    CVolumeLimitTrackerImpl::UpdateTotalTrackedTime((CVolumeLimitTrackerImpl *)this);
    v3 = this[11];
    v4 = this[13];
    *((_DWORD *)this + 16) = 1;
    LeaveCriticalSection(v2);
    if ( v3 && v4 )
    {
      SetEvent(v3);
      WaitForSingleObject(v4, 0xFFFFFFFF);
    }
    v7 = this[88];
    if ( v7 && (int)RtlUnsubscribeWnfStateChangeNotification(v7, v5, v6) >= 0 )
      this[88] = 0LL;
    EnterCriticalSection(v2);
    v8 = this[11];
    if ( v8 )
    {
      CloseHandle(v8);
      this[11] = 0LL;
    }
    v9 = this[13];
    if ( v9 )
    {
      CloseHandle(v9);
      this[13] = 0LL;
    }
    v10 = this[12];
    if ( v10 )
    {
      CloseHandle(v10);
      this[12] = 0LL;
    }
    LeaveCriticalSection(v2);
    v11 = this[17];
    while ( v11 )
    {
      v12 = (_QWORD *)v11[2];
      v11 = (_QWORD *)*v11;
      v13 = v12[9];
      if ( v13 )
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v13 + 32LL))(v13, v12);
      else
        v14 = -2147467261;
      if ( v14 >= 0 )
        (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
    }
    v15 = this[14];
    if ( v15 )
      RegCloseKey(v15);
  }
}
