/*
 * XREFs of ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x1C00404D0
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C00AFB20 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 * Callees:
 *     ?vGetEUDC@PFFOBJ@@QEAAXPEAU_EUDCLOAD@@@Z @ 0x1C0038BF4 (-vGetEUDC@PFFOBJ@@QEAAXPEAU_EUDCLOAD@@@Z.c)
 *     ?bAddPvtData@PFFOBJ@@QEAAHK@Z @ 0x1C0293D68 (-bAddPvtData@PFFOBJ@@QEAAHK@Z.c)
 */

__int64 __fastcall PFTOBJ::chpfeIncrPFF(
        struct PFT **const *this,
        struct PFF *a2,
        int *a3,
        char a4,
        struct _EUDCLOAD *a5)
{
  unsigned int v5; // edi
  struct PFF *v8; // rbx
  int v10; // eax
  unsigned int v11; // esi
  int v12; // eax
  _DWORD *v13; // rcx
  int v14; // eax
  int v15; // eax
  int v17; // eax
  bool v18; // zf
  unsigned int v19; // ecx
  __int64 v20; // rax
  _QWORD v21[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0;
  v21[0] = a2;
  v8 = a2;
  if ( !a2 )
    return v5;
  v10 = *((_DWORD *)a2 + 13);
  if ( !a5 )
  {
    if ( (v10 & 8) != 0 )
      return v5;
LABEL_4:
    v11 = 1;
    if ( *this != gpPFTPrivate
      || (v17 = PFFOBJ::bAddPvtData((PFFOBJ *)v21, a4), v8 = (struct PFF *)v21[0], v18 = v17 == 0, v12 = 0, !v18) )
    {
      v12 = 1;
    }
    *a3 = v12;
    if ( !v12 )
      return (unsigned int)-1;
    if ( a5 )
    {
      if ( !*((_QWORD *)a5 + 1) && *((_DWORD *)v8 + 36) > 2u )
        goto LABEL_23;
      PFFOBJ::vGetEUDC((PFFOBJ *)v21, a5);
    }
    if ( *this == gpPFTPrivate )
      return *((unsigned int *)v8 + 36);
    v13 = (_DWORD *)((char *)v8 + 60);
    if ( (a4 & 0x20) == 0 )
      v13 = (_DWORD *)((char *)v8 + 56);
    if ( *v13 != -1 )
    {
      if ( (a4 & 0x40) == 0 )
      {
        v14 = *((_DWORD *)v8 + 13);
        if ( (v14 & 0x80u) != 0 )
          *((_DWORD *)v8 + 13) = v14 & 0xFFFFFF7F;
        else
          ++*v13;
        v15 = *((_DWORD *)v8 + 13);
        if ( (v15 & 1) != 0 )
        {
          v19 = 0;
          for ( *((_DWORD *)v8 + 13) = v15 & 0xFFFFFFFE; v19 < *((_DWORD *)v8 + 36); ++v19 )
          {
            v20 = *((_QWORD *)v8 + v19 + 28);
            if ( v20 )
              *(_DWORD *)(v20 + 12) &= ~2u;
          }
        }
      }
      return *((unsigned int *)v8 + 36);
    }
LABEL_23:
    *a3 = 0;
    return v11;
  }
  if ( (v10 & 8) != 0 )
    goto LABEL_4;
  return v5;
}
