/*
 * XREFs of DbgkpSendErrorMessage @ 0x140710E28
 * Callers:
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 *     DbgkForwardException @ 0x1405C0D3C (DbgkForwardException.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     PsGetProcessServerSilo @ 0x14006CFF0 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x14006D170 (PsGetServerSiloServiceSessionId.c)
 *     AlpcGetMessageAttribute @ 0x140072FA0 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x1400730C0 (AlpcInitializeMessageAttribute.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeTestAlertThread @ 0x140132520 (KeTestAlertThread.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeCopyExceptionRecord @ 0x1401A5B60 (KeCopyExceptionRecord.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1401A8600 (ZwAlpcSendWaitReceivePort.c)
 *     ZwFlushInstructionCache @ 0x1401A90E0 (ZwFlushInstructionCache.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     DbgkpRemoveErrorPort @ 0x14048BA68 (DbgkpRemoveErrorPort.c)
 *     DbgkpDeleteErrorPort @ 0x14048BED4 (DbgkpDeleteErrorPort.c)
 *     MmGetSectionInformation @ 0x1404F91C0 (MmGetSectionInformation.c)
 *     PsTestProtectedProcessIncompatibility @ 0x140555328 (PsTestProtectedProcessIncompatibility.c)
 *     PsThawProcess @ 0x140565D8C (PsThawProcess.c)
 *     DbgkForwardException @ 0x1405C0D3C (DbgkForwardException.c)
 *     DbgkpStartSystemErrorHandler @ 0x140711300 (DbgkpStartSystemErrorHandler.c)
 *     DbgkpSuspendProcess @ 0x140711758 (DbgkpSuspendProcess.c)
 */

__int64 __fastcall DbgkpSendErrorMessage(__int64 a1, char a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r13
  ULONG_PTR Process; // r15
  __int64 ProcessServerSilo; // rbx
  PVOID *v8; // rsi
  signed int started; // edi
  int ServerSiloServiceSessionId; // ebx
  LARGE_INTEGER *Timeout; // rax
  NTSTATUS v12; // eax
  PVOID v13; // r14
  PVOID v14; // rax
  __int64 v15; // rdx
  __int128 v16; // xmm1
  __int64 v17; // rcx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // rax
  __int16 v21; // dx
  int v22; // ebx
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
  v8 = (PVOID *)((char *)PsGetServerSiloGlobals(ProcessServerSilo) + 960);
  memset(Buffer, 0, 0x40uLL);
  if ( (*(_DWORD *)(Process + 1740) & 1) != 0 )
    return (unsigned int)-1073741637;
  MmGetSectionInformation(*(_QWORD *)(Process + 952), 1);
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
    v12 = KeWaitForSingleObject(v8[3], Executive, 1, 0, Timeout);
    if ( v12 == 258 || !v8[1] )
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
      v14 = v8[2];
      if ( (PVOID)Process == v14 )
      {
        started = -1073741420;
      }
      else
      {
        v13 = v8[1];
        if ( v13 )
        {
          Object = v8[2];
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
        v16 = *(_OWORD *)&Buffer[2].AllocatedAttributes;
        v17 = 0LL;
        *(_OWORD *)(a3 + 50) = *(_OWORD *)&Buffer[0].AllocatedAttributes;
        a3[66] = 0;
        v18 = *(_OWORD *)&Buffer[4].AllocatedAttributes;
        *(_OWORD *)(a3 + 54) = v16;
        v19 = *(_OWORD *)&Buffer[6].AllocatedAttributes;
        *(_OWORD *)(a3 + 58) = v18;
        *(_OWORD *)(a3 + 62) = v19;
        if ( (*(_BYTE *)(Process + 1738) & 7) != 0 )
        {
          a3[66] = 1;
          v17 = 1LL;
        }
        if ( (*(_BYTE *)(Process + 720) & 1) != 0 )
        {
          v17 = (unsigned int)v17 | 8;
          a3[66] = v17;
        }
        v20 = *(_QWORD *)(Process + 1064);
        if ( v20 )
        {
          v21 = *(_WORD *)(v20 + 8);
          if ( v21 == 332 || v21 == 452 )
          {
            v17 = (unsigned int)v17 | 2;
            a3[66] = v17;
          }
        }
        if ( (a2 & 1) != 0 )
        {
          v17 = (unsigned int)v17 | 4;
          v28 = 1;
          a3[66] = v17;
        }
        else
        {
          v28 = 0;
        }
        LOBYTE(v17) = 1;
        v22 = PsTestProtectedProcessIncompatibility(v17, (__int64)Object, Process) ? 1055744 : 0x1FFFFF;
        AlpcInitializeMessageAttribute(0x10000000u, Buffer, 0xA0uLL, &RequiredBufferSize);
        Buffer[0].ValidAttributes = 0x10000000;
        MessageAttribute = AlpcGetMessageAttribute(Buffer, 0x10000000u);
        *MessageAttribute = 0;
        MessageAttribute[5] = v22;
        MessageAttribute[4] = 4;
        *((_QWORD *)MessageAttribute + 1) = -2LL;
        RequiredBufferSize = 272LL;
        KeTestAlertThread(0);
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
          started = -1073741749;
        if ( started < 0
          || (v24 = ZwAlpcSendWaitReceivePort(
                      *((HANDLE *)v13 + 1),
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
            DbgkpRemoveErrorPort((__int64)CurrentThread, (ULONG_PTR)v8, (volatile signed __int32 *)v13);
        }
        else if ( v24 == 257 )
        {
          started = -1073741749;
        }
        else
        {
          if ( (a3[1] & 0x2000) != 0 )
            ZwAlpcSendWaitReceivePort(*((HANDLE *)v13 + 1), 0x10000u, (PPORT_MESSAGE)a3, 0LL, 0LL, 0LL, 0LL, 0LL);
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
