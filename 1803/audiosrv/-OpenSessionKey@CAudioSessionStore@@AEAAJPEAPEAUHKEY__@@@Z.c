/*
 * XREFs of ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x1800420A8
 * Callers:
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x180041F60 (-LoadPropertyStore@CAudioSessionStore@@AEAAJXZ.c)
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x1800424A0 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180018A18 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x180019360 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180030910 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800340D0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x1800411A0 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?IsEqual@CAudioSessionStore@@QEAAHPEBG@Z @ 0x1800425B8 (-IsEqual@CAudioSessionStore@@QEAAHPEBG@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061040 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     WPP_SF_Sd @ 0x1800ADF18 (WPP_SF_Sd.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionStore::OpenSessionKey(HKEY *this, HKEY *a2)
{
  HKEY *v3; // r12
  struct ATL::CStringData *(__fastcall *v4)(ATL::CAtlStringMgr *); // rax
  ATL::CStringData *NilString; // rax
  struct ATL::CStringData *(__fastcall *v6)(ATL::CAtlStringMgr *); // rax
  struct ATL::CStringData *v7; // rax
  const unsigned __int16 *v8; // rbx
  RPC_STATUS v9; // eax
  int v10; // edi
  LSTATUS ValueW; // eax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  void *pvData; // r12
  HKEY v15; // rcx
  unsigned int v16; // eax
  int *v18; // rbx
  DWORD v19; // eax
  CAudioSessionManager *v20; // rcx
  bool v21; // sf
  int v22; // edi
  int LowRightsRegistryKey; // eax
  const BYTE *v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // eax
  int v27; // r12d
  DWORD phkResult[4]; // [rsp+40h] [rbp-68h] BYREF
  LPCWSTR lpSubKey; // [rsp+50h] [rbp-58h] BYREF
  ATL::CStringData *v30; // [rsp+58h] [rbp-50h]
  __int64 v31; // [rsp+60h] [rbp-48h]
  char *v32; // [rsp+68h] [rbp-40h]
  ATL::CAtlException *v33; // [rsp+70h] [rbp-38h] BYREF
  char v36; // [rsp+C0h] [rbp+18h]
  DWORD v37; // [rsp+C8h] [rbp+20h]

  v31 = -2LL;
  v3 = this;
  v36 = 0;
  memset(&phkResult[1], 0, 12);
  v4 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24);
  if ( v4 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v4((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v30 = NilString;
  v32 = (char *)NilString + 24;
  v6 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24);
  if ( v6 == ATL::CAtlStringMgr::GetNilString )
    v7 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v7 = v6((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v8 = (const unsigned __int16 *)((char *)v7 + 24);
  lpSubKey = (LPCWSTR)((char *)v7 + 24);
  *a2 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_143dd52affcd33359900bde90742b95f_Traceguids);
  }
  if ( !v3[4] )
  {
    v10 = -2147024891;
    goto LABEL_31;
  }
  v9 = RpcImpersonateClient(0LL);
  v10 = v9;
  if ( !v9 )
  {
    v36 = 1;
    goto LABEL_104;
  }
  if ( v9 == 1725 )
  {
LABEL_104:
    try
    {
      v19 = ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash((unsigned __int16 *)v3[2]);
      v37 = v19;
      phkResult[1] = v19;
    }
    catch ( ATL::CAtlException *v33 )
    {
      v18 = (int *)v33;
      if ( *(_DWORD *)v33 == -1073741571 )
        _o__resetstkoflw();
      v10 = *v18;
      if ( *v18 < 0 )
      {
        v8 = lpSubKey;
LABEL_22:
        if ( v36 )
          RpcRevertToSelf();
        goto LABEL_24;
      }
      v19 = phkResult[1];
      v37 = phkResult[1];
      v3 = this;
    }
    phkResult[1] = 0;
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      (wchar_t **)&lpSubKey,
      L"%x_%d",
      v19,
      0LL);
    v8 = lpSubKey;
    v10 = RegOpenKeyExW(v3[4], lpSubKey, 0, 0x20019u, (PHKEY)&phkResult[2]);
    if ( !v10 )
    {
      while ( 1 )
      {
        phkResult[0] = 0;
        ValueW = RegGetValueW(*(HKEY *)&phkResult[2], 0LL, 0LL, 2u, 0LL, 0LL, phkResult);
        v10 = ValueW;
        if ( ValueW )
        {
          if ( ValueW > 0 )
            v10 = (unsigned __int16)ValueW | 0x80070000;
          goto LABEL_63;
        }
        v12 = ((unsigned __int64)phkResult[0] >> 1) + 1;
        v13 = 2 * v12;
        if ( !is_mul_ok(v12, 2uLL) )
          v13 = -1LL;
        pvData = operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
        v15 = *(HKEY *)&phkResult[2];
        if ( !pvData )
        {
          v10 = -2147024882;
          goto LABEL_98;
        }
        v16 = RegGetValueW(*(HKEY *)&phkResult[2], 0LL, 0LL, 2u, 0LL, pvData, phkResult);
        v10 = v16;
        if ( v16 )
        {
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 43LL, &WPP_143dd52affcd33359900bde90742b95f_Traceguids, v16);
          }
          if ( v10 > 0 )
            v10 = (unsigned __int16)v10 | 0x80070000;
          operator delete(pvData);
LABEL_63:
          RegCloseKey(*(HKEY *)&phkResult[2]);
          *(_QWORD *)&phkResult[2] = 0LL;
          v20 = WPP_GLOBAL_Control;
          goto LABEL_65;
        }
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 44LL, &WPP_143dd52affcd33359900bde90742b95f_Traceguids, pvData);
        }
        if ( CAudioSessionStore::IsEqual((CAudioSessionStore *)this, (const unsigned __int16 *)pvData) )
          break;
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            46LL,
            &WPP_143dd52affcd33359900bde90742b95f_Traceguids,
            *(_QWORD *)&phkResult[2]);
        }
        operator delete(pvData);
        RegCloseKey(*(HKEY *)&phkResult[2]);
        phkResult[3] = 0;
        *(_QWORD *)&phkResult[1] = phkResult[1] + 1;
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
          (wchar_t **)&lpSubKey,
          L"%x_%d",
          v37,
          phkResult[1]);
        v8 = lpSubKey;
        v10 = RegOpenKeyExW(this[4], lpSubKey, 0, 0x20019u, (PHKEY)&phkResult[2]);
        if ( v10 )
          goto LABEL_44;
      }
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          45LL,
          &WPP_143dd52affcd33359900bde90742b95f_Traceguids,
          *(_QWORD *)&phkResult[2]);
      }
      operator delete(pvData);
      *a2 = *(HKEY *)&phkResult[2];
      v10 = 0;
      goto LABEL_22;
    }
LABEL_44:
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        42,
        (unsigned int)&WPP_143dd52affcd33359900bde90742b95f_Traceguids,
        (_DWORD)v8,
        v10);
      v20 = WPP_GLOBAL_Control;
    }
    if ( v10 == 2 )
    {
      v10 = 0;
    }
    else
    {
      v21 = v10 < 0;
      if ( v10 <= 0 )
        goto LABEL_66;
      v10 = (unsigned __int16)v10 | 0x80070000;
    }
LABEL_65:
    v21 = v10 < 0;
LABEL_66:
    if ( !v21 )
    {
      if ( v20 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v20 + 28) & 8) != 0
        && *((_BYTE *)v20 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v20 + 2), 47LL, &WPP_143dd52affcd33359900bde90742b95f_Traceguids);
      }
      v22 = 0;
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        (wchar_t **)&lpSubKey,
        L"%x_%d",
        v37,
        0LL);
      while ( 1 )
      {
        v8 = lpSubKey;
        if ( RegOpenKeyExW(this[4], lpSubKey, 0, 0x20019u, (PHKEY)&phkResult[2]) )
          break;
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 48LL, &WPP_143dd52affcd33359900bde90742b95f_Traceguids, v8);
        }
        RegCloseKey(*(HKEY *)&phkResult[2]);
        *(_QWORD *)&phkResult[2] = 0LL;
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
          (wchar_t **)&lpSubKey,
          L"%x_%d",
          v37,
          (unsigned int)++v22);
      }
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 49LL, &WPP_143dd52affcd33359900bde90742b95f_Traceguids, v8);
      }
      *(_QWORD *)&phkResult[2] = 0LL;
      LowRightsRegistryKey = CreateLowRightsRegistryKey(this[4], v8, 131103, (HKEY *)&phkResult[2]);
      v10 = LowRightsRegistryKey;
      if ( LowRightsRegistryKey >= 0 )
      {
        v24 = (const BYTE *)this[2];
        v25 = -1LL;
        do
          ++v25;
        while ( *(_WORD *)&v24[2 * v25] );
        phkResult[0] = 2 * v25 + 2;
        v26 = RegSetValueExW(*(HKEY *)&phkResult[2], 0LL, 0, 1u, v24, phkResult[0]);
        v27 = v26;
        if ( v26 )
        {
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 51LL, &WPP_143dd52affcd33359900bde90742b95f_Traceguids, v26);
          }
          if ( v27 > 0 )
            v10 = (unsigned __int16)v27 | 0x80070000;
          else
            v10 = v27;
          v15 = *(HKEY *)&phkResult[2];
LABEL_98:
          RegCloseKey(v15);
          *(_QWORD *)&phkResult[2] = 0LL;
        }
        else
        {
          *a2 = *(HKEY *)&phkResult[2];
        }
      }
      else if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
             && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          50LL,
          &WPP_143dd52affcd33359900bde90742b95f_Traceguids,
          (unsigned int)LowRightsRegistryKey);
      }
    }
    goto LABEL_22;
  }
  if ( v9 > 0 )
    v10 = (unsigned __int16)v9 | 0x80070000;
LABEL_24:
  if ( v10 < 0 )
LABEL_31:
    AudSrvTraceLoggingErrorHelper("CAudioSessionStore::OpenSessionKey", 0x17F3u, v10);
  ATL::CStringData::Release((ATL::CStringData *)(v8 - 12));
  ATL::CStringData::Release(v30);
  return (unsigned int)v10;
}
