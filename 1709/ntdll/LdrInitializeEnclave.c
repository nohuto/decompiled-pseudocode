/*
 * XREFs of LdrInitializeEnclave @ 0x1800D00E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     LdrpObtainLockedEnclave @ 0x180047BC0 (LdrpObtainLockedEnclave.c)
 *     ZwInitializeEnclave @ 0x1800A1F70 (ZwInitializeEnclave.c)
 *     NtTerminateEnclave @ 0x1800A3730 (NtTerminateEnclave.c)
 *     RtlCallEnclave @ 0x1800A3F30 (RtlCallEnclave.c)
 *     LdrpDereferenceEnclave @ 0x1800D06BC (LdrpDereferenceEnclave.c)
 */

NTSTATUS __cdecl LdrInitializeEnclave(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  int v9; // edi
  __int64 *v10; // rax
  __int64 *v11; // rbx
  PVOID v13; // [rsp+30h] [rbp-28h] BYREF

  v9 = 0;
  v10 = LdrpObtainLockedEnclave((unsigned __int64)BaseAddress, 1);
  v11 = v10;
  if ( v10 && *((_DWORD *)v10 + 15) )
  {
    if ( *((_DWORD *)v10 + 15) != 1 )
    {
      v9 = -1073741502;
      goto LABEL_10;
    }
  }
  else
  {
    v9 = ZwInitializeEnclave(ProcessHandle, BaseAddress, EnclaveInformation, EnclaveInformationLength, EnclaveError);
    if ( v9 < 0 )
      goto LABEL_10;
  }
  if ( !v11 )
    return v9;
  *((_DWORD *)v11 + 15) = 1;
  v13 = 0LL;
  v9 = RtlCallEnclave((LPVOID (__cdecl *)(LPVOID))v11[8], 0LL, 0, &v13);
  if ( v9 < 0 )
    NtTerminateEnclave((PVOID)v11[8], 0);
  else
    *((_DWORD *)v11 + 15) = 2;
LABEL_10:
  if ( v11 )
  {
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v11 + 2));
    LdrpDereferenceEnclave(v11);
  }
  return v9;
}
