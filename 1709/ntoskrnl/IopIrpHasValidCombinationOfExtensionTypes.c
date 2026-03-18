/*
 * XREFs of IopIrpHasValidCombinationOfExtensionTypes @ 0x1401FB28C
 * Callers:
 *     IoSetAdapterCryptoEngineExtension @ 0x1401FB0C0 (IoSetAdapterCryptoEngineExtension.c)
 *     IoSetFsTrackOffsetState @ 0x1401FB110 (IoSetFsTrackOffsetState.c)
 *     IoSetFsZeroingOffsetRequired @ 0x1401FB1B0 (IoSetFsZeroingOffsetRequired.c)
 *     IopPerfCallDriver @ 0x1401FB3F4 (IopPerfCallDriver.c)
 * Callees:
 *     <none>
 */

char __fastcall IopIrpHasValidCombinationOfExtensionTypes(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int16 v3; // cx

  if ( *(char *)(a1 + 71) >= 0 )
  {
    v2 = *(_QWORD *)(a1 + 200);
    if ( v2 )
    {
      if ( ((1 << a2) & 0xB2) != 0 )
      {
        v3 = *(_WORD *)(v2 + 2);
        if ( (v3 & 0xB2) != 0 && (v3 & 0xB2) != 1 << a2 )
        {
          if ( a2 == 1 || (v3 & 2) == 0 )
            return 0;
          *(_QWORD *)(v2 + 40) = 0LL;
          *(_WORD *)(v2 + 2) = v3 & 0xFFFE;
        }
      }
    }
  }
  return 1;
}
