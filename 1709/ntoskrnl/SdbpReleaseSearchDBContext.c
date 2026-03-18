/*
 * XREFs of SdbpReleaseSearchDBContext @ 0x140544E7C
 * Callers:
 *     SdbpCheckKObject @ 0x140541718 (SdbpCheckKObject.c)
 *     SdbGetDatabaseMatch @ 0x140544CEC (SdbGetDatabaseMatch.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SdbpFreePackageAttributes @ 0x14076F298 (SdbpFreePackageAttributes.c)
 *     AslHashFree @ 0x140772C80 (AslHashFree.c)
 */

void __fastcall SdbpReleaseSearchDBContext(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  _DWORD *v4; // rax
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx

  if ( a1 )
  {
    v2 = (void *)a1[3];
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x74705041u);
      a1[3] = 0LL;
    }
    v3 = (void *)a1[8];
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x74705041u);
      a1[8] = 0LL;
    }
    v4 = (_DWORD *)a1[9];
    if ( v4 )
    {
      v9 = 0LL;
      if ( *v4 )
      {
        do
        {
          v10 = (_QWORD *)(48 * v9 + a1[9] + 8LL);
          if ( v10 )
          {
            v11 = (void *)v10[2];
            if ( v11 )
            {
              AslHashFree(v11);
              v10[2] = 0LL;
            }
            v12 = (void *)v10[3];
            if ( v12 )
            {
              AslHashFree(v12);
              v10[3] = 0LL;
            }
            v13 = (void *)v10[5];
            if ( v13 )
            {
              ExFreePoolWithTag(v13, 0x74705041u);
              v10[4] = 0LL;
              v10[5] = 0LL;
            }
          }
          v9 = (unsigned int)(v9 + 1);
        }
        while ( (unsigned int)v9 < *(_DWORD *)a1[9] );
      }
      v14 = (void *)a1[9];
      if ( v14 )
        ExFreePoolWithTag(v14, 0x74705041u);
      a1[9] = 0LL;
    }
    v5 = (void *)a1[4];
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0x74705041u);
      a1[4] = 0LL;
    }
    v6 = (void *)a1[5];
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0x74705041u);
      a1[5] = 0LL;
    }
    v7 = (void *)a1[6];
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0x74705041u);
      a1[6] = 0LL;
    }
    v8 = (void *)a1[11];
    if ( v8 )
    {
      SdbpFreePackageAttributes(v8);
      a1[11] = 0LL;
    }
  }
}
