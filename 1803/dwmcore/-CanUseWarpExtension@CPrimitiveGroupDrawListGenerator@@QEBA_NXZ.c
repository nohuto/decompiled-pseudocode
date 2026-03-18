/*
 * XREFs of ?CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ @ 0x18017B5EC
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180071D00 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 * Callees:
 *     ?Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ @ 0x180005F10 (-Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ.c)
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x180073054 (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ??$IsTranslateAndScale@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1801C6BA0 (--$IsTranslateAndScale@$0A@@CMILMatrix@@AEBA_NXZ.c)
 */

char __fastcall CPrimitiveGroupDrawListGenerator::CanUseWarpExtension(CPrimitiveGroupDrawListGenerator *this)
{
  __int64 v1; // rdx
  __int64 v2; // r11
  _DWORD *v4; // rcx
  int v5; // xmm0_4
  int v6; // xmm1_4
  int v7; // xmm0_4
  int v8; // xmm1_4
  int v9; // xmm0_4
  int v10; // xmm1_4
  int v11; // r11d
  _BYTE v13[8]; // [rsp+20h] [rbp-19h] BYREF
  _DWORD *v14; // [rsp+28h] [rbp-11h]
  _DWORD v15[6]; // [rsp+40h] [rbp+7h] BYREF
  __int64 v16; // [rsp+58h] [rbp+1Fh]
  __int64 v17; // [rsp+60h] [rbp+27h]
  int v18; // [rsp+68h] [rbp+2Fh]
  int v19; // [rsp+6Ch] [rbp+33h]
  int v20; // [rsp+70h] [rbp+37h]
  int v21; // [rsp+74h] [rbp+3Bh]
  int v22; // [rsp+78h] [rbp+3Fh]
  int v23; // [rsp+7Ch] [rbp+43h]
  int v24; // [rsp+80h] [rbp+47h]

  v1 = *((_QWORD *)this + 3);
  v2 = 0LL;
  if ( !*(_DWORD *)(v1 + 8) )
    return 1;
LABEL_2:
  v4 = (_DWORD *)(*(_QWORD *)v1 + 144 * v2);
  if ( (v4[1] & 0xFFFFFFCC) == 0 && *v4 <= 1u && v4[11] <= 1u )
  {
    CPrimitiveGroupDrawListGenerator::GetIteratorForState((__int64)this, (__int64)v13, v2);
    while ( 1 )
    {
      v24 = 0;
      v15[2] = 0;
      v15[3] = 0;
      v5 = v14[4];
      v6 = v14[5];
      v16 = 0LL;
      v17 = 0LL;
      v19 = 0;
      v22 = 0;
      v15[0] = v5;
      v7 = v14[6];
      v15[1] = v6;
      v8 = v14[7];
      v15[4] = v7;
      v9 = v14[8];
      v15[5] = v8;
      v10 = v14[9];
      v20 = v9;
      v21 = v10;
      v18 = 1065353216;
      v23 = 1065353216;
      if ( !(unsigned __int8)CMILMatrix::IsTranslateAndScale<0>(v15) )
        break;
      if ( !CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v13) )
      {
        v1 = *((_QWORD *)this + 3);
        v2 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v2 < *(_DWORD *)(v1 + 8) )
          goto LABEL_2;
        return 1;
      }
    }
  }
  return 0;
}
