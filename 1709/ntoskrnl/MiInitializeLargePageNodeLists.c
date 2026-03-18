/*
 * XREFs of MiInitializeLargePageNodeLists @ 0x1405B384C
 * Callers:
 *     MiInitializePartition @ 0x1405B30A8 (MiInitializePartition.c)
 * Callees:
 *     <none>
 */

void __fastcall MiInitializeLargePageNodeLists(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r11
  _QWORD *v3; // rax
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 i; // r8
  unsigned __int64 j; // rdx
  unsigned __int64 v11; // r10
  _QWORD *v12; // rax

  v1 = (unsigned __int16)KeNumberNodes;
  v2 = *(_QWORD *)(a1 + 16);
  if ( KeNumberNodes )
  {
    do
    {
      v3 = (_QWORD *)(v2 + 432);
      v4 = 2LL;
      do
      {
        v5 = 2LL;
        do
        {
          v6 = 2LL;
          do
          {
            v7 = 4LL;
            do
            {
              v3[1] = v3;
              *v3 = v3;
              v3 += 2;
              --v7;
            }
            while ( v7 );
            --v6;
          }
          while ( v6 );
          --v5;
        }
        while ( v5 );
        --v4;
      }
      while ( v4 );
      v8 = (unsigned int)dword_140388550;
      do
      {
        for ( i = 0LL; i <= 1; ++i )
        {
          for ( j = 0LL; j < 4; ++j )
          {
            v11 = 0LL;
            if ( v8 )
            {
              v12 = (_QWORD *)(((j + 4 * (v4 + i)) << 8) + v2 + 944);
              do
              {
                v12[1] = v12;
                ++v11;
                *v12 = v12;
                v12 += 2;
                v8 = (unsigned int)dword_140388550;
              }
              while ( v11 < (unsigned int)dword_140388550 );
            }
          }
        }
        v4 += 2LL;
      }
      while ( v4 <= 2 );
      v2 += 8256LL;
      --v1;
    }
    while ( v1 );
  }
}
