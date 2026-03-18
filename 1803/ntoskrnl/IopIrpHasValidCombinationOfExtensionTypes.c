/*
 * XREFs of IopIrpHasValidCombinationOfExtensionTypes @ 0x140237FBC
 * Callers:
 *     IoSetAdapterCryptoEngineExtension @ 0x140237E60 (IoSetAdapterCryptoEngineExtension.c)
 *     IoSetFsTrackOffsetState @ 0x140237EB0 (IoSetFsTrackOffsetState.c)
 *     IoSetFsZeroingOffsetRequired @ 0x140237F50 (IoSetFsZeroingOffsetRequired.c)
 *     IopPerfCallDriver @ 0x140238128 (IopPerfCallDriver.c)
 * Callees:
 *     <none>
 */

char __fastcall IopIrpHasValidCombinationOfExtensionTypes(__int64 a1, int a2)
{
  __int64 v3; // r8
  int v4; // edx
  __int16 v5; // cx

  if ( *(char *)(a1 + 71) >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 200);
    if ( v3 )
    {
      v4 = 1 << a2;
      if ( (v4 & 0xB2) != 0 )
      {
        v5 = *(_WORD *)(v3 + 2);
        if ( (v5 & 0xB2) != 0 && (v5 & 0xB2) != v4 )
        {
          if ( a2 == 1 || (v5 & 2) == 0 )
            return 0;
          *(_QWORD *)(v3 + 40) = 0LL;
          *(_WORD *)(v3 + 2) = v5 & 0xFFFE;
        }
      }
    }
  }
  return 1;
}
