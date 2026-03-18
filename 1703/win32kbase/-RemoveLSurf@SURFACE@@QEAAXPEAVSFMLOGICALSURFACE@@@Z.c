/*
 * XREFs of ?RemoveLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C002CA30
 * Callers:
 *     <none>
 * Callees:
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C007DD6C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C007DDA0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

void __fastcall SURFACE::RemoveLSurf(SURFACE *this, struct SFMLOGICALSURFACE *a2)
{
  char **v3; // rax
  char *v4; // rbx
  __int64 v5; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v6, (SURFACE *)((char *)this + 560));
  v3 = (char **)*((_QWORD *)a2 + 7);
  v4 = (char *)a2 + 48;
  v5 = *(_QWORD *)v4;
  if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || *v3 != v4 )
    __fastfail(3u);
  *v3 = (char *)v5;
  *(_QWORD *)(v5 + 8) = v3;
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v6);
}
