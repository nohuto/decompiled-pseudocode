/*
 * XREFs of HvlQueryNumaDistance @ 0x1402270A0
 * Callers:
 *     KiComputeNumaCosts @ 0x1408B32B4 (KiComputeNumaCosts.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlQueryNumaDistance(unsigned __int16 a1, unsigned __int16 a2, __int64 *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  _DWORD *v6; // rdi
  __int64 *v7; // r14
  __int64 v8; // rcx
  __int16 v9; // ax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  PHYSICAL_ADDRESS v13[3]; // [rsp+20h] [rbp-48h] BYREF
  PHYSICAL_ADDRESS v14[3]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a2;
  v5 = a1;
  v6 = (_DWORD *)HvlpAcquireHypercallPage(v13, 1, 0LL, 8LL);
  v7 = (__int64 *)HvlpAcquireHypercallPage(v14, 2, 0LL, 8LL);
  v8 = KeNodeBlock[v3];
  *v6 = *(_DWORD *)(KeNodeBlock[*(unsigned __int16 *)(KeNodeBlock[v5] + 148)] + 160);
  v6[1] = *(_DWORD *)(KeNodeBlock[*(unsigned __int16 *)(v8 + 148)] + 160);
  v9 = HvcallCodeVa();
  if ( v9 )
    v10 = -1LL;
  else
    v10 = *v7;
  *a3 = v10;
  v11 = v9 != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)v13);
  HvlpReleaseHypercallPage((__int64)v14);
  return v11;
}
