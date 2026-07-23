/*
 * XREFs of RtlFindActivationContextSectionString @ 0x18003F770
 * Callers:
 *     sub_18003F37C @ 0x18003F37C (sub_18003F37C.c)
 *     sub_18007B4A8 @ 0x18007B4A8 (sub_18007B4A8.c)
 * Callees:
 *     RtlAddRefActivationContext @ 0x1800184D0 (RtlAddRefActivationContext.c)
 *     sub_18003F9CC @ 0x18003F9CC (sub_18003F9CC.c)
 *     sub_18003FCD8 @ 0x18003FCD8 (sub_18003FCD8.c)
 *     sub_18003FF6C @ 0x18003FF6C (sub_18003FF6C.c)
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 *     sub_180084014 @ 0x180084014 (sub_180084014.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __cdecl RtlFindActivationContextSectionString(
        ULONG Flags,
        PGUID ExtensionGuid,
        ULONG SectionId,
        PUNICODE_STRING StringToFind,
        PACTCTX_SECTION_KEYED_DATA ReturnedData)
{
  struct _TEB *v5; // r10
  PPEB ProcessEnvironmentBlock; // rax
  NTSTATUS result; // eax
  unsigned int v12; // edi
  PACTIVATION_CONTEXT v13; // rbx
  _DWORD *v14; // rsi
  void (__fastcall *v15)(__int64, PACTIVATION_CONTEXT, PVOID, _QWORD, _QWORD, _BYTE *); // rax
  _BYTE v16[4]; // [rsp+48h] [rbp-11h] BYREF
  unsigned int v17; // [rsp+4Ch] [rbp-Dh] BYREF
  _DWORD *v18; // [rsp+50h] [rbp-9h] BYREF
  int v19; // [rsp+58h] [rbp-1h] BYREF
  int v20; // [rsp+5Ch] [rbp+3h] BYREF
  _ACTIVATION_CONTEXT *v21; // [rsp+60h] [rbp+7h] BYREF
  PACTIVATION_CONTEXT ActivationContext; // [rsp+68h] [rbp+Fh] BYREF
  unsigned int v23; // [rsp+70h] [rbp+17h] BYREF
  ULONG v24; // [rsp+74h] [rbp+1Bh]
  PGUID v25; // [rsp+78h] [rbp+1Fh]
  ULONG v26; // [rsp+80h] [rbp+27h]
  int v27; // [rsp+84h] [rbp+2Bh]
  int v28; // [rsp+88h] [rbp+2Fh]

  v5 = NtCurrentTeb();
  ProcessEnvironmentBlock = v5->ProcessEnvironmentBlock;
  if ( !ProcessEnvironmentBlock->ActivationContextData
    && !ProcessEnvironmentBlock->SystemDefaultActivationContextData
    && !v5->ActivationContextStackPointer->ActiveFrame )
  {
    return -1072365567;
  }
  v19 = 0;
  v20 = -1;
  v17 = 0;
  result = sub_18003FF6C(Flags, (_DWORD)ExtensionGuid, SectionId, (_DWORD)StringToFind, (__int64)ReturnedData);
  if ( result >= 0 )
  {
    v28 = 0;
    v26 = SectionId;
    v23 = 32;
    v24 = Flags;
    v25 = ExtensionGuid;
    v21 = 0LL;
    if ( (Flags & 0xFFFFFFF8) != 0 )
    {
      return -1073741811;
    }
    else
    {
      v27 = 0;
      result = sub_18003F9CC(&v23, &v18, &v17, &v21);
      v12 = v17;
      v13 = v21;
      if ( result >= 0 )
      {
        while ( 1 )
        {
          v14 = v18;
          if ( v12 < 0x2C || *v18 != 1682469715 )
          {
            DbgPrintEx(
              0x33u,
              0,
              "RtlFindActivationContextSectionString() found section at %p (length %lu) which is not a string section\n",
              v18,
              v12);
            return -1072365565;
          }
          result = sub_18003FCD8(v18, v12, StringToFind, ReturnedData, &v20, &v19);
          if ( result >= 0 )
            break;
          if ( result != -1072365560 )
            return result;
          ActivationContext = 0LL;
          if ( v23 < 0x20 || (v24 & 0xFFFFFFF8) != 0 )
          {
            result = -1073741811;
LABEL_12:
            if ( result == -1072365567 )
              return -1072365560;
            return result;
          }
          result = sub_18003F9CC(&v23, &v18, &v17, &ActivationContext);
          if ( result < 0 )
            goto LABEL_12;
          v13 = ActivationContext;
          RtlAddRefActivationContext(ActivationContext);
          v12 = v17;
        }
        if ( (((unsigned __int64)&v13[-1].InlineStorageMapEntries[31] + 7) | 7) != 0xFFFFFFFFFFFFFFFFuLL )
        {
          v15 = *(void (__fastcall **)(__int64, PACTIVATION_CONTEXT, PVOID, _QWORD, _QWORD, _BYTE *))v13->SentNotifications;
          if ( v15 )
          {
            if ( (v13->SentNotifications[4] & 8) == 0 || (v13->DisabledNotifications[4] & 8) == 0 )
            {
              v16[0] = 0;
              v15(3LL, v13, v13->NotificationContext, *(_QWORD *)&v13->SentNotifications[2], 0LL, v16);
              v13->SentNotifications[4] |= 8u;
              if ( v16[0] )
                v13->DisabledNotifications[4] |= 8u;
            }
          }
        }
        if ( !ReturnedData )
          return 0;
        result = sub_180084014(Flags, ReturnedData, v13, &v23, v14, v14[9], v14[10], v12);
        if ( result >= 0 )
          return 0;
      }
    }
  }
  return result;
}
