/*
 * XREFs of ArbpUpdatePriority @ 0x1C009570C
 * Callers:
 *     ArbGetNextAllocationRange @ 0x1C0094210 (ArbGetNextAllocationRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ArbpUpdatePriority(__int64 a1, __int64 *a2)
{
  int v3; // edx
  __int64 result; // rax
  char v5; // r10
  char *v6; // r9
  char *v7; // rdx
  int v8; // edx
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  bool v12; // cf
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax

  v3 = *((_DWORD *)a2 + 8);
  result = (unsigned int)(v3 - 2147483645);
  if ( (unsigned int)result <= 1 )
    goto LABEL_25;
  v5 = *(_BYTE *)a2[5] & 1;
  if ( v3 )
  {
    result = *((unsigned int *)a2 + 9);
    if ( (result & 2) == 0 )
    {
      if ( v3 <= 0 )
        v8 = ~v3;
      else
        v8 = v3 - 1;
      v6 = *(char **)(a1 + 64);
      v7 = &v6[16 * (v8 + 1)];
      goto LABEL_9;
    }
LABEL_25:
    *((_DWORD *)a2 + 8) = 0x7FFFFFFF;
    return result;
  }
  v6 = *(char **)(a1 + 64);
  v7 = v6;
LABEL_9:
  v9 = (unsigned __int64)&v6[16 * *(unsigned __int16 *)(a1 + 56)];
  if ( (unsigned __int64)v7 >= v9 )
  {
LABEL_22:
    result = 2147483646 - (unsigned int)(v5 != 0);
    *((_DWORD *)a2 + 8) = result;
    return result;
  }
  v10 = *a2;
  while ( 1 )
  {
    v11 = *(_QWORD *)v7;
    v12 = *(_QWORD *)v7 < v10;
    if ( *(_QWORD *)v7 <= v10 )
      break;
    if ( a2[1] >= v11 )
    {
      v12 = v11 < v10;
      break;
    }
LABEL_21:
    v7 += 16;
    if ( (unsigned __int64)v7 >= v9 )
      goto LABEL_22;
  }
  if ( v12 && *((_QWORD *)v7 + 1) < v10 )
    goto LABEL_21;
  v13 = a2[1];
  if ( v13 >= *((_QWORD *)v7 + 1) )
    v13 = *((_QWORD *)v7 + 1);
  v14 = *a2;
  if ( v10 <= v11 )
    v14 = *(_QWORD *)v7;
  if ( v13 - v14 + 1 < a2[2] )
    goto LABEL_21;
  result = (unsigned int)((v7 - v6) >> 4) + 1;
  *((_DWORD *)a2 + 8) = result;
  if ( v5 )
    *((_DWORD *)a2 + 8) = -(((v7 - v6) >> 4) + 1);
  return result;
}
