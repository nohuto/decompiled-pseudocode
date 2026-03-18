/*
 * XREFs of rimReleaseCursor @ 0x1C01158A4
 * Callers:
 *     RIMCmDeactivateContact @ 0x1C0115690 (RIMCmDeactivateContact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimReleaseCursor(__int64 a1, int a2)
{
  unsigned int v2; // r10d
  __int64 v3; // r8
  __int64 v4; // r11
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 940);
  v3 = 0LL;
  if ( v2 )
  {
    v4 = *(_QWORD *)(a1 + 928);
    while ( 1 )
    {
      result = 3 * v3;
      if ( a2 == *(_DWORD *)(v4 + 12 * v3 + 4) )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= v2 )
        return result;
    }
    *(_DWORD *)(v4 + 12 * v3 + 8) = 0;
    result = *(_QWORD *)(a1 + 928);
    if ( *(_DWORD *)(result + 12LL * *(unsigned int *)(a1 + 936) + 8) )
      *(_DWORD *)(a1 + 936) = v3;
  }
  return result;
}
