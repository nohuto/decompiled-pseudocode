/*
 * XREFs of SdbpCheckRuntimePlatformV2 @ 0x14072C4B4
 * Callers:
 *     SdbpCheckRuntimePlatform @ 0x14072C450 (SdbpCheckRuntimePlatform.c)
 * Callees:
 *     SdbReadDWORDTag @ 0x1404AFD04 (SdbReadDWORDTag.c)
 */

__int64 __fastcall SdbpCheckRuntimePlatformV2(int *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // ebp
  int v7; // ebx
  unsigned int DWORDTag; // r8d
  int v9; // edx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // ebx
  __int64 result; // rax

  v5 = *(_DWORD *)(a2 + 544);
  v7 = 0;
  DWORDTag = SdbReadDWORDTag(a3, a5, 0x3Fu);
  if ( DWORDTag != -1073741824 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v7 )
        goto LABEL_19;
      if ( ((DWORDTag >> v9) & 0x40) != 0 )
      {
        v10 = (DWORDTag >> v9) & 0x3F;
        if ( !v10 )
        {
          LOBYTE(v15) = v5;
          goto LABEL_17;
        }
        v11 = v10 - 5;
        if ( !v11 )
        {
          v15 = v5 >> 3;
LABEL_17:
          v7 = v15 & 1;
          goto LABEL_18;
        }
        v12 = v11 - 4;
        if ( !v12 )
          goto LABEL_14;
        v13 = v12 - 2;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            if ( v14 != 1 )
              goto LABEL_18;
LABEL_14:
            v7 = (v5 >> 1) & 1;
            goto LABEL_18;
          }
        }
        v7 = (v5 >> 2) & 1;
      }
LABEL_18:
      v9 += 8;
      if ( v9 >= 24 )
        goto LABEL_19;
    }
  }
  v7 = 1;
LABEL_19:
  result = 1LL;
  *a1 = v7;
  return result;
}
