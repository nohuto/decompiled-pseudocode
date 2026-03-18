/*
 * XREFs of IntersectWithParents @ 0x1C006A4F4
 * Callers:
 *     xxxInternalInvalidate @ 0x1C0069C80 (xxxInternalInvalidate.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C009F1CC (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 *     xxxGetUpdateRgn @ 0x1C0107368 (xxxGetUpdateRgn.c)
 *     xxxGetUpdateRect @ 0x1C010ACF0 (xxxGetUpdateRect.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C01EFA30 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     PhysicalToLogicalInPlaceRect @ 0x1C006AF68 (PhysicalToLogicalInPlaceRect.c)
 */

__int64 __fastcall IntersectWithParents(__int64 a1, _DWORD *a2)
{
  __int64 i; // rbx
  char v4; // al
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  if ( (*(_BYTE *)(a1 + 67) & 0x20) == 0 )
  {
    for ( i = *(_QWORD *)(a1 + 104); i; i = *(_QWORD *)(i + 104) )
    {
      v4 = *(_BYTE *)(i + 71);
      if ( (v4 & 0x10) == 0 || (v4 & 0x20) != 0 )
        return 0LL;
      v12 = *(_OWORD *)(i + 144);
      PhysicalToLogicalInPlaceRect(a1, &v12);
      v5 = v12;
      v6 = DWORD2(v12);
      if ( *a2 > (int)v12 )
        v5 = *a2;
      v7 = a2[2];
      *a2 = v5;
      if ( v7 < v6 )
        v6 = v7;
      a2[2] = v6;
      if ( v5 >= v6 )
        goto LABEL_19;
      v8 = DWORD1(v12);
      v9 = HIDWORD(v12);
      if ( a2[1] > SDWORD1(v12) )
        v8 = a2[1];
      v10 = a2[3];
      a2[1] = v8;
      if ( v10 < v9 )
        v9 = v10;
      a2[3] = v9;
      if ( v8 >= v9 )
      {
LABEL_19:
        result = 0LL;
        *(_QWORD *)a2 = 0LL;
        *((_QWORD *)a2 + 1) = 0LL;
        return result;
      }
      if ( (*(_BYTE *)(i + 67) & 0x20) != 0 )
        return 1LL;
      a1 = i;
    }
  }
  return 1LL;
}
