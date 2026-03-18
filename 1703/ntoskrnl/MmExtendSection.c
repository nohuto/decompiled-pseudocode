/*
 * XREFs of MmExtendSection @ 0x140492D14
 * Callers:
 *     CcSetFileSizesEx @ 0x1400AA8C0 (CcSetFileSizesEx.c)
 *     MiCreateSection @ 0x14050C860 (MiCreateSection.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     NtExtendSection @ 0x1406B646C (NtExtendSection.c)
 * Callees:
 *     MiUpdateLastSubsectionSize @ 0x140034330 (MiUpdateLastSubsectionSize.c)
 *     MiUnlockControlAreaSectionExtend @ 0x14005E290 (MiUnlockControlAreaSectionExtend.c)
 *     MiLockControlAreaSectionExtend @ 0x14005E338 (MiLockControlAreaSectionExtend.c)
 *     MiFindLastSubsection @ 0x14005E430 (MiFindLastSubsection.c)
 *     MiControlAreaUsingExtents @ 0x14005EB50 (MiControlAreaUsingExtents.c)
 *     MiDereferenceControlAreaFile @ 0x140096AD0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MiSubsectionNeedsExtents @ 0x140216160 (MiSubsectionNeedsExtents.c)
 *     MiUpdateActiveSubsection @ 0x1402161AC (MiUpdateActiveSubsection.c)
 *     FsRtlSetFileSize @ 0x140459F80 (FsRtlSetFileSize.c)
 *     MiExtendSection @ 0x140492FCC (MiExtendSection.c)
 *     FsRtlGetFileSize @ 0x140493F40 (FsRtlGetFileSize.c)
 */

__int64 __fastcall MmExtendSection(__int64 a1, LARGE_INTEGER *a2, int a3)
{
  ULONG_PTR v6; // rax
  ULONG_PTR v7; // rbx
  __int64 v8; // r13
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r14
  NTSTATUS v11; // esi
  __int64 LastSubsection; // r15
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r14
  unsigned int v15; // esi
  unsigned __int64 v16; // r14
  int updated; // eax
  unsigned __int64 v19; // rax
  struct _FILE_OBJECT *v20; // r15
  int v21; // eax
  struct _KTHREAD *CurrentThread; // rsi
  LARGE_INTEGER *v23; // rcx
  unsigned __int64 v24; // rax
  _BYTE v25[8]; // [rsp+30h] [rbp-30h] BYREF
  int v26; // [rsp+38h] [rbp-28h]
  LARGE_INTEGER FileSize; // [rsp+A0h] [rbp+40h] BYREF
  _QWORD *v28; // [rsp+B8h] [rbp+58h] BYREF

  v6 = MiSectionControlArea(a1);
  v7 = v6;
  if ( (*(_DWORD *)(v6 + 56) & 0x420) != 0 || !*(_QWORD *)(v6 + 64) )
    return 3221225607LL;
  if ( a2->QuadPart <= 0x3FFFFFFFFFF000uLL )
  {
    v8 = *(_QWORD *)v6;
    v9 = a2->QuadPart + 4095;
    v26 = 16;
    v10 = v9 >> 12;
    MiLockControlAreaSectionExtend(v6, (__int64)v25);
    if ( (*(_DWORD *)(v7 + 56) & 0x8000) == 0 )
    {
      v24 = *(_QWORD *)(a1 + 48);
      if ( a2->QuadPart <= v24 )
      {
        a2->QuadPart = v24;
        MiUnlockControlAreaSectionExtend(v7, (__int64)v25);
        return 0LL;
      }
    }
    if ( a3 )
    {
LABEL_6:
      v11 = 0;
      v28 = 0LL;
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
        goto LABEL_12;
      }
      v14 = v10 - v13;
      if ( v14 <= (*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFFu) )
      {
        v15 = v14;
      }
      else
      {
        v15 = *(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFF;
        v16 = v14 - v15;
        if ( v16 )
        {
          updated = MiExtendSection(LastSubsection, (_DWORD)a2, v15, v16, (__int64)&v28);
LABEL_10:
          v11 = updated;
          if ( updated >= 0 )
          {
            v11 = 0;
            _InterlockedExchange64((volatile __int64 *)(v8 + 24), a2->QuadPart);
            *(LARGE_INTEGER *)(a1 + 48) = *a2;
          }
LABEL_12:
          MiUnlockControlAreaSectionExtend(v7, (__int64)v25);
          if ( v28 )
            return (unsigned int)MiUpdateActiveSubsection(v28);
          return (unsigned int)v11;
        }
      }
      if ( (unsigned int)MiControlAreaUsingExtents(v7) && *(_QWORD *)(LastSubsection + 8) )
      {
        MiSubsectionNeedsExtents((_DWORD *)LastSubsection);
        v28 = (_QWORD *)LastSubsection;
      }
      updated = MiUpdateLastSubsectionSize(LastSubsection, a2, v15);
      goto LABEL_10;
    }
    MiUnlockControlAreaSectionExtend(v7, (__int64)v25);
    v19 = MiReferenceControlAreaFile(v7);
    v26 = 32;
    v20 = (struct _FILE_OBJECT *)v19;
    MiLockControlAreaSectionExtend(v7, (__int64)v25);
    v11 = FsRtlGetFileSize(v20, &FileSize);
    if ( v11 >= 0 )
    {
      if ( a2->QuadPart <= (unsigned __int64)FileSize.QuadPart )
      {
LABEL_24:
        if ( *(_QWORD *)(v8 + 32) )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter2, 0LL);
          v23 = *(LARGE_INTEGER **)(v8 + 32);
          if ( v23 )
            *v23 = FileSize;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&BugCheckParameter2);
          KeAbPostRelease((ULONG_PTR)&BugCheckParameter2);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        }
        MiUnlockControlAreaSectionExtend(v7, (__int64)v25);
        MiDereferenceControlAreaFile(v7, (unsigned __int64)v20);
        v26 = 16;
        MiLockControlAreaSectionExtend(v7, (__int64)v25);
        goto LABEL_6;
      }
      if ( (*(_DWORD *)(a1 + 60) & 0x44) != 0 )
      {
        FileSize = *a2;
        v21 = FsRtlSetFileSize(v20, (__int64 *)&FileSize);
        if ( v21 >= 0 )
          goto LABEL_24;
        v11 = v21;
      }
      else
      {
        v11 = -1073741689;
      }
    }
    MiUnlockControlAreaSectionExtend(v7, (__int64)v25);
    MiDereferenceControlAreaFile(v7, (unsigned __int64)v20);
    return (unsigned int)v11;
  }
  return 3221225536LL;
}
