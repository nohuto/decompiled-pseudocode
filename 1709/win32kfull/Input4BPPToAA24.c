/*
 * XREFs of Input4BPPToAA24 @ 0x1C02432D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__fastcall Input4BPPToAA24(char *a1, _BYTE *a2)
{
  _BYTE *v2; // r9
  unsigned __int8 *v3; // r10
  unsigned int v5; // ebx
  __int64 v7; // r11
  __int64 v8; // rax
  unsigned int i; // edx
  unsigned int v10; // ecx
  __int64 v11; // rax
  unsigned int j; // esi
  unsigned int v13; // edx
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  char v17; // cl
  int v18; // eax
  int v19; // eax

  v2 = a2;
  v3 = (unsigned __int8 *)*((_QWORD *)a1 + 5);
  v5 = *((_DWORD *)a1 + 12);
  v7 = *((_QWORD *)a1 + 10);
  if ( (*a1 & 4) != 0 )
  {
    if ( a1[1] )
    {
      --v5;
      v8 = *v3++ & 0xF;
      v2 = a2 + 1;
      *a2 = *(_BYTE *)(v7 + 4 * v8 + 3);
    }
    for ( i = v5 >> 1; i; --i )
    {
      v10 = *v3++;
      *v2 = *(_BYTE *)(v7 + 4 * ((unsigned __int64)v10 >> 4) + 3);
      v2[1] = *(_BYTE *)(v7 + 4LL * (v10 & 0xF) + 3);
      v2 += 2;
    }
    if ( (v5 & 1) != 0 )
      *v2 = *(_BYTE *)(v7 + 4 * ((unsigned __int64)*v3 >> 4) + 3);
  }
  else
  {
    if ( a1[1] )
    {
      --v5;
      v11 = *v3++ & 0xF;
      v2 = a2 + 3;
      *(_WORD *)a2 = *(_WORD *)(v7 + 4 * v11);
      a2[2] = *(_BYTE *)(v7 + 4LL * (unsigned int)v11 + 2);
    }
    for ( j = v5 >> 1; j; --j )
    {
      v13 = *v3++;
      v14 = v13;
      v15 = v13 & 0xF;
      v14 >>= 4;
      *(_WORD *)v2 = *(_WORD *)(v7 + 4 * v14);
      v2[2] = *(_BYTE *)(v7 + 4 * v14 + 2);
      *(_WORD *)(v2 + 3) = *(_WORD *)(v7 + 4 * v15);
      v2[5] = *(_BYTE *)(v7 + 4 * v15 + 2);
      v2 += 6;
    }
    if ( (v5 & 1) != 0 )
    {
      v16 = (unsigned __int64)*v3 >> 4;
      *(_WORD *)v2 = *(_WORD *)(v7 + 4 * v16);
      v2[2] = *(_BYTE *)(v7 + 4 * v16 + 2);
    }
  }
  v17 = *a1;
  if ( (*a1 & 2) != 0 )
  {
    v18 = *((_DWORD *)a1 + 13);
    if ( v18 && (v19 = v18 - 1, (*((_DWORD *)a1 + 13) = v19) != 0) )
    {
      *((_QWORD *)a1 + 5) += *((int *)a1 + 15);
    }
    else if ( (v17 & 1) != 0 )
    {
      *((_QWORD *)a1 + 5) = *((_QWORD *)a1 + 3);
      *((_DWORD *)a1 + 13) = *((_DWORD *)a1 + 8);
    }
    else
    {
      *a1 = v17 & 0xFD;
    }
  }
  return a2;
}
