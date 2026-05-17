/*
 * XREFs of RtlGetSaclSecurityDescriptor @ 0x180079FB0
 * Callers:
 *     RtlReplaceSidInSd @ 0x1800E55B0 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetSaclSecurityDescriptor(__int64 a1, bool *a2, _QWORD *a3, bool *a4)
{
  bool v4; // zf
  __int64 v5; // rax

  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  v4 = (*(_BYTE *)(a1 + 2) & 0x10) == 0;
  *a2 = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
  if ( !v4 )
  {
    if ( (~*(_BYTE *)(a1 + 2) & 0x10) != 0 )
    {
      v5 = 0LL;
    }
    else
    {
      v5 = 0LL;
      if ( *(__int16 *)(a1 + 2) >= 0 )
      {
        v5 = *(_QWORD *)(a1 + 24);
      }
      else if ( *(_DWORD *)(a1 + 12) )
      {
        v5 = a1 + *(unsigned int *)(a1 + 12);
      }
    }
    *a3 = v5;
    *a4 = (*(_BYTE *)(a1 + 2) & 0x20) != 0;
  }
  return 0LL;
}
