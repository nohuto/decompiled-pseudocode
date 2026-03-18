/*
 * XREFs of ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C00AEB2C
 * Callers:
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C00AF470 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 * Callees:
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C00AC790 (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00AC820 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C00AC960 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C00ADE18 (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 *     ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C00ADF80 (--0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C00AF92C (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C0270768 (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C02707E0 (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C0270990 (-vEmergency@MAPPER@@QEAAXXZ.c)
 */

struct PFE *__fastcall ppfeGetAMatch(
        struct XDCOBJ *a1,
        struct tagENUMLOGFONTEXDVW *a2,
        const unsigned __int16 *Src,
        __int64 a4,
        char a5,
        unsigned int *a6,
        struct _POINTL *a7,
        unsigned int *a8,
        int a9)
{
  unsigned int v10; // eax
  struct _FONTHASH **v11; // rbx
  struct PFE *result; // rax
  unsigned int v13; // eax
  int found; // eax
  struct PFF *v15; // rax
  int v16; // r8d
  struct PFF *v17; // rbx
  _QWORD *v18; // rsi
  unsigned int v19; // [rsp+38h] [rbp-C8h]
  struct PFT *v20; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v21[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v22; // [rsp+68h] [rbp-98h]
  _BYTE v23[180]; // [rsp+80h] [rbp-80h] BYREF
  int v24; // [rsp+134h] [rbp+34h]
  struct PFE *v25; // [rsp+148h] [rbp+48h]
  int v26; // [rsp+150h] [rbp+50h]
  _DWORD *v27; // [rsp+158h] [rbp+58h]
  _DWORD *v28; // [rsp+160h] [rbp+60h]
  _DWORD *v29; // [rsp+168h] [rbp+68h]
  unsigned int v30; // [rsp+17Ch] [rbp+7Ch]

  MAPPER::MAPPER((MAPPER *)v23, a1, a6, a7, a8, a2, Src, v19, a9, a5);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 264LL) & 4) != 0 )
  {
    v20 = *(struct PFT **)(*(_QWORD *)a1 + 268LL);
    if ( (unsigned int)MAPPER::bFoundForcedMatch((MAPPER *)v23, (struct _UNIVERSAL_FONT_ID *)&v20) )
      return v25;
  }
  if ( gpPFTPrivate )
  {
    if ( *((_DWORD *)gpPFTPrivate + 7) )
    {
      v30 &= ~0x80u;
      found = MAPPER::bFoundExactMatch((MAPPER *)v23, gpPFTPrivate, 0);
      if ( found || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v23, gpPFTPrivate + 1, 0) )
        return v25;
    }
  }
  v20 = gpPFTDevice;
  v10 = v30;
  if ( (v30 & 0x200) != 0 )
  {
    v30 |= 0x80u;
    v15 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)&v20, *(HDEV *)(*(_QWORD *)a1 + 48LL), 0LL);
    v17 = v15;
    if ( v15 )
    {
      v18 = (_QWORD *)((char *)v15 + 112);
      if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v23, (struct _FONTHASH **)v15 + 14, v16)
        || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v23, (struct _FONTHASH **)v17 + 13, 0) )
      {
        return v25;
      }
      v10 = v30;
      if ( (v30 & 0x20000000) != 0 )
      {
        result = v25;
        if ( !v25 || *(struct PFF **)v25 != v17 )
        {
          *a6 = 0;
          *a8 = 0;
          a7->y = 1;
          a7->x = 1;
          v21[1] = *v18;
          v21[0] = v18;
          v22 = 0LL;
          return ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v21);
        }
        return result;
      }
    }
    else
    {
      v10 = v30;
    }
  }
  v11 = gpPFTPublic;
  v30 = v10 & 0xFFFFFF7F;
  if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v23, gpPFTPublic, 1)
    || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v23, v11 + 1, 1) )
  {
    return v25;
  }
  result = v25;
  if ( !v25 )
  {
    result = MAPPER::ppfeSynthesizeAMatch((MAPPER *)v23, a6, a8, a7);
    if ( !result )
    {
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 72LL) & 0x20000000) == 0 )
      {
        v13 = v30;
        if ( (v30 & 0x200) == 0 )
        {
LABEL_13:
          if ( (v13 & 0x20000) != 0 )
          {
LABEL_34:
            v30 = v13 | 0x4000000;
            MAPPER::vEmergency((MAPPER *)v23);
            return v25;
          }
          MAPPER::bGetFaceName((MAPPER *)v23);
          *v29 = 0;
          v26 = -1;
          v25 = 0LL;
          *v27 = 0;
          *v28 = 1;
          v28[1] = 1;
          v30 &= ~0x80u;
          v24 = -2;
          if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v23, v11, 0)
            || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v23, v11 + 1, 0) )
          {
            return v25;
          }
          result = v25;
          if ( !v25 )
          {
            v13 = v30;
            goto LABEL_34;
          }
          return result;
        }
        MAPPER::vAttemptDeviceMatch((MAPPER *)v23);
        result = v25;
        if ( v25 )
          return result;
      }
      v13 = v30;
      goto LABEL_13;
    }
  }
  return result;
}
