/*
 * XREFs of MmExtendSection @ 0x1404BDFD0
 * Callers:
 *     CcSetFileSizesEx @ 0x1400E0340 (CcSetFileSizesEx.c)
 *     MiCreateSection @ 0x1404C32E0 (MiCreateSection.c)
 *     NtExtendSection @ 0x1405821C8 (NtExtendSection.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiControlAreaUsingExtents @ 0x1400093B8 (MiControlAreaUsingExtents.c)
 *     MiUnlockControlAreaSectionExtend @ 0x14004CE20 (MiUnlockControlAreaSectionExtend.c)
 *     MiLockControlAreaSectionExtend @ 0x14004CEC8 (MiLockControlAreaSectionExtend.c)
 *     MiFindLastSubsection @ 0x14004CFC0 (MiFindLastSubsection.c)
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14005BC04 (MiDereferenceControlAreaFile.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MiUpdateLastSubsectionSize @ 0x1400CD7A0 (MiUpdateLastSubsectionSize.c)
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiSubsectionNeedsExtents @ 0x14025B1F0 (MiSubsectionNeedsExtents.c)
 *     MiUpdateActiveSubsection @ 0x14025B23C (MiUpdateActiveSubsection.c)
 *     MiExtendSection @ 0x1404BE298 (MiExtendSection.c)
 *     FsRtlGetFileSize @ 0x1404BF2F0 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x1405558FC (FsRtlSetFileSize.c)
 */

__int64 __fastcall MmExtendSection(__int64 a1, LARGE_INTEGER *a2, int a3)
{
  ULONG_PTR v6; // rax
  ULONG_PTR v7; // rbx
  __int64 v8; // r14
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r12
  NTSTATUS v11; // esi
  __int64 LastSubsection; // r15
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r12
  int updated; // eax
  ULONG_PTR v17; // rax
  struct _FILE_OBJECT *v18; // r15
  int v19; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  LARGE_INTEGER *v24; // rcx
  unsigned __int64 v25; // rax
  _BYTE v26[8]; // [rsp+30h] [rbp-30h] BYREF
  int v27; // [rsp+38h] [rbp-28h]
  LARGE_INTEGER FileSize; // [rsp+A0h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp+58h] BYREF

  v6 = MiSectionControlArea(a1);
  v7 = v6;
  if ( (*(_DWORD *)(v6 + 56) & 0x420) != 0 || !*(_QWORD *)(v6 + 64) )
    return 3221225607LL;
  if ( a2->QuadPart <= 0x3FFFFFFFFFF000uLL )
  {
    v8 = *(_QWORD *)v6;
    v9 = a2->QuadPart + 4095;
    v27 = 16;
    v10 = v9 >> 12;
    MiLockControlAreaSectionExtend(v6, (__int64)v26);
    if ( (*(_DWORD *)(v7 + 56) & 0x8000) == 0 )
    {
      v25 = *(_QWORD *)(a1 + 48);
      if ( a2->QuadPart <= v25 )
      {
        a2->QuadPart = v25;
        MiUnlockControlAreaSectionExtend(v7, (__int64)v26);
        return 0LL;
      }
    }
    if ( a3 )
      goto LABEL_6;
    MiUnlockControlAreaSectionExtend(v7, (__int64)v26);
    v17 = MiReferenceControlAreaFile(v7);
    v27 = 32;
    v18 = (struct _FILE_OBJECT *)v17;
    MiLockControlAreaSectionExtend(v7, (__int64)v26);
    v11 = FsRtlGetFileSize(v18, &FileSize);
    if ( v11 >= 0 )
    {
      if ( a2->QuadPart <= (unsigned __int64)FileSize.QuadPart )
      {
LABEL_20:
        if ( *(_QWORD *)(v8 + 32) )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CB290, 0LL);
          v24 = *(LARGE_INTEGER **)(v8 + 32);
          if ( v24 )
            *v24 = FileSize;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CB290, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CB290, v21, v22, v23);
          KeAbPostRelease((ULONG_PTR)&qword_1403CB290);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
        MiUnlockControlAreaSectionExtend(v7, (__int64)v26);
        MiDereferenceControlAreaFile(v7, (unsigned __int64)v18);
        v27 = 16;
        MiLockControlAreaSectionExtend(v7, (__int64)v26);
LABEL_6:
        v11 = 0;
        BugCheckParameter2 = 0LL;
        LastSubsection = MiFindLastSubsection(v7, 0);
        v13 = *(unsigned int *)(v8 + 8) | ((unsigned __int64)(*(_WORD *)(v8 + 12) & 0x3FF) << 32);
        if ( v10 <= v13 )
        {
          *(LARGE_INTEGER *)(a1 + 48) = *a2;
          if ( (unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 24), -1LL, -1LL) < a2->QuadPart )
          {
            _InterlockedExchange64((volatile __int64 *)(v8 + 24), a2->QuadPart);
            MiUpdateLastSubsectionSize(LastSubsection, a2, 0);
          }
        }
        else
        {
          v14 = v10 - v13;
          if ( v14 <= (*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFFu) )
          {
            if ( (unsigned int)MiControlAreaUsingExtents(v7) && *(_QWORD *)(LastSubsection + 8) )
            {
              MiSubsectionNeedsExtents((_DWORD *)LastSubsection);
              BugCheckParameter2 = LastSubsection;
            }
            updated = MiUpdateLastSubsectionSize(LastSubsection, a2, v14);
          }
          else
          {
            updated = MiExtendSection(
                        LastSubsection,
                        (_DWORD)a2,
                        *(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFF,
                        (unsigned int)v14 - (*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFF),
                        (__int64)&BugCheckParameter2);
          }
          v11 = updated;
          if ( updated >= 0 )
          {
            v11 = 0;
            _InterlockedExchange64((volatile __int64 *)(v8 + 24), a2->QuadPart);
            *(LARGE_INTEGER *)(a1 + 48) = *a2;
          }
        }
        MiUnlockControlAreaSectionExtend(v7, (__int64)v26);
        if ( BugCheckParameter2 )
          return (unsigned int)MiUpdateActiveSubsection((_QWORD *)BugCheckParameter2);
        return (unsigned int)v11;
      }
      if ( (*(_DWORD *)(a1 + 60) & 0x44) != 0 )
      {
        FileSize = *a2;
        v19 = FsRtlSetFileSize(v18);
        if ( v19 >= 0 )
          goto LABEL_20;
        v11 = v19;
      }
      else
      {
        v11 = -1073741689;
      }
    }
    MiUnlockControlAreaSectionExtend(v7, (__int64)v26);
    MiDereferenceControlAreaFile(v7, (unsigned __int64)v18);
    return (unsigned int)v11;
  }
  return 3221225536LL;
}
