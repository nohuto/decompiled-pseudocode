/*
 * XREFs of IntersectWithParents @ 0x1C0066098
 * Callers:
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C0048C6C (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 *     xxxInternalInvalidate @ 0x1C0065820 (xxxInternalInvalidate.c)
 *     xxxGetUpdateRgn @ 0x1C00FC3D8 (xxxGetUpdateRgn.c)
 *     xxxGetUpdateRect @ 0x1C0102B2C (xxxGetUpdateRect.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C01E3A04 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     PhysicalToLogicalInPlaceRect @ 0x1C0066AF4 (PhysicalToLogicalInPlaceRect.c)
 */

__int64 __fastcall IntersectWithParents(__int64 a1, _DWORD *a2)
{
  __int64 i; // rbx
  char v4; // al
  int v5; // edx
  int v6; // ecx
  bool v7; // cc
  int v8; // eax
  int v9; // edx
  int v10; // ecx
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
      v7 = a2[2] < SDWORD2(v12);
      *a2 = v5;
      if ( v7 )
        v6 = a2[2];
      a2[2] = v6;
      if ( v5 >= v6 )
        goto LABEL_19;
      v8 = a2[3];
      v9 = DWORD1(v12);
      v10 = HIDWORD(v12);
      if ( a2[1] > SDWORD1(v12) )
        v9 = a2[1];
      a2[1] = v9;
      if ( v8 < v10 )
        v10 = v8;
      a2[3] = v10;
      if ( v9 >= v10 )
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
