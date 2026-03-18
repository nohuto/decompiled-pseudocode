/*
 * XREFs of DrvSetMDEVPowerState @ 0x1C00A5DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvSetMDEVPowerState(__int64 a1, int a2)
{
  __int64 i; // r8
  __int64 result; // rax
  __int64 v5; // rcx

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 20); i = (unsigned int)(i + 1) )
  {
    result = *(_QWORD *)(a1 + 40 * i + 32);
    v5 = *(_QWORD *)(result + 2592);
    if ( a2 )
      *(_DWORD *)(v5 + 160) &= ~0x80000000;
    else
      *(_DWORD *)(v5 + 160) |= 0x80000000;
  }
  return result;
}
