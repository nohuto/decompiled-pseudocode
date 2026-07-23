/*
 * XREFs of RtlpLookupUserFunctionTable @ 0x14000A9C8
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1400D83C0 (RtlpLookupFunctionEntryForStackWalks.c)
 * Callees:
 *     RtlpLookupUserFunctionTableInverted @ 0x14000AA18 (RtlpLookupUserFunctionTableInverted.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400AE2D0 (RtlpImageDirectoryEntryToDataEx.c)
 *     MmGetImageBase @ 0x1404F1500 (MmGetImageBase.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
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
  unsigned __int64 v13; // rax
  __int64 v14; // r15
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  PVOID v18; // rsi
  int v19; // eax
  unsigned __int64 v20; // r8
  int v21; // eax
  unsigned int v22; // eax
  _QWORD v23[11]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v24; // [rsp+B0h] [rbp+18h] BYREF
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
      ExfReleasePushLockShared(&Process[2].Affinity.Bitmap[19]);
    KeAbPostRelease((ULONG_PTR)&Process[2].Affinity.Bitmap[19]);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
  }
  if ( (int)MmGetImageBase(a1, &BaseOfImage, v23) >= 0 )
  {
    v18 = BaseOfImage;
    v21 = RtlpImageDirectoryEntryToDataEx(BaseOfImage, (__int64)&v24);
    v20 = v24;
    if ( v21 < 0 )
      v20 = 0LL;
    v24 = v20;
    if ( v20 )
    {
      v22 = *(_DWORD *)(a2 + 20);
      if ( v22 && v22 == 12 * (v22 / 0xCuLL) )
      {
        if ( (v20 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v22 + v20 > 0x7FFFFFFF0000LL || v22 + v20 < v20 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      else
      {
        v20 = 0LL;
      }
    }
    v19 = v23[0];
  }
  else
  {
    v18 = 0LL;
    v19 = 0;
    v20 = 0LL;
  }
  *(_QWORD *)(a2 + 8) = v18;
  *(_DWORD *)(a2 + 16) = v19;
  *(_QWORD *)a2 = v20;
  if ( !v20 )
    *(_DWORD *)(a2 + 20) = 0;
  return v20;
}
