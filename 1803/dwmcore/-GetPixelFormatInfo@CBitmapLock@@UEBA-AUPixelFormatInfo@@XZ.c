/*
 * XREFs of ?GetPixelFormatInfo@CBitmapLock@@UEBA?AUPixelFormatInfo@@XZ @ 0x180083A00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmapLock::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v4; // eax
  LPCRITICAL_SECTION v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = (LPCRITICAL_SECTION)((a1 + 16) & -(__int64)(a1 != 16));
  EnterCriticalSection(v6);
  v4 = *(_DWORD *)(a1 + 92);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 84);
  *(_DWORD *)(a2 + 8) = v4;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v6);
  return a2;
}
