/*
 * XREFs of ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C028630C
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C008E7C0 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C0002988 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C0002E80 (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C000312C (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0003464 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C002C974 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C00301CC (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C0030910 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C007E0B0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0089C50 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C008DC0C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C0195A94 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C02861F0 (-ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z.c)
 */

void __fastcall RFONTOBJ::vInitEUDCRemote(RFONTOBJ *this, HDC **a2)
{
  __int64 v2; // rax
  RFONTOBJ *v3; // rsi
  __int64 v4; // rdi
  _QWORD *v6; // rcx
  char v7; // r12
  unsigned int v8; // edx
  void *v9; // rax
  HDC v10; // rax
  __int64 v11; // rbx
  struct HLFONT__ *v12; // rdx
  HDC *v13; // rdx
  __int64 *v14; // r15
  __int64 v15; // rbx
  unsigned int v16; // ecx
  unsigned int v17; // esi
  __int64 v18; // r13
  struct PFE *v19; // rax
  struct PFE *v20; // r12
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct _LIST_ENTRY *i; // rcx
  int Blink; // eax
  HDC v24; // rcx
  __int64 v25; // rdx
  __int64 *v26; // rdi
  __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  HDC v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  RFONTOBJ *v31; // [rsp+70h] [rbp-90h]
  struct LFONT *v32; // [rsp+78h] [rbp-88h] BYREF
  __int64 v33; // [rsp+80h] [rbp-80h] BYREF
  int v34; // [rsp+90h] [rbp-70h]
  _BYTE v35[16]; // [rsp+98h] [rbp-68h] BYREF
  _OWORD v36[2]; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD v37[4]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v38[80]; // [rsp+110h] [rbp+10h] BYREF

  v2 = *(_QWORD *)this;
  v3 = this;
  v31 = this;
  v4 = 0LL;
  v6 = *(_QWORD **)(v2 + 752);
  if ( v6 )
  {
    if ( *v6 )
      return;
    DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 24LL);
  }
  v7 = 0;
  if ( !*(_QWORD *)(*(_QWORD *)v3 + 752LL) )
  {
    v8 = *((_DWORD *)*a2 + 80);
    if ( v8 <= 0xA )
    {
      *(_QWORD *)(*(_QWORD *)v3 + 752LL) = *(_QWORD *)v3 + 760LL;
    }
    else
    {
      v9 = PALLOCMEM2(8 * v8, 1718382187LL, 1);
      *(_QWORD *)(*(_QWORD *)v3 + 752LL) = v9;
      if ( !v9 )
        return;
      v7 = 1;
    }
  }
  *(_DWORD *)(*(_QWORD *)v3 + 848LL) = 0;
  v10 = (*a2)[6];
  v12 = (struct HLFONT__ *)(*a2)[272];
  v30 = *(_QWORD *)(*(_QWORD *)v3 + 112LL);
  v11 = v30;
  v28 = v10;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v32, v12, (struct PDEVOBJ *)&v28);
  v13 = *a2;
  v28 = *(HDC *)v3;
  DCOBJ::DCOBJ((DCOBJ *)v35, *v13);
  IFIOBJR::IFIOBJR(
    (IFIOBJR *)v37,
    *(const struct _IFIMETRICS **)(v11 + 32),
    (struct RFONTOBJ *)&v28,
    (struct DCOBJ *)v35);
  RFONTOBJ::ComputeEUDCLogfont(v3, (struct _EUDCLOGFONT *)v36, (struct XDCOBJ *)a2);
  v14 = (__int64 *)v38;
  v15 = 0LL;
  v16 = *((_DWORD *)*a2 + 80);
  if ( v16 <= 0xA || (v14 = (__int64 *)PALLOCMEM2(8 * v16, 1718382187LL, 1)) != 0LL )
  {
    *(_DWORD *)(*(_QWORD *)v3 + 720LL) |= 0x200u;
    if ( ((_DWORD)(*a2)[6][8] & 0x8000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)v3 + 856LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)v3 + 856LL));
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)v3 + 528LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)v3 + 528LL));
    }
    if ( *((_DWORD *)*a2 + 80) )
    {
      v17 = 0;
      do
      {
        v18 = 0LL;
        v33 = 0LL;
        v27 = 0LL;
        v29 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        v19 = ppfeFromUFI((struct _UNIVERSAL_FONT_ID *)((*a2)[39] + 2 * v17));
        v20 = v19;
        if ( v19 )
        {
          v18 = *(_QWORD *)v19;
          v33 = v18;
          v34 = 0;
          ++*(_DWORD *)(v18 + 68);
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v29);
        if ( v20 )
        {
          v37[0] = v36[0];
          v37[1] = v36[1];
          LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v30);
          if ( LinkedFontList )
          {
            for ( i = LinkedFontList->Flink; i != LinkedFontList; i = i->Flink )
            {
              if ( (struct PFE *)i[2].Flink == v20 || (struct PFE *)i[2].Blink == v20 )
              {
                Blink = (int)i[1].Blink;
                if ( Blink )
                  HIDWORD(v37[0]) = HIDWORD(v36[0]) * Blink / SHIDWORD(i[1].Blink);
                break;
              }
            }
          }
          RFONTOBJ::vInit((RFONTOBJ *)&v27, (struct XDCOBJ *)a2, v20, (struct _EUDCLOGFONT *)v37);
          if ( v27 )
          {
            v14[v15] = v27;
            v15 = (unsigned int)(v15 + 1);
          }
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v27);
        if ( v18 && !v34 )
          PFFOBJ::vDeleteRFONTRef((PFFOBJ *)&v33);
        ++v17;
      }
      while ( v17 < *((_DWORD *)*a2 + 80) );
      v3 = v31;
    }
    if ( ((_DWORD)(*a2)[6][8] & 0x8000) != 0 )
    {
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)v3 + 528LL));
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)v3 + 856LL));
    }
    v24 = *(HDC *)v3;
    if ( (*(_DWORD *)(*(_QWORD *)v3 + 720LL) & 0x200) != 0 )
    {
      if ( (_DWORD)v15 )
      {
        v25 = (unsigned int)v15;
        do
        {
          *(_QWORD *)(v4 * 8 + *(_QWORD *)(*(_QWORD *)v3 + 752LL)) = v14[v4];
          ++v4;
          --v25;
        }
        while ( v25 );
        *(_DWORD *)(*(_QWORD *)v3 + 848LL) = v15;
        RFONTOBJ::UpdateFontLinksLockOrder(v3);
      }
      else
      {
        if ( *((HDC *)v24 + 94) != v24 + 190 )
          Win32FreePool(*((_QWORD *)v24 + 94));
        *(_QWORD *)(*(_QWORD *)v3 + 752LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)v3 + 848LL) = 0;
      }
      *(_DWORD *)(*(_QWORD *)v3 + 720LL) &= ~0x200u;
    }
    else if ( (_DWORD)v15 )
    {
      v26 = v14;
      do
      {
        v27 = *v26;
        RFONTOBJ::vMakeInactive((RFONTOBJ *)&v27);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v27);
        ++v26;
        --v15;
      }
      while ( v15 );
    }
    if ( v14 != (__int64 *)v38 )
      Win32FreePool(v14);
  }
  else if ( v7 )
  {
    Win32FreePool(*(_QWORD *)(*(_QWORD *)v3 + 752LL));
    *(_QWORD *)(*(_QWORD *)v3 + 752LL) = 0LL;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v35);
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v28);
  LFONTOBJ::~LFONTOBJ(&v32);
}
