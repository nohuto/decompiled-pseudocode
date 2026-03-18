/*
 * XREFs of ESM_StartingMapping @ 0x1C003F2C0
 * Callers:
 *     <none>
 * Callees:
 *     TR_StartMapping @ 0x1C00238E8 (TR_StartMapping.c)
 */

__int64 __fastcall ESM_StartingMapping(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  unsigned int v3; // esi

  v1 = *(_QWORD *)(a1 + 960);
  _InterlockedExchange((volatile __int32 *)(v1 + 32), 0);
  if ( *(_BYTE *)(v1 + 37) && (*(_DWORD *)(*(_QWORD *)(v1 + 136) + 24LL) = 0, *(_BYTE *)(v1 + 37)) )
  {
    v2 = *(_QWORD *)(v1 + 136);
    v3 = 1;
    for ( *(_DWORD *)(v2 + 20) = 0; v3 <= *(_DWORD *)(v2 + 8); ++v3 )
      TR_StartMapping(*(_QWORD *)(104LL * (v3 - 1) + *(_QWORD *)(v1 + 136) + 48));
  }
  else
  {
    TR_StartMapping(*(_QWORD *)(v1 + 88));
  }
  return 29LL;
}
