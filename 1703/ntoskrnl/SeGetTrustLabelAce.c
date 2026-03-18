/*
 * XREFs of SeGetTrustLabelAce @ 0x140093830
 * Callers:
 *     SepTrustLevelCheck @ 0x14003E378 (SepTrustLevelCheck.c)
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 *     SepVerifyDesktopAppxImage @ 0x140247014 (SepVerifyDesktopAppxImage.c)
 *     SepAdjustAccessStateForConstraints @ 0x14042B498 (SepAdjustAccessStateForConstraints.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x14042B5A0 (SeAdjustAccessStateForAccessConstraints.c)
 *     MiAllowImageMap @ 0x1404415B0 (MiAllowImageMap.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x14050C420 (SeShouldCheckForAccessRightsFromParent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeGetTrustLabelAce(__int64 a1)
{
  __int16 v1; // r11
  unsigned int v2; // r8d
  unsigned int v3; // edx
  int v5; // edx
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // r10d

  v1 = *(_WORD *)(a1 + 2);
  v2 = 0;
  v3 = (unsigned __int16)v1;
  LOWORD(v3) = ~v1;
  v5 = (v3 >> 4) & 1;
  while ( 1 )
  {
    if ( v5 )
      goto LABEL_3;
    if ( v1 >= 0 )
      break;
    v7 = *(unsigned int *)(a1 + 12);
    if ( (_DWORD)v7 )
    {
      v8 = a1 + v7;
      goto LABEL_9;
    }
LABEL_3:
    result = 0LL;
LABEL_4:
    ++v2;
    if ( !result )
      return result;
  }
  v8 = *(_QWORD *)(a1 + 24);
LABEL_9:
  if ( !v8 )
    goto LABEL_3;
  result = v8 + 8;
  v9 = 0;
  if ( !*(_WORD *)(v8 + 4) )
    goto LABEL_3;
  while ( v9 < v2 || *(_BYTE *)result != 20 )
  {
    ++v9;
    result += *(unsigned __int16 *)(result + 2);
    if ( v9 >= *(unsigned __int16 *)(v8 + 4) )
      goto LABEL_3;
  }
  v2 = v9;
  if ( (*(_BYTE *)(result + 1) & 8) != 0 )
    goto LABEL_4;
  return result;
}
