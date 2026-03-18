/*
 * XREFs of ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C029D398
 * Callers:
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C029D510 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C00272DC (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     EngMapFontFileFDInternal @ 0x1C0027BDC (EngMapFontFileFDInternal.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C002CAF8 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1C00326F4 (-LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 */

char __fastcall UmfdHostLifeTimeManager::TryResurrectHff(_OWORD *a1, struct PFF *a2)
{
  __int64 v3; // r14
  _OWORD *v4; // r15
  void **v5; // rbx
  unsigned int v6; // ebp
  char v7; // si
  unsigned __int64 v8; // r15
  void **v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rcx
  _BYTE *FontFile; // rax
  void **v15; // [rsp+98h] [rbp+10h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *((unsigned int *)a2 + 9);
  v4 = a1;
  v16 = *((_QWORD *)a2 + 11);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v15, 12 * v3);
  v5 = v15;
  if ( v15 )
  {
    v6 = 0;
    v7 = 1;
    if ( (_DWORD)v3 )
    {
      v8 = 0LL;
      v9 = &v15[v3];
      while ( 1 )
      {
        v10 = *((_QWORD *)a2 + 19);
        if ( !*(_QWORD *)(*(_QWORD *)(v8 + v10) + 16LL)
          && !(unsigned int)EngMapFontFileFDInternal(*(struct _FILEVIEW **)(v8 + v10), &v17, &v15, 0) )
        {
          break;
        }
        ++v6;
        v5[v8 / 8] = *(void **)(*(_QWORD *)(*((_QWORD *)a2 + 19) + v8) + 16LL);
        v11 = *(_QWORD *)(*((_QWORD *)a2 + 19) + v8);
        v8 += 8LL;
        *(_DWORD *)v9 = *(_DWORD *)(v11 + 24);
        v9 = (void **)((char *)v9 + 4);
        if ( v6 >= (unsigned int)v3 )
        {
          v4 = a1;
          goto LABEL_8;
        }
      }
    }
    else
    {
LABEL_8:
      if ( (unsigned int)UmfdInsertFontFileViewForLookup(*((struct _FONTFILEVIEW ***)a2 + 19), *((_DWORD *)a2 + 9)) )
      {
        FontFile = (_BYTE *)PDEVOBJ::LoadFontFile(
                              (PDEVOBJ *)&v16,
                              *((_DWORD *)a2 + 9),
                              *((unsigned __int64 **)a2 + 19),
                              v5,
                              (unsigned int *)&v5[v3],
                              *((struct tagDESIGNVECTOR **)a2 + 5),
                              gusLanguageID,
                              0);
        if ( FontFile != (_BYTE *)0xFFFFFFFFLL )
        {
          if ( FontFile )
          {
            FontFile[12] = 1;
            *v4 = *(_OWORD *)FontFile;
            EngFreeMem(FontFile);
            goto LABEL_13;
          }
        }
      }
    }
  }
  v7 = 0;
LABEL_13:
  if ( v5 )
    Win32FreePool(v5);
  return v7;
}
