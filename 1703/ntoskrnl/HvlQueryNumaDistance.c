/*
 * XREFs of HvlQueryNumaDistance @ 0x1401E5160
 * Callers:
 *     KiComputeNumaCosts @ 0x140817D54 (KiComputeNumaCosts.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlQueryNumaDistance(unsigned __int16 a1, unsigned __int16 a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rsi
  __int64 v6; // rbx
  _DWORD *v7; // rdi
  _QWORD *v8; // r15
  __int64 v9; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v12[24]; // [rsp+40h] [rbp-38h] BYREF

  v3 = 0;
  v4 = a2;
  v6 = a1;
  v7 = (_DWORD *)HvlpAcquireHypercallPage(v11, 1LL, 0LL, 8LL);
  v8 = (_QWORD *)HvlpAcquireHypercallPage(v12, 2LL, 0LL, 8LL);
  v9 = KeNodeBlock[v4];
  *v7 = *(_DWORD *)(KeNodeBlock[*(unsigned __int16 *)(KeNodeBlock[v6] + 148)] + 160);
  v7[1] = *(_DWORD *)(KeNodeBlock[*(unsigned __int16 *)(v9 + 148)] + 160);
  if ( (unsigned __int16)HvcallCodeVa() )
  {
    *a3 = -1LL;
    v3 = -1073741823;
  }
  else
  {
    *a3 = *v8;
  }
  HvlpReleaseHypercallPage(v11);
  HvlpReleaseHypercallPage(v12);
  return v3;
}
