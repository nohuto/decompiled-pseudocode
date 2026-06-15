/*
 * XREFs of ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x1800424A0
 * Callers:
 *     ??1CAudioSessionStore@@AEAA@XZ @ 0x1800425F0 (--1CAudioSessionStore@@AEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18002ABE0 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x1800411A0 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x1800420A8 (-OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     WPP_SF_Sd @ 0x1800ADF18 (WPP_SF_Sd.c)
 *     ?FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z @ 0x1800BB838 (-FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

__int64 __fastcall CAudioSessionStore::Commit(HKEY *this)
{
  int v2; // edi
  unsigned int v3; // eax
  unsigned int v4; // ebx
  HKEY v5; // rbx
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // esi
  int v10; // r14d
  CAudioSessionManager *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r9
  unsigned int v14; // eax
  CAudioSessionStore *v15; // rcx
  RPC_STATUS v16; // eax
  bool v17; // zf
  LSTATUS v18; // eax
  char v19; // si
  const BYTE *lpData; // rax
  BYTE *v21; // rsi
  char v22; // al
  HKEY v23; // [rsp+38h] [rbp-19h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-11h] BYREF
  LPOLESTR lpsz; // [rsp+48h] [rbp-9h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-1h] BYREF
  char v27; // [rsp+58h] [rbp+7h]
  unsigned __int64 cbData; // [rsp+60h] [rbp+Fh] BYREF
  WCHAR ValueName[20]; // [rsp+68h] [rbp+17h] BYREF

  hKey = 0LL;
  v2 = 0;
  v23 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_143dd52affcd33359900bde90742b95f_Traceguids);
  }
  v3 = CAudioSessionStore::OpenSessionKey(this, &hKey);
  v4 = v3;
  if ( !v3 )
  {
    v27 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)(this + 6);
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v5 = this[3];
    if ( !v5 )
    {
LABEL_5:
      if ( v27 )
        LeaveCriticalSection(lpCriticalSection);
      RegCloseKey(hKey);
      return 0LL;
    }
    while ( 1 )
    {
      v7 = StringFromCLSID((const IID *const)v5, &lpsz);
      if ( v7 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_143dd52affcd33359900bde90742b95f_Traceguids, v7);
        }
      }
      else
      {
        v8 = RpcImpersonateClient(0LL);
        if ( !v8 )
        {
          v2 = 1;
LABEL_28:
          v9 = CreateLowRightsRegistryKey(hKey, lpsz, 131078, &v23);
          CoTaskMemFree(lpsz);
          if ( v2 )
            RpcRevertToSelf();
          v2 = 0;
          v10 = 0;
          if ( v9 )
          {
            v11 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              v12 = 31LL;
              v13 = v9;
              goto LABEL_35;
            }
          }
          else
          {
            v14 = StringCbPrintfW(ValueName, 0x28uLL, L"%d", *((unsigned int *)v5 + 4));
            if ( v14 )
            {
              v11 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                v12 = 32LL;
                v13 = v14;
LABEL_35:
                WPP_SF_d(*((_QWORD *)v11 + 2), v12, &WPP_143dd52affcd33359900bde90742b95f_Traceguids, v13);
              }
            }
            else
            {
              if ( *((_WORD *)v5 + 12) )
              {
                lpData = CAudioSessionStore::FlattenProperty(v15, (const struct tagPROPVARIANT *)v5 + 1, &cbData);
                v21 = (BYTE *)lpData;
                if ( lpData )
                  v22 = RegSetValueExW(v23, ValueName, 0, 3u, lpData, cbData);
                else
                  v22 = 8;
                if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                  && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_Sd(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    34,
                    (unsigned int)&WPP_143dd52affcd33359900bde90742b95f_Traceguids,
                    (unsigned int)ValueName,
                    v22);
                }
                operator delete(v21);
              }
              else
              {
                v16 = RpcImpersonateClient(0LL);
                v17 = v16 == 0;
                if ( v16 )
                {
                  if ( v16 != 1725 )
                    goto LABEL_65;
                  v17 = 0;
                }
                if ( v17 )
                  v10 = 1;
                v18 = RegDeleteValueW(v23, ValueName);
                v19 = v18;
                if ( v18 > 0 )
                  v19 = v18;
                if ( v10 )
                  RpcRevertToSelf();
                if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                  && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_Sd(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    33,
                    (unsigned int)&WPP_143dd52affcd33359900bde90742b95f_Traceguids,
                    (unsigned int)ValueName,
                    v19);
                }
              }
              RegCloseKey(v23);
              v23 = 0LL;
            }
          }
          v5 = (HKEY)*((_QWORD *)v5 + 6);
          goto LABEL_65;
        }
        if ( v8 == 1725 )
          goto LABEL_28;
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_143dd52affcd33359900bde90742b95f_Traceguids, v8);
        }
      }
      v5 = (HKEY)*((_QWORD *)v5 + 6);
LABEL_65:
      if ( !v5 )
        goto LABEL_5;
    }
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_143dd52affcd33359900bde90742b95f_Traceguids, v3);
  }
  return v4;
}
