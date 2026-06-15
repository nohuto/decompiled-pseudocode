/*
 * XREFs of ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800855A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18003ACFC (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18007B17C (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
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
  int v12; // eax
  int *v14; // rbx
  unsigned int v15; // [rsp+30h] [rbp-68h]
  ATL::CAtlException *v16; // [rsp+40h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-50h] BYREF
  char v18; // [rsp+50h] [rbp-48h]
  unsigned int v20; // [rsp+B0h] [rbp+18h] BYREF
  struct IAudioProcessingObject **v21; // [rsp+B8h] [rbp+20h]

  v21 = a4;
  v4 = a4;
  v6 = this;
  v20 = 0;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x37u,
      (__int64)&WPP_14242717b50d32756585d53851505e56_Traceguids,
      this);
  }
  if ( a3 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)v6 + 248);
    v18 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    for ( i = 0; i < a3; ++i )
    {
      v9 = (_QWORD *)((char *)v6 + 240);
      Microsoft::WRL::WeakRef::~WeakRef((CVolumeSoftware *)((char *)v6 + 240));
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64))v4[i]->lpVtbl->QueryInterface)(
             v4[i],
             &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
             (__int64)v6 + 240) >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v9 + 40LL))(*v9, &v20);
        if ( v7 < 0 )
        {
LABEL_14:
          if ( v18 )
            LeaveCriticalSection(lpCriticalSection);
          goto LABEL_42;
        }
        if ( *v9 )
          break;
        v4 = v21;
      }
    }
    if ( !*((_QWORD *)v6 + 30) )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x38u, (__int64)&WPP_14242717b50d32756585d53851505e56_Traceguids);
      }
      v7 = -2147467262;
      if ( v18 )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_43;
    }
    v10 = v20;
    if ( *((_DWORD *)v6 + 29) != v20 && *((_DWORD *)v6 + 29) )
    {
      for ( j = 1; ; ++j )
      {
        v15 = j;
        if ( j >= v10 )
          break;
        try
        {
          if ( !*((_QWORD *)v6 + 11) )
            ATL::AtlThrowImpl(-2147024809);
          ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow(
            (__int64)v6 + 80,
            j,
            *((_QWORD *)v6 + 10));
        }
        catch ( ATL::CAtlException *v16 )
        {
          v14 = (int *)v16;
          if ( *(_DWORD *)v16 == -1073741571 )
            _o__resetstkoflw();
          v7 = *v14;
          if ( *v14 < 0 )
            goto LABEL_14;
          v6 = this;
          j = v15;
        }
        v10 = v20;
      }
      *((_DWORD *)v6 + 29) = v10;
    }
    if ( v18 )
      LeaveCriticalSection(lpCriticalSection);
    v12 = (*(__int64 (__fastcall **)(CVolumeSoftware *))(*(_QWORD *)v6 + 216LL))(v6);
    v7 = v12;
    if ( v12 >= 0 )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x39u,
          (__int64)&WPP_14242717b50d32756585d53851505e56_Traceguids,
          v6,
          v12);
      }
LABEL_42:
      if ( v7 >= 0 )
        return (unsigned int)v7;
    }
LABEL_43:
    AudSrvTraceLoggingErrorHelper("CVolumeSoftware::InitializeAPOs", 2086, v7);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v7;
}
