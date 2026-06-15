/*
 * XREFs of ?InitializeAPOs@CMeterSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18002D3E0
 * Callers:
 *     ?InitializeAPOs@CVolumeStrip@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180017DB0 (-InitializeAPOs@CVolumeStrip@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 */

__int64 __fastcall CMeterSoftware::InitializeAPOs(
        CMeterSoftware *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  int v7; // ebx
  CVolumeStrip *v8; // rcx
  unsigned int v9; // ebp
  _QWORD *v10; // rdi
  void (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  void (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v16; // [rsp+30h] [rbp-28h]

  v7 = 0;
  v8 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_554bf26313353362e0874a871197bf29_Traceguids, this);
    v8 = WPP_GLOBAL_Control;
  }
  if ( a3 )
  {
    v16 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v9 = 0;
    v10 = (_QWORD *)((char *)this + 40);
    while ( 1 )
    {
      v11 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*v10;
      if ( *v10 )
      {
        *v10 = 0LL;
        ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v11)[2])(v11);
      }
      v7 = ((__int64 (__fastcall *)(_QWORD, GUID *, char *))(*a4)->lpVtbl->QueryInterface)(
             *a4,
             &GUID_419b26e3_fa99_4408_83de_cc1276efa489,
             (char *)this + 40);
      if ( !v7 )
        break;
      ++v9;
      ++a4;
      if ( v9 >= a3 )
        goto LABEL_18;
    }
    v12 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*v10;
    v14 = 0LL;
    if ( v12 && ((**v12)(v12, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, &v14), v14) )
      v7 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v10 + 32LL))(*v10, (char *)this + 32);
    else
      v7 = -2147467262;
    wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v14);
LABEL_18:
    if ( *((_QWORD *)this + 5) )
    {
      v8 = WPP_GLOBAL_Control;
    }
    else
    {
      v8 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_554bf26313353362e0874a871197bf29_Traceguids);
        v8 = WPP_GLOBAL_Control;
      }
      v7 = -2147023537;
    }
    if ( v16 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v8 = WPP_GLOBAL_Control;
    }
  }
  if ( v8 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_DWORD *)v8 + 7) & 0x10000) != 0 && *((_BYTE *)v8 + 25) >= 4u )
    WPP_SF_q(*((_QWORD *)v8 + 2), 19LL, &WPP_554bf26313353362e0874a871197bf29_Traceguids, this);
  if ( v7 < 0 )
    AudSrvTraceLoggingErrorHelper("CMeterSoftware::InitializeAPOs", 0x2FDu, v7);
  return (unsigned int)v7;
}
