/*
 * XREFs of ?bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x1C026A350
 * Callers:
 *     GreAddFontMemResourceEx @ 0x1C026A930 (GreAddFontMemResourceEx.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C026AA30 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     ??1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C0008364 (--1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ?Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA_N_N_K@Z @ 0x1C00083B0 (-Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA_N_N_K@Z.c)
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ??0AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C013C3C8 (--0AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall bCreateFontFileView(
        const struct _FONTFILEVIEW *a1,
        const struct tagDOWNLOADFONTHEADER *a2,
        unsigned int a3,
        struct _FONTFILEVIEW ***a4,
        unsigned int a5)
{
  unsigned int v9; // ebx
  unsigned int v11; // edi
  struct _FONTFILEVIEW **v12; // rax
  struct _FONTFILEVIEW **v13; // r11
  char *v14; // rdx
  unsigned int v15; // r8d
  __int64 i; // rcx
  unsigned int v17; // r10d
  __int64 v18; // [rsp+28h] [rbp-190h]
  __int128 v19; // [rsp+58h] [rbp-160h]
  __int128 v20; // [rsp+68h] [rbp-150h]
  __int128 v21; // [rsp+78h] [rbp-140h]
  __int128 v22; // [rsp+88h] [rbp-130h]
  __int128 v23; // [rsp+98h] [rbp-120h]
  __int128 v24; // [rsp+A8h] [rbp-110h]
  __int128 v25; // [rsp+B8h] [rbp-100h]
  _BYTE v26[60]; // [rsp+150h] [rbp-68h] BYREF
  int v27; // [rsp+18Ch] [rbp-2Ch]

  v9 = 1;
  UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::AutoAttachFonDrvProcess((UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)v26);
  if ( !UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::Attach(
          (UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)v26,
          (*((_DWORD *)a1 + 10) & 0x20) != 0,
          *((_QWORD *)a1 + 9)) )
    goto LABEL_2;
  v19 = *(_OWORD *)a1;
  v20 = *((_OWORD *)a1 + 1);
  v21 = *((_OWORD *)a1 + 2);
  v22 = *((_OWORD *)a1 + 3);
  v23 = *((_OWORD *)a1 + 4);
  v24 = *((_OWORD *)a1 + 5);
  v25 = *((_OWORD *)a1 + 6);
  v18 = *((_QWORD *)a1 + 14);
  if ( a3 <= ((4 * a5 + 15) & 0xFFFFFFF8) )
  {
    v27 = 87;
LABEL_2:
    UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::~AutoAttachFonDrvProcess((UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)v26);
    return 0LL;
  }
  v11 = (8 * a5 + 7) & 0xFFFFFFF8;
  v12 = (struct _FONTFILEVIEW **)PALLOCMEM2(v11 + 120 * a5, 1986422343LL, 1);
  if ( !v12 )
  {
    v27 = 8;
    goto LABEL_2;
  }
  v13 = v12;
  v14 = (char *)v12 + v11;
  *(_OWORD *)v14 = v19;
  *((_OWORD *)v14 + 1) = v20;
  *((_OWORD *)v14 + 2) = v21;
  *((_OWORD *)v14 + 3) = v22;
  *((_OWORD *)v14 + 4) = v23;
  *((_OWORD *)v14 + 5) = v24;
  *((_OWORD *)v14 + 6) = v25;
  *((_QWORD *)v14 + 14) = v18;
  v15 = 0;
  for ( i = 0LL; (unsigned int)i < a5; i = (unsigned int)(i + 1) )
  {
    v17 = *((_DWORD *)a2 + i + 2);
    if ( v17 < v15 || v17 > DWORD2(v20) || v15 != ((v15 + 3) & 0xFFFFFFFC) )
    {
      v9 = 0;
      break;
    }
    *((_QWORD *)v14 + 2) = v20 + v15;
    *((_DWORD *)v14 + 6) = v17 - v15;
    *v13++ = (struct _FONTFILEVIEW *)v14;
    v14 += 120;
    v15 = v17;
  }
  if ( v9 )
    *a4 = v12;
  else
    Win32FreePool(v12);
  UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::~AutoAttachFonDrvProcess((UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)v26);
  return v9;
}
