/*
 * XREFs of ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x180086C70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180003F14 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18003B800 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x18007B890 (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18007C460 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x180084F98 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     WPP_SF_qdg @ 0x1800878A0 (WPP_SF_qdg.c)
 *     WPP_SF_qdgg @ 0x1800878F4 (WPP_SF_qdgg.c)
 *     WPP_SF_qg_guid_ @ 0x180087A20 (WPP_SF_qg_guid_.c)
 *     WPP_SF_qggg @ 0x180087ADC (WPP_SF_qggg.c)
 */

__int64 __fastcall CVolumeControlBase::SetMasterVolumeLevelScalar(
        CVolumeControlBase *this,
        float a2,
        const struct _GUID *a3)
{
  int v4; // ebx
  unsigned __int64 v6; // rax
  int v7; // r8d
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  int v10; // r8d
  float DB; // xmm10_4
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  CVolumeUnit *v14; // rax
  int v15; // xmm7_4
  int v16; // xmm8_4
  int v17; // xmm9_4
  float v18; // xmm0_4
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  float v21; // xmm7_4
  __int64 v22; // r10
  double v23; // xmm2_8
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // xmm4_8
  unsigned int i; // ebx
  __int64 v28; // r10
  float v29; // xmm6_4
  __int64 v30; // r10
  double v31; // xmm2_8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-78h] BYREF
  char v34; // [rsp+48h] [rbp-70h]

  v4 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v34 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( a2 < 0.0 || a2 > 1.0 )
  {
    v4 = -2147024809;
  }
  else
  {
    v6 = *((unsigned int *)this + 28);
    if ( v6 >= *((_QWORD *)this + 11) )
      ATL::AtlThrowImpl(-2147024809);
    if ( a2 != CVolumeUnit::GetWiper((CVolumeUnit *)(*((_QWORD *)this + 10) + 56 * v6)) )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qg_guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          23,
          v7,
          (_DWORD)this,
          COERCE_UNSIGNED_INT64(a2),
          (__int64)a3);
      }
      v8 = *((unsigned int *)this + 28);
      if ( v8 >= *((_QWORD *)this + 11) )
        ATL::AtlThrowImpl(-2147024809);
      DB = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56 * v8));
      if ( (CVolumeStrip **)v9 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(v9 + 28) & 0x10000) != 0
        && *(_BYTE *)(v9 + 25) >= 4u )
      {
        WPP_SF_qdg(*(_QWORD *)(v9 + 16), 24LL, &WPP_14242717b50d32756585d53851505e56_Traceguids, this, v10, a2);
      }
      v12 = *((unsigned int *)this + 28);
      if ( v12 >= *((_QWORD *)this + 11) )
        ATL::AtlThrowImpl(-2147024809);
      v4 = CVolumeUnit::SetWiper((CVolumeUnit *)(*((_QWORD *)this + 10) + 56 * v12), a2);
      if ( v4 < 0 )
        goto LABEL_45;
      v13 = *((unsigned int *)this + 28);
      if ( v13 >= *((_QWORD *)this + 11) )
        ATL::AtlThrowImpl(-2147024809);
      v14 = (CVolumeUnit *)(*((_QWORD *)this + 10) + 56 * v13);
      v15 = *((_DWORD *)v14 + 2);
      v16 = *((_DWORD *)v14 + 3);
      v17 = *((_DWORD *)v14 + 4);
      v18 = CVolumeUnit::GetDB(v14);
      AudioSrvVolumeTelemetry::Update((CVolumeControlBase *)((char *)this + 136));
      *((float *)this + 52) = v18;
      *((_DWORD *)this + 53) = v15;
      *((_DWORD *)this + 54) = v16;
      *((_DWORD *)this + 55) = v17;
      v19 = *((unsigned int *)this + 28);
      if ( v19 >= *((_QWORD *)this + 11) )
        ATL::AtlThrowImpl(-2147024809);
      v21 = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56 * v19)) - DB;
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        if ( v20 >= *((_QWORD *)this + 11) )
          ATL::AtlThrowImpl(-2147024809);
        v23 = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56 * v20));
        WPP_SF_qggg(*(_QWORD *)(v22 + 16), v24, v25, this, v21, *(_QWORD *)&v23, v26);
      }
      for ( i = 0; i < *((_DWORD *)this + 29); ++i )
      {
        if ( i != *((_DWORD *)this + 28) )
        {
          if ( (unsigned __int64)i >= *((_QWORD *)this + 11) )
            ATL::AtlThrowImpl(-2147024809);
          v29 = CVolumeUnit::GetDB((CVolumeUnit *)(56LL * i + *((_QWORD *)this + 10))) + v21;
          if ( (CVolumeStrip **)v28 != &WPP_GLOBAL_Control
            && (*(_DWORD *)(v28 + 28) & 0x10000) != 0
            && *(_BYTE *)(v28 + 25) >= 4u )
          {
            if ( (unsigned __int64)i >= *((_QWORD *)this + 11) )
              ATL::AtlThrowImpl(-2147024809);
            v31 = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56LL * i));
            WPP_SF_qdgg(
              *(_QWORD *)(v30 + 16),
              26LL,
              &WPP_14242717b50d32756585d53851505e56_Traceguids,
              this,
              i,
              *(_QWORD *)&v31,
              v29);
          }
          if ( (unsigned __int64)i >= *((_QWORD *)this + 11) )
            ATL::AtlThrowImpl(-2147024809);
          CVolumeUnit::SetDB((CVolumeUnit *)(56LL * i + *((_QWORD *)this + 10)), v29);
        }
      }
      v4 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 216LL))(this);
      if ( v4 < 0 )
LABEL_45:
        AudSrvTraceLoggingErrorHelper("CVolumeControlBase::SetMasterVolumeLevelScalar", 754, v4);
      else
        (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 48LL))(
          *((_QWORD *)this + 16),
          0LL,
          a3);
    }
  }
  if ( v34 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v4;
}
