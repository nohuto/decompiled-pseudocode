/*
 * XREFs of KeQuerySpeculationControlInformation @ 0x14043C914
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeKvaShadowingActive @ 0x14017B418 (KeKvaShadowingActive.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall KeQuerySpeculationControlInformation(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // r8d
  int v9; // ecx
  int v10; // edx
  int v11; // r8d
  unsigned int v12; // ecx
  int v13; // edx
  int v14; // r14d
  unsigned int v15; // ebx
  int v16; // esi
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // ebx
  unsigned int v20; // ebx

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
    *a1 = v6 | 8;
  if ( (KiSpeculationFeatures & 4) != 0 )
    *a1 |= 0x10u;
  if ( (KiSpeculationFeatures & 0x100000) != 0 && (KiSpeculationFeatures & 0x200000) != 0 )
    *a1 |= 0x2000u;
  *a1 ^= (*a1 ^ (4 * (unsigned __int16)KiSpeculationFeatures)) & 0x20;
  v7 = *a1 ^ ((unsigned __int8)*a1 ^ (unsigned __int8)(2 * KiSpeculationFeatures)) & 0x40;
  *a1 = v7;
  v8 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(8 * KiSpeculationFeatures)) & 0x80;
  *a1 = v8;
  v8 |= 0x100u;
  *a1 = v8;
  v9 = v8 ^ ((unsigned __int16)v8 ^ (unsigned __int16)(8 * KiSpeculationFeatures)) & 0x200;
  *a1 = v9;
  v10 = v9 ^ ((unsigned __int16)v9 ^ (unsigned __int16)(16 * HIWORD(KiSpeculationFeatures))) & 0x400;
  *a1 = v10;
  v11 = v10 ^ ((unsigned __int16)v10 ^ (unsigned __int16)(16 * HIWORD(KiSpeculationFeatures))) & 0x800;
  *a1 = v11;
  v12 = v11 & 0xFFFFEFFF | (((KiSpeculationFeatures & 0x80) == 0) << 12);
  *a1 = v12;
  v13 = v12 ^ (v12 ^ ((unsigned __int16)KiSpeculationFeatures << 16)) & 0x10000;
  *a1 = v13;
  v13 |= 0x800000u;
  *a1 = v13;
  v14 = KeFeatureBits2;
  v15 = v13 ^ (v13 ^ ((unsigned int)(KeFeatureBits2 >> 5) << 24)) & 0x1000000;
  *a1 = v15;
  v16 = 0;
  if ( !KiKvaShadow || (v17 = 0x2000000, (v14 & 8) == 0) )
    v17 = 0;
  v18 = v17 | v15 & 0xFDFFFFFF;
  *a1 = v18;
  v18 |= 0x4000000u;
  *a1 = v18;
  v19 = v18 | 0x20000000;
  *a1 = v19;
  if ( (v14 & 0x8000) != 0 && KiDisableTsx || !KiTsxSupported )
  {
    v20 = v19 | 0x18000000;
  }
  else if ( (*(_QWORD *)&v14 & 0x10000LL) != 0 || (v14 & 0x28) == 8 && (unsigned int)KeKvaShadowingActive() )
  {
    v20 = v19 & 0xE7FFFFFF | 0x10000000;
  }
  else if ( (v14 & 0x8000) != 0 )
  {
    v20 = v19 & 0xE7FFFFFF | 0x8000000;
  }
  else
  {
    v20 = v19 & 0xE7FFFFFF;
  }
  *a1 = v20;
  if ( (*(_QWORD *)&v14 & 0x10000LL) != 0 || !KiTsxSupportedAtBoot )
    v16 = 0x40000000;
  *a1 = v16 | *a1 & 0xBFFFFFFF;
  return 0LL;
}
