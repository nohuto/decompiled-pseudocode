/*
 * XREFs of LdrGetProcedureAddressForCaller @ 0x1800293D0
 * Callers:
 *     CsrClientConnectToServer @ 0x1800067D0 (CsrClientConnectToServer.c)
 *     LdrGetProcedureAddressEx @ 0x180015D80 (LdrGetProcedureAddressEx.c)
 *     LdrpCodeAuthzInitialize @ 0x18007E7AC (LdrpCodeAuthzInitialize.c)
 *     LdrGetProcedureAddress @ 0x180082090 (LdrGetProcedureAddress.c)
 *     LdrpLoadWow64 @ 0x1800846F4 (LdrpLoadWow64.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800D7C70 (RtlWow64LogMessageInEventLogger.c)
 *     AVrfInitializeVerifier @ 0x1800D9BE0 (AVrfInitializeVerifier.c)
 *     AVrfpDetectVerifiedExports @ 0x1800DAA3C (AVrfpDetectVerifiedExports.c)
 *     AVrfpVerifierStopInitialize @ 0x1800DB874 (AVrfpVerifierStopInitialize.c)
 * Callees:
 *     RtlValidateUserCallTarget @ 0x1800014D4 (RtlValidateUserCallTarget.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x180001594 (RtlGuardGrantSuppressedCallAccess.c)
 *     LdrpResolveProcedureAddress @ 0x180029014 (LdrpResolveProcedureAddress.c)
 *     LdrpCompareModuleBaseAddresses @ 0x1800297E8 (LdrpCompareModuleBaseAddresses.c)
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x18002990C (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     LdrpObtainLockedEnclave @ 0x180047BC0 (LdrpObtainLockedEnclave.c)
 *     LdrpDrainWorkQueue @ 0x18004AAA4 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x18004B1EC (LdrpDropLastInProgressCount.c)
 *     LdrpReportError @ 0x180052C64 (LdrpReportError.c)
 *     LdrpInitializeGraphRecurse @ 0x180072BC0 (LdrpInitializeGraphRecurse.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     LdrpDereferenceEnclave @ 0x1800D06BC (LdrpDereferenceEnclave.c)
 *     AVrfCallAPILookupCallback @ 0x1800D9A3C (AVrfCallAPILookupCallback.c)
 */

NTSTATUS __cdecl LdrGetProcedureAddressForCaller(
        PVOID DllHandle,
        PANSI_STRING ProcedureName,
        ULONG ProcedureNumber,
        PVOID *ProcedureAddress,
        ULONG Flags,
        PVOID *Callback)
{
  bool v6; // zf
  PANSI_STRING v7; // rbx
  int v9; // r14d
  size_t Length; // rdi
  unsigned int v11; // esi
  char *Heap; // r13
  void *v13; // r12
  __int64 locked; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rdi
  unsigned __int64 Root; // rbx
  int v21; // esi
  int v22; // eax
  unsigned __int64 v23; // rax
  _RTL_BALANCED_NODE *v24; // rax
  NTSTATUS v25; // ebx
  char v26; // si
  char v27; // r9
  ULONG v28; // esi
  PVOID *v29; // r14
  __int64 v31; // rdi
  __int64 v32; // rcx
  _RTL_CRITICAL_SECTION *v33; // rcx
  char v34; // [rsp+30h] [rbp-D0h]
  char v35[7]; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v36; // [rsp+38h] [rbp-C8h] BYREF
  int v37; // [rsp+40h] [rbp-C0h]
  int v38; // [rsp+44h] [rbp-BCh]
  ULONG v39; // [rsp+48h] [rbp-B8h]
  int v40; // [rsp+4Ch] [rbp-B4h] BYREF
  PVOID *v41; // [rsp+50h] [rbp-B0h]
  __int64 v42; // [rsp+58h] [rbp-A8h] BYREF
  int v43; // [rsp+60h] [rbp-A0h] BYREF
  PVOID *v44; // [rsp+68h] [rbp-98h]
  char v45; // [rsp+70h] [rbp-90h] BYREF
  ULONG Flagsa; // [rsp+170h] [rbp+70h]

  v6 = (Flags & 1) == 0;
  Flagsa = Flags & 1;
  v7 = ProcedureName;
  v41 = Callback;
  v9 = 9;
  v44 = ProcedureAddress;
  v39 = ProcedureNumber;
  v36 = 0LL;
  v34 = 0;
  if ( v6 || LdrpDllNotificationLock.OwningThread != NtCurrentTeb()->ClientId.UniqueThread )
    v38 = 9;
  else
    v38 = 6;
  if ( ProcedureName )
  {
    Length = ProcedureName->Length;
    v11 = Length + 1;
    if ( ProcedureName->MaximumLength < (unsigned int)(Length + 1) || (Heap = ProcedureName->Buffer, Heap[Length]) )
    {
      if ( v11 <= 0x80 )
      {
        Heap = &v45;
      }
      else
      {
        Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v11);
        if ( !Heap )
          return -1073741670;
        v34 = 1;
      }
      memmove(Heap, v7->Buffer, Length);
      Heap[(unsigned int)Length] = 0;
    }
  }
  else
  {
    Heap = 0LL;
  }
  LOBYTE(ProcedureName) = 1;
  v13 = 0LL;
  locked = LdrpObtainLockedEnclave(DllHandle, ProcedureName);
  v17 = (_QWORD *)locked;
  v18 = 4096LL;
  if ( locked )
  {
    v33 = (_RTL_CRITICAL_SECTION *)(locked + 16);
    if ( *(_DWORD *)(locked + 60) == 2 )
    {
      RtlLeaveCriticalSection(v33);
      v25 = 0;
      v13 = v17;
      v19 = v17[13];
      v26 = 3;
      goto LABEL_29;
    }
    RtlLeaveCriticalSection(v33);
    LdrpDereferenceEnclave(v17);
    v18 = 4096LL;
  }
  v9 = v37;
  while ( 2 )
  {
    v19 = 0LL;
    if ( !DllHandle )
      goto LABEL_25;
    if ( DllHandle == (PVOID)LdrpSystemDllBase )
    {
      v19 = LdrpNtDllDataTableEntry;
      v9 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
      v37 = v9;
      goto LABEL_25;
    }
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    Root = (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
    v21 = *(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1;
    if ( !LdrpModuleBaseAddressIndex.Root )
      goto LABEL_24;
    while ( 1 )
    {
      v22 = LdrpCompareModuleBaseAddresses(DllHandle, Root);
      if ( v22 >= 0 )
        break;
      v23 = *(_QWORD *)Root;
      if ( v21 && v23 )
      {
LABEL_77:
        Root ^= v23;
        goto LABEL_17;
      }
LABEL_16:
      Root = v23;
LABEL_17:
      if ( !Root )
        goto LABEL_24;
    }
    if ( v22 > 0 )
    {
      v23 = *(_QWORD *)(Root + 8);
      if ( v21 && v23 )
        goto LABEL_77;
      goto LABEL_16;
    }
    if ( Root )
    {
      v24 = *(_RTL_BALANCED_NODE **)(Root - 48);
      v19 = Root - 200;
      if ( LODWORD(v24[1].Children[0]) != -1 && (*(_BYTE *)&v24->Children[0][-3].0 & 0x20) == 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v19 + 276));
      v9 = *(_DWORD *)(*(_QWORD *)(v19 + 152) + 56LL);
      v37 = v9;
    }
LABEL_24:
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    v18 = 4096LL;
LABEL_25:
    if ( v19 )
    {
      v25 = 0;
      v9 = v37;
      if ( (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 && v37 < v38 )
      {
        LdrpDereferenceModule((PVOID)v19);
        LdrpDrainWorkQueue(0LL);
        LdrpDropLastInProgressCount();
        v18 = 4096LL;
        continue;
      }
    }
    else
    {
      v25 = -1073741515;
    }
    break;
  }
  v26 = 1;
LABEL_29:
  if ( v19 )
  {
    v27 = v26;
    v28 = v39;
    v25 = LdrpResolveProcedureAddress((_QWORD *)v19, Heap, v39, v27, (unsigned __int64 *)&v36);
    if ( v25 >= 0 )
    {
      if ( v9 == 7
        && !Flagsa
        && (NtCurrentTeb()->SameTebFlags & 0x1000) != 0
        && LdrpDllNotificationLock.OwningThread != NtCurrentTeb()->ClientId.UniqueThread )
      {
        v32 = *(_QWORD *)(v19 + 152);
        v35[0] = 0;
        v25 = LdrpInitializeGraphRecurse(v32, 0LL, v35);
      }
      if ( v25 < 0 )
      {
        v36 = 0LL;
      }
      else if ( !v13 )
      {
        v29 = v41;
        if ( AvrfpAPILookupCallbacksEnabled )
          AVrfCallAPILookupCallback((_DWORD)v41, *(_QWORD *)(v19 + 48), v36, 0, (__int64)&v36);
        if ( g_ShimsEnabled )
        {
          v42 = 0LL;
          ((void (__fastcall *)(__int64 *, __int64, __int64, _QWORD, PVOID *))(MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_GetProcAddressForCaller, 64 - (MEMORY[0x7FFE0330] & 0x3Fu))))(
            &v42,
            v19,
            v36,
            0LL,
            v29);
          if ( v42 )
            v36 = v42;
        }
      }
    }
    if ( v25 == -1073741515 || v25 == -1073741502 )
      v25 = -1073741702;
    if ( !v13 )
    {
      LdrpDereferenceModule((PVOID)v19);
      goto LABEL_41;
    }
    LdrpDereferenceEnclave(v13);
  }
  else
  {
    v28 = v39;
  }
  if ( v13 && v25 >= 0 )
    v36 += *(_QWORD *)(v19 + 184) - *(_QWORD *)(v19 + 48);
LABEL_41:
  if ( v25 == -1073741702 )
  {
    if ( Heap )
    {
      v25 = -1073741511;
    }
    else
    {
      v25 = -1073741512;
      Heap = (char *)v28;
    }
    LdrpReportError(0LL, Heap, (unsigned int)v25);
  }
  if ( v34 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  if ( !UseWOW64 && v25 >= 0 )
  {
    if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression(v18, v15, v16) )
    {
      v31 = v36;
      if ( (unsigned int)RtlValidateUserCallTarget(v36, &v40) != 1 && (v40 & 0x10) != 0 )
      {
        v25 = RtlGuardGrantSuppressedCallAccess(v31, 4u, &v43);
        if ( v25 < 0 )
          __fastfail(0x2Eu);
      }
    }
  }
  *v44 = (PVOID)v36;
  return v25;
}
