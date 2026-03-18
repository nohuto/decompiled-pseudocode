/*
 * XREFs of KeQueryKvaShadowInformation @ 0x14041CDB0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 *     VslpIumPhase0Initialize @ 0x140832A48 (VslpIumPhase0Initialize.c)
 * Callees:
 *     KeKvaShadowingActive @ 0x14017BC94 (KeKvaShadowingActive.c)
 *     KeQueryImplementedPhysicalBits @ 0x14017BCA4 (KeQueryImplementedPhysicalBits.c)
 */

__int64 __fastcall KeQueryKvaShadowInformation(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int *v5; // rcx
  int ImplementedPhysicalBits; // edi
  int v7; // esi
  __int16 v8; // di
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  char v11; // dl
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  int v15; // edi
  int v16; // eax

  *a3 = 4;
  if ( a2 < 4 )
    return 3221225476LL;
  ImplementedPhysicalBits = KeQueryImplementedPhysicalBits();
  v7 = 0;
  if ( ImplementedPhysicalBits > 0 )
    v8 = ImplementedPhysicalBits - 1;
  else
    v8 = 0;
  v9 = (KiKvaShadow != 0) | *v5 & 0xFFFFFFFE;
  *v5 = v9;
  if ( (unsigned int)KeKvaShadowingActive() == 2 )
    v7 = 2;
  v10 = v7 | v9 & 0xFFFFFFFD;
  *a1 = v10;
  v11 = KiFlushPcid;
  v12 = (KiFlushPcid != 0 ? 4 : 0) | v10 & 0xFFFFFFFB;
  *a1 = v12;
  v13 = (v11 != 0 ? 8 : 0) | v12 & 0xFFFFFFF7;
  *a1 = v13;
  v14 = (KiKvaLeakage != 0 ? 0x10 : 0) | v13 & 0xFFFFFFEF;
  *a1 = v14;
  v14 |= 0x20u;
  *a1 = v14;
  v15 = v14 ^ ((unsigned __int16)v14 ^ (unsigned __int16)(v8 << 6)) & 0xFC0;
  *a1 = v15;
  v16 = v15 ^ ((unsigned __int16)v15 ^ (unsigned __int16)((_WORD)KeFeatureBits2 << 12)) & 0x1000;
  *a1 = v16;
  *a1 = v16 & 0x1FFF;
  return 0LL;
}
