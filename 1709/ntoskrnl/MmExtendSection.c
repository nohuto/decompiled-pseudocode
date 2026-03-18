/*
 * XREFs of MmExtendSection @ 0x14056BA18
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1400636F0 (CcInitializeCacheMapEx.c)
 *     CcSetFileSizesEx @ 0x140089D90 (CcSetFileSizesEx.c)
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     MiCreateSection @ 0x14049B390 (MiCreateSection.c)
 *     NtExtendSection @ 0x1406E2AA8 (NtExtendSection.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140067894 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiControlAreaUsingExtents @ 0x1400B7938 (MiControlAreaUsingExtents.c)
 *     MiUnlockControlAreaSectionExtend @ 0x140110588 (MiUnlockControlAreaSectionExtend.c)
 *     MiLockControlAreaSectionExtend @ 0x140110630 (MiLockControlAreaSectionExtend.c)
 *     MiFindLastSubsection @ 0x140110710 (MiFindLastSubsection.c)
 *     MiUpdateLastSubsectionSize @ 0x1401109B8 (MiUpdateLastSubsectionSize.c)
 *     MiSubsectionNeedsExtents @ 0x14021F908 (MiSubsectionNeedsExtents.c)
 *     MiUpdateActiveSubsection @ 0x14021F954 (MiUpdateActiveSubsection.c)
 *     FsRtlGetFileSize @ 0x1404FA2F0 (FsRtlGetFileSize.c)
 *     MiExtendSection @ 0x14056BC80 (MiExtendSection.c)
 *     FsRtlSetFileSize @ 0x14056C05C (FsRtlSetFileSize.c)
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
  ULONG_PTR v19; // rax
  struct _FILE_OBJECT *v20; // r15
  int v21; // eax
  unsigned __int64 v22; // rax
  struct _KTHREAD *CurrentThread; // rsi
  LARGE_INTEGER *v24; // rcx
  _BYTE v25[8]; // [rsp+30h] [rbp-30h] BYREF
  int v26; // [rsp+38h] [rbp-28h]
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
    v26 = 16;
    v10 = v9 >> 12;
    MiLockControlAreaSectionExtend(v6, (__int64)v25);
    if ( (*(_DWORD *)(v7 + 56) & 0x8000) == 0 )
    {
      v22 = *(_QWORD *)(a1 + 48);
      if ( a2->QuadPart <= v22 )
      {
        a2->QuadPart = v22;
        MiUnlockControlAreaSectionExtend(v7, (__int64)v25);
        return 0LL;
      }
    }
    if ( a3 )
    {
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
          updated = MiExtendSection(LastSubsection, (_DWORD)a2, v15, v16, (__int64)&BugCheckParameter2);
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
          if ( BugCheckParameter2 )
            return (unsigned int)MiUpdateActiveSubsection((_QWORD *)BugCheckParameter2);
          return (unsigned int)v11;
        }
      }
      if ( (unsigned int)MiControlAreaUsingExtents(v7) && *(_QWORD *)(LastSubsection + 8) )
      {
        MiSubsectionNeedsExtents((_DWORD *)LastSubsection);
        BugCheckParameter2 = LastSubsection;
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
LABEL_19:
        if ( *(_QWORD *)(v8 + 32) )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140388110, 0LL);
          v24 = *(LARGE_INTEGER **)(v8 + 32);
          if ( v24 )
            *v24 = FileSize;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140388110, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140388110);
          KeAbPostRelease((ULONG_PTR)&qword_140388110);
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
        v21 = FsRtlSetFileSize(v20);
        if ( v21 >= 0 )
          goto LABEL_19;
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
