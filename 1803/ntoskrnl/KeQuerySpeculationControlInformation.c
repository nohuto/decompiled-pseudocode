/*
 * XREFs of KeQuerySpeculationControlInformation @ 0x1407427EC
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeKvaShadowingActive @ 0x140040C88 (KeKvaShadowingActive.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall KeQuerySpeculationControlInformation(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // r8d
  int v11; // ecx
  unsigned int v12; // edx
  int v13; // ecx
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // r14d
  int v17; // ebx
  int v18; // esi
  int v19; // eax
  unsigned int v20; // ebx
  int v21; // ebx
  unsigned int v22; // ebx

  *a3 = 4;
  if ( a2 < 4 )
    return 3221225476LL;
  memset(a1, 0, a2);
  *a1 ^= (*a1 ^ (HIWORD(KiSpeculationFeatures) >> 4)) & 1;
  v5 = *a1 ^ ((unsigned __int8)*a1 ^ (unsigned __int8)(HIWORD(KiSpeculationFeatures) >> 1)) & 2;
  *a1 = v5;
  v6 = v5 ^ (v5 ^ (HIWORD(KiSpeculationFeatures) >> 1)) & 4;
  *a1 = v6;
  if ( (KiSpeculationFeatures & 0x28) != 0 )
  {
    v6 |= 8u;
    *a1 = v6;
  }
  if ( (KiSpeculationFeatures & 4) != 0 )
  {
    v6 |= 0x10u;
    *a1 = v6;
  }
  v7 = v6;
  if ( (KiSpeculationFeatures & 0x100000) != 0 && (KiSpeculationFeatures & 0x200000) != 0 )
  {
    v7 = v6 | 0x2000;
    *a1 = v6 | 0x2000;
  }
  v8 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(4 * KiSpeculationFeatures)) & 0x20;
  *a1 = v8;
  v9 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(2 * KiSpeculationFeatures)) & 0x40;
  *a1 = v9;
  v10 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(8 * KiSpeculationFeatures)) & 0x80;
  *a1 = v10;
  v10 |= 0x100u;
  *a1 = v10;
  v11 = v10 ^ ((unsigned __int16)v10 ^ (unsigned __int16)(8 * KiSpeculationFeatures)) & 0x200;
  *a1 = v11;
  v12 = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)(16 * HIWORD(KiSpeculationFeatures))) & 0x400;
  *a1 = v12;
  v13 = v12 ^ ((unsigned __int16)v12 ^ (unsigned __int16)(16 * HIWORD(KiSpeculationFeatures))) & 0x800;
  *a1 = v13;
  HIWORD(v12) = HIWORD(KiSpeculationFeatures);
  LOWORD(v12) = ~(_WORD)KiSpeculationFeatures;
  v14 = v13 & 0xFFFFEFFF | (((v12 >> 7) & 1) << 12);
  *a1 = v14;
  v15 = v14 ^ (v14 ^ ((unsigned __int16)KiSpeculationFeatures << 16)) & 0x10000;
  *a1 = v15;
  v15 |= 0x800000u;
  *a1 = v15;
  v16 = KeFeatureBits2;
  v17 = v15 ^ (v15 ^ ((_DWORD)KeFeatureBits2 << 19)) & 0x1000000;
  *a1 = v17;
  v18 = 0;
  if ( !KiKvaShadow || (v19 = 0x2000000, (v16 & 8) == 0) )
    v19 = 0;
  v20 = v19 | v17 & 0xFDFFFFFF;
  *a1 = v20;
  v20 |= 0x4000000u;
  *a1 = v20;
  v21 = v20 | 0x20000000;
  *a1 = v21;
  if ( (v16 & 0x8000) != 0 && KiDisableTsx || !KiTsxSupported )
  {
    v22 = v21 | 0x18000000;
  }
  else if ( (*(_QWORD *)&v16 & 0x10000LL) != 0 || (v16 & 0x28) == 8 && (unsigned int)KeKvaShadowingActive() )
  {
    v22 = v21 & 0xE7FFFFFF | 0x10000000;
  }
  else if ( (v16 & 0x8000) != 0 )
  {
    v22 = v21 & 0xE7FFFFFF | 0x8000000;
  }
  else
  {
    v22 = v21 & 0xE7FFFFFF;
  }
  *a1 = v22;
  if ( (*(_QWORD *)&v16 & 0x10000LL) != 0 || !KiTsxSupportedAtBoot )
    v18 = 0x40000000;
  *a1 = v18 | v22 & 0xBFFFFFFF;
  return 0LL;
}
