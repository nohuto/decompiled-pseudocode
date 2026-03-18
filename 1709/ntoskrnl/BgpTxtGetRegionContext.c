/*
 * XREFs of BgpTxtGetRegionContext @ 0x1407D07A8
 * Callers:
 *     AnFwDisplayFade @ 0x1407CEDC0 (AnFwDisplayFade.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x14013E320 (BgpFwAllocateMemory.c)
 *     BgpFoGetFontHandle @ 0x1407D00EC (BgpFoGetFontHandle.c)
 */

__int64 __fastcall BgpTxtGetRegionContext(__int64 a1)
{
  BOOL v2; // edi
  __int64 result; // rax
  __int64 *v4; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || (*(_DWORD *)(a1 + 64) & 1) == 0 || (int)BgpFoGetFontHandle(0LL, &v4) < 0 )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 48) == (_QWORD)v4;
  result = BgpFwAllocateMemory(0x1CuLL);
  if ( result )
  {
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 8) = 0LL;
    *(_QWORD *)(result + 16) = 0LL;
    *(_DWORD *)(result + 24) = 0;
    *(_QWORD *)result = *(_QWORD *)a1;
    *(_QWORD *)(result + 8) = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(result + 16) = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(result + 20) = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(result + 24) = v2;
  }
  return result;
}
