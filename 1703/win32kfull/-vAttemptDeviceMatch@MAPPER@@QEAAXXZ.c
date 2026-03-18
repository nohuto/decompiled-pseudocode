/*
 * XREFs of ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C0273F98
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C00582F4 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z @ 0x1C00562D8 (-vSetBest@MAPPER@@QEAAXPEAVPFE@@HE@Z.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C0056BD0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C005B780 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ulCharsetToCodePage @ 0x1C00F7124 (ulCharsetToCodePage.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C0102E78 (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C0102EAC (-ppfeNext@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
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
  _DWORD *v10; // r10
  _QWORD v11[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v12; // [rsp+30h] [rbp-10h]
  unsigned __int8 v13; // [rsp+50h] [rbp+10h] BYREF
  struct PFE *v14; // [rsp+58h] [rbp+18h] BYREF

  v1 = *((_BYTE *)this + 284) == 2;
  v13 = 1;
  if ( !v1 )
  {
    v14 = gpPFTDevice;
    v3 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)&v14, *(_QWORD *)(**(_QWORD **)this + 48LL), 0LL);
    if ( v3 )
    {
      v5 = (_QWORD *)((char *)v3 + 112);
      if ( v3 != (struct PFF *)-112LL )
      {
        v6 = (_DWORD *)*((_QWORD *)this + 29);
        v11[0] = v5;
        v12 = 0LL;
        *v6 &= v4;
        *((_QWORD *)this + 25) &= v4;
        *((_DWORD *)this + 52) = -1;
        **((_DWORD **)this + 27) &= v4;
        **((_DWORD **)this + 28) = 1;
        *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
        *((_DWORD *)this + 63) |= 0x80u;
        *((_DWORD *)this + 45) = 3;
        v11[1] = *v5;
        for ( i = ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v11); ; i = ENUMFHOBJ::ppfeNext((ENUMFHOBJ *)v11) )
        {
          v8 = i;
          if ( !i )
            break;
          v14 = i;
          if ( (unsigned int)MAPPER::bNearMatch(this, &v14, &v13, 0) )
          {
            if ( !*((_DWORD *)this + 46) )
            {
              if ( !_wcsicmp((const wchar_t *)(*((_QWORD *)v8 + 4) + *(int *)(*((_QWORD *)v8 + 4) + 8LL)), L"Arial") )
              {
                MAPPER::vSetBest(this, v8, 1, v13);
                return;
              }
              ++*((_DWORD *)this + 46);
            }
            if ( *((_DWORD *)this + 46) < *((_DWORD *)this + 45) )
            {
              MAPPER::vSetBest(this, v8, 1, v13);
              *((_DWORD *)this + 45) = *((_DWORD *)this + 46);
            }
          }
        }
        if ( *((_QWORD *)this + 25) )
        {
          v9 = ulCharsetToCodePage(HIBYTE(**((_DWORD **)this + 29)));
          *v10 |= v9 << 8;
        }
      }
    }
  }
}
