/*
 * XREFs of ResCCultureMapPopulate @ 0x1801114D0
 * Callers:
 *     ResCCultureMapCreateAndPopulate @ 0x180111438 (ResCCultureMapCreateAndPopulate.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall ResCCultureMapPopulate(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ecx
  LONG v6; // ecx
  __int64 v7; // rdx
  __int64 result; // rax

  if ( *(_QWORD *)a2 != 0x4C554343534552LL || *(_DWORD *)(a2 + 8) || a3 - 1 <= 0x1E )
  {
    v6 = 13;
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 12);
    if ( v5 && *(_DWORD *)(a2 + 20) <= v5 && (!a3 || a3 >= 2 * (*(_DWORD *)(a2 + 16) + 4 * (v5 + 4))) )
    {
      v7 = a2 + 32;
      a1[1] = a2;
      a1[2] = v7;
      result = 1LL;
      a1[3] = v7 + 8LL * *(unsigned int *)(a2 + 12);
      return result;
    }
    v6 = 24;
  }
  RtlSetLastWin32Error(v6);
  return 0LL;
}
