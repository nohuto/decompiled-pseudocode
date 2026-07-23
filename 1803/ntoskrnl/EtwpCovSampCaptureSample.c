/*
 * XREFs of EtwpCovSampCaptureSample @ 0x1402B5344
 * Callers:
 *     EtwpCovSampProfileInterrupt @ 0x1402B56D0 (EtwpCovSampProfileInterrupt.c)
 *     EtwpCoverageSamplerContextSwap @ 0x1402B5BC0 (EtwpCoverageSamplerContextSwap.c)
 *     EtwpCoverageSamplerPageFault @ 0x1402B5D88 (EtwpCoverageSamplerPageFault.c)
 *     EtwpCoverageSamplerReadyThread @ 0x1402B5F98 (EtwpCoverageSamplerReadyThread.c)
 * Callees:
 *     EtwpCovSampCaptureBufferAddIP @ 0x1402B4864 (EtwpCovSampCaptureBufferAddIP.c)
 *     EtwpCovSampCaptureBufferGet @ 0x1402B48A4 (EtwpCovSampCaptureBufferGet.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x1402B49B4 (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampCaptureKernelStack @ 0x1402B4EE0 (EtwpCovSampCaptureKernelStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1402B4FB4 (EtwpCovSampCaptureQueueApc.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1402B52D0 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampSafeForUserAddressCapture @ 0x1402B58E8 (EtwpCovSampSafeForUserAddressCapture.c)
 *     EtwpCovSampCaptureUserAddresses @ 0x1407B3D28 (EtwpCovSampCaptureUserAddresses.c)
 */

char __fastcall EtwpCovSampCaptureSample(unsigned __int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // r9
  unsigned int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v13; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v14; // [rsp+58h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v5 = qword_1403A1CE8;
  v6 = 0LL;
  v7 = (*(_QWORD *)(qword_1403A1CE8 + 8) >> 4) & 0x1FFLL;
  v8 = ((unsigned int)*(_QWORD *)(qword_1403A1CE8 + 8) >> 13) & 0x3FFFF;
  _BitScanReverse(&v9, v8);
  v14 = v9;
  v10 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v9 - 2) + 8LL * (v8 ^ (1 << v9)) + 8);
  if ( *(_DWORD *)(v10 + 8 * v7 + 60) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8 * v7 + 304));
  }
  else
  {
    LOBYTE(v10) = a1 - 1;
    if ( a1 - 1 > 0xFFFF7FFFFFFFFFFEuLL )
    {
      v10 = EtwpCovSampCaptureBufferGet(qword_1403A1CE8);
      v6 = v10;
      if ( v10 )
      {
        EtwpCovSampCaptureBufferAddIP(v10, a1);
        EtwpCovSampCaptureKernelStack(v11, a2);
        LOBYTE(v10) = EtwpCovSampCaptureBufferQueue(v5, v6);
        v6 = 0LL;
      }
      a1 = 0LL;
    }
    if ( (CurrentThread->MiscFlags & 0x400) == 0 )
    {
      LODWORD(v10) = *((_DWORD *)&CurrentThread[1].SwapListEntry + 2);
      if ( (v10 & 1) == 0 && (CurrentThread->MiscFlags & 0x4000) != 0 )
      {
        if ( CurrentThread->Teb )
        {
          LODWORD(v10) = CurrentThread->Process->FreezeCount + ((*(_DWORD *)&CurrentThread->Process->0 >> 3) & 1);
          if ( !(_DWORD)v10 && !CurrentThread->SuspendCount )
          {
            LODWORD(v10) = EtwpCovSampSafeForUserAddressCapture(0LL, &v13);
            if ( (int)v10 >= 0 )
            {
              if ( !_interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x17u) )
              {
                LOBYTE(v10) = EtwpCovSampCaptureUserAddresses(v5, a1);
                _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFF7FFFFF);
              }
            }
            else if ( !v13 )
            {
              LOBYTE(v10) = EtwpCovSampCaptureQueueApc(a1);
            }
          }
        }
      }
    }
    if ( v6 )
      LOBYTE(v10) = EtwpCovSampCaptureReleaseToLookaside(v5, *(_QWORD *)(v6 + 48), (_SLIST_ENTRY *)v6);
  }
  return v10;
}
