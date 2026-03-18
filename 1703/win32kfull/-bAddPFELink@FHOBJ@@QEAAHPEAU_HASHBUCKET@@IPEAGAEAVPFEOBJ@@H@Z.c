/*
 * XREFs of ?bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEAGAEAVPFEOBJ@@H@Z @ 0x1C002E5FC
 * Callers:
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C002E434 (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C002FFD0 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ?efstyCompute@PFEOBJ@@QEAA?AW4_ENUMFONTSTYLE@@XZ @ 0x1C0030028 (-efstyCompute@PFEOBJ@@QEAA-AW4_ENUMFONTSTYLE@@XZ.c)
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
  _QWORD *v13; // rax
  _QWORD *v14; // r10
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // r10
  char v18; // al
  __int64 v19; // r10
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r10

  v6 = 1;
  v7 = a3;
  v11 = PALLOCMEM2(0x10uLL, 1802398791LL, 1);
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
  v13 = PALLOCMEM2(0x80uLL, 1650550855LL, 1);
  v14 = v13;
  if ( v13 )
  {
    v13[2] = v12;
    v13[1] = v12;
    v15 = *((_QWORD *)this + 1);
    if ( *(_QWORD *)(v15 + 24) )
    {
      v14[5] = *(_QWORD *)(v15 + 32);
      v14[6] = 0LL;
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 32LL) + 48LL) = v14;
      *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v14;
    }
    else
    {
      *(_QWORD *)(v15 + 24) = v14;
      *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v14;
      v14[5] = 0LL;
      v14[6] = 0LL;
    }
    *((_DWORD *)v14 + 14) = *(_DWORD *)(*(_QWORD *)a5 + 88LL);
    *((_DWORD *)v14 + 8) = a6 != 0 ? 2 : 0;
    v16 = PFEOBJ::flFontType(a5);
    *(_DWORD *)(v17 + 24) = (v16 >> 2) & 1;
    v18 = PFEOBJ::flFontType(a5);
    *(_DWORD *)(v19 + 28) = v18 & 1;
    if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 2 )
    {
      *(_QWORD *)(v19 + 60) = *(_QWORD *)(*(_QWORD *)a5 + 92LL);
    }
    else
    {
      v20 = 32LL;
      v21 = v19 - (_QWORD)a4;
      do
      {
        *(unsigned __int16 *)((char *)a4 + v21 + 60) = *a4;
        ++a4;
        --v20;
      }
      while ( v20 );
    }
    v22 = *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v7 + 40);
    *(_QWORD *)v19 = v22;
    if ( v22 )
      ++*(_DWORD *)(*((_QWORD *)this + 1) + 16LL);
    *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v7 + 40) = v19;
    ++*(_DWORD *)(*((_QWORD *)this + 1) + 12LL);
    if ( !(unsigned int)PFEOBJ::efstyCompute(a5) )
      *(_DWORD *)(v23 + 32) |= 4u;
    return v6;
  }
  Win32FreePool(v12);
  return 0LL;
}
