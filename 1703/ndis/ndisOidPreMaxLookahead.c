/*
 * XREFs of ndisOidPreMaxLookahead @ 0x1C00D1FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ndisOidPreMaxLookahead(__int64 a1)
{
  __int64 v1; // r8
  char v2; // dl

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0;
  if ( *(_QWORD *)a1 && (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) == 0 )
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v1 + 48) < 4u )
    {
      *(_DWORD *)(v1 + 56) = 4;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    if ( !*(_DWORD *)(a1 + 40) )
    {
      v2 = 1;
      **(_DWORD **)(v1 + 40) = *(_DWORD *)(*(_QWORD *)a1 + 596LL);
      *(_DWORD *)(v1 + 52) = 4;
    }
  }
  return v2;
}
