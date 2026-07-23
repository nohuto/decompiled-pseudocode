/*
 * XREFs of ResCHitsPopulate @ 0x18008EDBC
 * Callers:
 *     ResCHitsCreateAndPopulate @ 0x18008ED3C (ResCHitsCreateAndPopulate.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall ResCHitsPopulate(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // eax
  __int64 result; // rax
  LONG v5; // ecx

  if ( a3 - 1 > 0x26
    && a2
    && *(_QWORD *)a2 == 0x54494843534552LL
    && *(_DWORD *)(a2 + 8) == 1
    && (v3 = *(_DWORD *)(a2 + 12)) != 0 )
  {
    if ( !a3 || a3 >= 8 * v3 + 40 )
    {
      *(_QWORD *)(a1 + 24) = a2;
      result = 1LL;
      *(_QWORD *)(a1 + 32) = a2 + 40;
      return result;
    }
    v5 = 24;
  }
  else
  {
    v5 = 13;
  }
  RtlSetLastWin32Error(v5);
  return 0LL;
}
