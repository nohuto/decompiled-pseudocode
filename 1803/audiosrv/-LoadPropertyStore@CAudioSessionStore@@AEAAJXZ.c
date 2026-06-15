/*
 * XREFs of ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x180041F60
 * Callers:
 *     ?Initialize@CAudioSessionStore@@QEAAJPEBG@Z @ 0x1800426C8 (-Initialize@CAudioSessionStore@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180015210 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x1800420A8 (-OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z.c)
 *     ?OpenStoreKey@CAudioSessionStore@@AEAAJXZ @ 0x180042320 (-OpenStoreKey@CAudioSessionStore@@AEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x18005DEA4 (-StringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061040 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     WPP_SF_dd @ 0x1800A4FEC (WPP_SF_dd.c)
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x1800A8B90 (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 *     ?SetAt@?$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z @ 0x1800ACDB4 (-SetAt@-$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z.c)
 *     ?StringCbLengthA@@YAJPEBD_KPEA_K@Z @ 0x1800BF208 (-StringCbLengthA@@YAJPEBD_KPEA_K@Z.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1800BF25C (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 *     WPP_SF_dg @ 0x1800D3DD4 (WPP_SF_dg.c)
 */

__int64 __fastcall CAudioSessionStore::LoadPropertyStore(CAudioSessionStore *this)
{
  char v1; // si
  CAudioSessionStore *v2; // rdi
  int v3; // ebx
  DWORD v4; // edx
  DWORD i; // r15d
  LSTATUS v6; // eax
  unsigned int v8; // edx
  RPC_STATUS v9; // eax
  bool v10; // cc
  LSTATUS v11; // eax
  unsigned __int64 v12; // rax
  void *v13; // r14
  BYTE *v14; // r12
  DWORD v15; // eax
  LSTATUS v16; // eax
  _QWORD *v17; // rax
  _QWORD *v18; // r15
  unsigned __int64 v19; // rdx
  CAudioSessionManager *v20; // rcx
  char v21; // di
  unsigned __int64 v22; // r14
  float *v23; // r12
  SAFEARRAY *v24; // rax
  SAFEARRAY *v25; // r13
  unsigned int v26; // edi
  float v27; // xmm0_4
  CAudioSessionManager *v28; // rcx
  char *v29; // rax
  size_t v30; // r8
  unsigned __int16 *v31; // rdi
  char *v32; // rax
  SIZE_T v33; // rdx
  const char *v34; // rdi
  char *v35; // rax
  SIZE_T v36; // rdx
  BSTR v37; // rax
  int v38; // ebx
  DWORD v40; // [rsp+70h] [rbp-98h]
  HKEY phkResult; // [rsp+78h] [rbp-90h] BYREF
  DWORD cchName; // [rsp+80h] [rbp-88h] BYREF
  DWORD cbMaxValueNameLen; // [rsp+84h] [rbp-84h] BYREF
  DWORD cbMaxValueLen; // [rsp+88h] [rbp-80h] BYREF
  DWORD cbData; // [rsp+8Ch] [rbp-7Ch] BYREF
  DWORD v46; // [rsp+90h] [rbp-78h]
  DWORD cValues; // [rsp+94h] [rbp-74h] BYREF
  SAFEARRAY *v48; // [rsp+98h] [rbp-70h] BYREF
  HKEY hKey; // [rsp+A0h] [rbp-68h] BYREF
  float v50; // [rsp+A8h] [rbp-60h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+B0h] [rbp-58h] BYREF
  char v52; // [rsp+B8h] [rbp-50h]
  SAFEARRAYBOUND rgsabound; // [rsp+C0h] [rbp-48h] BYREF
  SIZE_T cb; // [rsp+C8h] [rbp-40h] BYREF
  SIZE_T v55; // [rsp+D0h] [rbp-38h] BYREF
  BYTE *v56; // [rsp+D8h] [rbp-30h]
  void *v57; // [rsp+E0h] [rbp-28h]
  struct _FILETIME ftLastWriteTime; // [rsp+E8h] [rbp-20h] BYREF
  GUID pclsid; // [rsp+F0h] [rbp-18h] BYREF
  WCHAR Name[104]; // [rsp+108h] [rbp+0h] BYREF

  hKey = 0LL;
  v1 = 0;
  phkResult = 0LL;
  v2 = this;
  v3 = CAudioSessionStore::OpenStoreKey(this);
  if ( v3 < 0 )
  {
    v8 = 6165;
LABEL_115:
    AudSrvTraceLoggingErrorHelper("CAudioSessionStore::LoadPropertyStore", v8, v3);
    return (unsigned int)v3;
  }
  v3 = CAudioSessionStore::OpenSessionKey(v2, &hKey);
  if ( v3 < 0 )
  {
    v8 = 6173;
    goto LABEL_115;
  }
  v52 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v2 + 48);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = 0;
  for ( i = 0; ; v4 = i )
  {
    v40 = i;
    cchName = 100;
    v6 = RegEnumKeyExW(hKey, v4, Name, &cchName, 0LL, 0LL, 0LL, &ftLastWriteTime);
    v3 = v6;
    if ( v6 )
      break;
    v3 = CLSIDFromString(Name, &pclsid);
    if ( v3 < 0 )
      goto LABEL_7;
    v9 = RpcImpersonateClient(0LL);
    if ( v9 )
    {
      if ( v9 != 1725 )
      {
        v10 = v9 <= 0;
LABEL_21:
        if ( v10 )
        {
          v3 = v9;
          goto LABEL_7;
        }
        v38 = (unsigned __int16)v9;
        goto LABEL_113;
      }
    }
    else
    {
      v1 = 1;
    }
    v9 = RegOpenKeyExW(hKey, Name, 0, 0x20019u, &phkResult);
    v10 = v9 <= 0;
    if ( v9 )
      goto LABEL_21;
    if ( v1 )
      RpcRevertToSelf();
    v1 = 0;
    v11 = RegQueryInfoKeyW(
            phkResult,
            0LL,
            0LL,
            0LL,
            0LL,
            0LL,
            0LL,
            &cValues,
            &cbMaxValueNameLen,
            &cbMaxValueLen,
            0LL,
            0LL);
    if ( v11 )
    {
      if ( v11 > 0 )
        v3 = (unsigned __int16)v11 | 0x80070000;
      else
        v3 = v11;
      goto LABEL_111;
    }
    v12 = 2LL * ++cbMaxValueNameLen;
    if ( !is_mul_ok(cbMaxValueNameLen, 2uLL) )
      v12 = -1LL;
    v57 = operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v57;
    if ( !v57 )
    {
      v3 = -2147024882;
      goto LABEL_111;
    }
    v56 = (BYTE *)operator new[](cbMaxValueLen, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v56;
    if ( !v56 )
    {
      v3 = -2147024882;
      operator delete(v13);
LABEL_111:
      RegCloseKey(phkResult);
      phkResult = 0LL;
      goto LABEL_7;
    }
    v15 = 0;
    v46 = 0;
    if ( !cValues )
      goto LABEL_95;
    while ( 1 )
    {
      cchName = cbMaxValueNameLen;
      cbData = cbMaxValueLen;
      v16 = RegEnumValueW(phkResult, v15, (LPWSTR)v13, &cchName, 0LL, 0LL, v14, &cbData);
      if ( v16 == 259 )
        goto LABEL_94;
      if ( v16 )
        break;
      v17 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      v18 = v17;
      if ( !v17 )
      {
        v3 = -2147024882;
LABEL_94:
        i = v40;
        goto LABEL_95;
      }
      v17[6] = *((_QWORD *)v2 + 3);
      *((_DWORD *)v17 + 4) = _o__wtoi(v13);
      v3 = 0;
      *(GUID *)v18 = pclsid;
      *(_OWORD *)(v18 + 3) = *(_OWORD *)v14;
      v18[5] = *((_QWORD *)v14 + 2);
      switch ( *((_WORD *)v18 + 12) )
      {
        case 8:
          v37 = SysAllocString((const OLECHAR *)&v14[v18[4]]);
          v18[4] = v37;
          if ( !v37 )
          {
            v3 = -2147024882;
            goto LABEL_93;
          }
          break;
        case 0x1E:
          v34 = (const char *)&v14[v18[4]];
          v3 = StringCbLengthA(v34, v19, &v55);
          if ( v3 )
            goto LABEL_92;
          v35 = (char *)CoTaskMemAlloc(v55);
          if ( !v35 )
          {
LABEL_91:
            v3 = -2147024882;
LABEL_92:
            v2 = this;
            goto LABEL_93;
          }
          v36 = v55;
          v18[4] = v35;
          StringCchCopyA(v35, v36, v34);
          goto LABEL_55;
        case 0x1F:
          v31 = (unsigned __int16 *)&v14[v18[4]];
          v3 = StringCbLengthW(v31, 0x7FFFFFFFuLL, &cb);
          if ( v3 )
            goto LABEL_92;
          v32 = (char *)CoTaskMemAlloc(cb);
          if ( !v32 )
            goto LABEL_91;
          v33 = cb;
          v18[4] = v32;
          v3 = StringCbCopyW(v32, v33, (char *)v31);
          if ( v3 )
            goto LABEL_73;
          goto LABEL_55;
        case 0x41:
        case 0x46:
          v29 = (char *)CoTaskMemAlloc(*((unsigned int *)v18 + 8));
          if ( !v29 )
          {
            v3 = -2147024882;
            goto LABEL_93;
          }
          v30 = *((unsigned int *)v18 + 8);
          v18[5] = v29;
          memcpy_0(v29, &v14[(_QWORD)v29], v30);
          break;
        case 0x2004:
          v20 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_143dd52affcd33359900bde90742b95f_Traceguids);
            v20 = WPP_GLOBAL_Control;
          }
          v21 = cbData - 24;
          v22 = ((unsigned __int64)cbData - 24) >> 2;
          if ( v20 != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)v20 + 28) & 8) != 0
            && *((_BYTE *)v20 + 25) >= 4u )
          {
            WPP_SF_q(*((_QWORD *)v20 + 2), 53LL, &WPP_143dd52affcd33359900bde90742b95f_Traceguids, cbData - 24LL);
            v20 = WPP_GLOBAL_Control;
          }
          if ( (v21 & 3) != 0 )
          {
            if ( v20 != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_BYTE *)v20 + 28) & 8) != 0
              && *((_BYTE *)v20 + 25) >= 4u )
            {
              WPP_SF_(*((_QWORD *)v20 + 2), 54LL, &WPP_143dd52affcd33359900bde90742b95f_Traceguids);
            }
LABEL_55:
            v2 = this;
            break;
          }
          v23 = (float *)&v14[v18[4]];
          rgsabound.cElements = v22;
          rgsabound.lLbound = 0;
          v24 = SafeArrayCreate(4u, 1u, &rgsabound);
          v48 = v24;
          v25 = v24;
          if ( !v24 )
          {
            v3 = -2147024882;
LABEL_59:
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 55LL, &WPP_143dd52affcd33359900bde90742b95f_Traceguids);
            }
            goto LABEL_72;
          }
          v3 = SafeArrayLock(v24);
          if ( v3 )
            goto LABEL_59;
          v26 = 0;
          if ( v22 )
          {
            while ( 1 )
            {
              v27 = *v23;
              v50 = *v23;
              if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_dg(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  56LL,
                  &WPP_143dd52affcd33359900bde90742b95f_Traceguids,
                  v26,
                  v27);
              }
              v3 = ATL::CComSafeArray<float,4>::SetAt(&v48, v26, &v50);
              if ( v3 )
                break;
              ++v26;
              ++v23;
              if ( v26 >= v22 )
                goto LABEL_71;
            }
            v28 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 57LL, &WPP_143dd52affcd33359900bde90742b95f_Traceguids);
              goto LABEL_78;
            }
          }
          else
          {
LABEL_78:
            v28 = WPP_GLOBAL_Control;
          }
          if ( v3 )
          {
            if ( v28 != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_BYTE *)v28 + 28) & 8) != 0
              && *((_BYTE *)v28 + 25) >= 4u )
            {
              WPP_SF_d(*((_QWORD *)v28 + 2), 58LL, &WPP_143dd52affcd33359900bde90742b95f_Traceguids, (unsigned int)v3);
            }
LABEL_72:
            ATL::CComSafeArray<float,4>::Destroy(&v48);
LABEL_73:
            v2 = this;
            goto LABEL_93;
          }
LABEL_71:
          SafeArrayUnlock(v25);
          v48 = 0LL;
          v18[4] = v25;
          ATL::CComSafeArray<float,4>::Destroy(&v48);
          goto LABEL_55;
      }
      *((_QWORD *)v2 + 3) = v18;
LABEL_93:
      v14 = v56;
      v15 = v46 + 1;
      v13 = v57;
      v46 = v15;
      if ( v15 >= cValues )
        goto LABEL_94;
    }
    i = v40;
    if ( v16 > 0 )
      v3 = (unsigned __int16)v16 | 0x80070000;
    else
      v3 = v16;
LABEL_95:
    operator delete(v14);
    operator delete(v13);
    RegCloseKey(phkResult);
    phkResult = 0LL;
    if ( v3 < 0 )
      goto LABEL_7;
    ++i;
  }
  if ( v6 == 259 )
  {
    v3 = 0;
    goto LABEL_7;
  }
  if ( v6 > 0 )
  {
    v38 = (unsigned __int16)v6;
LABEL_113:
    v3 = v38 | 0x80070000;
  }
LABEL_7:
  if ( v52 )
    LeaveCriticalSection(lpCriticalSection);
  RegCloseKey(hKey);
  phkResult = 0LL;
  if ( v1 )
    RpcRevertToSelf();
  if ( v3 < 0 )
  {
    v8 = 6526;
    goto LABEL_115;
  }
  return (unsigned int)v3;
}
