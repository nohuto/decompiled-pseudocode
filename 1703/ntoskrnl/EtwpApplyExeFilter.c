/*
 * XREFs of EtwpApplyExeFilter @ 0x140712764
 * Callers:
 *     EtwpApplyTransientFilters @ 0x14045E770 (EtwpApplyTransientFilters.c)
 *     EtwpApplyScopeFilters @ 0x140480E10 (EtwpApplyScopeFilters.c)
 * Callees:
 *     _wcsnicmp @ 0x14016A210 (_wcsnicmp.c)
 */

char __fastcall EtwpApplyExeFilter(__int64 a1, _WORD *a2)
{
  unsigned __int16 *v3; // rcx
  const wchar_t *v4; // r8
  unsigned int v5; // ebp
  const wchar_t *v6; // rbx
  const wchar_t *v7; // rax
  unsigned __int16 v8; // si
  unsigned int v9; // ebp
  char v10; // di

  v3 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 80) + 1128LL);
  v4 = (const wchar_t *)*((_QWORD *)v3 + 1);
  v5 = *v3 >> 1;
  v6 = &v4[v5];
  while ( v6 != v4 )
  {
    v7 = v6--;
    if ( *v6 == 92 )
    {
      v6 = v7;
      break;
    }
  }
  v8 = 0;
  v9 = v5 - (v6 - v4);
  if ( !*a2 )
    return 0;
  v10 = 1;
  while ( (unsigned __int16)a2[8 * v8 + 4] != v9 || wcsnicmp(*(const wchar_t **)&a2[8 * v8 + 8], v6, v9) )
  {
    if ( ++v8 >= *a2 )
      return 0;
  }
  return v10;
}
