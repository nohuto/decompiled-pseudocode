/*
 * XREFs of ?growlastrec@EPATHOBJ@@IEAAXPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0023644
 * Callers:
 *     ?addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z @ 0x1C002376C (-addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z.c)
 * Callees:
 *     ?bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C00969A0 (-bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     ?vInclude@ERECTFX@@QEAAXAEAU_POINTFIX@@@Z @ 0x1C0097D2C (-vInclude@ERECTFX@@QEAAXAEAU_POINTFIX@@@Z.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

void __fastcall EPATHOBJ::growlastrec(
        EPATHOBJ *this,
        struct EXFORMOBJ *a2,
        struct _PATHDATAL *a3,
        struct _POINTFIX *a4)
{
  __int64 v4; // rax
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  struct _POINTL *v13; // rdx
  __int64 v14; // rax
  struct _POINTFIX *v15; // rdx
  struct _POINTFIX *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax

  v4 = *((_QWORD *)this + 1);
  v8 = *(_QWORD *)(v4 + 40);
  v9 = *(_QWORD *)(v4 + 24);
  if ( v8 && v9 && *(_DWORD *)a3 == (*(_DWORD *)(v8 + 16) & 0xFFFFFFFC) )
  {
    LODWORD(v10) = 0;
    v11 = v8 + 8 * (*(unsigned int *)(v8 + 20) + 3LL);
    v12 = v9 + *(unsigned int *)(v9 + 16);
    if ( v12 > v11 )
      v10 = (__int64)(v12 - v11) >> 3;
    if ( (unsigned int)v10 > *((_DWORD *)a3 + 1) )
      LODWORD(v10) = *((_DWORD *)a3 + 1);
    if ( (*(_DWORD *)a3 & 0x10) != 0 )
      LODWORD(v10) = 3 * ((unsigned int)v10 / 3);
    if ( (_DWORD)v10 )
    {
      v13 = (struct _POINTL *)*((_QWORD *)a3 + 1);
      v14 = *(unsigned int *)(v8 + 20) + 3LL;
      if ( a2 )
        EXFORMOBJ::bXformRound(a2, v13, (struct _POINTFIX *)(v8 + 8 * v14), (unsigned int)v10);
      else
        memmove((void *)(v8 + 8 * v14), v13, 8LL * (unsigned int)v10);
      v15 = (struct _POINTFIX *)(v8 + 8 * (*(unsigned int *)(v8 + 20) + 3LL));
      do
      {
        ERECTFX::vInclude((ERECTFX *)(*((_QWORD *)this + 1) + 48LL), v15);
        v15 = v16 + 1;
      }
      while ( v17 != 1 );
      *(_DWORD *)(v8 + 20) += v10;
      v18 = *(unsigned int *)(v8 + 20);
      *((_DWORD *)a3 + 1) -= v10;
      *(_QWORD *)(v9 + 8) = v8 + 8 * (v18 + 3);
      *((_QWORD *)a3 + 1) += 8LL * (unsigned int)v10;
    }
  }
}
