/*
 * XREFs of ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00B37A0
 * Callers:
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0037790 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C00AFB20 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C00B374C (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
 *     EngMapFontFileFDInternal @ 0x1C00B644C (EngMapFontFileFDInternal.c)
 *     vUnmapFile @ 0x1C00C1B94 (vUnmapFile.c)
 *     ?bMapFileRetainHandle@@YAHPEAGPEAU_FILEVIEW@@HPEAH@Z @ 0x1C00C1D80 (-bMapFileRetainHandle@@YAHPEAGPEAU_FILEVIEW@@HPEAH@Z.c)
 *     FreeFileView @ 0x1C010FC34 (FreeFileView.c)
 *     EngUnmapFile @ 0x1C02695A0 (EngUnmapFile.c)
 *     bMapFile @ 0x1C0269910 (bMapFile.c)
 *     GreMakeFontDir @ 0x1C0293AF0 (GreMakeFontDir.c)
 * Callees:
 *     ZwWin32CreateSection @ 0x1C00B6B6C (ZwWin32CreateSection.c)
 *     ?bCopySection@@YAHPEAX0_K@Z @ 0x1C0268E18 (-bCopySection@@YAHPEAX0_K@Z.c)
 *     ?bUnreferenceNetworkedFontFileNode@@YA_NPEAU_NETWORKED_FONT_FONT_FILE_NODE@@@Z @ 0x1C0269338 (-bUnreferenceNetworkedFontFileNode@@YA_NPEAU_NETWORKED_FONT_FONT_FILE_NODE@@@Z.c)
 */

void __fastcall vUnreferenceFileviewSection(struct _FILEVIEW *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // [rsp+28h] [rbp-60h]
  void *v9; // [rsp+38h] [rbp-50h]
  int v10; // [rsp+50h] [rbp-38h] BYREF
  __int64 v11; // [rsp+58h] [rbp-30h]
  __int64 v12; // [rsp+60h] [rbp-28h]
  int v13; // [rsp+68h] [rbp-20h]
  __int128 v14; // [rsp+70h] [rbp-18h]
  PVOID Object; // [rsp+90h] [rbp+8h] BYREF
  __int64 v16; // [rsp+98h] [rbp+10h] BYREF

  if ( (*((_DWORD *)a1 + 10) & 2) != 0 )
  {
    v4 = (void *)*((_QWORD *)a1 + 7);
    if ( v4 )
    {
      if ( bUnreferenceNetworkedFontFileNode(v4) )
      {
        v6 = *((_QWORD *)a1 + 6);
        if ( v6 )
        {
          if ( (*((_DWORD *)a1 + 10) & 4) != 0 )
          {
            v7 = *((unsigned int *)a1 + 6);
            v11 = 0LL;
            v12 = 0LL;
            v14 = 0LL;
            v16 = v7;
            v10 = 48;
            v13 = 576;
            if ( (int)ZwWin32CreateSection((int)&Object, v5, (int)&v10, (int)&v16, 4u, v8, v6, v9) >= 0 )
            {
              bCopySection(Object, *((void **)a1 + 4), *((unsigned int *)a1 + 6));
              ObfDereferenceObject(Object);
            }
          }
        }
      }
    }
  }
  v2 = (void *)*((_QWORD *)a1 + 4);
  if ( v2 )
  {
    ObfDereferenceObject(v2);
    *((_QWORD *)a1 + 4) = 0LL;
  }
  v3 = (void *)*((_QWORD *)a1 + 6);
  if ( v3 )
  {
    ZwClose(v3);
    *((_QWORD *)a1 + 6) = 0LL;
  }
}
