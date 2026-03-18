/*
 * XREFs of RtlLengthCurrentClearRunForward @ 0x1400AC6E8
 * Callers:
 *     MiCheckHintedPageFileSpace @ 0x14007E4D0 (MiCheckHintedPageFileSpace.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1400AC1E0 (MiCoalescePageFileBitmapsCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLengthCurrentClearRunForward(int *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  int v4; // edi
  int v6; // esi
  _DWORD *v7; // r10
  _DWORD *v8; // rax
  _DWORD *v9; // r9
  __int64 v10; // rbx
  unsigned int v11; // edx
  __int64 v12; // rcx
  char v13; // r8
  bool v14; // zf
  unsigned int v15; // edx
  char v17; // r8

  v3 = *((_QWORD *)a1 + 1);
  v4 = *a1;
  v6 = *a1 & 0x1F;
  v7 = (_DWORD *)(v3 + 4 * ((unsigned __int64)a2 >> 5));
  v8 = (_DWORD *)(v3 + 4 * ((unsigned __int64)(unsigned int)(*a1 - 1) >> 5));
  v9 = v8 - 1;
  if ( !v6 )
    v9 = v8;
  v10 = a2 & 0x1F;
  v11 = 0;
  LODWORD(v12) = *v7 & ~dword_14029CF70[v10];
  if ( v7 > v9 )
  {
LABEL_17:
    if ( v6 )
    {
      if ( v11 )
        LODWORD(v12) = v7[1];
      v17 = -1;
      v14 = !_BitScanForward64((unsigned __int64 *)&v12, (unsigned int)v12 | ~dword_14029CF70[v4 & 0x1F]);
      if ( !v14 )
        v17 = v12;
      v11 += v17;
    }
  }
  else if ( (_DWORD)v12 )
  {
LABEL_5:
    v13 = -1;
    v14 = !_BitScanForward64((unsigned __int64 *)&v12, (unsigned int)v12);
    if ( !v14 )
      v13 = v12;
    v11 += v13;
  }
  else
  {
    while ( 1 )
    {
      v11 += 32;
      if ( v11 >= a3 && v11 - (unsigned int)v10 >= a3 )
        break;
      if ( v7 == v9 )
        goto LABEL_17;
      LODWORD(v12) = *++v7;
      if ( *v7 )
        goto LABEL_5;
    }
  }
  v15 = v11 - v10;
  if ( v15 > a3 )
    return a3;
  return v15;
}
