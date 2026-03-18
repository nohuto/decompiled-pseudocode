/*
 * XREFs of TransformRegionBetweenCoordinateSpaces @ 0x1C01C0AC8
 * Callers:
 *     ?MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x1C01F0B98 (-MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F33EC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall TransformRegionBetweenCoordinateSpaces(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbp
  unsigned int v4; // esi
  unsigned int RegionData; // eax
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // r14
  unsigned int v11; // ebp
  __int64 RectRgn; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v19; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+38h] [rbp-50h]

  v3 = *a3;
  v4 = 0;
  if ( (unsigned __int64)*a3 > 2 && ((*(_BYTE *)(a1 + 368) ^ *(_BYTE *)(a2 + 368)) & 0xF) != 0 )
  {
    RegionData = GreGetRegionData(v3, 0LL, 0LL);
    v7 = RegionData;
    if ( RegionData )
    {
      v8 = Win32AllocPool((int)RegionData, 1919775573LL);
      v9 = v8;
      if ( v8 )
      {
        if ( (unsigned int)GreGetRegionData(v3, v7, v8) )
        {
          v10 = (_QWORD *)(v9 + 32);
          v19 = 0LL;
          v20 = 0LL;
          v11 = 0;
          RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
          if ( !*(_DWORD *)(v9 + 8) )
            goto LABEL_14;
          do
          {
            TransformRectBetweenCoordinateSpaces(&v19, v10, a1, a2);
            v13 = v19 - *v10;
            if ( v19 == *v10 )
              v13 = v20 - v10[1];
            v4 |= v13 != 0;
            v14 = GreCreateRectRgnIndirect(&v19);
            v15 = v14;
            if ( v14 )
            {
              GreCombineRgn(RectRgn, RectRgn, v14, 2LL);
              GreDeleteObject(v15);
            }
            v10 += 2;
            ++v11;
          }
          while ( v11 < *(_DWORD *)(v9 + 8) );
          if ( v4 )
            *a3 = RectRgn;
          else
LABEL_14:
            GreDeleteObject(RectRgn);
        }
        Win32FreePool(v9);
      }
    }
  }
  return v4;
}
