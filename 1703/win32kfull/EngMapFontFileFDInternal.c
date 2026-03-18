/*
 * XREFs of EngMapFontFileFDInternal @ 0x1C0027BDC
 * Callers:
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C0027B5C (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     bttfdMapFontFileFD @ 0x1C022528C (bttfdMapFontFileFD.c)
 *     ttfdOpenFontContextInternal @ 0x1C0231484 (ttfdOpenFontContextInternal.c)
 *     bBmfdMapFontFileFD @ 0x1C0232DE0 (bBmfdMapFontFileFD.c)
 *     bReconnectBmfdFont @ 0x1C0233590 (bReconnectBmfdFont.c)
 *     BmfdOpenFontContext @ 0x1C0235378 (BmfdOpenFontContext.c)
 *     bvtfdMapFontFileFD @ 0x1C0236ADC (bvtfdMapFontFileFD.c)
 *     bReconnectVtfdFont @ 0x1C0238064 (bReconnectVtfdFont.c)
 *     vtfdQueryFontFile @ 0x1C0238600 (vtfdQueryFontFile.c)
 *     vtfdOpenFontContext @ 0x1C0238ACC (vtfdOpenFontContext.c)
 *     EngMapFontFileFD @ 0x1C026A800 (EngMapFontFileFD.c)
 *     GreMakeFontDir @ 0x1C0297420 (GreMakeFontDir.c)
 *     NtGdiGetFontFileData @ 0x1C0297E30 (NtGdiGetFontFileData.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C029D398 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C0021448 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C0021490 (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
 *     ?MapViewOfSectionToFontDriverProcess@@YAJPEAU_FILEVIEW@@@Z @ 0x1C002155C (-MapViewOfSectionToFontDriverProcess@@YAJPEAU_FILEVIEW@@@Z.c)
 *     ?bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C0027D60 (-bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x1C00F24CC (-bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall EngMapFontFileFDInternal(struct _FILEVIEW *a1, _QWORD *a2, _DWORD *a3, int a4)
{
  unsigned int v8; // edi
  int v9; // esi
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  int Section; // esi
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  unsigned int v15; // esi
  struct _KPROCESS *CurrentThreadProcess; // rax
  int v18[4]; // [rsp+30h] [rbp-79h] BYREF
  _DWORD v19[20]; // [rsp+40h] [rbp-69h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-19h] BYREF

  memset(v19, 0, sizeof(v19));
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
LABEL_15:
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
  Section = bCreateSection(*((PCWSTR *)a1 + 10), (struct _FILEVIEW *)v19, 0, v18, (*((_DWORD *)a1 + 10) & 8) != 0);
  v14 = (LOBYTE(v19[10]) ^ (unsigned __int8)*((_DWORD *)a1 + 10)) & 0x20;
  v19[10] ^= v14;
  if ( a4 )
    KeUnstackDetachProcess(&ApcState);
  if ( !Section )
    return 0;
  if ( (int)MapViewOfSectionToFontDriverProcess((struct _FILEVIEW *)v19, v14, v13) >= 0 )
  {
    GreAcquireFastMutex(ghfmMemory);
    ++*((_DWORD *)a1 + 25);
    if ( *((_QWORD *)a1 + 2) )
    {
      v15 = 0;
    }
    else
    {
      v15 = bMapRoutine(a1, v19, 1LL, (unsigned int)v18[0]);
      v8 = v15;
    }
    GreReleaseFastMutex(ghfmMemory);
    if ( !v15 )
      vUnmapFileFD((struct _FILEVIEW *)v19, 1);
    goto LABEL_15;
  }
  vUnreferenceFileviewSection((struct _FILEVIEW *)v19);
  return 0LL;
}
