/*
 * XREFs of ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0282E5C
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00346C8 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000750C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C0007B50 (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C0007E00 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0008138 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0017300 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C0033AB0 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C00391A8 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C003BF88 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C003C7C4 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C00AF3B4 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C01A0C9C (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C0282D40 (-ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z.c)
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
  HDC v14; // rdx
  __int64 *v15; // r15
  __int64 v16; // rbx
  unsigned int v17; // ecx
  unsigned int v18; // esi
  __int64 v19; // r13
  struct PFE *v20; // rax
  struct PFE *v21; // r12
  __int64 v22; // rdx
  __int64 v23; // r8
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct _LIST_ENTRY *i; // rcx
  int Blink; // eax
  HDC v27; // rcx
  __int64 v28; // rdx
  __int64 *v29; // rdi
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  HDC v31; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  RFONTOBJ *v34; // [rsp+70h] [rbp-90h]
  struct LFONT *v35; // [rsp+78h] [rbp-88h] BYREF
  __int64 v36; // [rsp+80h] [rbp-80h] BYREF
  int v37; // [rsp+90h] [rbp-70h]
  _BYTE v38[16]; // [rsp+98h] [rbp-68h] BYREF
  _OWORD v39[2]; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD v40[4]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v41[80]; // [rsp+110h] [rbp+10h] BYREF

  v2 = *(_QWORD *)this;
  v3 = this;
  v34 = this;
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
  v33 = *(_QWORD *)(*(_QWORD *)v3 + 112LL);
  v11 = v33;
  v31 = v10;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v35, v12, (struct PDEVOBJ *)&v31);
  v13 = *a2;
  v31 = *(HDC *)v3;
  DCOBJ::DCOBJ((DCOBJ *)v38, *v13);
  IFIOBJR::IFIOBJR(
    (IFIOBJR *)v40,
    *(const struct _IFIMETRICS **)(v11 + 32),
    (struct RFONTOBJ *)&v31,
    (struct DCOBJ *)v38);
  RFONTOBJ::ComputeEUDCLogfont(v3, (struct _EUDCLOGFONT *)v39, (struct XDCOBJ *)a2);
  v15 = (__int64 *)v41;
  v16 = 0LL;
  v17 = *((_DWORD *)*a2 + 80);
  if ( v17 <= 0xA || (v15 = (__int64 *)PALLOCMEM2(8 * v17, 1718382187LL, 1)) != 0LL )
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
      v18 = 0;
      do
      {
        v19 = 0LL;
        v36 = 0LL;
        v30 = 0LL;
        v32 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        v20 = ppfeFromUFI((struct _UNIVERSAL_FONT_ID *)((*a2)[39] + 2 * v18));
        v21 = v20;
        if ( v20 )
        {
          v19 = *(_QWORD *)v20;
          v36 = v19;
          v37 = 0;
          ++*(_DWORD *)(v19 + 68);
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v32);
        if ( v21 )
        {
          v40[0] = v39[0];
          v40[1] = v39[1];
          LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v33);
          if ( LinkedFontList )
          {
            for ( i = LinkedFontList->Flink; i != LinkedFontList; i = i->Flink )
            {
              if ( (struct PFE *)i[2].Flink == v21 || (struct PFE *)i[2].Blink == v21 )
              {
                Blink = (int)i[1].Blink;
                if ( Blink )
                  HIDWORD(v40[0]) = HIDWORD(v39[0]) * Blink / SHIDWORD(i[1].Blink);
                break;
              }
            }
          }
          RFONTOBJ::vInit((RFONTOBJ *)&v30, (struct XDCOBJ *)a2, v21, (struct _EUDCLOGFONT *)v40);
          if ( v30 )
          {
            v15[v16] = v30;
            v16 = (unsigned int)(v16 + 1);
          }
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v30, v22, v23);
        if ( v19 && !v37 )
          PFFOBJ::vDeleteRFONTRef((PFFOBJ *)&v36);
        ++v18;
      }
      while ( v18 < *((_DWORD *)*a2 + 80) );
      v3 = v34;
    }
    if ( ((_DWORD)(*a2)[6][8] & 0x8000) != 0 )
    {
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)v3 + 528LL));
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)v3 + 856LL));
    }
    v27 = *(HDC *)v3;
    if ( (*(_DWORD *)(*(_QWORD *)v3 + 720LL) & 0x200) != 0 )
    {
      if ( (_DWORD)v16 )
      {
        v28 = (unsigned int)v16;
        do
        {
          *(_QWORD *)(v4 * 8 + *(_QWORD *)(*(_QWORD *)v3 + 752LL)) = v15[v4];
          ++v4;
          --v28;
        }
        while ( v28 );
        *(_DWORD *)(*(_QWORD *)v3 + 848LL) = v16;
        RFONTOBJ::UpdateFontLinksLockOrder(v3);
      }
      else
      {
        v14 = (HDC)*((_QWORD *)v27 + 94);
        if ( v14 != v27 + 190 )
          Win32FreePool(*((_QWORD *)v27 + 94), v14);
        *(_QWORD *)(*(_QWORD *)v3 + 752LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)v3 + 848LL) = 0;
      }
      *(_DWORD *)(*(_QWORD *)v3 + 720LL) &= ~0x200u;
    }
    else if ( (_DWORD)v16 )
    {
      v29 = v15;
      do
      {
        v30 = *v29;
        RFONTOBJ::vMakeInactive((RFONTOBJ *)&v30);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v30);
        ++v29;
        --v16;
      }
      while ( v16 );
    }
    if ( v15 != (__int64 *)v41 )
      Win32FreePool(v15, v14);
  }
  else if ( v7 )
  {
    Win32FreePool(*(_QWORD *)(*(_QWORD *)v3 + 752LL), v14);
    *(_QWORD *)(*(_QWORD *)v3 + 752LL) = 0LL;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v38);
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v31);
  LFONTOBJ::~LFONTOBJ(&v35);
}
