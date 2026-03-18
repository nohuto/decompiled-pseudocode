/*
 * XREFs of NVMeGetAutoPowerStateTransitionCompletion @ 0x1C000F030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall NVMeGetAutoPowerStateTransitionCompletion(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r8

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v3 = *(_QWORD *)(a2 + 104);
  else
    v3 = *(_QWORD *)(a2 + 56);
  v4 = v3 & 0xFFF;
  if ( (v3 & 0xFFF) != 0 )
    v3 = v3 - v4 + 4096;
  if ( a3 )
  {
    LOBYTE(v4) = *(_BYTE *)(a2 + 3);
    if ( (_BYTE)v4 != 14 )
    {
      if ( (_BYTE)v4 == 1 )
      {
        LODWORD(v4) = (*(_DWORD *)(a1 + 1152) ^ (*a3 << 6)) & 0x40;
        *(_DWORD *)(a1 + 1152) ^= v4;
      }
      v5 = *(_QWORD *)(v3 + 4200);
      if ( v5 )
      {
        LOBYTE(v4) = StorPortExtendedFunction(83LL, a1, v5, *(unsigned int *)(v3 + 4240));
        *(_QWORD *)(v3 + 4200) = 0LL;
        *(_DWORD *)(v3 + 4240) = 0;
      }
      *(_BYTE *)(v3 + 4253) |= 8u;
    }
  }
  return v4;
}
