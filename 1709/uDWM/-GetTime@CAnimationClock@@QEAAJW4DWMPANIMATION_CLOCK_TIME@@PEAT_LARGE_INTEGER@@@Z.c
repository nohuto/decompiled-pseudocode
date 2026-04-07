/*
 * XREFs of ?GetTime@CAnimationClock@@QEAAJW4DWMPANIMATION_CLOCK_TIME@@PEAT_LARGE_INTEGER@@@Z @ 0x18009F28C
 * Callers:
 *     ?OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEAT_LARGE_INTEGER@@@Z @ 0x18009F71C (-OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall CAnimationClock::GetTime(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v6 = -2147024809;
  if ( a3 )
  {
    *a3 = 0LL;
    v6 = -2147019873;
    if ( a2 )
    {
      if ( a2 != 1 )
      {
        v6 = -2147024809;
        goto LABEL_10;
      }
      if ( *(_DWORD *)(a1 + 80) != 5 )
        goto LABEL_10;
      v7 = *(_QWORD *)(a1 + 96);
    }
    else
    {
      if ( ((*(_DWORD *)(a1 + 80) - 2) & 0xFFFFFFFD) != 0 )
        goto LABEL_10;
      v7 = *(_QWORD *)(a1 + 88);
    }
    v6 = 0;
    *a3 = v7;
  }
LABEL_10:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return v6;
}
