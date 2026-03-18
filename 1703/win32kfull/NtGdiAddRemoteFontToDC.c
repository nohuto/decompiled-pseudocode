/*
 * XREFs of NtGdiAddRemoteFontToDC @ 0x1C026AA30
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@XZ @ 0x1C013C3B4 (--0PUBLIC_PFTOBJ@@QEAA@XZ.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C0249CE0 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z @ 0x1C026A350 (-bCreateFontFileView@@YAHPEBU_FONTFILEVIEW@@PEBUtagDOWNLOADFONTHEADER@@KPEAPEAPEAU1@K@Z.c)
 *     cMapRemoteFonts @ 0x1C026AC44 (cMapRemoteFonts.c)
 *     vUnmapRemoteFonts @ 0x1C026B140 (vUnmapRemoteFonts.c)
 */

__int64 __fastcall NtGdiAddRemoteFontToDC(
        HDC a1,
        struct tagDOWNLOADFONTHEADER *a2,
        unsigned int a3,
        struct _UNIVERSAL_FONT_ID *a4)
{
  struct _UNIVERSAL_FONT_ID *v4; // rbx
  unsigned int v7; // edi
  int v8; // esi
  _BYTE *v10; // r15
  unsigned int v11; // eax
  unsigned int v12; // r14d
  DC *v13; // [rsp+40h] [rbp-D8h] BYREF
  int v14; // [rsp+48h] [rbp-D0h]
  int v15; // [rsp+4Ch] [rbp-CCh]
  struct tagDOWNLOADFONTHEADER *v16; // [rsp+50h] [rbp-C8h] BYREF
  struct _FONTFILEVIEW **v17; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-B8h] BYREF
  struct _UNIVERSAL_FONT_ID *v19; // [rsp+68h] [rbp-B0h]
  _BYTE v20[16]; // [rsp+70h] [rbp-A8h] BYREF
  _BYTE v21[128]; // [rsp+80h] [rbp-98h] BYREF
  int v22; // [rsp+138h] [rbp+20h] BYREF

  v4 = a4;
  v7 = 0;
  v19 = a4;
  v8 = 0;
  v22 = 0;
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      v4 = (struct _UNIVERSAL_FONT_ID *)W32UserProbeAddress;
    v18 = *(_QWORD *)v4;
    v4 = (struct _UNIVERSAL_FONT_ID *)&v18;
    v19 = (struct _UNIVERSAL_FONT_ID *)&v18;
  }
  v14 = 0;
  v15 = 0;
  XDCOBJ::vLock(&v13, a1);
  if ( !v13 )
    return 0LL;
  v17 = 0LL;
  v10 = 0LL;
  v16 = a2;
  v11 = cMapRemoteFonts(&v16, a3, v21, 1LL);
  v12 = v11;
  if ( v16 )
  {
    if ( v11 )
    {
      v10 = v21;
      v8 = 1;
      v22 = 1;
      v7 = bCreateFontFileView((const struct _FONTFILEVIEW *)v21, v16, a3, &v17, v11);
      if ( v7 )
      {
        PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v20);
        v7 = PUBLIC_PFTOBJ::bLoadRemoteFonts((PUBLIC_PFTOBJ *)v20, (struct XDCOBJ *)&v13, v17, v12, 0LL, v4, &v22);
        v8 = v22;
      }
    }
  }
  if ( !v7 )
  {
    if ( v8 )
      vUnmapRemoteFonts(v10);
  }
  XDCOBJ::RestoreAttributes((XDCOBJ *)&v13);
  _InterlockedDecrement((volatile signed __int32 *)v13 + 3);
  return v7;
}
