/*
 * XREFs of HvlpGetVpIndexFromApicId @ 0x140227944
 * Callers:
 *     HvlpEnableNextLogicalProcessor @ 0x14022768C (HvlpEnableNextLogicalProcessor.c)
 *     HvlHalGetVpIndexFromApicId @ 0x140229810 (HvlHalGetVpIndexFromApicId.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlpGetVpIndexFromApicId(int a1, _DWORD *a2)
{
  unsigned int v2; // esi
  __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r15
  PHYSICAL_ADDRESS v9[3]; // [rsp+20h] [rbp-58h] BYREF
  PHYSICAL_ADDRESS v10[3]; // [rsp+40h] [rbp-38h] BYREF

  v2 = 0;
  v5 = HvlpAcquireHypercallPage(v9, 1, 0LL, 16LL);
  v6 = HvlpAcquireHypercallPage(v10, 2, 0LL, 4LL);
  *(_QWORD *)v5 = -1LL;
  v7 = (_DWORD *)v6;
  *(_QWORD *)(v5 + 8) = 0LL;
  *(_DWORD *)(v5 + 16) = a1;
  if ( (unsigned __int16)HvcallCodeVa() )
    v2 = -1073741823;
  else
    *a2 = *v7;
  HvlpReleaseHypercallPage((__int64)v9);
  HvlpReleaseHypercallPage((__int64)v10);
  return v2;
}
