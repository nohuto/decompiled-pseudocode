/*
 * XREFs of RtlpLookupUserFunctionTable @ 0x14003486C
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1400E6B30 (RtlpLookupFunctionEntryForStackWalks.c)
 * Callees:
 *     RtlpLookupUserFunctionTableInverted @ 0x1400348BC (RtlpLookupUserFunctionTableInverted.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x14008B920 (RtlpImageDirectoryEntryToDataEx.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     MmGetImageBase @ 0x14044852C (MmGetImageBase.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpLookupUserFunctionTable(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // r15
  volatile signed __int64 *v7; // rsi
  _DWORD *v8; // r11
  int v9; // r10d
  int v10; // r9d
  int v11; // r8d
  _DWORD *v12; // rdx
  __int64 v13; // r15
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  PVOID v17; // rsi
  int v18; // eax
  unsigned __int64 v19; // r8
  int v20; // eax
  unsigned int v21; // eax
  _QWORD v22[11]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v23; // [rsp+B0h] [rbp+18h] BYREF
  PVOID BaseOfImage; // [rsp+B8h] [rbp+20h] BYREF

  result = RtlpLookupUserFunctionTableInverted();
  if ( result )
    return result;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  if ( Process[2].Affinity.Bitmap[18] )
  {
    --CurrentThread->SpecialApcDisable;
    v7 = (volatile signed __int64 *)&Process[2].Affinity.Bitmap[19];
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
          if ( a1 >= *((_QWORD *)v12 + 1) )
          {
            if ( a1 < *((_QWORD *)v12 + 1) + (unsigned __int64)(unsigned int)v12[4] )
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
        v13 = *(_QWORD *)v12;
        *(_QWORD *)(a2 + 8) = *((_QWORD *)v12 + 1);
        *(_DWORD *)(a2 + 16) = v12[4];
        if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v7);
        KeAbPostRelease((ULONG_PTR)v7);
        KiLeaveGuardedRegionUnsafe(CurrentThread);
        v14 = *(_QWORD *)(v13 + 16);
        *(_QWORD *)a2 = v14;
        v15 = (unsigned int)(12 * *(_DWORD *)(v13 + 84));
        *(_DWORD *)(a2 + 20) = v15;
        if ( (_DWORD)v15 )
        {
          if ( (v14 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v16 = v14 + v15;
          if ( v16 > 0x7FFFFFFF0000LL || v16 < v14 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        return v14;
      }
    }
    if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(&Process[2].Affinity.Bitmap[19]);
    KeAbPostRelease((ULONG_PTR)&Process[2].Affinity.Bitmap[19]);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
  }
  if ( (int)MmGetImageBase(a1, &BaseOfImage, v22) >= 0 )
  {
    v17 = BaseOfImage;
    v20 = RtlpImageDirectoryEntryToDataEx(BaseOfImage, (__int64)&v23);
    v19 = v23;
    if ( v20 < 0 )
      v19 = 0LL;
    v23 = v19;
    if ( v19 )
    {
      v21 = *(_DWORD *)(a2 + 20);
      if ( v21 && v21 == 12 * (v21 / 0xCuLL) )
      {
        if ( (v19 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v21 + v19 > 0x7FFFFFFF0000LL || v21 + v19 < v19 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      else
      {
        v19 = 0LL;
      }
    }
    v18 = v22[0];
  }
  else
  {
    v17 = 0LL;
    v18 = 0;
    v19 = 0LL;
  }
  *(_QWORD *)(a2 + 8) = v17;
  *(_DWORD *)(a2 + 16) = v18;
  *(_QWORD *)a2 = v19;
  if ( !v19 )
    *(_DWORD *)(a2 + 20) = 0;
  return v19;
}
