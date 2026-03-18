/*
 * XREFs of ?EvaluateHitTestAttributesAndInputType@CHitTestContext@@AEAAXW4DIT_HITTESTATTRIBUTES@@K@Z @ 0x180026654
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_N@Z @ 0x180026E98 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 * Callees:
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x180025834 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 */

bool __fastcall CHitTestContext::EvaluateHitTestAttributesAndInputType(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  __int64 v4; // r9
  char v5; // r10
  bool result; // al
  int v7; // eax

  v3 = ConvertToInputType(a3, 0);
  *(_DWORD *)(v4 + 100) = 0;
  *(_DWORD *)(v4 + 104) = 0;
  *(_DWORD *)(v4 + 96) = v3;
  if ( (v5 & 1) != 0 )
  {
    *(_DWORD *)(v4 + 96) = 6;
    v7 = v5 & 2;
    if ( (v5 & 4) != 0 )
      *(_DWORD *)(v4 + 100) = v7 != 0 ? 0x40000 : 0x80000;
    else
      *(_DWORD *)(v4 + 100) |= v7 != 0 ? 0x10000 : 0x20000;
  }
  if ( (v5 & 8) != 0 )
    *(_DWORD *)(v4 + 100) |= 0x100u;
  if ( (v5 & 0x40) != 0 )
    *(_DWORD *)(v4 + 104) |= 0x100u;
  if ( v5 < 0 )
    *(_DWORD *)(v4 + 104) |= 0x200u;
  result = (v5 & 0x10) != 0;
  *(_BYTE *)(v4 + 184) = result;
  *(_BYTE *)(v4 + 185) = (v5 & 0x20) == 0;
  return result;
}
