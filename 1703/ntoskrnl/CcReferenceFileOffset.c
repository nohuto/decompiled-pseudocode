/*
 * XREFs of CcReferenceFileOffset @ 0x1401DE7D8
 * Callers:
 *     CcPinFileData @ 0x14009C5A0 (CcPinFileData.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1400A9478 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1400A94E0 (CcAcquireBcbLockAndVacbLock.c)
 *     SetVacb @ 0x1400AA800 (SetVacb.c)
 *     CcFreeUnusedVacbLevels @ 0x14011CD78 (CcFreeUnusedVacbLevels.c)
 *     CcAllocateVacbLevels @ 0x14011CDD0 (CcAllocateVacbLevels.c)
 */

void __fastcall CcReferenceFileOffset(__int64 a1, unsigned int a2)
{
  int v4; // edx
  _QWORD v5[3]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-10h]

  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    v4 = *(_DWORD *)(a1 + 152);
    v5[2] = 0LL;
    v5[1] = v5;
    v5[0] = v5;
    v6 = 0;
    if ( !CcAllocateVacbLevels(CcMaxVacbLevelsSeen - 1, (v4 & 0x200) != 0, (__int64)v5) )
      RtlRaiseStatus(-1073741670);
    CcAcquireBcbLockAndVacbLock(1, (struct _FAST_MUTEX *)a1);
    SetVacb(a1, a2, 0xFFFFFFFFFFFFFFFFuLL);
    CcReleaseBcbLockAndVacbLock(1, (struct _FAST_MUTEX *)a1);
    CcFreeUnusedVacbLevels((__int64)v5);
  }
}
