/*
 * XREFs of HvlpGetVpIndexFromApicId @ 0x1401EA89C
 * Callers:
 *     HvlpEnableNextLogicalProcessor @ 0x1401EA5DC (HvlpEnableNextLogicalProcessor.c)
 *     HvlHalGetVpIndexFromApicId @ 0x1401EC170 (HvlHalGetVpIndexFromApicId.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlpGetVpIndexFromApicId(int a1, _DWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r14
  __int16 v7; // ax
  unsigned int v8; // ebx
  PHYSICAL_ADDRESS v10[3]; // [rsp+20h] [rbp-58h] BYREF
  PHYSICAL_ADDRESS v11[3]; // [rsp+40h] [rbp-38h] BYREF

  v4 = HvlpAcquireHypercallPage(v10, 1, 0LL, 16LL);
  v5 = HvlpAcquireHypercallPage(v11, 2, 0LL, 4LL);
  *(_QWORD *)v4 = -1LL;
  v6 = (_DWORD *)v5;
  *(_QWORD *)(v4 + 8) = 0LL;
  *(_DWORD *)(v4 + 16) = a1;
  v7 = HvcallCodeVa();
  if ( !v7 )
    *a2 = *v6;
  v8 = v7 != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)v10);
  HvlpReleaseHypercallPage((__int64)v11);
  return v8;
}
