/*
 * XREFs of ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x1800851F0
 * Callers:
 *     ?Initialize@CAudioSessionStore@@QEAAJPEBG@Z @ 0x180084D2C (-Initialize@CAudioSessionStore@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180033220 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x18005ECC8 (-StringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_dg @ 0x18006B9E8 (WPP_SF_dg.c)
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x180070918 (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 *     ?SetAt@?$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z @ 0x180075A8C (-SetAt@-$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 *     ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x180085DC0 (-OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z.c)
 *     ?OpenStoreKey@CAudioSessionStore@@AEAAJXZ @ 0x18008644C (-OpenStoreKey@CAudioSessionStore@@AEAAJXZ.c)
 *     ?StringCbLengthA@@YAJPEBD_KPEA_K@Z @ 0x180089348 (-StringCbLengthA@@YAJPEBD_KPEA_K@Z.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x18008939C (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     WPP_SF_dd @ 0x180089EEC (WPP_SF_dd.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1800AC2C8 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall CAudioSessionStore::LoadPropertyStore(CAudioSessionStore *this)
{
  char v1; // di
  CAudioSessionStore *v2; // rsi
  int v3; // ebx
  int v4; // edx
  DWORD v5; // edx
  int v6; // r15d
  RPC_STATUS v7; // eax
  bool v8; // cc
  LSTATUS v9; // eax
  SIZE_T v10; // rax
  void *v11; // r14
  BYTE *v12; // r12
  DWORD v13; // eax
  LSTATUS v14; // eax
  _QWORD *v15; // rax
  _QWORD *v16; // r15
  unsigned __int64 v17; // rdx
  CAudioDGProcess *v18; // rcx
  char v19; // si
  unsigned __int64 v20; // r14
  BYTE *v21; // r12
  SAFEARRAY *v22; // rax
  SAFEARRAY *v23; // r13
  unsigned int v24; // esi
  CAudioDGProcess *v25; // rcx
  char *v26; // rax
  size_t v27; // r8
  const unsigned __int16 *v28; // rsi
  unsigned __int16 *v29; // rax
  LSTATUS v30; // eax
  int v31; // ebx
  SIZE_T v32; // rdx
  const char *v33; // rsi
  char *v34; // rax
  SIZE_T v35; // rdx
  BSTR v36; // rax
  int v39; // [rsp+70h] [rbp-98h]
  HKEY phkResult; // [rsp+78h] [rbp-90h] BYREF
  DWORD cchValueName; // [rsp+80h] [rbp-88h] BYREF
  DWORD cbMaxValueNameLen; // [rsp+84h] [rbp-84h] BYREF
  DWORD cbMaxValueLen; // [rsp+88h] [rbp-80h] BYREF
  DWORD cbData; // [rsp+8Ch] [rbp-7Ch] BYREF
  DWORD v45; // [rsp+90h] [rbp-78h]
  DWORD cValues; // [rsp+94h] [rbp-74h] BYREF
  SAFEARRAY *v47; // [rsp+98h] [rbp-70h] BYREF
  HKEY hKey; // [rsp+A0h] [rbp-68h] BYREF
  int v49; // [rsp+A8h] [rbp-60h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+B0h] [rbp-58h] BYREF
  char v51; // [rsp+B8h] [rbp-50h]
  SAFEARRAYBOUND rgsabound; // [rsp+C0h] [rbp-48h] BYREF
  SIZE_T cb; // [rsp+C8h] [rbp-40h] BYREF
  SIZE_T v54; // [rsp+D0h] [rbp-38h] BYREF
  BYTE *v55; // [rsp+D8h] [rbp-30h]
  LPVOID v56; // [rsp+E0h] [rbp-28h]
  struct _FILETIME ftLastWriteTime; // [rsp+E8h] [rbp-20h] BYREF
  GUID pclsid; // [rsp+F0h] [rbp-18h] BYREF
  OLECHAR sz[104]; // [rsp+108h] [rbp+0h] BYREF

  hKey = 0LL;
  v1 = 0;
  phkResult = 0LL;
  v2 = this;
  v3 = CAudioSessionStore::OpenStoreKey(this);
  if ( v3 < 0 )
  {
    v4 = 6180;
    goto LABEL_114;
  }
  v3 = CAudioSessionStore::OpenSessionKey(v2, &hKey);
  if ( v3 < 0 )
  {
    v4 = 6188;
    goto LABEL_114;
  }
  v51 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v2 + 48);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = 0;
  v6 = 0;
LABEL_84:
  v39 = v6;
  cchValueName = 100;
  v30 = RegEnumKeyExW(hKey, v5, sz, &cchValueName, 0LL, 0LL, 0LL, &ftLastWriteTime);
  v3 = v30;
  if ( !v30 )
  {
    v3 = CLSIDFromString(sz, &pclsid);
    if ( v3 < 0 )
      goto LABEL_108;
    v7 = RpcImpersonateClient(0LL);
    if ( v7 )
    {
      if ( v7 != 1725 )
      {
        v8 = v7 <= 0;
LABEL_10:
        if ( v8 )
        {
          v3 = v7;
          goto LABEL_108;
        }
        v31 = (unsigned __int16)v7;
        goto LABEL_106;
      }
    }
    else
    {
      v1 = 1;
    }
    v7 = RegOpenKeyExW(hKey, sz, 0, 0x20019u, &phkResult);
    v8 = v7 <= 0;
    if ( v7 )
      goto LABEL_10;
    if ( v1 )
      RpcRevertToSelf();
    v1 = 0;
    v9 = RegQueryInfoKeyW(
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
    if ( v9 )
    {
      if ( v9 > 0 )
        v3 = (unsigned __int16)v9 | 0x80070000;
      else
        v3 = v9;
      goto LABEL_104;
    }
    v10 = 2LL * ++cbMaxValueNameLen;
    if ( !is_mul_ok(cbMaxValueNameLen, 2uLL) )
      v10 = -1LL;
    v56 = operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v56;
    if ( !v56 )
    {
      v3 = -2147024882;
      goto LABEL_104;
    }
    v55 = (BYTE *)operator new[](cbMaxValueLen, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v55;
    if ( !v55 )
    {
      v3 = -2147024882;
      operator delete(v11);
LABEL_104:
      RegCloseKey(phkResult);
      phkResult = 0LL;
      goto LABEL_108;
    }
    v13 = 0;
    v45 = 0;
    if ( !cValues )
      goto LABEL_82;
    while ( 1 )
    {
      cchValueName = cbMaxValueNameLen;
      cbData = cbMaxValueLen;
      v14 = RegEnumValueW(phkResult, v13, (LPWSTR)v11, &cchValueName, 0LL, 0LL, v12, &cbData);
      if ( v14 == 259 )
        goto LABEL_81;
      if ( v14 )
      {
        v6 = v39;
        if ( v14 > 0 )
          v3 = (unsigned __int16)v14 | 0x80070000;
        else
          v3 = v14;
LABEL_82:
        operator delete(v12);
        operator delete(v11);
        RegCloseKey(phkResult);
        phkResult = 0LL;
        if ( v3 < 0 )
          goto LABEL_108;
        v5 = ++v6;
        goto LABEL_84;
      }
      v15 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      v16 = v15;
      if ( !v15 )
      {
        v3 = -2147024882;
LABEL_81:
        v6 = v39;
        goto LABEL_82;
      }
      v15[6] = *((_QWORD *)v2 + 3);
      *((_DWORD *)v15 + 4) = _o__wtoi(v11);
      v3 = 0;
      *(GUID *)v16 = pclsid;
      *(_OWORD *)(v16 + 3) = *(_OWORD *)v12;
      v16[5] = *((_QWORD *)v12 + 2);
      switch ( *((_WORD *)v16 + 12) )
      {
        case 8:
          v36 = SysAllocString((const OLECHAR *)&v12[v16[4]]);
          v16[4] = v36;
          if ( !v36 )
          {
            v3 = -2147024882;
            goto LABEL_80;
          }
          goto LABEL_45;
        case 0x1E:
          v33 = (const char *)&v12[v16[4]];
          v3 = StringCbLengthA(v33, v17, &v54);
          if ( v3 )
            goto LABEL_79;
          v34 = (char *)CoTaskMemAlloc(v54);
          if ( !v34 )
          {
LABEL_78:
            v3 = -2147024882;
LABEL_79:
            v2 = this;
            goto LABEL_80;
          }
          v35 = v54;
          v16[4] = v34;
          StringCchCopyA(v34, v35, v33);
          goto LABEL_44;
        case 0x1F:
          v28 = (const unsigned __int16 *)&v12[v16[4]];
          v3 = StringCbLengthW(v28, 0x7FFFFFFFuLL, &cb);
          if ( v3 )
            goto LABEL_79;
          v29 = (unsigned __int16 *)CoTaskMemAlloc(cb);
          if ( !v29 )
            goto LABEL_78;
          v32 = cb;
          v16[4] = v29;
          v3 = StringCbCopyW(v29, v32, v28);
          if ( v3 )
            goto LABEL_54;
          goto LABEL_44;
        case 0x41:
        case 0x46:
          v26 = (char *)CoTaskMemAlloc(*((unsigned int *)v16 + 8));
          if ( !v26 )
          {
            v3 = -2147024882;
            goto LABEL_80;
          }
          v27 = *((unsigned int *)v16 + 8);
          v16[5] = v26;
          memcpy_0(v26, &v12[(_QWORD)v26], v27);
          goto LABEL_45;
      }
      if ( *((_WORD *)v16 + 12) == 8196 )
        break;
LABEL_45:
      *((_QWORD *)v2 + 3) = v16;
LABEL_80:
      v12 = v55;
      v13 = v45 + 1;
      v11 = v56;
      v45 = v13;
      if ( v13 >= cValues )
        goto LABEL_81;
    }
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x35u, (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids);
      v18 = WPP_GLOBAL_Control;
    }
    v19 = cbData - 24;
    v20 = ((unsigned __int64)cbData - 24) >> 2;
    if ( v18 != (CAudioDGProcess *)&WPP_GLOBAL_Control && (*((_BYTE *)v18 + 28) & 8) != 0 && *((_BYTE *)v18 + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)v18 + 2), 0x36u, (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids, cbData - 24LL);
      v18 = WPP_GLOBAL_Control;
    }
    if ( (v19 & 3) != 0 )
    {
      if ( v18 != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v18 + 28) & 8) != 0
        && *((_BYTE *)v18 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v18 + 2), 0x37u, (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids);
      }
LABEL_44:
      v2 = this;
      goto LABEL_45;
    }
    v21 = &v12[v16[4]];
    rgsabound.cElements = v20;
    rgsabound.lLbound = 0;
    v22 = SafeArrayCreate(4u, 1u, &rgsabound);
    v47 = v22;
    v23 = v22;
    if ( !v22 )
    {
      v3 = -2147024882;
LABEL_49:
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x38u, (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids);
      }
      goto LABEL_53;
    }
    v3 = SafeArrayLock(v22);
    if ( v3 )
      goto LABEL_49;
    v24 = 0;
    if ( v20 )
    {
      while ( 1 )
      {
        v49 = *(_DWORD *)v21;
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_dg(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x39u,
            (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids,
            v24);
        }
        v3 = ATL::CComSafeArray<float,4>::SetAt(&v47, v24, &v49);
        if ( v3 )
          break;
        ++v24;
        v21 += 4;
        if ( v24 >= v20 )
          goto LABEL_62;
      }
      v25 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CAudioDGProcess *)&WPP_GLOBAL_Control
        || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
        goto LABEL_68;
      }
      WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 58LL, &WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids);
    }
    v25 = WPP_GLOBAL_Control;
LABEL_68:
    if ( v3 )
    {
      if ( v25 != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v25 + 28) & 8) != 0
        && *((_BYTE *)v25 + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)v25 + 2), 0x3Bu, (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids, v3);
      }
LABEL_53:
      ATL::CComSafeArray<float,4>::Destroy(&v47);
LABEL_54:
      v2 = this;
      goto LABEL_80;
    }
LABEL_62:
    SafeArrayUnlock(v23);
    v47 = 0LL;
    v16[4] = v23;
    ATL::CComSafeArray<float,4>::Destroy(&v47);
    goto LABEL_44;
  }
  if ( v30 != 259 )
  {
    if ( v30 <= 0 )
      goto LABEL_108;
    v31 = (unsigned __int16)v30;
LABEL_106:
    v3 = v31 | 0x80070000;
    goto LABEL_108;
  }
  v3 = 0;
LABEL_108:
  if ( v51 )
    LeaveCriticalSection(lpCriticalSection);
  RegCloseKey(hKey);
  phkResult = 0LL;
  if ( v1 )
    RpcRevertToSelf();
  if ( v3 < 0 )
  {
    v4 = 6541;
LABEL_114:
    AudSrvTraceLoggingErrorHelper("CAudioSessionStore::LoadPropertyStore", v4, v3);
  }
  return (unsigned int)v3;
}
