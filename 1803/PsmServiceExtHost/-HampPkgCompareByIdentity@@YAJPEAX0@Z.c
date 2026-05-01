/*
 * XREFs of ?HampPkgCompareByIdentity@@YAJPEAX0@Z @ 0x180027D00
 * Callers:
 *     ?HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_EXTERNAL_APPLICATION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18000C430 (-HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_EXTERNAL_APP.c)
 * Callees:
 *     memcmp_0 @ 0x180041D10 (memcmp_0.c)
 */

int __fastcall HampPkgCompareByIdentity(const wchar_t *a1, const wchar_t *a2)
{
  char *v3; // rbx
  int result; // eax
  unsigned int v5; // eax
  unsigned int v6; // ecx
  const void *v7; // rsi
  ULONG v8; // ebx
  ULONG v9; // eax

  if ( !a2 )
    a2 = 0LL;
  v3 = (char *)(a2 + 48);
  result = _wcsicmp(a1, a2 + 48);
  if ( !result )
  {
    v5 = *((_DWORD *)a1 + 50);
    v6 = *((_DWORD *)v3 + 50);
    if ( v5 < v6 )
    {
      return -1;
    }
    else if ( v5 > v6 )
    {
      return 1;
    }
    else
    {
      v7 = v3 + 132;
      v8 = RtlLengthSid(v3 + 132);
      v9 = RtlLengthSid((PSID)(a1 + 66));
      if ( v9 < v8 )
      {
        return -1;
      }
      else if ( v9 > v8 )
      {
        return 1;
      }
      else
      {
        return memcmp_0(a1 + 66, v7, v9);
      }
    }
  }
  return result;
}
