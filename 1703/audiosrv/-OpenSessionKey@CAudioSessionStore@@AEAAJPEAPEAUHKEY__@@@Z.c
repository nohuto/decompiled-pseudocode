/*
 * XREFs of ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x1800313F8
 * Callers:
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x1800312B0 (-LoadPropertyStore@CAudioSessionStore@@AEAAJXZ.c)
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x1800317E0 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180020560 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180023200 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180023588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x180025020 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180030578 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?IsEqual@CAudioSessionStore@@QEAAHPEBG@Z @ 0x1800318F8 (-IsEqual@CAudioSessionStore@@QEAAHPEBG@Z.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049340 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     WPP_SF_Sd @ 0x180084A58 (WPP_SF_Sd.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionStore::OpenSessionKey(CAudioSessionStore *this, HKEY *a2)
{
  CAudioSessionStore *v3; // r12
  RPC_STATUS v4; // eax
  signed int v5; // edi
  __int64 v6; // r9
  __int64 i; // r8
  const unsigned __int16 *v8; // rbx
  LSTATUS v9; // eax
  LSTATUS ValueW; // eax
  unsigned __int64 v11; // rax
  unsigned __int16 *pvData; // rax
  unsigned int v13; // eax
  unsigned __int16 *v14; // rdi
  signed int *v16; // rbx
  unsigned int v17; // eax
  CVolumeStrip *v18; // rcx
  bool v19; // sf
  unsigned int v20; // edi
  __int64 j; // r9
  int v22; // eax
  const BYTE *v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // eax
  int v26; // r12d
  DWORD pcbData; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int16 *v28; // [rsp+48h] [rbp-60h]
  HKEY hkey; // [rsp+50h] [rbp-58h] BYREF
  LPCWSTR lpSubKey; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v31[2]; // [rsp+60h] [rbp-48h] BYREF
  ATL::CAtlException *v32; // [rsp+70h] [rbp-38h] BYREF
  int v34; // [rsp+B0h] [rbp+8h]
  char v36; // [rsp+C0h] [rbp+18h]
  unsigned int v37; // [rsp+C8h] [rbp+20h]

  v31[1] = -2LL;
  v3 = this;
  hkey = 0LL;
  v36 = 0;
  LODWORD(v28) = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    v31,
    (volatile signed __int32 *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    &lpSubKey,
    (volatile signed __int32 *)&ATL::g_strmgr);
  *a2 = 0LL;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_063b73282fa230620b2f84334c1c051f_Traceguids);
  }
  if ( !*((_QWORD *)v3 + 4) )
  {
    v5 = -2147024891;
    v8 = lpSubKey;
    goto LABEL_95;
  }
  v4 = RpcImpersonateClient(0LL);
  v5 = v4;
  if ( !v4 )
  {
    v36 = 1;
    goto LABEL_99;
  }
  if ( v4 == 1725 )
  {
LABEL_99:
    try
    {
      v17 = ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(*((unsigned __int16 **)v3 + 2));
      v37 = v17;
      LODWORD(v28) = v17;
    }
    catch ( ATL::CAtlException *v32 )
    {
      v16 = (signed int *)v32;
      if ( *(_DWORD *)v32 == -1073741571 )
        _o__resetstkoflw();
      v5 = *v16;
      if ( *v16 < 0 )
      {
        v8 = lpSubKey;
LABEL_25:
        if ( v36 )
          RpcRevertToSelf();
        goto LABEL_27;
      }
      v3 = this;
      v17 = (unsigned int)v28;
      v37 = (unsigned int)v28;
    }
    v34 = 0;
    v6 = 0LL;
    for ( i = v17; ; i = v37 )
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        (wchar_t *const *)&lpSubKey,
        L"%x_%d",
        i,
        v6);
      v8 = lpSubKey;
      v9 = RegOpenKeyExW(*((HKEY *)v3 + 4), lpSubKey, 0, 0x20019u, &hkey);
      v5 = v9;
      if ( v9 )
        break;
      pcbData = 0;
      ValueW = RegGetValueW(hkey, 0LL, 0LL, 2u, 0LL, 0LL, &pcbData);
      v5 = ValueW;
      if ( ValueW )
      {
        if ( ValueW > 0 )
          v5 = (unsigned __int16)ValueW | 0x80070000;
        goto LABEL_51;
      }
      v11 = 2 * (((unsigned __int64)pcbData >> 1) + 1);
      if ( !is_mul_ok(((unsigned __int64)pcbData >> 1) + 1, 2uLL) )
        v11 = -1LL;
      pvData = (unsigned __int16 *)operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
      v28 = pvData;
      if ( !pvData )
      {
        v5 = -2147024882;
LABEL_92:
        RegCloseKey(hkey);
        hkey = 0LL;
        goto LABEL_25;
      }
      v13 = RegGetValueW(hkey, 0LL, 0LL, 2u, 0LL, pvData, &pcbData);
      v5 = v13;
      if ( v13 )
      {
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 44LL, &WPP_063b73282fa230620b2f84334c1c051f_Traceguids, v13);
        }
        if ( v5 > 0 )
          v5 = (unsigned __int16)v5 | 0x80070000;
        operator delete(v28);
LABEL_51:
        RegCloseKey(hkey);
        hkey = 0LL;
        v18 = WPP_GLOBAL_Control;
        goto LABEL_60;
      }
      if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) == 0 )
      {
        v14 = v28;
      }
      else
      {
        v14 = v28;
        if ( *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 45LL, &WPP_063b73282fa230620b2f84334c1c051f_Traceguids, v28);
      }
      if ( CAudioSessionStore::IsEqual(v3, v14) )
      {
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 46LL, &WPP_063b73282fa230620b2f84334c1c051f_Traceguids, hkey);
        }
        operator delete(v14);
        *a2 = hkey;
        v5 = 0;
        goto LABEL_25;
      }
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL, &WPP_063b73282fa230620b2f84334c1c051f_Traceguids, hkey);
      }
      operator delete(v14);
      RegCloseKey(hkey);
      hkey = 0LL;
      v6 = (unsigned int)++v34;
    }
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        43,
        (unsigned int)&WPP_063b73282fa230620b2f84334c1c051f_Traceguids,
        (_DWORD)v8,
        v9);
      v18 = WPP_GLOBAL_Control;
    }
    if ( v5 == 2 )
    {
      v5 = 0;
    }
    else
    {
      v19 = v5 < 0;
      if ( v5 <= 0 )
        goto LABEL_61;
      v5 = (unsigned __int16)v5 | 0x80070000;
    }
LABEL_60:
    v19 = v5 < 0;
LABEL_61:
    if ( v19 )
      goto LABEL_25;
    if ( v18 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_BYTE *)v18 + 28) & 8) != 0 && *((_BYTE *)v18 + 25) >= 4u )
      WPP_SF_(*((_QWORD *)v18 + 2), 48LL, &WPP_063b73282fa230620b2f84334c1c051f_Traceguids);
    v20 = 0;
    for ( j = 0LL; ; j = v20 )
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        (wchar_t *const *)&lpSubKey,
        L"%x_%d",
        v37,
        j);
      v8 = lpSubKey;
      if ( RegOpenKeyExW(*((HKEY *)v3 + 4), lpSubKey, 0, 0x20019u, &hkey) )
        break;
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 49LL, &WPP_063b73282fa230620b2f84334c1c051f_Traceguids, v8);
      }
      RegCloseKey(hkey);
      hkey = 0LL;
      ++v20;
    }
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 50LL, &WPP_063b73282fa230620b2f84334c1c051f_Traceguids, v8);
    }
    hkey = 0LL;
    v22 = CreateLowRightsRegistryKey(*((HKEY *)v3 + 4), v8, 131103, &hkey);
    v5 = v22;
    if ( v22 >= 0 )
    {
      v23 = (const BYTE *)*((_QWORD *)v3 + 2);
      v24 = -1LL;
      do
        ++v24;
      while ( *(_WORD *)&v23[2 * v24] );
      pcbData = 2 * v24 + 2;
      v25 = RegSetValueExW(hkey, 0LL, 0, 1u, v23, pcbData);
      v26 = v25;
      if ( v25 )
      {
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_063b73282fa230620b2f84334c1c051f_Traceguids, v25);
        }
        if ( v26 > 0 )
          v5 = (unsigned __int16)v26 | 0x80070000;
        else
          v5 = v26;
        goto LABEL_92;
      }
      *a2 = hkey;
    }
    else if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
           && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        51LL,
        &WPP_063b73282fa230620b2f84334c1c051f_Traceguids,
        (unsigned int)v22);
    }
    goto LABEL_25;
  }
  v8 = lpSubKey;
  if ( v4 > 0 )
    v5 = (unsigned __int16)v4 | 0x80070000;
LABEL_27:
  if ( v5 < 0 )
LABEL_95:
    AudSrvTraceLoggingErrorHelper("CAudioSessionStore::OpenSessionKey", 0x17EEu, v5);
  ATL::CStringData::Release((ATL::CStringData *)(v8 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v31[0] - 24LL));
  return (unsigned int)v5;
}
