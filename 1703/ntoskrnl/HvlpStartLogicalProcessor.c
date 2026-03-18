/*
 * XREFs of HvlpStartLogicalProcessor @ 0x1401E673C
 * Callers:
 *     HvlpEnableNextLogicalProcessor @ 0x1401E5790 (HvlpEnableNextLogicalProcessor.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     memset @ 0x140192D80 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpDepositPages @ 0x1401E567C (HvlpDepositPages.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpStartLogicalProcessor(int a1, int a2, unsigned __int16 a3, _OWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int16 v12; // ax
  __int16 v13; // bx
  PHYSICAL_ADDRESS v14[3]; // [rsp+20h] [rbp-58h] BYREF
  PHYSICAL_ADDRESS v15[3]; // [rsp+40h] [rbp-38h] BYREF

  memset(a4, 0, 0x38uLL);
  while ( 1 )
  {
    result = HvlpDepositPages(a3);
    if ( (_DWORD)result )
      break;
    v9 = HvlpAcquireHypercallPage(v14, 1, 0LL, 24LL);
    v10 = HvlpAcquireHypercallPage(v15, 2, 0LL, 56LL);
    *(_QWORD *)(v9 + 16) = 0LL;
    v11 = v10;
    *(_DWORD *)v9 = a1;
    *(_DWORD *)(v9 + 4) = a2;
    *(_DWORD *)(v9 + 8) = *(_DWORD *)(KeNodeBlock[a3] + 160);
    *(_DWORD *)(v9 + 12) = -2147483647;
    v12 = HvcallCodeVa();
    v13 = v12;
    if ( v12 != 11 )
    {
      *a4 = *(_OWORD *)v11;
      a4[1] = *(_OWORD *)(v11 + 16);
      a4[2] = *(_OWORD *)(v11 + 32);
      *((_QWORD *)a4 + 6) = *(_QWORD *)(v11 + 48);
      *(_WORD *)a4 = v12;
    }
    HvlpReleaseHypercallPage((__int64)v14);
    HvlpReleaseHypercallPage((__int64)v15);
    if ( v13 != 11 )
      return v13 != 0 ? 0xC0000001 : 0;
  }
  return result;
}
