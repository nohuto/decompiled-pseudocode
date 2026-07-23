/*
 * XREFs of RtlFindActivationContextSectionGuid @ 0x18003C960
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     sub_18003EFCC @ 0x18003EFCC (sub_18003EFCC.c)
 *     sub_18003F2EC @ 0x18003F2EC (sub_18003F2EC.c)
 *     sub_18003F5C0 @ 0x18003F5C0 (sub_18003F5C0.c)
 *     sub_18007EE7C @ 0x18007EE7C (sub_18007EE7C.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __cdecl RtlFindActivationContextSectionGuid(
        ULONG Flags,
        PGUID ExtensionGuid,
        ULONG SectionId,
        PGUID GuidToFind,
        PACTCTX_SECTION_KEYED_DATA ReturnedData)
{
  struct _TEB *v5; // r10
  PPEB ProcessEnvironmentBlock; // rax
  NTSTATUS result; // eax
  unsigned int v12; // esi
  _DWORD *v13; // rdi
  __int64 v14; // rbx
  void (__fastcall *v15)(__int64, __int64, _QWORD, _QWORD, _QWORD, _BYTE *); // rax
  _BYTE v16[4]; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v17; // [rsp+44h] [rbp-3Ch] BYREF
  _DWORD *v18; // [rsp+48h] [rbp-38h] BYREF
  __int64 v19; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v20[2]; // [rsp+58h] [rbp-28h] BYREF
  ULONG v21; // [rsp+68h] [rbp-18h]
  __int64 v22; // [rsp+6Ch] [rbp-14h]

  v5 = NtCurrentTeb();
  ProcessEnvironmentBlock = v5->ProcessEnvironmentBlock;
  if ( !ProcessEnvironmentBlock->ActivationContextData
    && !ProcessEnvironmentBlock->SystemDefaultActivationContextData
    && !v5->ActivationContextStackPointer->ActiveFrame )
  {
    return -1072365567;
  }
  v17 = 0;
  result = sub_18003F2EC(Flags, (_DWORD)ExtensionGuid, SectionId, (_DWORD)GuidToFind, (__int64)ReturnedData);
  if ( result >= 0 )
  {
    v20[0] = 32LL;
    v20[1] = ExtensionGuid;
    v21 = SectionId;
    v22 = 0LL;
    v19 = 0LL;
    result = sub_18003EFCC(v20, &v18, &v17, &v19);
    if ( result >= 0 )
      result = 0;
    if ( result >= 0 )
    {
      while ( 1 )
      {
        v12 = v17;
        if ( v17 < 0x28 )
        {
          v13 = v18;
LABEL_27:
          DbgPrintEx(
            0x33u,
            0,
            "RtlFindActivationContextSectionGuid() found section at %p (length %lu) which is not a GUID section\n",
            v13,
            v17);
          return -1072365565;
        }
        v13 = v18;
        if ( *v18 != 1682469703 )
          goto LABEL_27;
        result = sub_18003F5C0(v18, GuidToFind, ReturnedData);
        if ( result >= 0 )
          break;
        if ( result != -1072365560 )
          return result;
        result = sub_18003EFCC(v20, &v18, &v17, &v19);
        if ( result < 0 )
        {
          if ( result == -1072365567 )
            return -1072365560;
          return result;
        }
      }
      v14 = v19;
      if ( ((v19 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL )
      {
        v15 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, _BYTE *))(v19 + 32);
        if ( v15 )
        {
          if ( (*(_BYTE *)(v19 + 48) & 8) == 0 || (*(_BYTE *)(v19 + 80) & 8) == 0 )
          {
            v16[0] = 0;
            v15(3LL, v19, *(_QWORD *)(v19 + 24), *(_QWORD *)(v19 + 40), 0LL, v16);
            *(_DWORD *)(v14 + 48) |= 8u;
            if ( v16[0] )
              *(_DWORD *)(v14 + 80) |= 8u;
          }
        }
      }
      if ( !ReturnedData )
        return 0;
      result = sub_18007EE7C(Flags, ReturnedData, v14, v20, v13, v13[8], v13[9], v12);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
