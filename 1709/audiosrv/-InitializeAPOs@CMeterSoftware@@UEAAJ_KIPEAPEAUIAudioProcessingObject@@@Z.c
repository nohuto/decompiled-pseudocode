/*
 * XREFs of ?InitializeAPOs@CMeterSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180009A20
 * Callers:
 *     ?InitializeAPOs@CVolumeStrip@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180009550 (-InitializeAPOs@CVolumeStrip@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     ??0?$CComQIPtr@UIAudioProcessingObject@@$1?_GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x180008E14 (--0-$CComQIPtr@UIAudioProcessingObject@@$1-_GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10@@3U__s_GUI.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall CMeterSoftware::InitializeAPOs(
        CMeterSoftware *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  int v7; // ebx
  CAudioDGProcess *v8; // rcx
  unsigned int v9; // ebp
  _QWORD *v10; // rdi
  void (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v17; // [rsp+30h] [rbp-28h]

  v7 = 0;
  v8 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_118e7498cb42378e567ca6442fb0db3b_Traceguids, this);
    v8 = WPP_GLOBAL_Control;
  }
  if ( a3 )
  {
    v17 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 40);
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v9 = 0;
    v10 = (_QWORD *)((char *)this + 32);
    while ( 1 )
    {
      v11 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))*v10;
      if ( *v10 )
      {
        *v10 = 0LL;
        ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v11)[2])(v11);
      }
      v7 = ((__int64 (__fastcall *)(_QWORD, GUID *, char *))(*a4)->lpVtbl->QueryInterface)(
             *a4,
             &GUID_419b26e3_fa99_4408_83de_cc1276efa489,
             (char *)this + 32);
      if ( !v7 )
        break;
      ++v9;
      ++a4;
      if ( v9 >= a3 )
        goto LABEL_12;
    }
    ATL::CComQIPtr<IAudioProcessingObject,&__s_GUID const _GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10>::CComQIPtr<IAudioProcessingObject,&__s_GUID const _GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10>(
      &v15,
      (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))*v10);
    v12 = v15;
    if ( v15 )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v10 + 32LL))(*v10, (char *)this + 24);
      v12 = v15;
      v7 = v13;
    }
    else
    {
      v7 = -2147467262;
    }
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
LABEL_12:
    if ( *((_QWORD *)this + 4) )
    {
      v8 = WPP_GLOBAL_Control;
    }
    else
    {
      v8 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_118e7498cb42378e567ca6442fb0db3b_Traceguids);
        v8 = WPP_GLOBAL_Control;
      }
      v7 = -2147023537;
    }
    if ( v17 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v8 = WPP_GLOBAL_Control;
    }
  }
  if ( v8 != (CAudioDGProcess *)&WPP_GLOBAL_Control && (*((_DWORD *)v8 + 7) & 0x10000) != 0 && *((_BYTE *)v8 + 25) >= 4u )
    WPP_SF_q(*((_QWORD *)v8 + 2), 19LL, &WPP_118e7498cb42378e567ca6442fb0db3b_Traceguids, this);
  if ( v7 < 0 )
    AudSrvTraceLoggingErrorHelper("CMeterSoftware::InitializeAPOs", 0x2FCu, v7);
  return (unsigned int)v7;
}
