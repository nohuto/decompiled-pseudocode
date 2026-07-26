/*
 * XREFs of ndisPostOffloadAdminSettings @ 0x1C0049640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisPostOffloadAdminSettings(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 result; // rax

  v1 = a1[4];
  v2 = *(_QWORD *)(v1 + 40);
  if ( *a1 )
  {
    if ( (*(_DWORD *)(v1 + 88) & 0x400000) != 0 )
    {
      *(_BYTE *)(v2 + 1) = *(_BYTE *)(v1 + 233);
      result = *(unsigned __int16 *)(v1 + 234);
      *(_WORD *)(v2 + 2) = result;
      *(_DWORD *)(v1 + 88) &= ~0x400000u;
    }
  }
  return result;
}
