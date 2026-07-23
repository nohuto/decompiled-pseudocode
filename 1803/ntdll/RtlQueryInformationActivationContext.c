/*
 * XREFs of RtlQueryInformationActivationContext @ 0x180028A50
 * Callers:
 *     sub_180024CB8 @ 0x180024CB8 (sub_180024CB8.c)
 *     RtlQueueWorkItem @ 0x180057A90 (RtlQueueWorkItem.c)
 *     sub_18007C270 @ 0x18007C270 (sub_18007C270.c)
 *     RtlQueryInformationActiveActivationContext @ 0x1800803F0 (RtlQueryInformationActiveActivationContext.c)
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     sub_18000EF10 @ 0x18000EF10 (sub_18000EF10.c)
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_18001FA3C @ 0x18001FA3C (sub_18001FA3C.c)
 *     sub_180028FE8 @ 0x180028FE8 (sub_180028FE8.c)
 *     sub_180029098 @ 0x180029098 (sub_180029098.c)
 *     sub_1800435B4 @ 0x1800435B4 (sub_1800435B4.c)
 *     sub_180047B2C @ 0x180047B2C (sub_180047B2C.c)
 *     sub_180078F24 @ 0x180078F24 (sub_180078F24.c)
 *     sub_180079010 @ 0x180079010 (sub_180079010.c)
 *     sub_180079264 @ 0x180079264 (sub_180079264.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800D9DA0 @ 0x1800D9DA0 (sub_1800D9DA0.c)
 *     sub_1800DA028 @ 0x1800DA028 (sub_1800DA028.c)
 *     sub_1800DA2A8 @ 0x1800DA2A8 (sub_1800DA2A8.c)
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
  PACTIVATION_CONTEXT_STACK ActivationContextStackPointer; // rax
  __int64 v11; // rdx
  NTSTATUS v12; // ebx
  __int64 v13; // r10
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v19; // [rsp+40h] [rbp-88h]
  PVOID BaseAddress; // [rsp+48h] [rbp-80h] BYREF
  int v21; // [rsp+50h] [rbp-78h] BYREF
  int v22; // [rsp+54h] [rbp-74h]
  __int64 v23; // [rsp+58h] [rbp-70h] BYREF
  __int128 v24; // [rsp+60h] [rbp-68h] BYREF
  __int64 v25; // [rsp+70h] [rbp-58h]
  _DWORD v26[8]; // [rsp+78h] [rbp-50h] BYREF
  PACTIVATION_CONTEXT v27; // [rsp+D8h] [rbp+10h]

  v27 = ActivationContext;
  v8 = ActivationContext;
  memset(v26, 0, sizeof(v26));
  v23 = 0LL;
  BaseAddress = 0LL;
  v26[6] = 4;
  if ( ReturnLength )
    *ReturnLength = 0LL;
  if ( (Flags & 0x3FFFFFF8) != 0 )
    goto LABEL_51;
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
LABEL_44:
    v12 = -1073741585;
    goto LABEL_80;
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
    goto LABEL_80;
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
      goto LABEL_80;
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
    goto LABEL_80;
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
        v8 = v27;
      goto LABEL_13;
    }
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - caller asked to use active activation context but passed %p\n",
      "RtlQueryInformationActivationContext",
      v8);
LABEL_57:
    v12 = -1073741584;
    goto LABEL_80;
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
        goto LABEL_57;
      }
      if ( (unsigned __int64)v8 < *((_QWORD *)&xmmword_18016F4E0 + 1)
        || (unsigned __int64)v8 >= *((_QWORD *)&xmmword_18016F4E0 + 1) + (unsigned __int64)(unsigned int)qword_18016F4F0 )
      {
        sub_18000EF10(v8, (__int64)&v24);
      }
      else
      {
        v24 = xmmword_18016F4E0;
        v25 = qword_18016F4F0;
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
        goto LABEL_80;
      }
      v8 = (PACTIVATION_CONTEXT)*((_QWORD *)&v24 + 1);
      v27 = (PACTIVATION_CONTEXT)*((_QWORD *)&v24 + 1);
      goto LABEL_28;
    }
LABEL_51:
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - Caller passed invalid flags (0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      Flags);
    goto LABEL_44;
  }
LABEL_28:
  if ( !v8 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() - Caller asked to use activation context from hmodule but passed NULL\n",
      "RtlQueryInformationActivationContext");
    goto LABEL_57;
  }
  v16 = sub_18001FA3C((unsigned __int64)v8, (__int64 *)&BaseAddress, &v21);
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
      sub_1800435B4(0LL);
      v17 = v19;
      if ( *(_DWORD *)(*((_QWORD *)BaseAddress + 19) + 56LL) != 9 )
        v17 = -1073741515;
      v12 = v17;
      sub_180047B2C();
    }
    v8 = v27;
  }
  if ( v12 < 0 )
  {
    DbgPrintEx(0x33u, 0, "SXS: %s() - Caller passed invalid hmodule (%p)\n", "RtlQueryInformationActivationContext", v8);
    goto LABEL_80;
  }
  v8 = (PACTIVATION_CONTEXT)*((_QWORD *)BaseAddress + 17);
LABEL_13:
  v12 = sub_180028FE8(1LL, v8, (unsigned __int64)v26 & -(__int64)((Flags & 0x40000000) != 0), &v23);
  if ( v12 < 0 )
    goto LABEL_80;
  v13 = v23;
  if ( !v23 && (unsigned int)(ActivationContextInformationClass - 2) <= 5 )
    goto LABEL_44;
  v14 = (unsigned int)(ActivationContextInformationClass - 1);
  switch ( ActivationContextInformationClass )
  {
    case ActivationContextBasicInformation:
      v22 &= v14;
      if ( (Flags & 0x80000000) != 0 )
        v14 = (unsigned int)ActivationContextInformationClass;
      v22 = v14;
      v15 = sub_180029098(v14, v11, v23);
LABEL_19:
      v12 = v15;
      if ( v15 < 0 )
        break;
      goto LABEL_20;
    case ActivationContextDetailedInformation:
      v15 = sub_180079010(
              v23,
              v11,
              (_DWORD)ActivationContextInformation,
              ActivationContextInformationLength,
              (__int64)ReturnLength);
      goto LABEL_19;
    case AssemblyDetailedInformationInActivationContext:
      if ( SubInstanceIndex )
      {
        v15 = sub_1800D9DA0(
                v23,
                SubInstanceIndex->ulAssemblyIndex,
                (_DWORD)ActivationContextInformation,
                ActivationContextInformationLength,
                (__int64)ReturnLength);
        goto LABEL_19;
      }
      goto LABEL_77;
    case FileInformationInAssemblyOfAssemblyInActivationContext:
      if ( SubInstanceIndex )
      {
        v15 = sub_1800DA028(
                v23,
                (_DWORD)SubInstanceIndex,
                (_DWORD)ActivationContextInformation,
                ActivationContextInformationLength,
                (__int64)ReturnLength);
        goto LABEL_19;
      }
LABEL_77:
      v12 = -1073741811;
      break;
    case RunlevelInformationInActivationContext:
      if ( ActivationContextInformationLength >= 0xC )
      {
        *(_QWORD *)ActivationContextInformation = 0LL;
        *((_DWORD *)ActivationContextInformation + 2) = 0;
        v12 = sub_180078F24((unsigned int)(ActivationContextInformationClass - 5), v13, ActivationContextInformation);
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
      v15 = sub_180079264(v23, ActivationContextInformation, ActivationContextInformationLength, ReturnLength);
      goto LABEL_19;
    case ActivationContextManifestResourceName:
      v15 = sub_1800DA2A8(v23, ActivationContextInformation, ActivationContextInformationLength, ReturnLength);
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
LABEL_80:
  if ( BaseAddress )
    sub_18001F5FC((char *)BaseAddress);
  return v12;
}
