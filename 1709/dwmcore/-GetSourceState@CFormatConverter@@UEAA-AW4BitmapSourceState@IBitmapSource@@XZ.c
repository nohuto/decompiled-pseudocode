/*
 * XREFs of ?GetSourceState@CFormatConverter@@UEAA?AW4BitmapSourceState@IBitmapSource@@XZ @ 0x1801C5DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CFormatConverter::GetSourceState(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((a1 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 16) >> 64));
  EnterCriticalSection(v2);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v2);
  return 0LL;
}
