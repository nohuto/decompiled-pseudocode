/*
 * XREFs of StorpFlushDataBufferMdl @ 0x1C00322C4
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0002880 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpFlushDataBufferMdl(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  if ( !a2 )
    return 3238002694LL;
  v2 = *(_BYTE *)(a2 + 2) == 40 ? *(_QWORD *)(a2 + 96) : *(_QWORD *)(a2 + 48);
  if ( !v2 )
    return 3238002694LL;
  if ( *(_DWORD *)v2 != 523124044 )
    return 3238002694LL;
  v3 = *(_QWORD *)(v2 + 144);
  if ( !v3 )
  {
    v3 = *(_QWORD *)(v2 + 104);
    if ( !v3 )
      return 3238002694LL;
  }
  if ( (*(_DWORD *)(a2 + 12) & 0x40) != 0 )
    KeFlushIoBuffers(v3, 0LL);
  return 0LL;
}
