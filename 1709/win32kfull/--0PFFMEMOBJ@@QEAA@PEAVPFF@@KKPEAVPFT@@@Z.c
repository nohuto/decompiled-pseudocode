/*
 * XREFs of ??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z @ 0x1C00B46E0
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C00AFB20 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?bAddPvtData@PFFOBJ@@QEAAHK@Z @ 0x1C0293D68 (-bAddPvtData@PFFOBJ@@QEAAHK@Z.c)
 */

PFFMEMOBJ *__fastcall PFFMEMOBJ::PFFMEMOBJ(PFFMEMOBJ *this, struct PFF *Src, int a3, unsigned int a4, struct PFT *a5)
{
  void *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // edx
  int v13; // ecx
  __int64 v14; // rax

  *((_DWORD *)this + 5) = a4;
  *((_WORD *)this + 8) = 0;
  *((_DWORD *)this + 2) = 0;
  v9 = PALLOCMEM2(*(unsigned int *)Src, 1717989447LL, 1);
  *(_QWORD *)this = v9;
  if ( v9 )
  {
    memmove(v9, Src, *(_QWORD *)Src);
    PushThreadGuardedObject(*(_QWORD *)this + 176LL, *(_QWORD *)this, CleanUpPFF);
    v10 = *((_QWORD *)Src + 3);
    if ( v10 )
      *(_QWORD *)(*(_QWORD *)this + 24LL) = *(_QWORD *)this + v10 - (_QWORD)Src;
    v11 = *((_QWORD *)Src + 5);
    if ( v11 )
      *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)this + v11 - (_QWORD)Src;
    memset((void *)(*(_QWORD *)this + 224LL), 0, 8LL * *((unsigned int *)Src + 36));
    v12 = *((_DWORD *)Src + 13);
    *(_QWORD *)(*(_QWORD *)this + 208LL) = *((_QWORD *)Src + 26);
    *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 8LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)this + 144LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 68LL) = 0;
    v13 = a3 | 0x200;
    if ( (v12 & 0x200) == 0 )
      v13 = a3;
    *(_DWORD *)(*(_QWORD *)this + 52LL) = v13;
    *(_QWORD *)(*(_QWORD *)this + 104LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 120LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 128LL) = a5;
    *(_QWORD *)(*(_QWORD *)this + 160LL) = 0LL;
    v14 = *(_QWORD *)this;
    if ( (a4 & 0x1C) != 0 )
    {
      *(_DWORD *)(v14 + 56) = 0;
      *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
      PFFOBJ::bAddPvtData(this, a4);
    }
    else if ( (a4 & 0x20) != 0 )
    {
      *(_DWORD *)(v14 + 56) = 0;
      *(_DWORD *)(*(_QWORD *)this + 60LL) = 1;
    }
    else
    {
      *(_DWORD *)(v14 + 56) = 1;
      *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
    }
    *((_QWORD *)Src + 21) = *(_QWORD *)this;
    *(_QWORD *)(*(_QWORD *)this + 168LL) = Src;
  }
  return this;
}
