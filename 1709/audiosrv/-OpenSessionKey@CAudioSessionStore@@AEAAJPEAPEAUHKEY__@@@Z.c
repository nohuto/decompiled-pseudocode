/*
 * XREFs of ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x180085DC0
 * Callers:
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x18007FD70 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x1800851F0 (-LoadPropertyStore@CAudioSessionStore@@AEAAJXZ.c)
 * Callees:
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180017E9C (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001827C (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180033220 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18005B588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     WPP_SF_Sd @ 0x180067B48 (WPP_SF_Sd.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x18007DF84 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180080FF8 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?IsEqual@CAudioSessionStore@@QEAAHPEBG@Z @ 0x180084EA0 (-IsEqual@CAudioSessionStore@@QEAAHPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionStore::OpenSessionKey(CAudioSessionStore *this, HKEY *a2)
{
  CAudioSessionStore *v3; // r12
  int v4; // edi
  const wchar_t *v5; // rbx
  RPC_STATUS v6; // eax
  unsigned int v7; // eax
  __int64 v8; // r9
  __int64 i; // r8
  LSTATUS ValueW; // eax
  SIZE_T v11; // rax
  unsigned __int16 *pvData; // rax
  LSTATUS v13; // eax
  unsigned __int16 *v14; // rdi
  CAudioDGProcess *v15; // rcx
  bool v16; // sf
  unsigned int v17; // edi
  __int64 j; // r9
  int v19; // eax
  const BYTE *v20; // rcx
  __int64 v21; // rax
  LSTATUS v22; // eax
  int v23; // r12d
  __int64 result; // rax
  int *v25; // rbx
  DWORD pcbData; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int16 *v27; // [rsp+48h] [rbp-60h]
  HKEY hkey; // [rsp+50h] [rbp-58h] BYREF
  LPCWSTR lpSubKey; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v30[2]; // [rsp+60h] [rbp-48h] BYREF
  ATL::CAtlException *v31; // [rsp+70h] [rbp-38h] BYREF
  int v33; // [rsp+B0h] [rbp+8h]
  char v35; // [rsp+C0h] [rbp+18h]
  unsigned int v36; // [rsp+C8h] [rbp+20h]

  v30[1] = -2LL;
  v3 = this;
  hkey = 0LL;
  v35 = 0;
  LODWORD(v27) = 0;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(v30, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&lpSubKey, (__int64)&ATL::g_strmgr);
  *a2 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Au, (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids);
  }
  if ( !*((_QWORD *)v3 + 4) )
  {
    v4 = -2147024891;
    v5 = lpSubKey;
LABEL_95:
    AudSrvTraceLoggingErrorHelper("CAudioSessionStore::OpenSessionKey", 6146, v4);
    goto LABEL_96;
  }
  v6 = RpcImpersonateClient(0LL);
  v4 = v6;
  if ( v6 )
  {
    if ( v6 != 1725 )
    {
      v5 = lpSubKey;
      if ( v6 > 0 )
        v4 = (unsigned __int16)v6 | 0x80070000;
      goto LABEL_94;
    }
  }
  else
  {
    v35 = 1;
  }
  try
  {
    v7 = ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(*((unsigned __int16 **)v3 + 2));
    v36 = v7;
    LODWORD(v27) = v7;
  }
  catch ( ATL::CAtlException *v31 )
  {
    v25 = (int *)v31;
    if ( *(_DWORD *)v31 == -1073741571 )
      _o__resetstkoflw();
    v4 = *v25;
    if ( *v25 >= 0 )
    {
      v3 = this;
      v7 = (unsigned int)v27;
      v36 = (unsigned int)v27;
      goto LABEL_14;
    }
    v5 = lpSubKey;
LABEL_92:
    if ( v35 )
      RpcRevertToSelf();
LABEL_94:
    if ( v4 < 0 )
      goto LABEL_95;
LABEL_96:
    ATL::CStringData::Release((ATL::CStringData *)(v5 - 12));
    ATL::CStringData::Release((ATL::CStringData *)(v30[0] - 24LL));
    result = (unsigned int)v4;
  }
LABEL_14:
  v33 = 0;
  v8 = 0LL;
  for ( i = v7; ; i = v36 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      (const void **)&lpSubKey,
      L"%x_%d",
      i,
      v8);
    v5 = lpSubKey;
    v4 = RegOpenKeyExW(*((HKEY *)v3 + 4), lpSubKey, 0, 0x20019u, &hkey);
    if ( v4 )
      break;
    pcbData = 0;
    ValueW = RegGetValueW(hkey, 0LL, 0LL, 2u, 0LL, 0LL, &pcbData);
    v4 = ValueW;
    if ( ValueW )
    {
      if ( ValueW > 0 )
        v4 = (unsigned __int16)ValueW | 0x80070000;
      goto LABEL_48;
    }
    v11 = 2 * (((unsigned __int64)pcbData >> 1) + 1);
    if ( !is_mul_ok(((unsigned __int64)pcbData >> 1) + 1, 2uLL) )
      v11 = -1LL;
    pvData = (unsigned __int16 *)operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
    v27 = pvData;
    if ( !pvData )
    {
      v4 = -2147024882;
LABEL_89:
      RegCloseKey(hkey);
      hkey = 0LL;
      goto LABEL_92;
    }
    v13 = RegGetValueW(hkey, 0LL, 0LL, 2u, 0LL, pvData, &pcbData);
    v4 = v13;
    if ( v13 )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x2Cu,
          (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids,
          v13);
      }
      if ( v4 > 0 )
        v4 = (unsigned __int16)v4 | 0x80070000;
      operator delete(v27);
LABEL_48:
      RegCloseKey(hkey);
      hkey = 0LL;
      v15 = WPP_GLOBAL_Control;
      goto LABEL_57;
    }
    if ( WPP_GLOBAL_Control == (CAudioDGProcess *)&WPP_GLOBAL_Control || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) == 0 )
    {
      v14 = v27;
    }
    else
    {
      v14 = v27;
      if ( *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x2Du,
          (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids,
          v27);
    }
    if ( CAudioSessionStore::IsEqual((PCNZWCH *)v3, v14) )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x2Eu,
          (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids,
          hkey);
      }
      operator delete(v14);
      *a2 = hkey;
      v4 = 0;
      goto LABEL_92;
    }
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Fu,
        (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids,
        hkey);
    }
    operator delete(v14);
    RegCloseKey(hkey);
    hkey = 0LL;
    v8 = (unsigned int)++v33;
  }
  v15 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Bu, (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids, v5);
    v15 = WPP_GLOBAL_Control;
  }
  if ( v4 == 2 )
  {
    v4 = 0;
  }
  else
  {
    v16 = v4 < 0;
    if ( v4 <= 0 )
      goto LABEL_58;
    v4 = (unsigned __int16)v4 | 0x80070000;
  }
LABEL_57:
  v16 = v4 < 0;
LABEL_58:
  if ( v16 )
    goto LABEL_92;
  if ( v15 != (CAudioDGProcess *)&WPP_GLOBAL_Control && (*((_BYTE *)v15 + 28) & 8) != 0 && *((_BYTE *)v15 + 25) >= 4u )
    WPP_SF_(*((_QWORD *)v15 + 2), 0x30u, (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids);
  v17 = 0;
  for ( j = 0LL; ; j = v17 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      (const void **)&lpSubKey,
      L"%x_%d",
      v36,
      j);
    v5 = lpSubKey;
    if ( RegOpenKeyExW(*((HKEY *)v3 + 4), lpSubKey, 0, 0x20019u, &hkey) )
      break;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x31u,
        (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids,
        v5);
    }
    RegCloseKey(hkey);
    hkey = 0LL;
    ++v17;
  }
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x32u, (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids, v5);
  }
  hkey = 0LL;
  v19 = CreateLowRightsRegistryKey(*((HKEY *)v3 + 4), v5, 131103, &hkey);
  v4 = v19;
  if ( v19 >= 0 )
  {
    v20 = (const BYTE *)*((_QWORD *)v3 + 2);
    v21 = -1LL;
    do
      ++v21;
    while ( *(_WORD *)&v20[2 * v21] );
    pcbData = 2 * v21 + 2;
    v22 = RegSetValueExW(hkey, 0LL, 0, 1u, v20, pcbData);
    v23 = v22;
    if ( v22 )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x34u,
          (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids,
          v22);
      }
      if ( v23 > 0 )
        v4 = (unsigned __int16)v23 | 0x80070000;
      else
        v4 = v23;
      goto LABEL_89;
    }
    *a2 = hkey;
  }
  else if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
         && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x33u, (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids, v19);
  }
  goto LABEL_92;
}
