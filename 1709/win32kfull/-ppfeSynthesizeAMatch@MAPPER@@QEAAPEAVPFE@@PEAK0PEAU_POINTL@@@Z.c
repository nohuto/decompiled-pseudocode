/*
 * XREFs of ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C00AC790
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C00AEB2C (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?pvSimBold@IFIOBJ@@QEAAPEAXXZ @ 0x1C003BB88 (-pvSimBold@IFIOBJ@@QEAAPEAXXZ.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C00AFB20 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C0138C48 (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ?bInitPrivatePFT@@YAHXZ @ 0x1C024B3FC (-bInitPrivatePFT@@YAHXZ.c)
 *     ulCharsetToCodePage @ 0x1C02B2204 (ulCharsetToCodePage.c)
 */

struct PFE *__fastcall MAPPER::ppfeSynthesizeAMatch(
        MAPPER *this,
        unsigned int *a2,
        unsigned int *a3,
        struct _POINTL *a4)
{
  __int64 v8; // rsi
  char *v9; // rdi
  __int64 *v10; // rbp
  int v11; // r15d
  __int64 v13; // rbp
  int v14; // eax
  int v15; // eax
  unsigned int v16; // edi
  unsigned int v17; // ecx
  unsigned int v18; // r8d
  int v19; // esi
  int v20; // ebp
  char *v21; // r10
  __int64 v22; // r9
  int v23; // r11d
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  int v27; // eax
  unsigned int v28; // ecx
  int v29; // eax
  int v30; // r9d
  size_t v31; // [rsp+28h] [rbp-80h]
  struct PFF *v32; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v33[3]; // [rsp+68h] [rbp-40h] BYREF
  unsigned int v34; // [rsp+B0h] [rbp+8h] BYREF

  v34 = 0;
  v8 = 0LL;
  if ( (*((_DWORD *)this + 22) & 1) != 0 )
    v9 = (char *)this + 92;
  else
    v9 = (char *)(*((_QWORD *)this + 1) + 348LL);
  v10 = (__int64 *)*((_QWORD *)this + 36);
  v11 = 4 * *((_DWORD *)v9 + 1) + 8;
  if ( !v10 )
    return (struct PFE *)v8;
  v13 = *v10;
  v32 = 0LL;
  if ( !v13 )
    return (struct PFE *)v8;
  if ( gpPFTPrivate || (unsigned int)bInitPrivatePFT() )
  {
    v14 = *(_DWORD *)(v13 + 52);
    v33[0] = gpPFTPrivate;
    if ( (v14 & 0x10) == 0 )
    {
      LODWORD(v31) = v11;
      v15 = -(int)PUBLIC_PFTOBJ::bLoadFonts(
                    (PUBLIC_PFTOBJ *)v33,
                    *(unsigned __int16 **)(v13 + 24),
                    *(_DWORD *)(v13 + 32),
                    *(_DWORD *)(v13 + 36),
                    (struct tagDESIGNVECTOR *)v9,
                    v31,
                    &v34,
                    0x40u,
                    &v32,
                    0x30u,
                    1,
                    0LL);
      v16 = v15 != 0 ? v34 : 0;
      if ( v16 )
      {
        GreQuerySystemTime(&PFTOBJ::FontChangeTime);
        if ( v32 )
        {
          if ( v16 == 1 )
          {
            v8 = *((_QWORD *)v32 + 28);
          }
          else
          {
            v17 = 0;
            v18 = 0;
            v19 = 0x7FFFFFFF;
            if ( v16 )
            {
              v20 = *((_DWORD *)this + 43);
              v21 = (char *)v32 + 224;
              do
              {
                v22 = *(_QWORD *)(*(_QWORD *)v21 + 32LL);
                v23 = v20 - *(unsigned __int16 *)(v22 + 46);
                if ( *(unsigned __int16 *)(v22 + 46) - v20 >= 0 )
                  v23 = *(unsigned __int16 *)(v22 + 46) - v20;
                if ( v23 <= v19 )
                {
                  v19 = v23;
                  v24 = *(int *)(v22 + 8);
                  if ( (*((_DWORD *)this + 63) & 0x2000000) != 0 )
                  {
                    if ( *(_WORD *)(v24 + v22) == 64 )
                      v17 = v18;
                  }
                  else if ( *(_WORD *)(v24 + v22) != 64 )
                  {
                    v17 = v18;
                  }
                }
                ++v18;
                v21 += 8;
              }
              while ( v18 < v16 );
            }
            v8 = *((_QWORD *)v32 + v17 + 28);
          }
          *a2 = 0;
          v25 = *((_QWORD *)this + 1);
          v26 = *(_QWORD *)(v8 + 32);
          v33[0] = v26;
          if ( *(_BYTE *)(v25 + 20) && (*(_BYTE *)(v26 + 52) & 1) == 0 )
          {
            v27 = IFIOBJ::bSimItalic((IFIOBJ *)v33);
            v28 = *a2;
            if ( v27 )
              v28 = 0x4000;
            *a2 = v28;
          }
          if ( (*((_DWORD *)this + 63) & 0x200000) == 0
            && *(unsigned __int16 *)(v26 + 46) - *((_DWORD *)this + 43) < 0
            && *((_DWORD *)this + 43) - *(unsigned __int16 *)(v26 + 46) > 150 )
          {
            if ( IFIOBJ::pvSimBold((IFIOBJ *)v33) )
              *a2 |= 0x2000u;
          }
          *a3 = *(unsigned __int8 *)(*((_QWORD *)this + 1) + 23LL) << 24;
          v29 = ulCharsetToCodePage();
          *a3 = v30 | (v29 << 8);
          a4->y = 1;
          a4->x = 1;
        }
      }
    }
    return (struct PFE *)v8;
  }
  return 0LL;
}
