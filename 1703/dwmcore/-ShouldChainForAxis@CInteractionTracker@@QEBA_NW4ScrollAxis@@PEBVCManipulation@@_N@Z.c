/*
 * XREFs of ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x18016E6EC
 * Callers:
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@_N@Z @ 0x18016E84C (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@_N@Z.c)
 *     _lambda_2ee6e74848a4ca29603542c81c185b92_::operator() @ 0x180188754 (_lambda_2ee6e74848a4ca29603542c81c185b92_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

char __fastcall CInteractionTracker::ShouldChainForAxis(__int64 a1, int a2, __int64 a3, unsigned __int8 a4)
{
  char v4; // r11
  int v5; // edx
  __int64 v6; // rcx
  bool v7; // zf
  __int128 v9; // [rsp+20h] [rbp-59h]
  __int64 v10; // [rsp+B0h] [rbp+37h]
  int v11; // [rsp+B8h] [rbp+3Fh]

  v4 = 0;
  v9 = *(_OWORD *)(a3 + 252);
  v10 = *(_QWORD *)(a3 + 396);
  v11 = *(_DWORD *)(a3 + 404);
  if ( !a2 )
  {
    if ( (*(_BYTE *)(a3 + 420) & 1) == 0 || (v11 & 1) != 0 )
      return v4;
    if ( !(a4 | ((~(_BYTE)v11 & 8) != 0)) )
    {
      v7 = (_DWORD)v10 == 1;
LABEL_18:
      if ( !v7 )
        return v4;
    }
    return 1;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    if ( (*(_BYTE *)(a3 + 421) & 1) == 0 || (v11 & 2) != 0 )
      return v4;
    if ( !(a4 | ((~(_BYTE)v11 & 0x10) != 0)) )
    {
      v7 = (_DWORD)v10 == 2;
      goto LABEL_18;
    }
    return 1;
  }
  if ( v5 == 1 && (*(_BYTE *)(a3 + 422) & 1) != 0 && (v11 & 4) == 0 )
  {
    v6 = *((_QWORD *)&v9 + 1) - 0x3F8000003F800000LL;
    if ( *((_QWORD *)&v9 + 1) == 0x3F8000003F800000LL )
      v6 = (unsigned int)*(_OWORD *)(a3 + 268) - 1065353216LL;
    if ( v6 )
      return 1;
  }
  return v4;
}
