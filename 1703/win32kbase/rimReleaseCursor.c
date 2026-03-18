/*
 * XREFs of rimReleaseCursor @ 0x1C0116D30
 * Callers:
 *     RIMCmDeactivateContact @ 0x1C0116B14 (RIMCmDeactivateContact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimReleaseCursor(__int64 a1, int a2)
{
  __int64 v3; // r8
  unsigned int v4; // ecx
  __int64 v5; // r10
  __int64 result; // rax

  v3 = 0LL;
  v4 = *(_DWORD *)(a1 + 1604);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 1592);
    while ( a2 != *(_DWORD *)(v5 + 12 * v3 + 4) )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= v4 )
        return result;
    }
    *(_DWORD *)(v5 + 12 * v3 + 8) = 0;
    result = *(_QWORD *)(a1 + 1592);
    if ( *(_DWORD *)(result + 12LL * *(unsigned int *)(a1 + 1600) + 8) )
      *(_DWORD *)(a1 + 1600) = v3;
  }
  return result;
}
