/*
 * XREFs of EngMapFontFileFDInternal @ 0x1C00B644C
 * Callers:
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C00B63CC (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     bttfdMapFontFileFD @ 0x1C02267F4 (bttfdMapFontFileFD.c)
 *     ttfdOpenFontContextInternal @ 0x1C02329F4 (ttfdOpenFontContextInternal.c)
 *     bBmfdMapFontFileFD @ 0x1C0234360 (bBmfdMapFontFileFD.c)
 *     bReconnectBmfdFont @ 0x1C0234B10 (bReconnectBmfdFont.c)
 *     BmfdOpenFontContext @ 0x1C0236918 (BmfdOpenFontContext.c)
 *     bvtfdMapFontFileFD @ 0x1C0238088 (bvtfdMapFontFileFD.c)
 *     bReconnectVtfdFont @ 0x1C02395D0 (bReconnectVtfdFont.c)
 *     vtfdQueryFontFile @ 0x1C0239B70 (vtfdQueryFontFile.c)
 *     vtfdOpenFontContext @ 0x1C023A08C (vtfdOpenFontContext.c)
 *     EngMapFontFileFD @ 0x1C0269570 (EngMapFontFileFD.c)
 *     GreMakeFontDir @ 0x1C0293AF0 (GreMakeFontDir.c)
 *     NtGdiGetFontFileData @ 0x1C0294500 (NtGdiGetFontFileData.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C0299A88 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     ?MapViewOfSectionToFontDriverProcess@@YAJPEAU_FILEVIEW@@@Z @ 0x1C00B3684 (-MapViewOfSectionToFontDriverProcess@@YAJPEAU_FILEVIEW@@@Z.c)
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C00B374C (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00B37A0 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00B65D8 (-bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x1C0101884 (-bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall EngMapFontFileFDInternal(struct _FILEVIEW *a1, _QWORD *a2, _DWORD *a3, int a4)
{
  unsigned int v8; // edi
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // r8
  int Section; // esi
  __int64 v13; // r8
  int v14; // ecx
  __int64 v15; // rdx
  unsigned int v17; // esi
  struct _KPROCESS *CurrentThreadProcess; // rax
  int v19[4]; // [rsp+30h] [rbp-79h] BYREF
  _DWORD v20[20]; // [rsp+40h] [rbp-69h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-19h] BYREF

  memset(v20, 0, sizeof(v20));
  v8 = 1;
  v9 = 1;
  GreAcquireFastMutex(ghfmMemory);
  if ( *((_QWORD *)a1 + 2) )
  {
    v9 = 0;
    ++*((_DWORD *)a1 + 25);
  }
  else
  {
    if ( !*((_QWORD *)a1 + 10) )
    {
      GreReleaseFastMutex(ghfmMemory);
      return 0LL;
    }
    if ( *((_QWORD *)a1 + 4) )
    {
      if ( (int)MapViewOfSectionToFontDriverProcess(a1, v10, v11) < 0 )
        v8 = 0;
      else
        *((_DWORD *)a1 + 25) = 1;
      v9 = 0;
    }
  }
  GreReleaseFastMutex(ghfmMemory);
  if ( !v9 )
  {
LABEL_17:
    if ( v8 )
    {
      if ( a2 )
        *a2 = *((_QWORD *)a1 + 2);
      if ( a3 )
        *a3 = *((_DWORD *)a1 + 6);
    }
    return v8;
  }
  if ( a4 )
  {
    CurrentThreadProcess = (struct _KPROCESS *)PsGetCurrentThreadProcess();
    KeStackAttachProcess(CurrentThreadProcess, &ApcState);
  }
  Section = bCreateSection(*((PCWSTR *)a1 + 10), (struct _FILEVIEW *)v20, 0, v19, (*((_DWORD *)a1 + 10) & 8) != 0);
  v14 = (*((_DWORD *)a1 + 10) ^ v20[10]) & 0x20;
  v15 = (unsigned int)v14 ^ v20[10];
  v20[10] ^= v14;
  if ( a4 )
    KeUnstackDetachProcess(&ApcState);
  if ( !Section )
    return 0;
  if ( (int)MapViewOfSectionToFontDriverProcess((struct _FILEVIEW *)v20, v15, v13) >= 0 )
  {
    GreAcquireFastMutex(ghfmMemory);
    ++*((_DWORD *)a1 + 25);
    if ( *((_QWORD *)a1 + 2) )
    {
      v17 = 0;
    }
    else
    {
      v17 = bMapRoutine(a1, v20, 1LL, (unsigned int)v19[0]);
      v8 = v17;
    }
    GreReleaseFastMutex(ghfmMemory);
    if ( !v17 )
      vUnmapFileFD((struct _FILEVIEW *)v20, 1);
    goto LABEL_17;
  }
  vUnreferenceFileviewSection((struct _FILEVIEW *)v20);
  return 0LL;
}
