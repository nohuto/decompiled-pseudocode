/*
 * XREFs of ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C02707E0
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C00AEB2C (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C00ACEF0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C00AF92C (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z @ 0x1C01A0CBC (-vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C0270768 (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C027079C (-ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ulCharsetToCodePage @ 0x1C02B2204 (ulCharsetToCodePage.c)
 */

void __fastcall MAPPER::vAttemptDeviceMatch(MAPPER *this)
{
  bool v1; // zf
  struct PFF *v3; // rax
  __int64 v4; // r8
  _QWORD *v5; // rcx
  _DWORD *v6; // rax
  struct PFE *i; // rax
  struct PFE *v8; // rdi
  int v9; // eax
  int v10; // r9d
  int *v11; // r10
  _QWORD v12[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v13; // [rsp+30h] [rbp-10h]
  unsigned __int8 v14; // [rsp+50h] [rbp+10h] BYREF
  struct PFE *v15; // [rsp+58h] [rbp+18h] BYREF

  v1 = *((_BYTE *)this + 284) == 2;
  v14 = 1;
  if ( !v1 )
  {
    v15 = gpPFTDevice;
    v3 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)&v15, *(_QWORD *)(**(_QWORD **)this + 48LL), 0LL);
    if ( v3 )
    {
      v5 = (_QWORD *)((char *)v3 + 112);
      if ( v3 != (struct PFF *)-112LL )
      {
        v6 = (_DWORD *)*((_QWORD *)this + 29);
        v12[0] = v5;
        v13 = 0LL;
        *v6 &= v4;
        *((_QWORD *)this + 25) &= v4;
        *((_DWORD *)this + 52) = -1;
        **((_DWORD **)this + 27) &= v4;
        **((_DWORD **)this + 28) = 1;
        *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
        *((_DWORD *)this + 63) |= 0x80u;
        *((_DWORD *)this + 45) = 3;
        v12[1] = *v5;
        for ( i = ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v12); ; i = ENUMFHOBJ::ppfeNext((ENUMFHOBJ *)v12) )
        {
          v8 = i;
          if ( !i )
            break;
          v15 = i;
          if ( (unsigned int)MAPPER::bNearMatch(this, &v15, &v14, 0) )
          {
            if ( !*((_DWORD *)this + 46) )
            {
              if ( !_wcsicmp((const wchar_t *)(*((_QWORD *)v8 + 4) + *(int *)(*((_QWORD *)v8 + 4) + 8LL)), L"Arial") )
              {
                MAPPER::vSetBest(this, v8, 1, v14);
                return;
              }
              ++*((_DWORD *)this + 46);
            }
            if ( *((_DWORD *)this + 46) < *((_DWORD *)this + 45) )
            {
              MAPPER::vSetBest(this, v8, 1, v14);
              *((_DWORD *)this + 45) = *((_DWORD *)this + 46);
            }
          }
        }
        if ( *((_QWORD *)this + 25) )
        {
          v9 = ulCharsetToCodePage(HIBYTE(**((_DWORD **)this + 29)));
          *v11 = v10 | (v9 << 8);
        }
      }
    }
  }
}
