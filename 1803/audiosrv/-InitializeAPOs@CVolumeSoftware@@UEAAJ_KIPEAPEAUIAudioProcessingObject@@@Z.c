/*
 * XREFs of ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800A2770
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18004DE0C (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180097338 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     WPP_SF_qd @ 0x1800A1B30 (WPP_SF_qd.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeSoftware::InitializeAPOs(
        CVolumeSoftware *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  struct IAudioProcessingObject **v4; // rdi
  CVolumeSoftware *v6; // rsi
  int v7; // edi
  unsigned int i; // r14d
  _QWORD *v9; // r13
  unsigned int v10; // eax
  unsigned int j; // edi
  _QWORD *v12; // rcx
  _OWORD *v13; // rax
  int v14; // eax
  ATL::CAtlException *v16; // rbx
  unsigned int v17; // [rsp+30h] [rbp-A8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-A0h] BYREF
  char v19; // [rsp+40h] [rbp-98h]
  int v20; // [rsp+48h] [rbp-90h]
  __int64 v21; // [rsp+50h] [rbp-88h]
  ATL::CAtlException *v22; // [rsp+58h] [rbp-80h] BYREF
  _OWORD v23[3]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v24; // [rsp+90h] [rbp-48h]
  unsigned int v26; // [rsp+F0h] [rbp+18h] BYREF
  struct IAudioProcessingObject **v27; // [rsp+F8h] [rbp+20h]

  v27 = a4;
  v21 = -2LL;
  v4 = a4;
  v6 = this;
  v26 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 55LL, &WPP_a94e90b6b9c23070a932b4669a952a77_Traceguids, this);
  }
  if ( a3 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)v6 + 256);
    v19 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    for ( i = 0; i < a3; ++i )
    {
      v9 = (_QWORD *)((char *)v6 + 248);
      Microsoft::WRL::WeakRef::~WeakRef((CVolumeSoftware *)((char *)v6 + 248));
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64))v4[i]->lpVtbl->QueryInterface)(
             v4[i],
             &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
             (__int64)v6 + 248) >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v9 + 40LL))(*v9, &v26);
        if ( v7 < 0 )
        {
LABEL_14:
          if ( v19 )
            LeaveCriticalSection(lpCriticalSection);
          goto LABEL_41;
        }
        if ( *v9 )
          break;
        v4 = v27;
      }
    }
    if ( !*((_QWORD *)v6 + 31) )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x38u, (__int64)&WPP_a94e90b6b9c23070a932b4669a952a77_Traceguids);
      }
      v7 = -2147467262;
      if ( v19 )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_42;
    }
    v10 = v26;
    if ( *((_DWORD *)v6 + 31) != v26 && *((_DWORD *)v6 + 31) )
    {
      for ( j = 1; ; ++j )
      {
        v17 = j;
        if ( j >= v10 )
          break;
        v12 = (_QWORD *)((char *)v6 + 88);
        if ( !*((_QWORD *)v6 + 12) )
          ATL::AtlThrowImpl(-2147024809);
        v13 = (_OWORD *)*v12;
        v23[0] = *(_OWORD *)*v12;
        v23[1] = v13[1];
        v23[2] = v13[2];
        v24 = *((_QWORD *)v13 + 6);
        try
        {
          ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow(v12, j, (__int64)v23);
        }
        catch ( ATL::CAtlException *v22 )
        {
          v16 = v22;
          if ( *(_DWORD *)v22 == -1073741571 )
            _o__resetstkoflw();
          v20 = *(_DWORD *)v16;
          v7 = v20;
          if ( v20 < 0 )
            goto LABEL_14;
          v6 = this;
          j = v17;
        }
        v10 = v26;
      }
      *((_DWORD *)v6 + 31) = v10;
    }
    if ( v19 )
      LeaveCriticalSection(lpCriticalSection);
    v14 = (*(__int64 (__fastcall **)(CVolumeSoftware *))(*(_QWORD *)v6 + 216LL))(v6);
    v7 = v14;
    if ( v14 >= 0 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x39u,
          (__int64)&WPP_a94e90b6b9c23070a932b4669a952a77_Traceguids,
          v6,
          v14);
      }
LABEL_41:
      if ( v7 >= 0 )
        return (unsigned int)v7;
    }
LABEL_42:
    AudSrvTraceLoggingErrorHelper("CVolumeSoftware::InitializeAPOs", 2255, v7);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v7;
}
