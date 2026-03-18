/*
 * XREFs of RtlLengthCurrentClearRunForward @ 0x1400D7650
 * Callers:
 *     MiCheckHintedPageFileSpace @ 0x14009D3C8 (MiCheckHintedPageFileSpace.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1400D7170 (MiCoalescePageFileBitmapsCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLengthCurrentClearRunForward(int *a1, unsigned int a2, unsigned int a3)
{
  int v3; // esi
  __int64 v4; // r9
  bool v6; // zf
  int v7; // edi
  _DWORD *v8; // rax
  _DWORD *v9; // rcx
  _DWORD *v10; // r10
  __int64 v11; // rbx
  unsigned int v12; // r8d
  unsigned int v13; // r9d
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // r8d
  char v18; // dl
  __int64 v19; // rcx

  v3 = *a1;
  v4 = *((_QWORD *)a1 + 1);
  v6 = (*a1 & 0x1F) == 0;
  v7 = *a1 & 0x1F;
  v8 = (_DWORD *)(v4 + 4 * ((unsigned __int64)a2 >> 5));
  v9 = (_DWORD *)(v4 + 4 * ((unsigned __int64)(unsigned int)(*a1 - 1) >> 5));
  v10 = v9 - 1;
  if ( v6 )
    v10 = v9;
  v11 = a2 & 0x1F;
  v12 = 0;
  v13 = ~dword_1402F9540[v11] & *v8;
  if ( v8 > v10 )
  {
LABEL_19:
    if ( v7 )
    {
      if ( v12 )
        v13 = v8[1];
      v18 = -1;
      v6 = !_BitScanForward64((unsigned __int64 *)&v19, v13 | ~dword_1402F9540[v3 & 0x1F]);
      if ( !v6 )
        v18 = v19;
      v15 = v18;
      goto LABEL_8;
    }
  }
  else
  {
    if ( v13 )
    {
LABEL_5:
      v6 = !_BitScanForward64((unsigned __int64 *)&v14, v13);
      if ( v6 )
        LOBYTE(v14) = -1;
      v15 = (char)v14;
LABEL_8:
      v12 += v15;
      goto LABEL_9;
    }
    v13 = 0;
    while ( 1 )
    {
      v12 += 32;
      if ( v12 >= a3 && v12 - (unsigned int)v11 >= a3 )
        break;
      if ( v8 == v10 )
        goto LABEL_19;
      v13 = v8[1];
      ++v8;
      if ( v13 )
        goto LABEL_5;
    }
  }
LABEL_9:
  v16 = v12 - v11;
  if ( v16 > a3 )
    return a3;
  else
    return v16;
}
