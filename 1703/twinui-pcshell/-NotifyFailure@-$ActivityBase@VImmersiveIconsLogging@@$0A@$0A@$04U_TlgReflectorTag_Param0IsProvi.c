/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18017ECE0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180003210 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18002620C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Provider@ImmersiveIconsLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18017D164 (-Provider@ImmersiveIconsLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18017F26C (-LockExclusive@-$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

char __fastcall wil::ActivityBase<ImmersiveIconsLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  const struct _TlgProvider_t *v4; // r10
  int v5; // edx
  const wchar_t *v6; // rcx
  const wchar_t *v7; // r8
  __int64 v8; // rax
  const wchar_t *v9; // rdx
  const wchar_t *v10; // rcx
  const wchar_t *v11; // rdx
  void *v12; // rcx
  void *v13; // r9
  void *v14; // rdx
  const wchar_t *v15; // rcx
  const wchar_t *v16; // rdx
  const wchar_t *v17; // rcx
  const wchar_t *v18; // rdx
  void *v19; // rcx
  void *v20; // rdx
  const wchar_t *v21; // rcx
  const wchar_t *v22; // rdx
  void *v23; // rcx
  const wchar_t *v24; // rcx
  _DWORD *v25; // rcx
  int v26; // eax
  int v28; // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+34h] [rbp-CCh] BYREF
  int v30; // [rsp+38h] [rbp-C8h] BYREF
  int v31; // [rsp+3Ch] [rbp-C4h] BYREF
  int v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+44h] [rbp-BCh] BYREF
  RTL_SRWLOCK *v34; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v36; // [rsp+70h] [rbp-90h]
  __int64 v37; // [rsp+78h] [rbp-88h]
  const wchar_t *v38; // [rsp+80h] [rbp-80h]
  int v39; // [rsp+88h] [rbp-78h]
  int v40; // [rsp+8Ch] [rbp-74h]
  int *v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  const wchar_t *v43; // [rsp+A0h] [rbp-60h]
  int v44; // [rsp+A8h] [rbp-58h]
  int v45; // [rsp+ACh] [rbp-54h]
  int *v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  void *v48; // [rsp+C0h] [rbp-40h]
  int v49; // [rsp+C8h] [rbp-38h]
  int v50; // [rsp+CCh] [rbp-34h]
  int *v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+D8h] [rbp-28h]
  const wchar_t *v53; // [rsp+E0h] [rbp-20h]
  int v54; // [rsp+E8h] [rbp-18h]
  int v55; // [rsp+ECh] [rbp-14h]
  int *v56; // [rsp+F0h] [rbp-10h]
  __int64 v57; // [rsp+F8h] [rbp-8h]
  const wchar_t *v58; // [rsp+100h] [rbp+0h]
  int v59; // [rsp+108h] [rbp+8h]
  int v60; // [rsp+10Ch] [rbp+Ch]
  void *v61; // [rsp+110h] [rbp+10h]
  int v62; // [rsp+118h] [rbp+18h]
  int v63; // [rsp+11Ch] [rbp+1Ch]
  int *v64; // [rsp+120h] [rbp+20h]
  __int64 v65; // [rsp+128h] [rbp+28h]
  const wchar_t *v66; // [rsp+130h] [rbp+30h]
  int v67; // [rsp+138h] [rbp+38h]
  int v68; // [rsp+13Ch] [rbp+3Ch]
  void *v69; // [rsp+140h] [rbp+40h]
  int v70; // [rsp+148h] [rbp+48h]
  int v71; // [rsp+14Ch] [rbp+4Ch]
  int *v72; // [rsp+150h] [rbp+50h]
  __int64 v73; // [rsp+158h] [rbp+58h]
  RTL_SRWLOCK **v74; // [rsp+160h] [rbp+60h]
  __int64 v75; // [rsp+168h] [rbp+68h]
  const wchar_t *v76; // [rsp+170h] [rbp+70h]
  int v77; // [rsp+178h] [rbp+78h]
  int v78; // [rsp+17Ch] [rbp+7Ch]

  v4 = ImmersiveIconsLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    v5 = a2[1];
    v6 = (const wchar_t *)*((_QWORD *)a2 + 6);
    v7 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v36 = &v28;
    v28 = v5;
    LODWORD(v8) = 0;
    v37 = 4LL;
    v9 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    if ( v6 )
    {
      v9 = v6;
      v8 = -1LL;
      do
        ++v8;
      while ( *((_BYTE *)v6 + v8) );
    }
    v10 = (const wchar_t *)*((_QWORD *)a2 + 15);
    v39 = v8 + 1;
    v41 = a2 + 14;
    LODWORD(v8) = 0;
    v38 = v9;
    v11 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v40 = 0;
    v42 = 4LL;
    if ( v10 )
    {
      v11 = v10;
      v8 = -1LL;
      do
        ++v8;
      while ( *((_BYTE *)v10 + v8) );
    }
    v12 = (void *)*((_QWORD *)a2 + 2);
    v13 = &unk_1801C6ABC;
    v43 = v11;
    v44 = v8 + 1;
    v14 = &unk_1801C6ABC;
    v29 = *a2;
    v46 = &v29;
    LODWORD(v8) = 0;
    v45 = 0;
    v47 = 4LL;
    if ( v12 )
    {
      v14 = v12;
      v8 = -1LL;
      do
        ++v8;
      while ( *((_WORD *)v12 + v8) );
    }
    v15 = (const wchar_t *)*((_QWORD *)a2 + 8);
    v49 = 2 * v8 + 2;
    v30 = a2[6];
    v51 = &v30;
    LODWORD(v8) = 0;
    v48 = v14;
    v16 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v50 = 0;
    v52 = 4LL;
    if ( v15 )
    {
      v16 = v15;
      v8 = -1LL;
      do
        ++v8;
      while ( *((_BYTE *)v15 + v8) );
    }
    v17 = (const wchar_t *)*((_QWORD *)a2 + 10);
    v54 = v8 + 1;
    v31 = a2[18];
    v56 = &v31;
    LODWORD(v8) = 0;
    v53 = v16;
    v18 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v55 = 0;
    v57 = 4LL;
    if ( v17 )
    {
      v18 = v17;
      v8 = -1LL;
      do
        ++v8;
      while ( *((_BYTE *)v17 + v8) );
    }
    v19 = (void *)*((_QWORD *)a2 + 11);
    v59 = v8 + 1;
    LODWORD(v8) = 0;
    v58 = v18;
    v20 = &unk_1801C6ABC;
    v60 = 0;
    if ( v19 )
    {
      v20 = v19;
      v8 = -1LL;
      do
        ++v8;
      while ( *((_WORD *)v19 + v8) );
    }
    v21 = (const wchar_t *)*((_QWORD *)a2 + 13);
    v62 = 2 * v8 + 2;
    v32 = a2[24];
    v64 = &v32;
    LODWORD(v8) = 0;
    v61 = v20;
    v22 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v63 = 0;
    v65 = 4LL;
    if ( v21 )
    {
      v22 = v21;
      v8 = -1LL;
      do
        ++v8;
      while ( *((_BYTE *)v21 + v8) );
    }
    v23 = (void *)*((_QWORD *)a2 + 14);
    v67 = v8 + 1;
    LODWORD(v8) = 0;
    v66 = v22;
    v68 = 0;
    if ( v23 )
    {
      v13 = v23;
      v8 = -1LL;
      do
        ++v8;
      while ( *((_WORD *)v23 + v8) );
    }
    v24 = (const wchar_t *)*((_QWORD *)a2 + 5);
    v70 = 2 * v8 + 2;
    v33 = a2[2];
    v72 = &v33;
    LODWORD(v34) = a2[15];
    v74 = &v34;
    LODWORD(v8) = 0;
    v69 = v13;
    v71 = 0;
    v73 = 4LL;
    v75 = 4LL;
    if ( v24 )
    {
      v7 = v24;
      v8 = -1LL;
      do
        ++v8;
      while ( *((_BYTE *)v24 + v8) );
    }
    v76 = v7;
    v77 = v8 + 1;
    v78 = 0;
    TlgWrite(v4, &unk_1801FBB5B, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x13u, &pData);
  }
  wil::ActivityBase<ImmersiveIconsLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &v34);
  v25 = *(_DWORD **)(a1 + 48);
  v26 = a2[1];
  if ( v26 != v25[21] && (v26 != v25[19] || (int)v25[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v25 + 20), (const struct wil::FailureInfo *)a2);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v34);
  return 1;
}
