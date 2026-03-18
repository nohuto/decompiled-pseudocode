/*
 * XREFs of HvlQueryNumaDistance @ 0x1401E9FF0
 * Callers:
 *     KiComputeNumaCosts @ 0x140838CD8 (KiComputeNumaCosts.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlQueryNumaDistance(unsigned __int16 a1, unsigned __int16 a2, _QWORD *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  _DWORD *v6; // rdi
  _QWORD *v7; // r15
  __int64 v8; // rcx
  __int16 v9; // cx
  unsigned int v10; // ebx
  PHYSICAL_ADDRESS v12[3]; // [rsp+20h] [rbp-48h] BYREF
  PHYSICAL_ADDRESS v13[3]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a2;
  v5 = a1;
  v6 = (_DWORD *)HvlpAcquireHypercallPage(v12, 1, 0LL, 8LL);
  v7 = (_QWORD *)HvlpAcquireHypercallPage(v13, 2, 0LL, 8LL);
  v8 = KeNodeBlock[v3];
  *v6 = *(_DWORD *)(KeNodeBlock[*(unsigned __int16 *)(KeNodeBlock[v5] + 148)] + 160);
  v6[1] = *(_DWORD *)(KeNodeBlock[*(unsigned __int16 *)(v8 + 148)] + 160);
  v9 = HvcallCodeVa();
  if ( v9 )
    *a3 = -1LL;
  else
    *a3 = *v7;
  v10 = v9 != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)v12);
  HvlpReleaseHypercallPage((__int64)v13);
  return v10;
}
