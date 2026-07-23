/*
 * XREFs of RtlQueryInformationActivationContext @ 0x180037100
 * Callers:
 *     RtlQueueWorkItem @ 0x1800113D0 (RtlQueueWorkItem.c)
 *     TppCleanupGroupMemberInitialize @ 0x180036E40 (TppCleanupGroupMemberInitialize.c)
 *     SbpRetrieveCompatibilityManifest @ 0x18007FB7C (SbpRetrieveCompatibilityManifest.c)
 *     RtlQueryInformationActiveActivationContext @ 0x180085320 (RtlQueryInformationActiveActivationContext.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180028A70 (RtlpxLookupFunctionTable.c)
 *     LdrpFindLoadedDllByHandle @ 0x1800292AC (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 *     RtlpGetActivationContextData @ 0x1800376A4 (RtlpGetActivationContextData.c)
 *     RtlpQueryInformationActivationContextBasicInformation @ 0x180037738 (RtlpQueryInformationActivationContextBasicInformation.c)
 *     LdrpDrainWorkQueue @ 0x18004AAA4 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x18004B1EC (LdrpDropLastInProgressCount.c)
 *     DbgPrintEx @ 0x18006C580 (DbgPrintEx.c)
 *     RtlpQueryRunLevel @ 0x18007CB78 (RtlpQueryRunLevel.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x18007CC64 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x18007CEC0 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800DEE94 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800DF11C (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextManifestResourceName @ 0x1800DF39C (RtlpQueryInformationActivationContextManifestResourceName.c)
 */

NTSTATUS __cdecl RtlQueryInformationActivationContext(
        ULONG Flags,
        PACTIVATION_CONTEXT ActivationContext,
        PACTIVATION_CONTEXT_QUERY_INDEX SubInstanceIndex,
        ACTIVATION_CONTEXT_INFO_CLASS ActivationContextInformationClass,
        PVOID ActivationContextInformation,
        SIZE_T ActivationContextInformationLength,
        PSIZE_T ReturnLength)
{
  PACTIVATION_CONTEXT v8; // rdi
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  __int64 v11; // rdx
  NTSTATUS ActivationContextData; // ebx
  __int64 v13; // r10
  __int64 v14; // rcx
  int InformationActivationContextBasicInformation; // eax
  int LoadedDllByHandle; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  int v21; // eax
  int v23; // [rsp+40h] [rbp-88h]
  PVOID BaseAddress; // [rsp+48h] [rbp-80h] BYREF
  int v25; // [rsp+50h] [rbp-78h] BYREF
  int v26; // [rsp+54h] [rbp-74h]
  __int64 v27; // [rsp+58h] [rbp-70h] BYREF
  __int128 v28; // [rsp+60h] [rbp-68h] BYREF
  __int64 v29; // [rsp+70h] [rbp-58h]
  _DWORD v30[8]; // [rsp+78h] [rbp-50h] BYREF
  PACTIVATION_CONTEXT v31; // [rsp+D8h] [rbp+10h]

  v31 = ActivationContext;
  v8 = ActivationContext;
  memset(v30, 0, sizeof(v30));
  v27 = 0LL;
  BaseAddress = 0LL;
  v30[6] = 4;
  if ( ReturnLength )
    *ReturnLength = 0LL;
  if ( (Flags & 0x3FFFFFF8) != 0 )
    goto LABEL_52;
  if ( (Flags & 0x80000000) != 0
    && (((ActivationContextInformationClass - 1) & 0xFFFFFFFA) != 0
     || ActivationContextInformationClass == ActivationContextDetailedInformation) )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - Caller passed meaningless flags/class combination (0x%08lx/0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      Flags,
      ActivationContextInformationClass);
    goto LABEL_54;
  }
  if ( (unsigned int)(ActivationContextInformationClass - 1) > 6 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - caller asked for unknown information class %lu\n",
      "RtlQueryInformationActivationContext",
      ActivationContextInformationClass);
    ActivationContextData = -1073741583;
    goto LABEL_81;
  }
  if ( ActivationContextInformationLength )
  {
    if ( !ActivationContextInformation )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() - caller passed nonzero buffer length but NULL buffer pointer\n",
        "RtlQueryInformationActivationContext");
      ActivationContextData = -1073741582;
      goto LABEL_81;
    }
  }
  else if ( !ReturnLength )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - caller supplied no buffer to populate and no place to return required byte count\n",
      "RtlQueryInformationActivationContext");
    ActivationContextData = -1073741580;
    goto LABEL_81;
  }
  if ( (Flags & 7) == 0 )
    goto LABEL_13;
  if ( (Flags & 7) == 1 )
  {
    if ( !v8 )
    {
      ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
      if ( ActivationContextStackPointer->ActiveFrame )
        v8 = ActivationContextStackPointer->ActiveFrame->ActivationContext;
      else
        v8 = v31;
      goto LABEL_13;
    }
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - caller asked to use active activation context but passed %p\n",
      "RtlQueryInformationActivationContext",
      v8);
LABEL_60:
    ActivationContextData = -1073741584;
    goto LABEL_81;
  }
  if ( (Flags & 7) != 2 )
  {
    if ( (Flags & 7) == 4 )
    {
      if ( !v8 )
      {
        DbgPrintEx(
          0x33u,
          0,
          "SXS: %s() - Caller asked to use activation context from address in .dll but passed NULL\n",
          "RtlQueryInformationActivationContext");
        goto LABEL_60;
      }
      if ( (unsigned __int64)v8 < *((_QWORD *)&xmmword_18016F4D0 + 1)
        || (unsigned __int64)v8 >= *((_QWORD *)&xmmword_18016F4D0 + 1) + (unsigned __int64)(unsigned int)qword_18016F4E0 )
      {
        RtlpxLookupFunctionTable(v8, (__int64)&v28);
      }
      else
      {
        v28 = xmmword_18016F4D0;
        v29 = qword_18016F4E0;
      }
      if ( !*((_QWORD *)&v28 + 1) )
      {
        DbgPrintEx(
          0x33u,
          0,
          "SXS: %s() - Caller passed invalid address, not in any .dll (%p)\n",
          "RtlQueryInformationActivationContext",
          v8);
        ActivationContextData = -1073741515;
        goto LABEL_81;
      }
      v8 = (PACTIVATION_CONTEXT)*((_QWORD *)&v28 + 1);
      v31 = (PACTIVATION_CONTEXT)*((_QWORD *)&v28 + 1);
      goto LABEL_28;
    }
LABEL_52:
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - Caller passed invalid flags (0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      Flags);
LABEL_54:
    ActivationContextData = -1073741585;
    goto LABEL_81;
  }
LABEL_28:
  if ( !v8 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - Caller asked to use activation context from hmodule but passed NULL\n",
      "RtlQueryInformationActivationContext");
    goto LABEL_60;
  }
  LoadedDllByHandle = LdrpFindLoadedDllByHandle((__int64)v8, (__int64 *)&BaseAddress, &v25);
  ActivationContextData = LoadedDllByHandle;
  v23 = LoadedDllByHandle;
  if ( LoadedDllByHandle >= 0 && v25 < 5 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      ActivationContextData = LoadedDllByHandle;
    }
    else
    {
      LdrpDrainWorkQueue(0LL);
      v20 = *((_QWORD *)BaseAddress + 19);
      v21 = v23;
      if ( *(_DWORD *)(v20 + 56) != 9 )
        v21 = -1073741515;
      ActivationContextData = v21;
      LdrpDropLastInProgressCount(v20, v17, v18, v19);
    }
    v8 = v31;
  }
  if ( ActivationContextData < 0 )
  {
    DbgPrintEx(0x33u, 0, "SXS: %s() - Caller passed invalid hmodule (%p)\n", "RtlQueryInformationActivationContext", v8);
    goto LABEL_81;
  }
  v8 = (PACTIVATION_CONTEXT)*((_QWORD *)BaseAddress + 17);
LABEL_13:
  ActivationContextData = RtlpGetActivationContextData(
                            1LL,
                            v8,
                            (unsigned __int64)v30 & -(__int64)((Flags & 0x40000000) != 0),
                            &v27);
  if ( ActivationContextData < 0 )
    goto LABEL_81;
  v13 = v27;
  if ( !v27 && (unsigned int)(ActivationContextInformationClass - 2) <= 5 )
    goto LABEL_54;
  v14 = (unsigned int)(ActivationContextInformationClass - 1);
  switch ( ActivationContextInformationClass )
  {
    case ActivationContextBasicInformation:
      v26 &= v14;
      if ( (Flags & 0x80000000) != 0 )
        v14 = (unsigned int)ActivationContextInformationClass;
      v26 = v14;
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextBasicInformation(
                                                       v14,
                                                       v11,
                                                       v27);
LABEL_19:
      ActivationContextData = InformationActivationContextBasicInformation;
      if ( InformationActivationContextBasicInformation < 0 )
        break;
      goto LABEL_20;
    case ActivationContextDetailedInformation:
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextDetailedInformation(
                                                       v27,
                                                       v11,
                                                       (_DWORD)ActivationContextInformation,
                                                       ActivationContextInformationLength,
                                                       (__int64)ReturnLength);
      goto LABEL_19;
    case AssemblyDetailedInformationInActivationContext:
      if ( SubInstanceIndex )
      {
        InformationActivationContextBasicInformation = RtlpQueryAssemblyInformationActivationContextDetailedInformation(
                                                         v27,
                                                         SubInstanceIndex->ulAssemblyIndex,
                                                         (_DWORD)ActivationContextInformation,
                                                         ActivationContextInformationLength,
                                                         (__int64)ReturnLength);
        goto LABEL_19;
      }
      goto LABEL_78;
    case FileInformationInAssemblyOfAssemblyInActivationContext:
      if ( SubInstanceIndex )
      {
        InformationActivationContextBasicInformation = RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation(
                                                         v27,
                                                         (_DWORD)SubInstanceIndex,
                                                         (_DWORD)ActivationContextInformation,
                                                         ActivationContextInformationLength,
                                                         (__int64)ReturnLength);
        goto LABEL_19;
      }
LABEL_78:
      ActivationContextData = -1073741811;
      break;
    case RunlevelInformationInActivationContext:
      if ( ActivationContextInformationLength >= 0xC )
      {
        *(_QWORD *)ActivationContextInformation = 0LL;
        *((_DWORD *)ActivationContextInformation + 2) = 0;
        ActivationContextData = RtlpQueryRunLevel(
                                  (unsigned int)(ActivationContextInformationClass - 5),
                                  v13,
                                  ActivationContextInformation);
        if ( ActivationContextData < 0 )
          break;
        if ( ReturnLength )
          *ReturnLength = 12LL;
LABEL_20:
        ActivationContextData = 0;
        break;
      }
      ActivationContextData = -1073741789;
      if ( ReturnLength )
        *ReturnLength = 12LL;
      break;
    case CompatibilityInformationInActivationContext:
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextCompatibilityInformation(
                                                       v27,
                                                       ActivationContextInformation,
                                                       ActivationContextInformationLength,
                                                       ReturnLength);
      goto LABEL_19;
    case ActivationContextManifestResourceName:
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextManifestResourceName(
                                                       v27,
                                                       ActivationContextInformation,
                                                       ActivationContextInformationLength,
                                                       ReturnLength);
      goto LABEL_19;
    default:
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() - internal coding error; missing switch statement branch for InfoClass == %lu\n",
        "RtlQueryInformationActivationContext",
        ActivationContextInformationClass);
      ActivationContextData = -1073741595;
      break;
  }
LABEL_81:
  if ( BaseAddress )
    LdrpDereferenceModule((char *)BaseAddress);
  return ActivationContextData;
}
