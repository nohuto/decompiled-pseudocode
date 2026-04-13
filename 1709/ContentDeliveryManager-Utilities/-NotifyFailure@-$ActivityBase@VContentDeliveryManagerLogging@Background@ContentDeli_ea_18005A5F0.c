/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18005A5F0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180001FC8 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x1800229D8 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180032050 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

char __fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  const struct _TlgProvider_t *v4; // r10
  const unsigned __int16 *v5; // r11
  const unsigned __int16 *v6; // rdx
  __int64 v7; // rax
  const unsigned __int16 *v8; // r8
  const unsigned __int16 *v9; // rdx
  const unsigned __int16 *v10; // r8
  const WCHAR *v11; // rdx
  const WCHAR *v12; // rdi
  const WCHAR *v13; // r8
  const unsigned __int16 *v14; // rdx
  const unsigned __int16 *v15; // r8
  const unsigned __int16 *v16; // rdx
  const unsigned __int16 *v17; // r8
  const WCHAR *v18; // rdx
  const WCHAR *v19; // r8
  const unsigned __int16 *v20; // rdx
  const WCHAR *v21; // rdx
  const struct _TlgProvider_t *v22; // r10
  const unsigned __int16 *v23; // rdx
  const unsigned __int16 *v24; // r11
  const unsigned __int16 *v25; // r8
  __int64 v26; // rax
  const unsigned __int16 *v27; // rdx
  const unsigned __int16 *v28; // r8
  const WCHAR *v29; // rdx
  const WCHAR *v30; // rdi
  const WCHAR *v31; // r8
  const unsigned __int16 *v32; // rdx
  const unsigned __int16 *v33; // r8
  const unsigned __int16 *v34; // rdx
  const unsigned __int16 *v35; // r8
  const WCHAR *v36; // rdx
  const WCHAR *v37; // r8
  const unsigned __int16 *v38; // rdx
  const unsigned __int16 *v39; // r8
  const WCHAR *v40; // rdx
  const unsigned __int16 *v41; // rdx
  _DWORD *v42; // rcx
  int v43; // eax
  int v45; // [rsp+30h] [rbp-D0h] BYREF
  int v46; // [rsp+34h] [rbp-CCh] BYREF
  int v47; // [rsp+38h] [rbp-C8h] BYREF
  int v48; // [rsp+3Ch] [rbp-C4h] BYREF
  int v49; // [rsp+40h] [rbp-C0h] BYREF
  int v50; // [rsp+44h] [rbp-BCh] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v53; // [rsp+70h] [rbp-90h]
  __int64 v54; // [rsp+78h] [rbp-88h]
  const unsigned __int16 *v55; // [rsp+80h] [rbp-80h]
  int v56; // [rsp+88h] [rbp-78h]
  int v57; // [rsp+8Ch] [rbp-74h]
  int *v58; // [rsp+90h] [rbp-70h]
  __int64 v59; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v60; // [rsp+A0h] [rbp-60h]
  int v61; // [rsp+A8h] [rbp-58h]
  int v62; // [rsp+ACh] [rbp-54h]
  int *v63; // [rsp+B0h] [rbp-50h]
  __int64 v64; // [rsp+B8h] [rbp-48h]
  const WCHAR *v65; // [rsp+C0h] [rbp-40h]
  int v66; // [rsp+C8h] [rbp-38h]
  int v67; // [rsp+CCh] [rbp-34h]
  int *v68; // [rsp+D0h] [rbp-30h]
  __int64 v69; // [rsp+D8h] [rbp-28h]
  const unsigned __int16 *v70; // [rsp+E0h] [rbp-20h]
  int v71; // [rsp+E8h] [rbp-18h]
  int v72; // [rsp+ECh] [rbp-14h]
  int *v73; // [rsp+F0h] [rbp-10h]
  __int64 v74; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v75; // [rsp+100h] [rbp+0h]
  int v76; // [rsp+108h] [rbp+8h]
  int v77; // [rsp+10Ch] [rbp+Ch]
  const WCHAR *v78; // [rsp+110h] [rbp+10h]
  int v79; // [rsp+118h] [rbp+18h]
  int v80; // [rsp+11Ch] [rbp+1Ch]
  int *v81; // [rsp+120h] [rbp+20h]
  __int64 v82; // [rsp+128h] [rbp+28h]
  const unsigned __int16 *v83; // [rsp+130h] [rbp+30h]
  int v84; // [rsp+138h] [rbp+38h]
  int v85; // [rsp+13Ch] [rbp+3Ch]
  const WCHAR *v86; // [rsp+140h] [rbp+40h]
  int v87; // [rsp+148h] [rbp+48h]
  int v88; // [rsp+14Ch] [rbp+4Ch]
  int *v89; // [rsp+150h] [rbp+50h]
  __int64 v90; // [rsp+158h] [rbp+58h]
  PSRWLOCK *p_SRWLock; // [rsp+160h] [rbp+60h]
  __int64 v92; // [rsp+168h] [rbp+68h]
  const unsigned __int16 *v93; // [rsp+170h] [rbp+70h]
  int v94; // [rsp+178h] [rbp+78h]
  int v95; // [rsp+17Ch] [rbp+7Ch]

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[2]) )
  {
    v22 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v22 > 5u )
    {
      v23 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
      v24 = &word_1800E10E4;
      v49 = a2[1];
      v25 = &word_1800E10E4;
      v53 = &v49;
      v54 = 4LL;
      LODWORD(v26) = 0;
      if ( v23 )
      {
        v25 = v23;
        v26 = -1LL;
        do
          ++v26;
        while ( *((_BYTE *)v23 + v26) );
      }
      v27 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
      v56 = v26 + 1;
      v58 = a2 + 14;
      LODWORD(v26) = 0;
      v55 = v25;
      v28 = &word_1800E10E4;
      v57 = 0;
      v59 = 4LL;
      if ( v27 )
      {
        v28 = v27;
        v26 = -1LL;
        do
          ++v26;
        while ( *((_BYTE *)v27 + v26) );
      }
      v29 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v30 = &Src;
      v60 = v28;
      v61 = v26 + 1;
      v31 = &Src;
      v48 = *a2;
      v63 = &v48;
      LODWORD(v26) = 0;
      v62 = 0;
      v64 = 4LL;
      if ( v29 )
      {
        v31 = v29;
        v26 = -1LL;
        do
          ++v26;
        while ( v29[v26] );
      }
      v32 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
      v66 = 2 * v26 + 2;
      v47 = a2[6];
      v68 = &v47;
      LODWORD(v26) = 0;
      v65 = v31;
      v33 = &word_1800E10E4;
      v67 = 0;
      v69 = 4LL;
      if ( v32 )
      {
        v33 = v32;
        v26 = -1LL;
        do
          ++v26;
        while ( *((_BYTE *)v32 + v26) );
      }
      v34 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
      v71 = v26 + 1;
      v46 = a2[18];
      v73 = &v46;
      LODWORD(v26) = 0;
      v70 = v33;
      v35 = &word_1800E10E4;
      v72 = 0;
      v74 = 4LL;
      if ( v34 )
      {
        v35 = v34;
        v26 = -1LL;
        do
          ++v26;
        while ( *((_BYTE *)v34 + v26) );
      }
      v36 = (const WCHAR *)*((_QWORD *)a2 + 11);
      v76 = v26 + 1;
      LODWORD(v26) = 0;
      v75 = v35;
      v37 = &Src;
      v77 = 0;
      if ( v36 )
      {
        v37 = v36;
        v26 = -1LL;
        do
          ++v26;
        while ( v36[v26] );
      }
      v38 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
      v79 = 2 * v26 + 2;
      v45 = a2[24];
      v81 = &v45;
      LODWORD(v26) = 0;
      v78 = v37;
      v39 = &word_1800E10E4;
      v80 = 0;
      v82 = 4LL;
      if ( v38 )
      {
        v39 = v38;
        v26 = -1LL;
        do
          ++v26;
        while ( *((_BYTE *)v38 + v26) );
      }
      v40 = (const WCHAR *)*((_QWORD *)a2 + 14);
      v84 = v26 + 1;
      LODWORD(v26) = 0;
      v83 = v39;
      v85 = 0;
      if ( v40 )
      {
        v30 = v40;
        v26 = -1LL;
        do
          ++v26;
        while ( v40[v26] );
      }
      v41 = (const unsigned __int16 *)*((_QWORD *)a2 + 5);
      v87 = 2 * v26 + 2;
      v50 = a2[2];
      v89 = &v50;
      LODWORD(SRWLock) = a2[15];
      p_SRWLock = &SRWLock;
      LODWORD(v26) = 0;
      v86 = v30;
      v88 = 0;
      v90 = 4LL;
      v92 = 4LL;
      if ( v41 )
      {
        v24 = v41;
        v26 = -1LL;
        do
          ++v26;
        while ( *((_BYTE *)v41 + v26) );
      }
      v93 = v24;
      v94 = v26 + 1;
      v95 = 0;
      TlgWrite(v22, &unk_18013EA77, (LPCGUID)(a1[6] + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    v4 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v4 > 5u
      && (*((_QWORD *)v4 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v4 + 3) & 0x200000000000LL) == *((_QWORD *)v4 + 3) )
    {
      v5 = &word_1800E10E4;
      v6 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
      v45 = a2[1];
      v53 = &v45;
      LODWORD(v7) = 0;
      v54 = 4LL;
      v8 = &word_1800E10E4;
      if ( v6 )
      {
        v8 = v6;
        v7 = -1LL;
        do
          ++v7;
        while ( *((_BYTE *)v6 + v7) );
      }
      v9 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
      v56 = v7 + 1;
      v58 = a2 + 14;
      LODWORD(v7) = 0;
      v55 = v8;
      v10 = &word_1800E10E4;
      v57 = 0;
      v59 = 4LL;
      if ( v9 )
      {
        v10 = v9;
        v7 = -1LL;
        do
          ++v7;
        while ( *((_BYTE *)v9 + v7) );
      }
      v11 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v12 = &Src;
      v60 = v10;
      v61 = v7 + 1;
      v13 = &Src;
      v46 = *a2;
      v63 = &v46;
      LODWORD(v7) = 0;
      v62 = 0;
      v64 = 4LL;
      if ( v11 )
      {
        v13 = v11;
        v7 = -1LL;
        do
          ++v7;
        while ( v11[v7] );
      }
      v14 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
      v66 = 2 * v7 + 2;
      v47 = a2[6];
      v68 = &v47;
      LODWORD(v7) = 0;
      v65 = v13;
      v15 = &word_1800E10E4;
      v67 = 0;
      v69 = 4LL;
      if ( v14 )
      {
        v15 = v14;
        v7 = -1LL;
        do
          ++v7;
        while ( *((_BYTE *)v14 + v7) );
      }
      v16 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
      v71 = v7 + 1;
      v48 = a2[18];
      v73 = &v48;
      LODWORD(v7) = 0;
      v70 = v15;
      v17 = &word_1800E10E4;
      v72 = 0;
      v74 = 4LL;
      if ( v16 )
      {
        v17 = v16;
        v7 = -1LL;
        do
          ++v7;
        while ( *((_BYTE *)v16 + v7) );
      }
      v18 = (const WCHAR *)*((_QWORD *)a2 + 11);
      v76 = v7 + 1;
      LODWORD(v7) = 0;
      v75 = v17;
      v19 = &Src;
      v77 = 0;
      if ( v18 )
      {
        v19 = v18;
        v7 = -1LL;
        do
          ++v7;
        while ( v18[v7] );
      }
      v20 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
      v79 = 2 * v7 + 2;
      v49 = a2[24];
      v81 = &v49;
      LODWORD(v7) = 0;
      v78 = v19;
      v80 = 0;
      v82 = 4LL;
      if ( v20 )
      {
        v5 = v20;
        v7 = -1LL;
        do
          ++v7;
        while ( *((_BYTE *)v20 + v7) );
      }
      v21 = (const WCHAR *)*((_QWORD *)a2 + 14);
      v84 = v7 + 1;
      LODWORD(v7) = 0;
      v83 = v5;
      v85 = 0;
      if ( v21 )
      {
        v12 = v21;
        v7 = -1LL;
        do
          ++v7;
        while ( v21[v7] );
      }
      v86 = v12;
      v87 = 2 * v7 + 2;
      v88 = 0;
      TlgWrite(v4, &unk_18013D3F5, (LPCGUID)(a1[6] + 8LL), 0LL, 0x10u, &pData);
    }
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  v42 = (_DWORD *)a1[6];
  v43 = a2[1];
  if ( v43 != v42[21] && (v43 != v42[19] || (int)v42[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v42 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
