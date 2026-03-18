/*
 * XREFs of GetAdjustedHimetric @ 0x1C012E840
 * Callers:
 *     GetAdjustedPointerLocations @ 0x1C012EA70 (GetAdjustedPointerLocations.c)
 * Callees:
 *     GetAdjustedHimetricLong @ 0x1C012E930 (GetAdjustedHimetricLong.c)
 *     GetAdjustedHimetricWithoutRoundTripError @ 0x1C012E990 (GetAdjustedHimetricWithoutRoundTripError.c)
 */

__int64 __fastcall GetAdjustedHimetric(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
{
  unsigned int v5; // ebx
  unsigned int v8; // [rsp+64h] [rbp+Ch]
  unsigned int v9; // [rsp+6Ch] [rbp+14h]
  unsigned int v10; // [rsp+74h] [rbp+1Ch]

  v10 = HIDWORD(a3);
  v9 = HIDWORD(a2);
  v8 = HIDWORD(a1);
  v5 = 0;
  if ( !a5 )
    return (unsigned int)((__int64 (*)(void))GetAdjustedHimetricLong)()
        && (unsigned int)GetAdjustedHimetricLong(v8, v9, v10, a4 + 4);
  if ( (unsigned int)GetAdjustedHimetricWithoutRoundTripError(a5[31], a5[33], a5[35], a5[37], a1, a2, a3, a4) )
    return (unsigned int)GetAdjustedHimetricWithoutRoundTripError(a5[32], a5[34], a5[36], a5[38], v8, v9, v10, a4 + 4) != 0;
  return v5;
}
