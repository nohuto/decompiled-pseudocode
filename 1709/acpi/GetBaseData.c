/*
 * XREFs of GetBaseData @ 0x1C001A170
 * Callers:
 *     ParseSuperName @ 0x1C0018D90 (ParseSuperName.c)
 *     DerefOf @ 0x1C00191C0 (DerefOf.c)
 *     ReadObject @ 0x1C001A0F0 (ReadObject.c)
 *     ObjTypeSizeOf @ 0x1C002AEB0 (ObjTypeSizeOf.c)
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
