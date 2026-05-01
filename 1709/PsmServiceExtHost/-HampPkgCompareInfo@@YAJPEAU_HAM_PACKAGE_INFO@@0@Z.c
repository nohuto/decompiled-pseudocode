/*
 * XREFs of ?HampPkgCompareInfo@@YAJPEAU_HAM_PACKAGE_INFO@@0@Z @ 0x18004661C
 * Callers:
 *     ?HampPkgCompareByIdentity@@YAJPEAX0@Z @ 0x180046610 (-HampPkgCompareByIdentity@@YAJPEAX0@Z.c)
 * Callees:
 *     memcmp_0 @ 0x180026A9F (memcmp_0.c)
 */

int __fastcall HampPkgCompareInfo(const wchar_t *a1, const wchar_t *a2)
{
  int result; // eax
  unsigned int v5; // eax
  unsigned int v6; // ecx
  char *v7; // rsi
  DWORD LengthSid; // edi
  DWORD v9; // eax

  result = _wcsicmp(a1, a2);
  if ( !result )
  {
    v5 = *((_DWORD *)a1 + 50);
    v6 = *((_DWORD *)a2 + 50);
    if ( v5 < v6 )
      return -1;
    if ( v5 > v6 )
      return 1;
    v7 = (char *)(a1 + 66);
    LengthSid = GetLengthSid((PSID)(a1 + 66));
    v9 = GetLengthSid((PSID)(a2 + 66));
    if ( LengthSid < v9 )
      return -1;
    if ( LengthSid > v9 )
      return 1;
    else
      return memcmp_0(v7, a2 + 66, LengthSid);
  }
  return result;
}
