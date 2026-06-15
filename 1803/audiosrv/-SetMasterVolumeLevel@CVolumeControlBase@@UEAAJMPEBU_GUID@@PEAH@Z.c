/*
 * XREFs of ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800A3FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18004E374 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18004E398 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x180097EAC (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qg_guid_ @ 0x1800A51E8 (WPP_SF_qg_guid_.c)
 */

__int64 __fastcall CVolumeControlBase::SetMasterVolumeLevel(
        CVolumeControlBase *this,
        float a2,
        const struct _GUID *a3,
        int *a4)
{
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  __int64 v9; // rcx
  float v10; // xmm10_4
  float v11; // xmm8_4
  int v12; // xmm11_4
  unsigned int v13; // edx
  unsigned __int64 v14; // r8
  float DB; // xmm9_4
  int v16; // esi
  unsigned int v17; // eax
  unsigned __int64 v18; // rcx
  float v19; // xmm0_4
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r8
  float v22; // xmm3_4
  float *v23; // rcx
  unsigned __int64 v24; // rax
  float v25; // xmm0_4
  unsigned int v26; // edx
  float i; // xmm2_4
  float v28; // xmm0_4
  CVolumeUnit *v29; // rcx
  int v30; // eax
  unsigned int v31; // ebx
  __int64 v32; // r9
  __int64 v33; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-78h] BYREF
  char v36; // [rsp+38h] [rbp-70h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v36 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = *((unsigned int *)this + 30);
  v8 = *((_QWORD *)this + 12);
  if ( v7 >= v8 )
    ATL::AtlThrowImpl(-2147024809);
  v9 = *((_QWORD *)this + 11) + 56 * v7;
  v10 = *(float *)(v9 + 8);
  v11 = *(float *)(v9 + 12);
  v12 = *(_DWORD *)(v9 + 16);
  if ( v10 > a2 || a2 > v11 )
  {
    v33 = 545LL;
    goto LABEL_38;
  }
  if ( v7 >= v8 )
    ATL::AtlThrowImpl(-2147024809);
  DB = CVolumeUnit::GetDB((CVolumeUnit *)v9);
  v16 = 1;
  if ( DB == a2 )
    goto LABEL_31;
  v17 = v13;
  v18 = v14;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qg_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 22, v14, (_DWORD)this, COERCE_UNSIGNED_INT64(a2), (__int64)a3);
    v17 = *((_DWORD *)this + 30);
    v18 = *((_QWORD *)this + 12);
  }
  if ( v17 >= v18 )
    ATL::AtlThrowImpl(-2147024809);
  v19 = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 11) + 56LL * v17));
  AudioSrvVolumeTelemetry::Update((CVolumeControlBase *)((char *)this + 144));
  *((float *)this + 54) = v19;
  *((float *)this + 55) = v10;
  *((float *)this + 56) = v11;
  *((_DWORD *)this + 57) = v12;
  v20 = *((unsigned int *)this + 30);
  if ( v20 >= *((_QWORD *)this + 12) )
    ATL::AtlThrowImpl(-2147024809);
  v22 = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 11) + 56 * v20));
  v23 = (float *)(*((_QWORD *)this + 11) + 56 * v21);
  if ( v23[2] > a2 || a2 > v23[3] )
  {
    v33 = 562LL;
LABEL_38:
    v31 = -2147024809;
    v32 = 2147942487LL;
    goto LABEL_39;
  }
  if ( v21 >= *((_QWORD *)this + 12) )
    ATL::AtlThrowImpl(-2147024809);
  CVolumeUnit::SetDB((CVolumeUnit *)v23, a2);
  v24 = *((unsigned int *)this + 30);
  if ( v24 >= *((_QWORD *)this + 12) )
    ATL::AtlThrowImpl(-2147024809);
  v25 = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 11) + 56 * v24));
  v26 = 0;
  for ( i = v25 - v22; v26 < *((_DWORD *)this + 31); ++v26 )
  {
    if ( v26 != *((_DWORD *)this + 30) )
    {
      if ( (unsigned __int64)v26 >= *((_QWORD *)this + 12) )
        ATL::AtlThrowImpl(-2147024809);
      v28 = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 11) + 56LL * v26)) + i;
      CVolumeUnit::SetDB(v29, v28);
    }
  }
  v30 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 216LL))(this);
  v31 = v30;
  if ( v30 < 0 )
  {
    v32 = (unsigned int)v30;
    v33 = 579LL;
LABEL_39:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v33,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)v32);
    goto LABEL_40;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 17) + 40LL))(
    *((_QWORD *)this + 17),
    0LL,
    a3);
LABEL_31:
  if ( a4 )
  {
    if ( DB != a2 )
      v16 = 0;
    *a4 = v16;
  }
  v31 = 0;
LABEL_40:
  if ( v36 )
    LeaveCriticalSection(lpCriticalSection);
  return v31;
}
