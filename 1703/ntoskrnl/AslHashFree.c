/*
 * XREFs of AslHashFree @ 0x14072F03C
 * Callers:
 *     SdbCloseDatabaseRead @ 0x140453518 (SdbCloseDatabaseRead.c)
 *     SdbpReleaseSearchDBContext @ 0x1404B4330 (SdbpReleaseSearchDBContext.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
