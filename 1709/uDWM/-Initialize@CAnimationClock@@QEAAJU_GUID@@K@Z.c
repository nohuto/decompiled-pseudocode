/*
 * XREFs of ?Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z @ 0x180003038
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180003228 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180002D18 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall CAnimationClock::Initialize(CAnimationClock *this, struct _GUID *a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int128 v8; // xmm0
  unsigned int v9; // ebx
  char *v11; // [rsp+20h] [rbp-18h] BYREF

  v11 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v6 = *((_QWORD *)this + 14) - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v6 )
    v6 = *((_QWORD *)this + 15) - *(_QWORD *)GUID_NULL.Data4;
  if ( v6 )
  {
    v9 = -2147023649;
  }
  else
  {
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NULL.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NULL.Data4;
    if ( v7 && (unsigned int)(a3 - 10001) > 0xFFFFD8ED )
    {
      v8 = (__int128)*a2;
      *((_DWORD *)this + 32) = a3;
      *((_OWORD *)this + 7) = v8;
      v9 = CAnimationClock::_SetState((const union _LARGE_INTEGER *)this, 1LL);
    }
    else
    {
      v9 = -2147024809;
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v9;
}
