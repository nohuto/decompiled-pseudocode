/*
 * XREFs of SdbQueryDataEx @ 0x1407D4D7C
 * Callers:
 *     PiIsDriverBlocked @ 0x1405FBF00 (PiIsDriverBlocked.c)
 * Callees:
 *     SdbTagRefToTagID @ 0x14061FFD8 (SdbTagRefToTagID.c)
 *     SdbQueryDataExTagID @ 0x1407D4E20 (SdbQueryDataExTagID.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbQueryDataEx(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v9; // [rsp+20h] [rbp-38h]
  int v10[6]; // [rsp+40h] [rbp-18h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF
  int v12; // [rsp+74h] [rbp+1Ch]

  v12 = HIDWORD(a3);
  *(_QWORD *)v10 = 0LL;
  v11 = 0;
  LODWORD(a7) = 0;
  if ( (unsigned int)SdbTagRefToTagID(a1, a2, v10, &v11) )
    return SdbQueryDataExTagID(v10[0], v11, a5, a6, (__int64)&a7);
  v9 = a2;
  AslLogCallPrintf(1, (unsigned int)"SdbQueryDataEx", 5557, (unsigned int)"Failed to convert tagref 0x%x to tagid", v9);
  return 87LL;
}
