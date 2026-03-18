/*
 * XREFs of AslHashFree @ 0x140772C80
 * Callers:
 *     SdbCloseDatabaseRead @ 0x1405440E4 (SdbCloseDatabaseRead.c)
 *     SdbpReleaseSearchDBContext @ 0x140544E7C (SdbpReleaseSearchDBContext.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall AslHashFree(_QWORD *P)
{
  int v2; // esi
  __int64 v3; // r14
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  void *v6; // rcx

  if ( P )
  {
    if ( P[1] )
    {
      v2 = 0;
      if ( *(int *)P > 0 )
      {
        v3 = 0LL;
        do
        {
          v4 = *(_QWORD **)(v3 + P[1]);
          if ( v4 )
          {
            do
            {
              v5 = (_QWORD *)v4[2];
              ExFreePoolWithTag(v4, 0x74705041u);
              v4 = v5;
            }
            while ( v5 );
          }
          ++v2;
          v3 += 8LL;
        }
        while ( v2 < *(_DWORD *)P );
      }
      v6 = (void *)P[1];
      if ( v6 )
        ExFreePoolWithTag(v6, 0x74705041u);
    }
    ExFreePoolWithTag(P, 0x74705041u);
  }
}
