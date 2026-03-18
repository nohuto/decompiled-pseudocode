/*
 * XREFs of ?AddLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x1C002CA90
 * Callers:
 *     <none>
 * Callees:
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C007DD6C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C007DDA0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

void __fastcall SURFACE::AddLSurf(SURFACE *this, struct SFMLOGICALSURFACE *a2)
{
  char *v4; // rcx
  char *v5; // rax
  __int64 v6; // rdx
  char **v7; // rdx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v8, (SURFACE *)((char *)this + 560));
  v4 = (char *)this + 240;
  v5 = (char *)a2 + 48;
  if ( (*((_DWORD *)a2 + 62) & 4) != 0 )
  {
    v6 = *(_QWORD *)v4;
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 )
      __fastfail(3u);
    *(_QWORD *)v5 = v6;
    *((_QWORD *)a2 + 7) = v4;
    *(_QWORD *)(v6 + 8) = v5;
    *(_QWORD *)v4 = v5;
  }
  else
  {
    v7 = (char **)*((_QWORD *)this + 31);
    if ( *v7 != v4 )
      __fastfail(3u);
    *(_QWORD *)v5 = v4;
    *((_QWORD *)a2 + 7) = v7;
    *v7 = v5;
    *((_QWORD *)this + 31) = v5;
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v8);
}
