/*
 * XREFs of ?InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180084000
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18007B17C (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 */

__int64 __fastcall CMuteSoftware::InitializeAPOs(
        CMuteSoftware *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  int v7; // ebx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-38h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v13; // [rsp+38h] [rbp-20h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Du,
      (__int64)&WPP_c071410194bb3e21497a264ebdcc8fa3_Traceguids,
      this);
  }
  v13 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = 0;
  if ( a3 )
  {
    do
    {
      Microsoft::WRL::WeakRef::~WeakRef((CMuteSoftware *)((char *)this + 40));
      if ( ((__int64 (__fastcall *)(_QWORD, GUID *, char *))(*a4)->lpVtbl->QueryInterface)(
             *a4,
             &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd,
             (char *)this + 40) >= 0
        && *((_QWORD *)this + 5) )
      {
        break;
      }
      ++v7;
      ++a4;
    }
    while ( v7 < a3 );
    v8 = *((_QWORD *)this + 5);
    if ( !v8 )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, (__int64)&WPP_c071410194bb3e21497a264ebdcc8fa3_Traceguids);
      }
      v7 = -2147467262;
LABEL_20:
      AudSrvTraceLoggingErrorHelper("CMuteSoftware::InitializeAPOs", 974, v7);
      goto LABEL_21;
    }
    v14 = 50000LL;
    v9 = (*(__int64 (__fastcall **)(__int64, bool, _QWORD, __int64, __int64 *))(*(_QWORD *)v8 + 32LL))(
           v8,
           *((_DWORD *)this + 6) != 0,
           0LL,
           1LL,
           &v14);
    v7 = v9;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      LODWORD(v11) = v9;
      WPP_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Fu,
        (__int64)&WPP_c071410194bb3e21497a264ebdcc8fa3_Traceguids,
        this,
        v11);
    }
    if ( v7 < 0 )
      goto LABEL_20;
  }
LABEL_21:
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v7;
}
