/*
 * XREFs of fs_ConvertGrayLevels @ 0x1C02B4A14
 * Callers:
 *     fs_ContourScan @ 0x1C02B4134 (fs_ContourScan.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fs_ConvertGrayLevels(__int64 a1, __int16 a2, __int16 a3)
{
  unsigned int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // r11
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // r11
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned int v18; // ecx
  __int64 v20; // r8
  __int64 v21; // r11
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx

  if ( a2 == 2 )
  {
    v18 = *(__int16 *)(a1 + 96) * (*(__int16 *)(a1 + 102) - *(__int16 *)(a1 + 98));
    switch ( a3 )
    {
      case 2:
        v24 = 0LL;
        if ( v18 )
        {
          v25 = v18;
          do
          {
            *(_BYTE *)(*(_QWORD *)(a1 + 88) + v24) = Gray4To5Table[*(_BYTE *)(*(_QWORD *)(a1 + 88) + v24) & 3];
            ++v24;
            --v25;
          }
          while ( v25 );
        }
        return 0LL;
      case 4:
        v22 = 0LL;
        if ( v18 )
        {
          v23 = v18;
          do
          {
            *(_BYTE *)(*(_QWORD *)(a1 + 88) + v22) = Gray16To5Table[*(_BYTE *)(*(_QWORD *)(a1 + 88) + v22) & 0xF];
            ++v22;
            --v23;
          }
          while ( v23 );
        }
        return 0LL;
      case 8:
        v20 = 0LL;
        if ( v18 )
        {
          v21 = v18;
          do
          {
            *(_BYTE *)(*(_QWORD *)(a1 + 88) + v20) = Gray16To5Table[(unsigned __int16)(*(char *)(*(_QWORD *)(a1 + 88)
                                                                                               + v20) >> 4)];
            ++v20;
            --v21;
          }
          while ( v21 );
        }
        return 0LL;
    }
    return 5889LL;
  }
  if ( a2 == 4 )
  {
    v11 = *(__int16 *)(a1 + 96) * (*(__int16 *)(a1 + 102) - *(__int16 *)(a1 + 98));
    switch ( a3 )
    {
      case 2:
        v16 = 0LL;
        if ( v11 )
        {
          v17 = v11;
          do
          {
            *(_BYTE *)(*(_QWORD *)(a1 + 88) + v16) = Gray4To17Table[*(_BYTE *)(*(_QWORD *)(a1 + 88) + v16) & 3];
            ++v16;
            --v17;
          }
          while ( v17 );
        }
        return 0LL;
      case 4:
        v14 = 0LL;
        if ( v11 )
        {
          v15 = v11;
          do
          {
            *(_BYTE *)(*(_QWORD *)(a1 + 88) + v14) = Gray16To17Table[*(_BYTE *)(*(_QWORD *)(a1 + 88) + v14) & 0xF];
            ++v14;
            --v15;
          }
          while ( v15 );
        }
        return 0LL;
      case 8:
        v12 = 0LL;
        if ( v11 )
        {
          v13 = v11;
          do
          {
            *(_BYTE *)(*(_QWORD *)(a1 + 88) + v12) = Gray16To17Table[(unsigned __int16)(*(char *)(*(_QWORD *)(a1 + 88)
                                                                                                + v12) >> 4)];
            ++v12;
            --v13;
          }
          while ( v13 );
        }
        return 0LL;
    }
    return 5889LL;
  }
  if ( a2 != 8 )
    return 5889LL;
  v4 = *(__int16 *)(a1 + 96) * (*(__int16 *)(a1 + 102) - *(__int16 *)(a1 + 98));
  if ( a3 == 2 )
  {
    v9 = 0LL;
    if ( v4 )
    {
      v10 = v4;
      do
      {
        *(_BYTE *)(*(_QWORD *)(a1 + 88) + v9) = Gray4To65Table[*(_BYTE *)(*(_QWORD *)(a1 + 88) + v9) & 3];
        ++v9;
        --v10;
      }
      while ( v10 );
    }
    return 0LL;
  }
  if ( a3 == 4 )
  {
    v7 = 0LL;
    if ( v4 )
    {
      v8 = v4;
      do
      {
        *(_BYTE *)(v7 + *(_QWORD *)(a1 + 88)) = Gray16To65Table[*(_BYTE *)(v7 + *(_QWORD *)(a1 + 88)) & 0xF];
        ++v7;
        --v8;
      }
      while ( v8 );
    }
    return 0LL;
  }
  if ( a3 != 8 )
    return 5889LL;
  v5 = 0LL;
  if ( v4 )
  {
    v6 = v4;
    do
    {
      *(_BYTE *)(v5 + *(_QWORD *)(a1 + 88)) = Gray16To65Table[(unsigned __int16)(*(char *)(v5 + *(_QWORD *)(a1 + 88)) >> 4)];
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  return 0LL;
}
