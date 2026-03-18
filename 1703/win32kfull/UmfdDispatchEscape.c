/*
 * XREFs of UmfdDispatchEscape @ 0x1C0091110
 * Callers:
 *     NtGdiExtEscape @ 0x1C0090BE0 (NtGdiExtEscape.c)
 * Callees:
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00914E0 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0091960 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     FONTOBJ_pifi @ 0x1C009B950 (FONTOBJ_pifi.c)
 *     ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C009BD74 (-UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C009BE0C (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00DE5F4 (-UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C01140E8 (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C011B4E0 (-OnHostReady@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1C0130250 (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C013B8D4 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 *     ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C013F3BC (-UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscGetFontGlobals@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C013F42C (-UmfdEscGetFontGlobals@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     EngFntCacheFault @ 0x1C0269950 (EngFntCacheFault.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C027F494 (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C027F5AC (-UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C027F66C (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     atmfdFontManagement @ 0x1C028C134 (atmfdFontManagement.c)
 */

__int64 __fastcall UmfdDispatchEscape(struct _PATHOBJ *a1)
{
  ULONG v2; // edi
  struct _PATHOBJ *v3; // rdx
  struct UmfdTls *v4; // rax
  FONTOBJ *v5; // rcx
  IFIMETRICS *v6; // rax
  struct UmfdTls *v7; // rax
  PATHOBJ *v8; // rcx
  struct UmfdTls *v9; // rax
  PATHOBJ *v10; // rcx
  ULONG v11; // eax
  __int64 result; // rax
  ULONG ulFastCheckSum[4]; // [rsp+50h] [rbp-38h] BYREF
  POINTFIX ptfx[2]; // [rsp+60h] [rbp-28h]
  __int128 v15; // [rsp+70h] [rbp-18h]
  int v16; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int16 v17; // [rsp+9Ch] [rbp+14h]

  v2 = 0;
  if ( ((unsigned __int8)a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  v3 = a1 + 6;
  if ( (unsigned __int64)&a1[6] > W32UserProbeAddress || v3 < a1 )
    *W32UserProbeAddress = 0;
  *(_OWORD *)ulFastCheckSum = *(_OWORD *)&a1->fl;
  *(_OWORD *)&ptfx[0].x = *(_OWORD *)&a1[2].fl;
  v15 = *(_OWORD *)&a1[4].fl;
  switch ( ulFastCheckSum[0] )
  {
    case 0u:
      UmfdEscSendCompleteWaitReceive((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      goto LABEL_44;
    case 1u:
      UmfdEscXFORMOBJ_iGetXform((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      goto LABEL_44;
    case 3u:
      v4 = UmfdTls::EnsureTls();
      if ( !v4 )
        goto LABEL_11;
      v5 = (FONTOBJ *)*((_QWORD *)v4 + 4);
      if ( v5 )
      {
        v6 = FONTOBJ_pifi(v5);
        if ( v6 )
          *(_QWORD *)&ulFastCheckSum[2] = *(_QWORD *)&v6[-1].panose.bMidline;
        else
LABEL_11:
          *(_QWORD *)&ulFastCheckSum[2] = 0LL;
      }
      else
      {
        *(_QWORD *)&ulFastCheckSum[2] = 0LL;
      }
LABEL_44:
      result = (int)ulFastCheckSum[0];
      switch ( ulFastCheckSum[0] )
      {
        case 0u:
        case 1u:
        case 4u:
        case 5u:
        case 6u:
        case 7u:
        case 8u:
        case 0xAu:
        case 0xCu:
        case 0xDu:
        case 0xEu:
        case 0x10u:
        case 0x11u:
        case 0x12u:
          ProbeForWrite(&a1[1], 4uLL, 8u);
          result = ulFastCheckSum[2];
          a1[1].fl = ulFastCheckSum[2];
          break;
        case 2u:
        case 3u:
        case 0xFu:
          ProbeForWrite(&a1[1], 8uLL, 8u);
          result = *(_QWORD *)&ulFastCheckSum[2];
          a1[1] = *(struct _PATHOBJ *)&ulFastCheckSum[2];
          break;
        default:
          return result;
      }
      return result;
    case 4u:
      v7 = UmfdTls::EnsureTls();
      if ( v7 )
      {
        v8 = (PATHOBJ *)*((_QWORD *)v7 + 5);
        if ( v8 )
          ulFastCheckSum[2] = PATHOBJ_bCloseFigure(v8);
        else
          ulFastCheckSum[2] = 0;
      }
      else
      {
        ulFastCheckSum[2] = 0;
      }
      goto LABEL_44;
    case 5u:
      v9 = UmfdTls::EnsureTls();
      if ( v9 )
      {
        v10 = (PATHOBJ *)*((_QWORD *)v9 + 5);
        if ( v10 )
          ulFastCheckSum[2] = PATHOBJ_bMoveTo(v10, ptfx[0]);
        else
          ulFastCheckSum[2] = 0;
      }
      else
      {
        ulFastCheckSum[2] = 0;
      }
      goto LABEL_44;
    case 6u:
      ulFastCheckSum[2] = UmfdEscPATHOBJ_bCommonTo(PATHOBJ_bPolyBezierTo, v3, *(struct _POINTFIX **)ptfx, ptfx[1].x);
      goto LABEL_44;
    case 7u:
      ulFastCheckSum[2] = UmfdEscPATHOBJ_bCommonTo(PATHOBJ_bPolyLineTo, v3, *(struct _POINTFIX **)ptfx, ptfx[1].x);
      goto LABEL_44;
    case 8u:
      LOBYTE(v2) = (unsigned __int8)UmfdFontCacheEntry::FntCacheAllocate(
                                      *(_QWORD *)&ptfx[1],
                                      (unsigned int)ptfx[0].x,
                                      ulFastCheckSum[3],
                                      ulFastCheckSum[2]) != 0;
      ulFastCheckSum[2] = v2;
      goto LABEL_44;
    case 9u:
      EngFntCacheFault(ulFastCheckSum[2], ulFastCheckSum[3]);
      goto LABEL_44;
    case 0xAu:
      UmfdEscEngMapFontFileFD((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      goto LABEL_44;
    case 0xBu:
      UmfdEscEngUnmapFontFileFD((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      goto LABEL_44;
    case 0xCu:
      UmfdEscEngGetFileChangeTime((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      goto LABEL_44;
    case 0xDu:
      UmfdEscEngGetFilePath((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      goto LABEL_44;
    case 0xEu:
      UmfdEscEngComputeGlyphSet((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      goto LABEL_44;
    case 0xFu:
      UmfdEscEngCreateFile((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      goto LABEL_44;
    case 0x10u:
      UmfdEscParseFontResources((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      goto LABEL_44;
    case 0x11u:
      if ( atmfdHandle
        && (v16 = 0, v17 = 0, (unsigned int)atmfdFontManagement(0, 0, 9488, 6, (__int64)&v16, 6, (__int64)&v16) == 1) )
      {
        v11 = v17;
      }
      else
      {
        v11 = -1;
      }
      ulFastCheckSum[2] = v11;
      goto LABEL_44;
    case 0x12u:
      UmfdEscGetFontGlobals((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      goto LABEL_44;
    case 0x13u:
      UmfdHostLifeTimeManager::OnHostReady();
      goto LABEL_44;
    default:
      goto LABEL_44;
  }
}
