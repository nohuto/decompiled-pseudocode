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

__int64 __fastcall RtlQueryInformationActivationContext(
        int a1,
        struct _ACTIVATION_CONTEXT *a2,
        _DWORD *a3,
        int a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  struct _ACTIVATION_CONTEXT *ActivationContext; // rdi
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  int v11; // edx
  int ActivationContextData; // ebx
  int v13; // r9d
  __int64 v14; // r10
  int v15; // ecx
  int InformationActivationContextBasicInformation; // eax
  int LoadedDllByHandle; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // eax
  int v24; // [rsp+40h] [rbp-88h]
  __int64 v25; // [rsp+48h] [rbp-80h] BYREF
  int v26; // [rsp+50h] [rbp-78h] BYREF
  int v27; // [rsp+54h] [rbp-74h]
  __int64 v28; // [rsp+58h] [rbp-70h] BYREF
  __int128 v29; // [rsp+60h] [rbp-68h] BYREF
  __int64 v30; // [rsp+70h] [rbp-58h]
  _DWORD v31[8]; // [rsp+78h] [rbp-50h] BYREF
  struct _ACTIVATION_CONTEXT *v32; // [rsp+D8h] [rbp+10h]

  v32 = a2;
  ActivationContext = a2;
  memset(v31, 0, sizeof(v31));
  v28 = 0LL;
  v25 = 0LL;
  v31[6] = 4;
  if ( a7 )
    *a7 = 0LL;
  if ( (a1 & 0x3FFFFFF8) != 0 )
    goto LABEL_52;
  if ( a1 < 0 && (((a4 - 1) & 0xFFFFFFFA) != 0 || a4 == 2) )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - Caller passed meaningless flags/class combination (0x%08lx/0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      a1,
      a4);
    goto LABEL_54;
  }
  if ( (unsigned int)(a4 - 1) > 6 )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - caller asked for unknown information class %lu\n",
      "RtlQueryInformationActivationContext",
      a4);
    ActivationContextData = -1073741583;
    goto LABEL_81;
  }
  if ( a6 )
  {
    if ( !a5 )
    {
      DbgPrintEx(
        51LL,
        0LL,
        "SXS: %s() - caller passed nonzero buffer length but NULL buffer pointer\n",
        "RtlQueryInformationActivationContext");
      ActivationContextData = -1073741582;
      goto LABEL_81;
    }
  }
  else if ( !a7 )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - caller supplied no buffer to populate and no place to return required byte count\n",
      "RtlQueryInformationActivationContext");
    ActivationContextData = -1073741580;
    goto LABEL_81;
  }
  if ( (a1 & 7) == 0 )
    goto LABEL_13;
  if ( (a1 & 7) == 1 )
  {
    if ( !ActivationContext )
    {
      ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
      if ( ActivationContextStackPointer->ActiveFrame )
        ActivationContext = ActivationContextStackPointer->ActiveFrame->ActivationContext;
      else
        ActivationContext = v32;
      goto LABEL_13;
    }
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - caller asked to use active activation context but passed %p\n",
      "RtlQueryInformationActivationContext",
      ActivationContext);
LABEL_60:
    ActivationContextData = -1073741584;
    goto LABEL_81;
  }
  if ( (a1 & 7) != 2 )
  {
    if ( (a1 & 7) == 4 )
    {
      if ( !ActivationContext )
      {
        DbgPrintEx(
          51LL,
          0LL,
          "SXS: %s() - Caller asked to use activation context from address in .dll but passed NULL\n",
          "RtlQueryInformationActivationContext");
        goto LABEL_60;
      }
      if ( (unsigned __int64)ActivationContext < *((_QWORD *)&xmmword_18016F4D0 + 1)
        || (unsigned __int64)ActivationContext >= *((_QWORD *)&xmmword_18016F4D0 + 1)
                                                + (unsigned __int64)(unsigned int)qword_18016F4E0 )
      {
        RtlpxLookupFunctionTable((unsigned __int64)ActivationContext, (__int64)&v29);
      }
      else
      {
        v29 = xmmword_18016F4D0;
        v30 = qword_18016F4E0;
      }
      if ( !*((_QWORD *)&v29 + 1) )
      {
        DbgPrintEx(
          51LL,
          0LL,
          "SXS: %s() - Caller passed invalid address, not in any .dll (%p)\n",
          "RtlQueryInformationActivationContext",
          ActivationContext);
        ActivationContextData = -1073741515;
        goto LABEL_81;
      }
      ActivationContext = (struct _ACTIVATION_CONTEXT *)*((_QWORD *)&v29 + 1);
      v32 = (struct _ACTIVATION_CONTEXT *)*((_QWORD *)&v29 + 1);
      goto LABEL_28;
    }
LABEL_52:
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - Caller passed invalid flags (0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      a1);
LABEL_54:
    ActivationContextData = -1073741585;
    goto LABEL_81;
  }
LABEL_28:
  if ( !ActivationContext )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - Caller asked to use activation context from hmodule but passed NULL\n",
      "RtlQueryInformationActivationContext");
    goto LABEL_60;
  }
  LoadedDllByHandle = LdrpFindLoadedDllByHandle((__int64)ActivationContext, &v25, &v26);
  ActivationContextData = LoadedDllByHandle;
  v24 = LoadedDllByHandle;
  if ( LoadedDllByHandle >= 0 && v26 < 5 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      ActivationContextData = LoadedDllByHandle;
    }
    else
    {
      LdrpDrainWorkQueue(0LL);
      v21 = *(_QWORD *)(v25 + 152);
      v22 = v24;
      if ( *(_DWORD *)(v21 + 56) != 9 )
        v22 = -1073741515;
      ActivationContextData = v22;
      LdrpDropLastInProgressCount(v21, v18, v19, v20);
    }
    ActivationContext = v32;
  }
  if ( ActivationContextData < 0 )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - Caller passed invalid hmodule (%p)\n",
      "RtlQueryInformationActivationContext",
      ActivationContext);
    goto LABEL_81;
  }
  ActivationContext = *(struct _ACTIVATION_CONTEXT **)(v25 + 136);
LABEL_13:
  ActivationContextData = RtlpGetActivationContextData(
                            1LL,
                            ActivationContext,
                            (unsigned __int64)v31 & -(__int64)((a1 & 0x40000000) != 0),
                            &v28);
  if ( ActivationContextData < 0 )
    goto LABEL_81;
  v14 = v28;
  if ( !v28 && (unsigned int)(a4 - 2) <= 5 )
    goto LABEL_54;
  v15 = a4 - 1;
  switch ( a4 )
  {
    case 1:
      v27 &= v15;
      if ( a1 < 0 )
        v15 = a4;
      v27 = v15;
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextBasicInformation(
                                                       v15,
                                                       v11,
                                                       v28,
                                                       v13,
                                                       a5,
                                                       a6,
                                                       (__int64)a7);
LABEL_19:
      ActivationContextData = InformationActivationContextBasicInformation;
      if ( InformationActivationContextBasicInformation < 0 )
        break;
      goto LABEL_20;
    case 2:
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextDetailedInformation(
                                                       v28,
                                                       v11,
                                                       a5,
                                                       a6,
                                                       (__int64)a7);
      goto LABEL_19;
    case 3:
      if ( a3 )
      {
        InformationActivationContextBasicInformation = RtlpQueryAssemblyInformationActivationContextDetailedInformation(
                                                         v28,
                                                         *a3,
                                                         a5,
                                                         a6,
                                                         (__int64)a7);
        goto LABEL_19;
      }
      goto LABEL_78;
    case 4:
      if ( a3 )
      {
        InformationActivationContextBasicInformation = RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation(
                                                         v28,
                                                         (_DWORD)a3,
                                                         a5,
                                                         a6,
                                                         (__int64)a7);
        goto LABEL_19;
      }
LABEL_78:
      ActivationContextData = -1073741811;
      break;
    case 5:
      if ( a6 >= 0xC )
      {
        *(_QWORD *)a5 = 0LL;
        *(_DWORD *)(a5 + 8) = 0;
        ActivationContextData = RtlpQueryRunLevel((unsigned int)(a4 - 5), v14, a5);
        if ( ActivationContextData < 0 )
          break;
        if ( a7 )
          *a7 = 12LL;
LABEL_20:
        ActivationContextData = 0;
        break;
      }
      ActivationContextData = -1073741789;
      if ( a7 )
        *a7 = 12LL;
      break;
    case 6:
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextCompatibilityInformation(
                                                       v28,
                                                       a5,
                                                       a6,
                                                       a7);
      goto LABEL_19;
    case 7:
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextManifestResourceName(
                                                       v28,
                                                       a5,
                                                       a6,
                                                       a7);
      goto LABEL_19;
    default:
      DbgPrintEx(
        51LL,
        0LL,
        "SXS: %s() - internal coding error; missing switch statement branch for InfoClass == %lu\n",
        "RtlQueryInformationActivationContext",
        a4);
      ActivationContextData = -1073741595;
      break;
  }
LABEL_81:
  if ( v25 )
    LdrpDereferenceModule(v25);
  return (unsigned int)ActivationContextData;
}
