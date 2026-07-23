/*
 * XREFs of RtlQueryInformationActivationContext @ 0x180017DF0
 * Callers:
 *     RtlQueueWorkItem @ 0x180012480 (RtlQueueWorkItem.c)
 *     sub_180017B34 @ 0x180017B34 (sub_180017B34.c)
 *     sub_180081AF4 @ 0x180081AF4 (sub_180081AF4.c)
 *     RtlQueryInformationActiveActivationContext @ 0x180085B90 (RtlQueryInformationActiveActivationContext.c)
 * Callees:
 *     sub_1800183AC @ 0x1800183AC (sub_1800183AC.c)
 *     sub_180018440 @ 0x180018440 (sub_180018440.c)
 *     sub_18001A338 @ 0x18001A338 (sub_18001A338.c)
 *     sub_18001AE14 @ 0x18001AE14 (sub_18001AE14.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_180030264 @ 0x180030264 (sub_180030264.c)
 *     sub_180034A40 @ 0x180034A40 (sub_180034A40.c)
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 *     sub_18007E938 @ 0x18007E938 (sub_18007E938.c)
 *     sub_18007EA24 @ 0x18007EA24 (sub_18007EA24.c)
 *     sub_18007EC78 @ 0x18007EC78 (sub_18007EC78.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800E0520 @ 0x1800E0520 (sub_1800E0520.c)
 *     sub_1800E07A8 @ 0x1800E07A8 (sub_1800E07A8.c)
 *     sub_1800E0A28 @ 0x1800E0A28 (sub_1800E0A28.c)
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
  signed int v9; // ebx
  PACTIVATION_CONTEXT_STACK ActivationContextStackPointer; // rax
  __int64 v11; // rdx
  NTSTATUS v12; // ebx
  __int64 v13; // r10
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v19; // [rsp+40h] [rbp-98h]
  PVOID BaseAddress; // [rsp+48h] [rbp-90h] BYREF
  int v21; // [rsp+50h] [rbp-88h] BYREF
  int v22; // [rsp+54h] [rbp-84h]
  __int64 v23; // [rsp+58h] [rbp-80h] BYREF
  __int128 v24; // [rsp+60h] [rbp-78h]
  __int64 v25; // [rsp+70h] [rbp-68h]
  _DWORD v26[8]; // [rsp+78h] [rbp-60h] BYREF
  PACTIVATION_CONTEXT v28; // [rsp+E8h] [rbp+10h]

  v28 = ActivationContext;
  v8 = ActivationContext;
  v9 = Flags;
  memset(v26, 0, sizeof(v26));
  v23 = 0LL;
  BaseAddress = 0LL;
  v26[6] = 4;
  if ( ReturnLength )
    *ReturnLength = 0LL;
  if ( (v9 & 0x3FFFFFF8) != 0 )
    goto LABEL_51;
  if ( v9 < 0
    && (((ActivationContextInformationClass - 1) & 0xFFFFFFFA) != 0
     || ActivationContextInformationClass == ActivationContextDetailedInformation) )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - Caller passed meaningless flags/class combination (0x%08lx/0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      v9,
      ActivationContextInformationClass);
    goto LABEL_53;
  }
  if ( (unsigned int)(ActivationContextInformationClass - 1) > 6 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - caller asked for unknown information class %lu\n",
      "RtlQueryInformationActivationContext",
      ActivationContextInformationClass);
    v12 = -1073741583;
    goto LABEL_82;
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
      v12 = -1073741582;
      goto LABEL_82;
    }
  }
  else if ( !ReturnLength )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - caller supplied no buffer to populate and no place to return required byte count\n",
      "RtlQueryInformationActivationContext");
    v12 = -1073741580;
    goto LABEL_82;
  }
  if ( (v9 & 7) == 0 )
    goto LABEL_13;
  if ( (v9 & 7) == 1 )
  {
    if ( !v8 )
    {
      ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
      if ( ActivationContextStackPointer->ActiveFrame )
        v8 = ActivationContextStackPointer->ActiveFrame->ActivationContext;
      else
        v8 = v28;
      goto LABEL_13;
    }
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - caller asked to use active activation context but passed %p\n",
      "RtlQueryInformationActivationContext",
      v8);
LABEL_59:
    v12 = -1073741584;
    goto LABEL_82;
  }
  if ( (v9 & 7) != 2 )
  {
    if ( (v9 & 7) == 4 )
    {
      if ( !v8 )
      {
        DbgPrintEx(
          0x33u,
          0,
          "SXS: %s() - Caller asked to use activation context from address in .dll but passed NULL\n",
          "RtlQueryInformationActivationContext");
        goto LABEL_59;
      }
      if ( (unsigned __int64)v8 < *((_QWORD *)&xmmword_18016B4C0 + 1)
        || (unsigned __int64)v8 >= *((_QWORD *)&xmmword_18016B4C0 + 1) + (unsigned __int64)(unsigned int)qword_18016B4D0 )
      {
        sub_180034A40(v8);
      }
      else
      {
        v24 = xmmword_18016B4C0;
        v25 = qword_18016B4D0;
      }
      if ( !*((_QWORD *)&v24 + 1) )
      {
        DbgPrintEx(
          0x33u,
          0,
          "SXS: %s() - Caller passed invalid address, not in any .dll (%p)\n",
          "RtlQueryInformationActivationContext",
          v8);
        v12 = -1073741515;
        goto LABEL_82;
      }
      v8 = (PACTIVATION_CONTEXT)*((_QWORD *)&v24 + 1);
      v28 = (PACTIVATION_CONTEXT)*((_QWORD *)&v24 + 1);
      goto LABEL_28;
    }
LABEL_51:
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - Caller passed invalid flags (0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      v9);
LABEL_53:
    v12 = -1073741585;
    goto LABEL_82;
  }
LABEL_28:
  if ( !v8 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - Caller asked to use activation context from hmodule but passed NULL\n",
      "RtlQueryInformationActivationContext");
    goto LABEL_59;
  }
  v16 = sub_180030264(v8, &BaseAddress, &v21);
  v12 = v16;
  v19 = v16;
  if ( v16 >= 0 && v21 < 5 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v12 = v16;
    }
    else
    {
      sub_18001AE14(0LL);
      v17 = v19;
      if ( *(_DWORD *)(*((_QWORD *)BaseAddress + 19) + 56LL) != 9 )
        v17 = -1073741515;
      v12 = v17;
      sub_18001A338();
    }
    v8 = v28;
  }
  if ( v12 < 0 )
  {
    DbgPrintEx(0x33u, 0, "SXS: %s() - Caller passed invalid hmodule (%p)\n", "RtlQueryInformationActivationContext", v8);
    goto LABEL_82;
  }
  v8 = (PACTIVATION_CONTEXT)*((_QWORD *)BaseAddress + 17);
  v9 = Flags;
LABEL_13:
  v12 = sub_1800183AC(1LL, v8, (unsigned __int64)v26 & -(__int64)((v9 & 0x40000000) != 0), &v23);
  if ( v12 < 0 )
    goto LABEL_82;
  v13 = v23;
  if ( !v23 && (unsigned int)(ActivationContextInformationClass - 2) <= 5 )
    goto LABEL_53;
  v14 = (unsigned int)(ActivationContextInformationClass - 1);
  switch ( ActivationContextInformationClass )
  {
    case ActivationContextBasicInformation:
      v22 &= v14;
      if ( (int)Flags < (int)v14 )
        v14 = 1LL;
      v22 = v14;
      v15 = sub_180018440(v14, v11, v23);
LABEL_19:
      v12 = v15;
      if ( v15 < 0 )
        break;
      goto LABEL_20;
    case ActivationContextDetailedInformation:
      v15 = sub_18007EA24(
              v23,
              v11,
              (_DWORD)ActivationContextInformation,
              ActivationContextInformationLength,
              (__int64)ReturnLength);
      goto LABEL_19;
    case AssemblyDetailedInformationInActivationContext:
      if ( SubInstanceIndex )
      {
        v15 = sub_1800E0520(
                v23,
                SubInstanceIndex->ulAssemblyIndex,
                (_DWORD)ActivationContextInformation,
                ActivationContextInformationLength,
                (__int64)ReturnLength);
        goto LABEL_19;
      }
      goto LABEL_79;
    case FileInformationInAssemblyOfAssemblyInActivationContext:
      if ( SubInstanceIndex )
      {
        v15 = sub_1800E07A8(
                v23,
                (_DWORD)SubInstanceIndex,
                (_DWORD)ActivationContextInformation,
                ActivationContextInformationLength,
                (__int64)ReturnLength);
        goto LABEL_19;
      }
LABEL_79:
      v12 = -1073741811;
      break;
    case RunlevelInformationInActivationContext:
      if ( ActivationContextInformationLength >= 0xC )
      {
        *(_QWORD *)ActivationContextInformation = 0LL;
        *((_DWORD *)ActivationContextInformation + 2) = 0;
        v12 = sub_18007E938((unsigned int)(ActivationContextInformationClass - 5), v13, ActivationContextInformation);
        if ( v12 < 0 )
          break;
        if ( ReturnLength )
          *ReturnLength = 12LL;
LABEL_20:
        v12 = 0;
        break;
      }
      v12 = -1073741789;
      if ( ReturnLength )
        *ReturnLength = 12LL;
      break;
    case CompatibilityInformationInActivationContext:
      v15 = sub_18007EC78(v23, ActivationContextInformation, ActivationContextInformationLength, ReturnLength);
      goto LABEL_19;
    case ActivationContextManifestResourceName:
      v15 = sub_1800E0A28(v23, ActivationContextInformation, ActivationContextInformationLength, ReturnLength);
      goto LABEL_19;
    default:
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() - internal coding error; missing switch statement branch for InfoClass == %lu\n",
        "RtlQueryInformationActivationContext",
        ActivationContextInformationClass);
      v12 = -1073741595;
      break;
  }
LABEL_82:
  if ( BaseAddress )
    sub_18003015C(BaseAddress);
  return v12;
}
