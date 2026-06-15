/*
 * XREFs of ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x18001ECF4
 * Callers:
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x180023788 (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ??_GCAastPreStartContext@@UEAAPEAXI@Z @ 0x180023AD0 (--_GCAastPreStartContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_Sd @ 0x18001037C (WPP_SF_Sd.c)
 *     WPP_SF_Sg @ 0x180019FC4 (WPP_SF_Sg.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::UpdateEndpointVolume(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        int a3,
        float a4,
        int a5,
        unsigned int a6)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // ebx
  __int64 v12; // rdx
  unsigned int v13; // ebx
  int v15; // [rsp+20h] [rbp-48h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-30h] BYREF
  char v17; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  CApplicationManager *v19; // [rsp+70h] [rbp+8h] BYREF

  v19 = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
  v17 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v19 = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct IVolumeProvider *, const unsigned __int16 *, CApplicationManager **))(*(_QWORD *)g_VolumeProvider + 48LL))(
         g_VolumeProvider,
         a2,
         &v19);
  v11 = v8;
  if ( v8 < 0 )
  {
    v12 = 3049LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_19;
  }
  if ( a5 )
  {
    v13 = a6;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v15 = a6;
      WPP_SF_Sd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x36u, &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids, a2, v15);
    }
    v8 = (*(__int64 (__fastcall **)(CApplicationManager *, _QWORD, __int64 *, _QWORD))(*(_QWORD *)v19 + 144LL))(
           v19,
           v13,
           &PBM_INITIATED_ENDPOINT_VOLUME_CHANGE,
           0LL);
    v11 = v8;
    if ( v8 < 0 )
    {
      v12 = 3056LL;
      goto LABEL_17;
    }
  }
  if ( a3 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sg(*((_QWORD *)WPP_GLOBAL_Control + 2), v9, v10, a2, a4);
    }
    v8 = (*(__int64 (__fastcall **)(CApplicationManager *, __int64, __int64 *, _QWORD))(*(_QWORD *)v19 + 64LL))(
           v19,
           v9,
           &PBM_INITIATED_ENDPOINT_VOLUME_CHANGE,
           0LL);
    v11 = v8;
    if ( v8 < 0 )
    {
      v12 = 3064LL;
      goto LABEL_17;
    }
  }
  v11 = 0;
LABEL_19:
  if ( v19 )
    (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  return v11;
}
