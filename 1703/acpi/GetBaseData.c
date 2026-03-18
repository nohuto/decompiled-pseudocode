/*
 * XREFs of GetBaseData @ 0x1C001423C
 * Callers:
 *     DerefOf @ 0x1C0013AA0 (DerefOf.c)
 *     ReadObject @ 0x1C00141BC (ReadObject.c)
 *     ParseSuperName @ 0x1C0019CD0 (ParseSuperName.c)
 *     ObjTypeSizeOf @ 0x1C002A0B0 (ObjTypeSizeOf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBaseData(__int64 a1)
{
  __int16 v1; // ax

  while ( 1 )
  {
    while ( 1 )
    {
      v1 = *(_WORD *)(a1 + 2);
      if ( v1 != 128 )
        break;
      a1 = *(_QWORD *)(a1 + 16) + 64LL;
    }
    if ( v1 != 129 )
      break;
    a1 = *(_QWORD *)(a1 + 16);
  }
  return a1;
}
