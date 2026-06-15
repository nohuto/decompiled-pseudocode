/*
 * XREFs of ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800A42A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180009650 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18004E28C (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18004E374 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18004E398 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x180097EAC (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qdg @ 0x1800A5068 (WPP_SF_qdg.c)
 *     WPP_SF_qdgg @ 0x1800A50BC (WPP_SF_qdgg.c)
 *     WPP_SF_qg_guid_ @ 0x1800A51E8 (WPP_SF_qg_guid_.c)
 *     WPP_SF_qggg @ 0x1800A52A4 (WPP_SF_qggg.c)
 */

__int64 __fastcall CVolumeControlBase::SetMasterVolumeLevelScalar(
        CVolumeControlBase *this,
        float a2,
        const struct _GUID *a3,
        int *a4)
{
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  float Wiper; // xmm12_4
  int v10; // r14d
  unsigned int v11; // r8d
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // r8d
  float DB; // xmm11_4
  unsigned int v16; // ecx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r9
  __int64 v19; // r10
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  CVolumeUnit *v24; // rcx
  int v25; // xmm7_4
  int v26; // xmm8_4
  int v27; // xmm9_4
  float v28; // xmm0_4
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  CVolumeUnit *v31; // rcx
  float v32; // xmm7_4
  __int64 v33; // r10
  double v34; // xmm2_8
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // xmm4_8
  unsigned int i; // ebx
  unsigned __int64 v39; // rdx
  CVolumeUnit *v40; // rcx
  __int64 v41; // r10
  float v42; // xmm6_4
  unsigned __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // r10
  double v46; // xmm2_8
  __int64 v47; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-98h] BYREF
  char v50; // [rsp+48h] [rbp-90h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  if ( a2 < 0.0 || a2 > 1.0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A1,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v50 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = *((unsigned int *)this + 30);
  v8 = *((_QWORD *)this + 12);
  if ( v7 >= v8 )
    ATL::AtlThrowImpl(-2147024809);
  Wiper = CVolumeUnit::GetWiper((CVolumeUnit *)(*((_QWORD *)this + 11) + 56 * v7));
  v10 = 1;
  if ( a2 == Wiper )
    goto LABEL_52;
  v11 = v7;
  v12 = v8;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qg_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 23, v7, (_DWORD)this, COERCE_UNSIGNED_INT64(a2), (__int64)a3);
    v11 = *((_DWORD *)this + 30);
    v12 = *((_QWORD *)this + 12);
  }
  if ( v11 >= v12 )
    ATL::AtlThrowImpl(-2147024809);
  DB = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 11) + 56LL * v11));
  v16 = v14;
  v18 = v17;
  if ( v13 != v19 && (*(_DWORD *)(v13 + 28) & 0x10000) != 0 && *(_BYTE *)(v13 + 25) >= 4u )
  {
    WPP_SF_qdg(*(_QWORD *)(v13 + 16), 24LL, &WPP_a94e90b6b9c23070a932b4669a952a77_Traceguids, this, v14, a2);
    v16 = *((_DWORD *)this + 30);
    v18 = *((_QWORD *)this + 12);
  }
  if ( v16 >= v18 )
    ATL::AtlThrowImpl(-2147024809);
  v20 = CVolumeUnit::SetWiper((CVolumeUnit *)(*((_QWORD *)this + 11) + 56LL * v16), a2);
  v21 = v20;
  if ( v20 >= 0 )
  {
    v23 = *((unsigned int *)this + 30);
    if ( v23 >= *((_QWORD *)this + 12) )
      ATL::AtlThrowImpl(-2147024809);
    v24 = (CVolumeUnit *)(*((_QWORD *)this + 11) + 56 * v23);
    v25 = *((_DWORD *)v24 + 2);
    v26 = *((_DWORD *)v24 + 3);
    v27 = *((_DWORD *)v24 + 4);
    v28 = CVolumeUnit::GetDB(v24);
    AudioSrvVolumeTelemetry::Update((CVolumeControlBase *)((char *)this + 144));
    *((float *)this + 54) = v28;
    *((_DWORD *)this + 55) = v25;
    *((_DWORD *)this + 56) = v26;
    *((_DWORD *)this + 57) = v27;
    v29 = *((unsigned int *)this + 30);
    if ( v29 >= *((_QWORD *)this + 12) )
      ATL::AtlThrowImpl(-2147024809);
    v32 = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 11) + 56 * v29)) - DB;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      if ( v30 >= *((_QWORD *)this + 12) )
        ATL::AtlThrowImpl(-2147024809);
      v34 = CVolumeUnit::GetDB(v31);
      WPP_SF_qggg(*(_QWORD *)(v33 + 16), v35, v36, this, v32, *(_QWORD *)&v34, v37);
    }
    for ( i = 0; i < *((_DWORD *)this + 31); ++i )
    {
      if ( i != *((_DWORD *)this + 30) )
      {
        if ( (unsigned __int64)i >= *((_QWORD *)this + 12) )
          ATL::AtlThrowImpl(-2147024809);
        v42 = CVolumeUnit::GetDB((CVolumeUnit *)(56LL * i + *((_QWORD *)this + 11))) + v32;
        v43 = v39;
        if ( v41 != v44 && (*(_DWORD *)(v41 + 28) & 0x10000) != 0 && *(_BYTE *)(v41 + 25) >= 4u )
        {
          if ( i >= v39 )
            ATL::AtlThrowImpl(-2147024809);
          v46 = CVolumeUnit::GetDB(v40);
          WPP_SF_qdgg(
            *(_QWORD *)(v45 + 16),
            26LL,
            &WPP_a94e90b6b9c23070a932b4669a952a77_Traceguids,
            this,
            i,
            *(_QWORD *)&v46,
            v42);
          v43 = *((_QWORD *)this + 12);
        }
        if ( i >= v43 )
          ATL::AtlThrowImpl(-2147024809);
        CVolumeUnit::SetDB((CVolumeUnit *)(56LL * i + *((_QWORD *)this + 11)), v42);
      }
    }
    v20 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 216LL))(this);
    v21 = v20;
    if ( v20 < 0 )
    {
      v22 = 721LL;
      goto LABEL_43;
    }
    if ( !a3 )
      goto LABEL_51;
    v47 = 0x4E8B67CC68F64C3DLL - *(_QWORD *)&a3->Data1;
    if ( *(_QWORD *)&a3->Data1 == 0x4E8B67CC68F64C3DLL )
      v47 = 0x6147AA4EA63F7FA1LL - *(_QWORD *)a3->Data4;
    if ( v47 )
LABEL_51:
      (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 17) + 40LL))(
        *((_QWORD *)this + 17),
        0LL,
        a3);
LABEL_52:
    if ( a4 )
    {
      if ( Wiper != a2 )
        v10 = 0;
      *a4 = v10;
    }
    v21 = 0;
    goto LABEL_57;
  }
  v22 = 692LL;
LABEL_43:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v22,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
    (const char *)(unsigned int)v20);
LABEL_57:
  if ( v50 )
    LeaveCriticalSection(lpCriticalSection);
  return v21;
}
