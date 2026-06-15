/*
 * XREFs of ?FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z @ 0x18009BEEC
 * Callers:
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x1800317E0 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049340 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x18007F184 (-StringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1800887E8 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_dd @ 0x180090690 (WPP_SF_dd.c)
 *     ?IsValidProperty@CAudioSessionStore@@AEAA_NPEBUtagPROPVARIANT@@@Z @ 0x18009CEC8 (-IsValidProperty@CAudioSessionStore@@AEAA_NPEBUtagPROPVARIANT@@@Z.c)
 *     ?StringCbLengthA@@YAJPEBD_KPEA_K@Z @ 0x18009F268 (-StringCbLengthA@@YAJPEBD_KPEA_K@Z.c)
 *     ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x18009F2BC (-StringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     WPP_SF_dP @ 0x18009FAF8 (WPP_SF_dP.c)
 *     WPP_SF_dg @ 0x1800ADE90 (WPP_SF_dg.c)
 */

unsigned __int8 *__fastcall CAudioSessionStore::FlattenProperty(
        CAudioSessionStore *this,
        const struct tagPROPVARIANT *a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rbx
  unsigned __int64 *v4; // r12
  SIZE_T v6; // r14
  unsigned __int16 *v7; // rdx
  unsigned __int64 v8; // rdx
  char *v9; // rax
  _QWORD *v10; // rsi
  char *v11; // rdi
  CVolumeStrip *v12; // rcx
  int v14; // eax
  LONG plUbound; // [rsp+70h] [rbp+40h] BYREF
  int v16; // [rsp+74h] [rbp+44h]
  unsigned __int64 *v17; // [rsp+80h] [rbp+50h]
  unsigned __int64 rgIndices; // [rsp+88h] [rbp+58h] BYREF

  v17 = a3;
  v16 = HIDWORD(this);
  v3 = 0LL;
  v4 = a3;
  plUbound = 0;
  *a3 = 0LL;
  v6 = 24LL;
  if ( !CAudioSessionStore::IsValidProperty(this, a2) )
    return (unsigned __int8 *)v3;
  v8 = *v7;
  switch ( (_DWORD)v8 )
  {
    case 8:
      goto LABEL_21;
    case 0x1E:
      if ( (int)StringCbLengthA(a2->pszVal, v8, &rgIndices) < 0 || rgIndices > 0x400 )
        return (unsigned __int8 *)v3;
      v6 = rgIndices + 25;
      break;
    case 0x1F:
LABEL_21:
      if ( (int)StringCbLengthW(a2->bstrVal, 0x7FFFFFFFuLL, &rgIndices) < 0 || rgIndices > 0x400 )
        return (unsigned __int8 *)v3;
      v6 = rgIndices + 26;
      break;
    case 0x41:
    case 0x46:
      if ( a2->lVal > 0x400u )
        return (unsigned __int8 *)v3;
      v6 = a2->ulVal + 24LL;
      break;
    case 0x2004:
      if ( SafeArrayGetUBound(a2->parray, 1u, &plUbound) < 0 || (unsigned __int64)plUbound > 0x100 || plUbound < 0 )
        return (unsigned __int8 *)v3;
      v6 = 4LL * ++plUbound + 24;
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_dP(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL);
      }
      break;
  }
  v9 = (char *)operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( !v9 )
    return (unsigned __int8 *)v3;
  v11 = v9 + 24;
  *(_OWORD *)v9 = *(_OWORD *)&a2->vt;
  *((_QWORD *)v9 + 2) = a2->bstrblobVal.pData;
  if ( a2->vt != 8 )
  {
    if ( a2->vt == 30 )
    {
      v14 = StringCchCopyA(v11, v6 - 24, a2->pszVal);
      goto LABEL_52;
    }
    if ( a2->vt != 31 )
    {
      if ( a2->vt == 65 || a2->vt == 70 )
      {
        memcpy_0(v11, a2->bstrblobVal.pData, a2->ulVal);
        v10[2] = 24LL;
      }
      else if ( a2->vt == 8196 )
      {
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_dP(*((_QWORD *)WPP_GLOBAL_Control + 2), 38LL);
        }
        v10[1] = 24LL;
        LODWORD(rgIndices) = 0;
        if ( plUbound > 0 )
        {
          while ( 1 )
          {
            if ( !SafeArrayGetElement(a2->parray, (LONG *)&rgIndices, v11) )
              goto LABEL_40;
            v12 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control )
              break;
LABEL_45:
            v11 += 4;
            LODWORD(rgIndices) = rgIndices + 1;
            if ( (int)rgIndices >= plUbound )
            {
              v4 = v17;
              goto LABEL_47;
            }
          }
          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_dd(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x27u,
              (__int64)&WPP_063b73282fa230620b2f84334c1c051f_Traceguids,
              rgIndices);
LABEL_40:
            v12 = WPP_GLOBAL_Control;
          }
          if ( v12 != (CVolumeStrip *)&WPP_GLOBAL_Control
            && (*((_BYTE *)v12 + 28) & 8) != 0
            && *((_BYTE *)v12 + 25) >= 4u )
          {
            WPP_SF_dg(
              *((_QWORD *)v12 + 2),
              40LL,
              &WPP_063b73282fa230620b2f84334c1c051f_Traceguids,
              (unsigned int)rgIndices,
              *(float *)v11);
          }
          goto LABEL_45;
        }
      }
      goto LABEL_47;
    }
  }
  v14 = StringCbCopyW(v11, v6 - 24, a2->pszVal);
LABEL_52:
  v10[1] = 24LL;
  if ( !v14 )
  {
LABEL_47:
    *v4 = v6;
    return (unsigned __int8 *)v10;
  }
  operator delete(v10);
  return 0LL;
}
