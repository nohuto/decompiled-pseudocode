/*
 * XREFs of PspWow64SetupUserProcessAddressSpace @ 0x1400638F0
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x14049BA50 (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

int __fastcall PspWow64SetupUserProcessAddressSpace(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int16 v4; // cx
  __int16 v5; // cx
  __int16 v6; // cx

  v2 = *(_QWORD *)(a1 + 1064);
  v3 = 0LL;
  if ( v2 )
  {
    v4 = *(_WORD *)(v2 + 8);
    if ( v4 == 332 || v4 == 452 )
    {
      v5 = *(_WORD *)(v2 + 8);
      if ( v5 == 332 || v5 == 452 )
      {
        v6 = *(_WORD *)(v2 + 8);
        if ( v6 == 332 || v6 == 452 )
          v3 = *(_QWORD *)v2;
        *(_DWORD *)(a2 + 228) = v3;
        LODWORD(v3) = PspWow64ThunkProcessParameters(v3, *(unsigned int **)(a2 + 208), (_DWORD *)(a2 + 224));
      }
    }
  }
  return v3;
}
