/*
 * XREFs of RtlpLookupUserFunctionTable @ 0x1400C9E60
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14012D2E0 (RtlpLookupFunctionEntryForStackWalks.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x14003FAC0 (RtlpImageDirectoryEntryToDataEx.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     RtlpLookupUserFunctionTableInverted @ 0x1400C9EB0 (RtlpLookupUserFunctionTableInverted.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     MmGetImageBase @ 0x14058C804 (MmGetImageBase.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpLookupUserFunctionTable(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // r15
  signed __int64 *v7; // rsi
  _DWORD *v8; // r11
  int v9; // r10d
  int v10; // r9d
  int v11; // r8d
  _DWORD *v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // r15
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  PVOID v19; // rsi
  int v20; // eax
  unsigned __int64 v21; // r8
  NTSTATUS v22; // eax
  unsigned int v23; // eax
  _QWORD v24[11]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v25; // [rsp+B0h] [rbp+18h] BYREF
  PVOID BaseOfImage; // [rsp+B8h] [rbp+20h] BYREF

  result = RtlpLookupUserFunctionTableInverted();
  if ( result )
    return result;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  if ( Process[2].Affinity.Bitmap[18] )
  {
    --CurrentThread->SpecialApcDisable;
    v7 = (signed __int64 *)&Process[2].Affinity.Bitmap[19];
    ExAcquirePushLockSharedEx((ULONG_PTR)&Process[2].Affinity.Bitmap[19], 0LL);
    v8 = (_DWORD *)Process[2].Affinity.Bitmap[18];
    if ( v8 )
    {
      if ( *v8 != 1 )
      {
        v9 = 1;
        v10 = *v8 - 1;
        while ( v10 >= v9 )
        {
          v11 = (v10 + v9) >> 1;
          v12 = &v8[4 * v11 + 4 + 2 * v11];
          v13 = *((_QWORD *)v12 + 1);
          if ( a1 >= v13 )
          {
            if ( a1 < v13 + (unsigned int)v12[4] )
              goto LABEL_13;
            v9 = v11 + 1;
          }
          else
          {
            if ( !v11 )
              break;
            v10 = v11 - 1;
          }
        }
      }
      v12 = 0LL;
LABEL_13:
      if ( v12 )
      {
        v14 = *(_QWORD *)v12;
        *(_QWORD *)(a2 + 8) = *((_QWORD *)v12 + 1);
        *(_DWORD *)(a2 + 16) = v12[4];
        if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v7);
        KeAbPostRelease((ULONG_PTR)v7);
        KiLeaveGuardedRegionUnsafe(CurrentThread);
        v15 = *(_QWORD *)(v14 + 16);
        *(_QWORD *)a2 = v15;
        v16 = (unsigned int)(12 * *(_DWORD *)(v14 + 84));
        *(_DWORD *)(a2 + 20) = v16;
        if ( (_DWORD)v16 )
        {
          if ( (v15 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v17 = v15 + v16;
          if ( v17 > 0x7FFFFFFF0000LL || v17 < v15 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        return v15;
      }
    }
    if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&Process[2].Affinity.Bitmap[19]);
    KeAbPostRelease((ULONG_PTR)&Process[2].Affinity.Bitmap[19]);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
  }
  if ( (int)MmGetImageBase(a1, &BaseOfImage, v24) >= 0 )
  {
    LOBYTE(v18) = 1;
    v19 = BaseOfImage;
    v22 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseOfImage, v18, 3LL, a2 + 20, &v25);
    v21 = v25;
    if ( v22 < 0 )
      v21 = 0LL;
    v25 = v21;
    if ( v21 )
    {
      v23 = *(_DWORD *)(a2 + 20);
      if ( v23 && v23 == 12 * (v23 / 0xCuLL) )
      {
        if ( (v21 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v23 + v21 > 0x7FFFFFFF0000LL || v23 + v21 < v21 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      else
      {
        v21 = 0LL;
      }
    }
    v20 = v24[0];
  }
  else
  {
    v19 = 0LL;
    v20 = 0;
    v21 = 0LL;
  }
  *(_QWORD *)(a2 + 8) = v19;
  *(_DWORD *)(a2 + 16) = v20;
  *(_QWORD *)a2 = v21;
  if ( !v21 )
    *(_DWORD *)(a2 + 20) = 0;
  return v21;
}
