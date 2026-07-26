/*
 * XREFs of ndisOidPostIovDeleteVPort @ 0x1C006B6F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIovDeleteVPort @ 0x1C006A83C (ndisIovDeleteVPort.c)
 */

__int64 __fastcall ndisOidPostIovDeleteVPort(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  int v4; // edx

  v2 = *(_QWORD *)(a1 + 32);
  result = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v4 = *(_DWORD *)(a1 + 40);
    if ( !v4 || v4 == 65539 && (result = *(unsigned int *)(result + 120), (result & 4) != 0) )
    {
      result = ndisIovDeleteVPort(*(_QWORD **)(v2 + 152));
      *(_DWORD *)(a1 + 40) = 0;
    }
  }
  return result;
}
