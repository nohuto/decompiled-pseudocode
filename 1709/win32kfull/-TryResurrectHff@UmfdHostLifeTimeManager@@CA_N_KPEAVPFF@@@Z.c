/*
 * XREFs of ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C0299A88
 * Callers:
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C0299C00 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1C003D818 (-LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00B2274 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C00B4A60 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     EngMapFontFileFDInternal @ 0x1C00B644C (EngMapFontFileFDInternal.c)
 */

char __fastcall UmfdHostLifeTimeManager::TryResurrectHff(_OWORD *a1, struct PFF *a2)
{
  __int64 v3; // r14
  _OWORD *v4; // r15
  __int64 v5; // rdx
  void **v6; // rbx
  unsigned int v7; // ebp
  char v8; // si
  unsigned __int64 v9; // r15
  void **v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rcx
  _BYTE *v13; // rax
  void **v16; // [rsp+98h] [rbp+10h] BYREF
  struct PDEV *v17; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *((unsigned int *)a2 + 9);
  v4 = a1;
  v17 = (struct PDEV *)*((_QWORD *)a2 + 11);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v16, 12 * v3);
  v6 = v16;
  if ( v16 )
  {
    v7 = 0;
    v8 = 1;
    if ( (_DWORD)v3 )
    {
      v9 = 0LL;
      v10 = &v16[v3];
      while ( 1 )
      {
        v11 = *(_QWORD *)(v9 + *((_QWORD *)a2 + 19));
        if ( !*(_QWORD *)(v11 + 16) && !(unsigned int)EngMapFontFileFDInternal((struct _FILEVIEW *)v11, &v18, &v16, 0) )
          break;
        ++v7;
        v6[v9 / 8] = *(void **)(*(_QWORD *)(*((_QWORD *)a2 + 19) + v9) + 16LL);
        v12 = *(_QWORD *)(*((_QWORD *)a2 + 19) + v9);
        v9 += 8LL;
        *(_DWORD *)v10 = *(_DWORD *)(v12 + 24);
        v10 = (void **)((char *)v10 + 4);
        if ( v7 >= (unsigned int)v3 )
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
        v13 = (_BYTE *)PDEVOBJ::LoadFontFile(
                         &v17,
                         *((_DWORD *)a2 + 9),
                         *((unsigned __int64 **)a2 + 19),
                         v6,
                         (unsigned int *)&v6[v3],
                         *((struct tagDESIGNVECTOR **)a2 + 5),
                         gusLanguageID,
                         0);
        if ( v13 != (_BYTE *)0xFFFFFFFFLL )
        {
          if ( v13 )
          {
            v13[12] = 1;
            *v4 = *(_OWORD *)v13;
            EngFreeMem(v13);
            goto LABEL_13;
          }
        }
      }
    }
  }
  v8 = 0;
LABEL_13:
  if ( v6 )
    Win32FreePool(v6, v5);
  return v8;
}
