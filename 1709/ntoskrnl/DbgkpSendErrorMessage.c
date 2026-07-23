/*
 * XREFs of DbgkpSendErrorMessage @ 0x1406AC4FC
 * Callers:
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 *     DbgkForwardException @ 0x1404504F4 (DbgkForwardException.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     PsGetProcessServerSilo @ 0x1400893E0 (PsGetProcessServerSilo.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     AlpcGetMessageAttribute @ 0x1400AEC50 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x1400AED70 (AlpcInitializeMessageAttribute.c)
 *     KeTestAlertThread @ 0x1400DA9D0 (KeTestAlertThread.c)
 *     PsGetServerSiloServiceSessionId @ 0x1400DF800 (PsGetServerSiloServiceSessionId.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeCopyExceptionRecord @ 0x14017B3BC (KeCopyExceptionRecord.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14017E9E0 (ZwAlpcSendWaitReceivePort.c)
 *     ZwFlushInstructionCache @ 0x14017F4C0 (ZwFlushInstructionCache.c)
 *     memset @ 0x140192F40 (memset.c)
 *     DbgkForwardException @ 0x1404504F4 (DbgkForwardException.c)
 *     MmGetSectionInformation @ 0x14048C730 (MmGetSectionInformation.c)
 *     PsTestProtectedProcessIncompatibility @ 0x14053919C (PsTestProtectedProcessIncompatibility.c)
 *     PsThawProcess @ 0x14057CE6C (PsThawProcess.c)
 *     DbgkpDeleteErrorPort @ 0x1406AC1D0 (DbgkpDeleteErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x1406AC1FC (DbgkpRemoveErrorPort.c)
 *     DbgkpStartSystemErrorHandler @ 0x1406AC9C8 (DbgkpStartSystemErrorHandler.c)
 *     DbgkpSuspendProcess @ 0x1406ACEB0 (DbgkpSuspendProcess.c)
 */

__int64 __fastcall DbgkpSendErrorMessage(__int64 a1, char a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r13
  ULONG_PTR Process; // r15
  __int64 ProcessServerSilo; // rbx
  char *v8; // rsi
  signed int started; // edi
  int ServerSiloServiceSessionId; // ebx
  LARGE_INTEGER *Timeout; // rax
  NTSTATUS v12; // eax
  __int64 v13; // r14
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v21; // rax
  bool v22; // bl
  _DWORD *MessageAttribute; // rax
  NTSTATUS v24; // eax
  char v25; // bl
  char v27; // [rsp+40h] [rbp-C0h]
  char v28; // [rsp+41h] [rbp-BFh]
  PVOID Object; // [rsp+48h] [rbp-B8h]
  ULONG_PTR RequiredBufferSize; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER v33; // [rsp+60h] [rbp-A0h] BYREF
  _ALPC_MESSAGE_ATTRIBUTES Buffer[20]; // [rsp+70h] [rbp-90h] BYREF

  CurrentThread = KeGetCurrentThread();
  v32 = a1;
  v27 = 0;
  Process = (ULONG_PTR)CurrentThread->Process;
  ProcessServerSilo = PsGetProcessServerSilo(Process);
  v8 = (char *)PsGetServerSiloGlobals(ProcessServerSilo) + 960;
  memset(Buffer, 0, 0x40uLL);
  if ( (*(_DWORD *)(Process + 1740) & 1) != 0 )
    return (unsigned int)-1073741637;
  MmGetSectionInformation(*(_QWORD *)(Process + 952), 1, (__int64)Buffer);
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
  if ( (unsigned int)MmGetSessionIdEx(Process) != ServerSiloServiceSessionId
    && Buffer[4].AllocatedAttributes != 1
    && (a2 & 2) != 0 )
  {
    v27 = DbgkpSuspendProcess(Process);
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
      Timeout = &v33;
      v33.QuadPart = -10000LL * DbgkErrorPortStartTimeout;
    }
    v12 = KeWaitForSingleObject(*((PVOID *)v8 + 3), Executive, 1, 0, Timeout);
    if ( v12 == 258 || !*((_QWORD *)v8 + 1) )
    {
      started = -1073740973;
    }
    else if ( v12 == 257 || v12 == 192 )
    {
      started = -1073741749;
    }
    else
    {
      Object = 0LL;
      --CurrentThread->KernelApcDisable;
      started = 0;
      v13 = 0LL;
      ExAcquirePushLockSharedEx((ULONG_PTR)v8, 0LL);
      v14 = (void *)*((_QWORD *)v8 + 2);
      if ( (void *)Process == v14 )
      {
        started = -1073741420;
      }
      else
      {
        v13 = *((_QWORD *)v8 + 1);
        if ( v13 )
        {
          Object = (PVOID)*((_QWORD *)v8 + 2);
          ObfReferenceObjectWithTag(v14, 0x50676244u);
          _InterlockedIncrement((volatile signed __int32 *)v13);
        }
        else
        {
          started = -1073740973;
        }
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v8);
      KeAbPostRelease((ULONG_PTR)v8);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( started >= 0 )
      {
        memset(a3, 0, 0x28uLL);
        v15 = v32;
        a3[1] = 8;
        *((_WORD *)a3 + 2) = -32761;
        *a3 = 17826024;
        a3[10] = 7;
        a3[11] = -2147418111;
        KeCopyExceptionRecord((_OWORD *)a3 + 3, v15);
        v17 = *(_OWORD *)&Buffer[0].AllocatedAttributes;
        v18 = *(_OWORD *)&Buffer[2].AllocatedAttributes;
        a3[66] = 0;
        *(_OWORD *)(a3 + 50) = v17;
        v19 = *(_OWORD *)&Buffer[4].AllocatedAttributes;
        *(_OWORD *)(a3 + 54) = v18;
        v20 = *(_OWORD *)&Buffer[6].AllocatedAttributes;
        *(_OWORD *)(a3 + 58) = v19;
        *(_OWORD *)(a3 + 62) = v20;
        if ( (*(_BYTE *)(Process + 1738) & 7) != 0 )
          a3[66] = 1;
        if ( (*(_BYTE *)(Process + 720) & 1) != 0 )
          a3[66] |= 8u;
        v21 = *(_QWORD *)(Process + 1064);
        if ( v21 )
        {
          v16 = *(unsigned __int16 *)(v21 + 8);
          if ( (_WORD)v16 == 332 || (_WORD)v16 == 452 )
            a3[66] |= 2u;
        }
        if ( (a2 & 1) != 0 )
        {
          a3[66] |= 4u;
          v28 = 1;
        }
        else
        {
          v28 = 0;
        }
        LOBYTE(v16) = 1;
        v22 = PsTestProtectedProcessIncompatibility(v16, (__int64)Object, Process);
        AlpcInitializeMessageAttribute(0x10000000u, Buffer, 0xA0uLL, &RequiredBufferSize);
        Buffer[0].ValidAttributes = 0x10000000;
        MessageAttribute = AlpcGetMessageAttribute(Buffer, 0x10000000u);
        *MessageAttribute = 0;
        MessageAttribute[4] = 4;
        MessageAttribute[5] = v22 ? 1055744 : 0x1FFFFF;
        *((_QWORD *)MessageAttribute + 1) = -2LL;
        RequiredBufferSize = 272LL;
        KeTestAlertThread(0);
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
          started = -1073741749;
        if ( started < 0
          || (v24 = ZwAlpcSendWaitReceivePort(
                      *(HANDLE *)(v13 + 8),
                      0x220000u,
                      (PPORT_MESSAGE)a3,
                      Buffer,
                      (PPORT_MESSAGE)a3,
                      &RequiredBufferSize,
                      0LL,
                      0LL),
              started = v24,
              v24 < 0) )
        {
          if ( started == -1073741769 )
            DbgkpRemoveErrorPort((__int64)CurrentThread, (ULONG_PTR)v8, v13);
        }
        else if ( v24 == 257 )
        {
          started = -1073741749;
        }
        else
        {
          if ( (a3[1] & 0x2000) != 0 )
            ZwAlpcSendWaitReceivePort(*(HANDLE *)(v13 + 8), 0x10000u, (PPORT_MESSAGE)a3, 0LL, 0LL, 0LL, 0LL, 0LL);
          started = a3[11];
          if ( started >= 0 && !v28 )
          {
            if ( started == 65538 )
            {
              v25 = v27;
              if ( v27 )
              {
                PsThawProcess(Process, 0);
                KeLeaveCriticalRegion();
                v25 = 0;
              }
              started = !DbgkForwardException(v32, 1, 1) ? 0xC0000144 : 0;
              goto LABEL_52;
            }
            ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0);
          }
        }
        v25 = v27;
LABEL_52:
        ObfDereferenceObjectWithTag(Object, 0x50676244u);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v13, 0xFFFFFFFF) == 1 )
          DbgkpDeleteErrorPort((HANDLE *)v13);
        goto LABEL_57;
      }
    }
  }
  v25 = v27;
LABEL_57:
  if ( v25 )
  {
    PsThawProcess(Process, 0);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)started;
}
