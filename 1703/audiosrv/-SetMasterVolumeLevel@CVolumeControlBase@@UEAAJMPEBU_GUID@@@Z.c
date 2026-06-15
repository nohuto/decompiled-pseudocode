/*
 * XREFs of ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x1800869A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x18007B890 (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18007C460 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x180084F98 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     WPP_SF_qg_guid_ @ 0x180087A20 (WPP_SF_qg_guid_.c)
 */

__int64 __fastcall CVolumeControlBase::SetMasterVolumeLevel(CVolumeControlBase *this, float a2, const struct _GUID *a3)
{
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  float v7; // xmm9_4
  float v8; // xmm8_4
  int v9; // xmm10_4
  int v10; // ebx
  int v11; // r8d
  unsigned __int64 v12; // rax
  float DB; // xmm0_4
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  float v16; // xmm3_4
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  float v19; // xmm0_4
  unsigned int v20; // r8d
  float i; // xmm2_4
  float v22; // xmm0_4
  __int64 v23; // rax
  __int64 v24; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-68h] BYREF
  char v27; // [rsp+38h] [rbp-60h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v27 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = *((unsigned int *)this + 28);
  if ( v5 >= *((_QWORD *)this + 11) )
    ATL::AtlThrowImpl(-2147024809);
  v6 = *((_QWORD *)this + 10) + 56 * v5;
  v7 = *(float *)(v6 + 8);
  v8 = *(float *)(v6 + 12);
  v9 = *(_DWORD *)(v6 + 16);
  if ( v7 > a2 || a2 > v8 )
  {
    v10 = -2147024809;
  }
  else
  {
    v10 = 0;
    if ( v5 >= *((_QWORD *)this + 11) )
      ATL::AtlThrowImpl(-2147024809);
    if ( a2 != CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56 * v5)) )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qg_guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          22,
          v11,
          (_DWORD)this,
          COERCE_UNSIGNED_INT64(a2),
          (__int64)a3);
      }
      v12 = *((unsigned int *)this + 28);
      if ( v12 >= *((_QWORD *)this + 11) )
        ATL::AtlThrowImpl(-2147024809);
      DB = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56 * v12));
      AudioSrvVolumeTelemetry::Update((CVolumeControlBase *)((char *)this + 136));
      *((float *)this + 52) = DB;
      *((float *)this + 53) = v7;
      *((float *)this + 54) = v8;
      *((_DWORD *)this + 55) = v9;
      v14 = *((unsigned int *)this + 28);
      if ( v14 >= *((_QWORD *)this + 11) )
        ATL::AtlThrowImpl(-2147024809);
      v16 = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56 * v14));
      if ( v15 >= *((_QWORD *)this + 11) )
        ATL::AtlThrowImpl(-2147024809);
      v17 = *((_QWORD *)this + 10) + 56 * v15;
      if ( *(float *)(v17 + 8) > a2 || a2 > *(float *)(v17 + 12) )
      {
        v10 = -2147024809;
      }
      else
      {
        if ( v15 >= *((_QWORD *)this + 11) )
          ATL::AtlThrowImpl(-2147024809);
        CVolumeUnit::SetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56 * v15), a2);
        v18 = *((unsigned int *)this + 28);
        if ( v18 >= *((_QWORD *)this + 11) )
          ATL::AtlThrowImpl(-2147024809);
        v19 = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56 * v18));
        v20 = 0;
        for ( i = v19 - v16; v20 < *((_DWORD *)this + 29); ++v20 )
        {
          if ( v20 != *((_DWORD *)this + 28) )
          {
            if ( (unsigned __int64)v20 >= *((_QWORD *)this + 11) )
              ATL::AtlThrowImpl(-2147024809);
            v22 = CVolumeUnit::GetDB((CVolumeUnit *)(56LL * v20 + *((_QWORD *)this + 10))) + i;
            CVolumeUnit::SetDB((CVolumeUnit *)(v24 + v23), v22);
          }
        }
        v10 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 216LL))(this);
        if ( v10 >= 0 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 48LL))(
            *((_QWORD *)this + 16),
            0LL,
            a3);
          goto LABEL_35;
        }
      }
      AudSrvTraceLoggingErrorHelper("CVolumeControlBase::SetMasterVolumeLevel", 602, v10);
    }
  }
LABEL_35:
  if ( v27 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v10;
}
