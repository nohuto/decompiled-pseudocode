/*
 * XREFs of sub_1800034D4 @ 0x1800034D4
 * Callers:
 *     sub_180003454 @ 0x180003454 (sub_180003454.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall sub_1800034D4(__int64 a1, __int64 a2, unsigned int a3)
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
