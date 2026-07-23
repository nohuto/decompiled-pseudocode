/*
 * XREFs of DbgkpSendErrorMessage @ 0x140681320
 * Callers:
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 *     DbgkForwardException @ 0x140423F54 (DbgkForwardException.c)
 * Callees:
 *     KeTestAlertThread @ 0x1400089E0 (KeTestAlertThread.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     AlpcGetMessageAttribute @ 0x14006F040 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x14006F160 (AlpcInitializeMessageAttribute.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeCopyExceptionRecord @ 0x14017BC3C (KeCopyExceptionRecord.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14017F060 (ZwAlpcSendWaitReceivePort.c)
 *     ZwFlushInstructionCache @ 0x14017FB20 (ZwFlushInstructionCache.c)
 *     memset @ 0x140192D80 (memset.c)
 *     DbgkForwardException @ 0x140423F54 (DbgkForwardException.c)
 *     MmGetSectionInformation @ 0x1404ECBAC (MmGetSectionInformation.c)
 *     PsTestProtectedProcessIncompatibility @ 0x14054633C (PsTestProtectedProcessIncompatibility.c)
 *     PsThawProcess @ 0x14054E700 (PsThawProcess.c)
 *     DbgkpDeleteErrorPort @ 0x140681000 (DbgkpDeleteErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x14068102C (DbgkpRemoveErrorPort.c)
 *     DbgkpStartSystemErrorHandler @ 0x1406817A8 (DbgkpStartSystemErrorHandler.c)
 *     DbgkpSuspendProcess @ 0x140681BE8 (DbgkpSuspendProcess.c)
 */

__int64 __fastcall DbgkpSendErrorMessage(__int64 a1, char a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r13
  char v6; // r12
  ULONG_PTR Process; // r14
  signed int started; // edi
  LARGE_INTEGER *Timeout; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rax
  __int16 v17; // cx
  int v18; // ebx
  _DWORD *MessageAttribute; // rax
  NTSTATUS v20; // eax
  char v22; // [rsp+40h] [rbp-C0h]
  PVOID Object; // [rsp+48h] [rbp-B8h]
  ULONG_PTR RequiredBufferSize; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER v27; // [rsp+60h] [rbp-A0h] BYREF
  _ALPC_MESSAGE_ATTRIBUTES Buffer[20]; // [rsp+70h] [rbp-90h] BYREF

  CurrentThread = KeGetCurrentThread();
  v26 = a1;
  v6 = 0;
  Process = (ULONG_PTR)CurrentThread->Process;
  memset(Buffer, 0, 0x40uLL);
  if ( (*(_DWORD *)(Process + 1740) & 1) != 0 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    MmGetSectionInformation(*(_QWORD *)(Process + 952), 1, (__int64)Buffer);
    if ( (unsigned int)MmGetSessionIdEx((struct _KPROCESS *)Process)
      && Buffer[4].AllocatedAttributes != 1
      && (a2 & 2) != 0 )
    {
      v6 = DbgkpSuspendProcess(Process);
    }
    started = DbgkpStartSystemErrorHandler();
    if ( started >= 0 )
    {
      if ( DbgkErrorPortStartTimeout == -1 )
      {
        Timeout = 0LL;
      }
      else
      {
        Timeout = &v27;
        v27.QuadPart = -10000LL * DbgkErrorPortStartTimeout;
      }
      if ( KeWaitForSingleObject(DbgkErrorPortRegisteredEvent, Executive, 0, 0, Timeout) == 258 || !DbgkpErrorPort )
      {
        started = -1073740973;
      }
      else
      {
        Object = 0LL;
        --CurrentThread->KernelApcDisable;
        started = 0;
        v10 = 0LL;
        ExAcquirePushLockSharedEx((ULONG_PTR)&DbgkpErrorPortLock, 0LL);
        if ( (PVOID)Process == DbgkpErrorProcess )
        {
          started = -1073741420;
        }
        else
        {
          v10 = DbgkpErrorPort;
          if ( DbgkpErrorPort )
          {
            Object = DbgkpErrorProcess;
            ObfReferenceObjectWithTag(DbgkpErrorProcess, 0x50676244u);
            _InterlockedAdd((volatile signed __int32 *)v10, 1u);
          }
          else
          {
            started = -1073740973;
          }
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&DbgkpErrorPortLock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&DbgkpErrorPortLock);
        KeAbPostRelease((ULONG_PTR)&DbgkpErrorPortLock);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        if ( started >= 0 )
        {
          memset(a3, 0, 0x28uLL);
          v11 = v26;
          a3[1] = 8;
          *((_WORD *)a3 + 2) = -32761;
          *a3 = 17826024;
          a3[10] = 7;
          a3[11] = -2147418111;
          KeCopyExceptionRecord((_OWORD *)a3 + 3, v11);
          v12 = 0LL;
          v13 = *(_OWORD *)&Buffer[2].AllocatedAttributes;
          *(_OWORD *)(a3 + 50) = *(_OWORD *)&Buffer[0].AllocatedAttributes;
          a3[66] = 0;
          v14 = *(_OWORD *)&Buffer[4].AllocatedAttributes;
          *(_OWORD *)(a3 + 54) = v13;
          v15 = *(_OWORD *)&Buffer[6].AllocatedAttributes;
          *(_OWORD *)(a3 + 58) = v14;
          *(_OWORD *)(a3 + 62) = v15;
          a3[66] = (*(_BYTE *)(Process + 1738) & 7) != 0;
          if ( *(_QWORD *)(Process + 720) )
            a3[66] |= 8u;
          v16 = *(_QWORD *)(Process + 1064);
          if ( v16 )
          {
            v17 = *(_WORD *)(v16 + 8);
            if ( v17 == 332 || v17 == 452 )
              a3[66] |= 2u;
            v12 = 0LL;
          }
          if ( (a2 & 1) != 0 )
          {
            a3[66] |= 4u;
            v22 = 1;
          }
          else
          {
            v22 = 0;
          }
          LOBYTE(v12) = 1;
          v18 = PsTestProtectedProcessIncompatibility(v12, (__int64)Object, Process) ? 1055744 : 0x1FFFFF;
          AlpcInitializeMessageAttribute(0x10000000u, Buffer, 0xA0uLL, &RequiredBufferSize);
          Buffer[0].ValidAttributes = 0x10000000;
          MessageAttribute = AlpcGetMessageAttribute(Buffer, 0x10000000u);
          MessageAttribute[5] = v18;
          *MessageAttribute = 0;
          MessageAttribute[4] = 4;
          *((_QWORD *)MessageAttribute + 1) = -2LL;
          RequiredBufferSize = 272LL;
          KeTestAlertThread(0);
          if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
            started = -1073741749;
          if ( started < 0
            || (v20 = ZwAlpcSendWaitReceivePort(
                        *(HANDLE *)(v10 + 8),
                        0x220000u,
                        (PPORT_MESSAGE)a3,
                        Buffer,
                        (PPORT_MESSAGE)a3,
                        &RequiredBufferSize,
                        0LL,
                        0LL),
                started = v20,
                v20 < 0) )
          {
            if ( started == -1073741769 )
              DbgkpRemoveErrorPort((__int64)CurrentThread, v10);
          }
          else if ( v20 == 257 )
          {
            started = -1073741749;
          }
          else
          {
            if ( (a3[1] & 0x2000) != 0 )
              ZwAlpcSendWaitReceivePort(*(HANDLE *)(v10 + 8), 0x10000u, (PPORT_MESSAGE)a3, 0LL, 0LL, 0LL, 0LL, 0LL);
            started = a3[11];
            if ( started >= 0 && !v22 )
            {
              if ( started == 65538 )
              {
                if ( v6 )
                {
                  PsThawProcess(Process, 0);
                  KeLeaveCriticalRegion();
                  v6 = 0;
                }
                started = !DbgkForwardException(v26, 1, 1) ? 0xC0000144 : 0;
              }
              else
              {
                ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0);
              }
            }
          }
          ObfDereferenceObjectWithTag(Object, 0x50676244u);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10, 0xFFFFFFFF) == 1 )
            DbgkpDeleteErrorPort((HANDLE *)v10);
        }
      }
    }
    if ( v6 )
    {
      PsThawProcess(Process, 0);
      KeLeaveCriticalRegion();
    }
  }
  return (unsigned int)started;
}
