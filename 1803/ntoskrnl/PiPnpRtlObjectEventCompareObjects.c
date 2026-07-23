/*
 * XREFs of PiPnpRtlObjectEventCompareObjects @ 0x140504570
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 */

__int64 __fastcall PiPnpRtlObjectEventCompareObjects(_RTL_AVL_TABLE *a1, PVOID a2, PVOID a3)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // edx
  unsigned int v6; // eax
  int v7; // r9d
  int v8; // eax
  const wchar_t *v9; // rax
  const wchar_t *v10; // r8
  const wchar_t *v11; // rdx
  const wchar_t *v12; // rcx
  int v13; // ecx
  __int64 result; // rax

  if ( *(_QWORD *)a2 == *(_QWORD *)a3 )
    return 2LL;
  v3 = *(_QWORD *)(*(_QWORD *)a3 + 8LL);
  v4 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  v5 = *(_DWORD *)(v3 + 24);
  v6 = *(_DWORD *)(v4 + 24);
  if ( v6 > v5 )
    return 1LL;
  if ( v6 < v5 )
    return 0LL;
  v7 = *(_DWORD *)(v4 + 28);
  v8 = *(_DWORD *)(v3 + 28);
  if ( v7 < v8 )
    return 0LL;
  if ( v7 > v8 )
    return 1LL;
  v9 = *(const wchar_t **)(v3 + 16);
  v10 = *(const wchar_t **)(v4 + 16);
  v11 = v9 + 4;
  v12 = v10 + 4;
  if ( v7 != 3 )
  {
    v11 = v9;
    v12 = v10;
  }
  v13 = wcsicmp(v12, v11);
  result = 0LL;
  if ( v13 >= 0 )
  {
    LOBYTE(result) = v13 <= 0;
    return (unsigned int)(result + 1);
  }
  return result;
}
