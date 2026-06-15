/*
 * XREFs of ?Shutdown@CVolumeLimitTrackerImpl@@IEAAXXZ @ 0x180021F28
 * Callers:
 *     ??1CVolumeLimitTrackerImpl@@UEAA@XZ @ 0x180021ED4 (--1CVolumeLimitTrackerImpl@@UEAA@XZ.c)
 * Callees:
 *     McTemplateU0dsdp @ 0x180021C98 (McTemplateU0dsdp.c)
 *     ?UpdateTotalTrackedTime@CVolumeLimitTrackerImpl@@IEAAJXZ @ 0x1800229B8 (-UpdateTotalTrackedTime@CVolumeLimitTrackerImpl@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CVolumeLimitTrackerImpl::Shutdown(HKEY *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  HKEY v3; // rbp
  HKEY v4; // rsi
  int v5; // eax
  __int64 v6; // rcx
  HKEY v7; // rcx
  HKEY v8; // rcx
  HKEY v9; // rcx
  _QWORD *v10; // rdi
  _QWORD *v11; // rsi
  __int64 v12; // rcx
  int v13; // eax
  HKEY v14; // rcx

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
    if ( this[88] )
    {
      v5 = RtlUnsubscribeWnfStateChangeNotification() | 0x10000000;
      if ( v5 >= 0 )
      {
        this[88] = 0LL;
      }
      else if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
      {
        McTemplateU0dsdp(
          v6,
          &EUVolumePolicy_Error_Propagation,
          v5,
          "CVolumeLimitTrackerImpl::UnsubscribeVolumeWarningChoiceNotification",
          159,
          (char)this);
      }
    }
    EnterCriticalSection(v2);
    v7 = this[11];
    if ( v7 )
    {
      CloseHandle(v7);
      this[11] = 0LL;
    }
    v8 = this[13];
    if ( v8 )
    {
      CloseHandle(v8);
      this[13] = 0LL;
    }
    v9 = this[12];
    if ( v9 )
    {
      CloseHandle(v9);
      this[12] = 0LL;
    }
    LeaveCriticalSection(v2);
    v10 = this[17];
    while ( v10 )
    {
      v11 = (_QWORD *)v10[2];
      v10 = (_QWORD *)*v10;
      v12 = v11[9];
      if ( v12 )
        v13 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v12 + 32LL))(v12, v11);
      else
        v13 = -2147467261;
      if ( v13 >= 0 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
    }
    v14 = this[14];
    if ( v14 )
      RegCloseKey(v14);
  }
}
