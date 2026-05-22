/*
 * XREFs of ?GetOrientationBias@EdgeGestureTarget@@AEBA?AW4OrientationBias@@XZ @ 0x18002DB0C
 * Callers:
 *     ?OnTouchSessionBegin@EdgeGestureTarget@@AEAAJAEBUTouchInfo@@@Z @ 0x18002D880 (-OnTouchSessionBegin@EdgeGestureTarget@@AEAAJAEBUTouchInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EdgeGestureTarget::GetOrientationBias(__int64 a1)
{
  unsigned int v1; // r10d
  __int64 v2; // r11
  __int64 v3; // rax
  int v4; // r8d
  __int64 v5; // rdx
  __int64 i; // rcx
  int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // r9d
  int v10; // r8d
  int v11; // edx
  int v12; // ecx
  int v13; // eax

  v1 = 0;
  if ( !*(_DWORD *)(a1 + 40) )
  {
    v2 = *(_QWORD *)(a1 + 64);
    if ( *(_QWORD *)(v2 + 200) )
    {
      v3 = *(_QWORD *)(v2 + 288);
      v4 = 0;
      v5 = *(_QWORD *)(v2 + 296);
      for ( i = v3; i != v5; i += 72LL )
      {
        if ( *(_DWORD *)(i + 28) && *(_BYTE *)(i + 8) && *(float *)(i + 32) != 0.0 )
          ++v4;
      }
      v7 = 0;
      if ( v3 == v5 )
        goto LABEL_18;
      do
      {
        if ( *(_DWORD *)(v3 + 28) && *(_BYTE *)(v3 + 8) && *(float *)(v3 + 36) != 0.0 )
          ++v7;
        v3 += 72LL;
      }
      while ( v3 != v5 );
      if ( !v7 )
      {
LABEL_18:
        if ( !v4 )
          return v1;
      }
      else if ( !v4 )
      {
        return 1;
      }
      if ( !v7 )
        return 2;
    }
    else
    {
      v8 = *(_DWORD *)(v2 + 60);
      v9 = *(_DWORD *)(v2 + 64);
      v10 = (v8 < *(_DWORD *)(v2 + 52) ? 4 : 0) | 8;
      if ( v8 < *(_DWORD *)(v2 + 32) - *(_DWORD *)(v2 + 56) )
        v10 = v8 < *(_DWORD *)(v2 + 52) ? 4 : 0;
      v11 = v10 | 1;
      if ( v9 >= *(_DWORD *)(v2 + 44) )
        v11 = v10;
      v12 = v11 | 2;
      if ( v9 < *(_DWORD *)(v2 + 36) - *(_DWORD *)(v2 + 48) )
        v12 = v11;
      v13 = *(_DWORD *)(v2 + 40) & v12;
      if ( !*(_DWORD *)(v2 + 40) )
        LOBYTE(v13) = v12;
      if ( (v13 & 3) != 0 )
      {
        if ( (v13 & 0xC) == 0 )
          return 1;
      }
      else if ( (v13 & 0xC) == 0 )
      {
        return v1;
      }
      if ( (v13 & 3) == 0 )
        return 2;
    }
  }
  return v1;
}
