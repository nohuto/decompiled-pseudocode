/*
 * XREFs of ?bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEAGAEAVPFEOBJ@@H@Z @ 0x1C003A644
 * Callers:
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C003A47C (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 * Callees:
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C003BD8C (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ?efstyCompute@PFEOBJ@@QEAA?AW4_ENUMFONTSTYLE@@XZ @ 0x1C003BDE4 (-efstyCompute@PFEOBJ@@QEAA-AW4_ENUMFONTSTYLE@@XZ.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 */

__int64 __fastcall FHOBJ::bAddPFELink(
        FHOBJ *this,
        struct _HASHBUCKET *a2,
        unsigned int a3,
        unsigned __int16 *a4,
        struct PFEOBJ *a5,
        int a6)
{
  unsigned int v6; // edi
  __int64 v7; // r13
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // r10
  char v20; // al
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r10

  v6 = 1;
  v7 = a3;
  v11 = (_QWORD *)PALLOCMEM2(0x10uLL);
  v12 = v11;
  if ( !v11 )
    return 0;
  *v11 = 0LL;
  v11[1] = *(_QWORD *)a5;
  if ( a2 && (a6 || (*((_DWORD *)a2 + 8) & 2) == 0) )
  {
    if ( (unsigned int)PFEOBJ::efstyCompute(a5) || (*((_DWORD *)a2 + 8) & 4) != 0 )
    {
      **((_QWORD **)a2 + 2) = v12;
      *((_QWORD *)a2 + 2) = v12;
    }
    else
    {
      *v12 = *((_QWORD *)a2 + 1);
      *((_DWORD *)a2 + 8) |= 4u;
      *((_QWORD *)a2 + 1) = v12;
    }
    if ( (PFEOBJ::flFontType(a5) & 4) != 0 )
      ++*((_DWORD *)a2 + 6);
    if ( (PFEOBJ::flFontType(a5) & 1) != 0 )
      ++*((_DWORD *)a2 + 7);
    return v6;
  }
  v13 = PALLOCMEM2(0x80uLL);
  v16 = v13;
  if ( v13 )
  {
    *(_QWORD *)(v13 + 16) = v12;
    *(_QWORD *)(v13 + 8) = v12;
    v17 = *((_QWORD *)this + 1);
    if ( *(_QWORD *)(v17 + 24) )
    {
      *(_QWORD *)(v16 + 40) = *(_QWORD *)(v17 + 32);
      *(_QWORD *)(v16 + 48) = 0LL;
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 32LL) + 48LL) = v16;
      *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v16;
    }
    else
    {
      *(_QWORD *)(v17 + 24) = v16;
      *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v16;
      *(_QWORD *)(v16 + 40) = 0LL;
      *(_QWORD *)(v16 + 48) = 0LL;
    }
    *(_DWORD *)(v16 + 56) = *(_DWORD *)(*(_QWORD *)a5 + 88LL);
    *(_DWORD *)(v16 + 32) = a6 != 0 ? 2 : 0;
    v18 = PFEOBJ::flFontType(a5);
    *(_DWORD *)(v19 + 24) = (v18 >> 2) & 1;
    v20 = PFEOBJ::flFontType(a5);
    *(_DWORD *)(v21 + 28) = v20 & 1;
    if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 2 )
    {
      *(_QWORD *)(v21 + 60) = *(_QWORD *)(*(_QWORD *)a5 + 92LL);
    }
    else
    {
      v22 = 32LL;
      v23 = v21 - (_QWORD)a4;
      do
      {
        *(unsigned __int16 *)((char *)a4 + v23 + 60) = *a4;
        ++a4;
        --v22;
      }
      while ( v22 );
    }
    v24 = *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v7 + 40);
    *(_QWORD *)v21 = v24;
    if ( v24 )
      ++*(_DWORD *)(*((_QWORD *)this + 1) + 16LL);
    *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v7 + 40) = v21;
    ++*(_DWORD *)(*((_QWORD *)this + 1) + 12LL);
    if ( !(unsigned int)PFEOBJ::efstyCompute(a5) )
      *(_DWORD *)(v25 + 32) |= 4u;
    return v6;
  }
  Win32FreePool(v12, v14, v15);
  return 0LL;
}
