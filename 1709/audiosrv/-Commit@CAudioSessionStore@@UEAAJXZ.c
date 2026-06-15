/*
 * XREFs of ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x18007FD70
 * Callers:
 *     ??1CAudioSessionStore@@AEAA@XZ @ 0x18007F480 (--1CAudioSessionStore@@AEAA@XZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800314E8 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_Sd @ 0x180067B48 (WPP_SF_Sd.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180080FF8 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z @ 0x1800839BC (-FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z.c)
 *     ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x180085DC0 (-OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z.c)
 */

__int64 __fastcall CAudioSessionStore::Commit(CAudioSessionStore *this)
{
  int v2; // edi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rbx
  HRESULT v7; // eax
  RPC_STATUS v8; // eax
  int v9; // esi
  int v10; // r14d
  CAudioDGProcess *v11; // rcx
  unsigned __int16 v12; // dx
  int v13; // r9d
  int v14; // eax
  CAudioSessionStore *v15; // rcx
  RPC_STATUS v16; // eax
  bool v17; // zf
  const BYTE *lpData; // rax
  BYTE *v19; // rsi
  HKEY hKey; // [rsp+38h] [rbp-19h] BYREF
  HKEY v21; // [rsp+40h] [rbp-11h] BYREF
  LPOLESTR lpsz; // [rsp+48h] [rbp-9h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-1h] BYREF
  char v24; // [rsp+58h] [rbp+7h]
  unsigned __int64 cbData; // [rsp+60h] [rbp+Fh] BYREF
  WCHAR ValueName[20]; // [rsp+68h] [rbp+17h] BYREF

  v21 = 0LL;
  v2 = 0;
  hKey = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids);
  }
  v3 = CAudioSessionStore::OpenSessionKey(this, &v21);
  v4 = v3;
  if ( v3 )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Du,
        (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids,
        v3);
    }
    return v4;
  }
  v24 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = *((_QWORD *)this + 3);
  while ( v6 )
  {
    v7 = StringFromCLSID((const IID *const)v6, &lpsz);
    if ( v7 )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Eu,
          (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids,
          v7);
      }
    }
    else
    {
      v8 = RpcImpersonateClient(0LL);
      if ( !v8 )
      {
        v2 = 1;
LABEL_25:
        v9 = CreateLowRightsRegistryKey(v21, lpsz, 0x20006u, &hKey);
        CoTaskMemFree(lpsz);
        if ( v2 )
          RpcRevertToSelf();
        v2 = 0;
        v10 = 0;
        if ( v9 )
        {
          v11 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            v12 = 32;
            v13 = v9;
            goto LABEL_32;
          }
        }
        else
        {
          v14 = StringCbPrintfW(ValueName, 0x28uLL, L"%d", *(unsigned int *)(v6 + 16));
          if ( v14 )
          {
            v11 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              v12 = 33;
              v13 = v14;
LABEL_32:
              WPP_SF_d(*((_QWORD *)v11 + 2), v12, (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids, v13);
            }
          }
          else
          {
            if ( *(_WORD *)(v6 + 24) )
            {
              lpData = CAudioSessionStore::FlattenProperty(v15, (const struct tagPROPVARIANT *)(v6 + 24), &cbData);
              v19 = (BYTE *)lpData;
              if ( lpData )
                RegSetValueExW(hKey, ValueName, 0, 3u, lpData, cbData);
              if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_Sd(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  0x23u,
                  (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids,
                  ValueName);
              }
              operator delete(v19);
            }
            else
            {
              v16 = RpcImpersonateClient(0LL);
              v17 = v16 == 0;
              if ( v16 )
              {
                if ( v16 != 1725 )
                  continue;
                v17 = 0;
              }
              if ( v17 )
                v10 = 1;
              RegDeleteValueW(hKey, ValueName);
              if ( v10 )
                RpcRevertToSelf();
              if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_Sd(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  0x22u,
                  (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids,
                  ValueName);
              }
            }
            RegCloseKey(hKey);
            hKey = 0LL;
          }
        }
        v6 = *(_QWORD *)(v6 + 48);
        continue;
      }
      if ( v8 == 1725 )
        goto LABEL_25;
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Fu,
          (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids,
          v8);
      }
    }
    v6 = *(_QWORD *)(v6 + 48);
  }
  if ( v24 )
    LeaveCriticalSection(lpCriticalSection);
  RegCloseKey(v21);
  return 0LL;
}
