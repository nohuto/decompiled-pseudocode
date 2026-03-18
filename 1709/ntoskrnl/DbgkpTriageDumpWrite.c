/*
 * XREFs of DbgkpTriageDumpWrite @ 0x1406AEC30
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int64 __fastcall DbgkpTriageDumpWrite(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // rbx
  __int64 v5; // r9
  unsigned int v6; // edi
  __int64 result; // rax
  int v8; // eax
  int v9; // ecx
  __int64 v10; // rax

  v2 = *a1;
  *a2 = 0;
  *(_DWORD *)(v2 + 4152) |= 0xFFu;
  v5 = *((unsigned int *)a1 + 6);
  v6 = 16 * *(_DWORD *)(v2 + 8316) + 4;
  if ( (unsigned int)v5 + v6 < (unsigned int)v5 || (unsigned int)v5 + v6 > *((_DWORD *)a1 + 2) )
    return 3221225626LL;
  memmove((void *)(v2 + v5), (const void *)(v2 + *(unsigned int *)(v2 + 8312)), v6);
  v8 = *((_DWORD *)a1 + 6);
  *(_DWORD *)(v2 + 8312) = v8;
  v9 = v8 + v6;
  *(_DWORD *)(v2 + 8196) = v8 + v6;
  *(_QWORD *)(v2 + 4000) = v8 + v6;
  v10 = v8 + v6 - 4;
  *(_DWORD *)(v2 + 8200) = v10;
  *(_DWORD *)(v10 + v2) = 1145524820;
  result = 0LL;
  *a2 = v9;
  return result;
}
