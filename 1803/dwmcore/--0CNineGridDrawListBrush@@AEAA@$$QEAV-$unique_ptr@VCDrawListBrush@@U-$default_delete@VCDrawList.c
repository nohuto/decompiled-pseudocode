/*
 * XREFs of ??0CNineGridDrawListBrush@@AEAA@$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_N@Z @ 0x180005618
 * Callers:
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18000405C (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CNineGridDrawListBrush::CNineGridDrawListBrush(
        __int64 a1,
        __int64 *a2,
        _DWORD *a3,
        _DWORD *a4,
        char a5)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = &CNineGridDrawListBrush::`vftable';
  *(_OWORD *)(a1 + 8) = _xmm;
  *(_BYTE *)(a1 + 52) = 0;
  *(_QWORD *)(a1 + 24) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  v6 = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 56) = v6;
  *(_DWORD *)(a1 + 64) = *a3;
  *(_DWORD *)(a1 + 68) = a3[1];
  *(_DWORD *)(a1 + 72) = a3[2];
  *(_DWORD *)(a1 + 76) = a3[3];
  *(_DWORD *)(a1 + 80) = *a4;
  *(_DWORD *)(a1 + 84) = a4[1];
  *(_DWORD *)(a1 + 88) = a4[2];
  *(_DWORD *)(a1 + 92) = a4[3];
  *(_QWORD *)(a1 + 96) = a1 + 128;
  *(_QWORD *)(a1 + 104) = a1 + 128;
  *(_DWORD *)(a1 + 112) = 10;
  *(_QWORD *)(a1 + 116) = 10LL;
  *(_DWORD *)(a1 + 304) = 10;
  *(_QWORD *)(a1 + 308) = 10LL;
  v7 = a1 + 512;
  *(_QWORD *)(a1 + 288) = a1 + 320;
  *(_QWORD *)(a1 + 296) = a1 + 320;
  *(_QWORD *)(a1 + 480) = v7;
  *(_QWORD *)(a1 + 488) = v7;
  *(_DWORD *)(a1 + 496) = 3;
  *(_QWORD *)(a1 + 500) = 3LL;
  result = a1;
  *(_BYTE *)(a1 + 576) = a5;
  *(_WORD *)(a1 + 577) = 0;
  return result;
}
