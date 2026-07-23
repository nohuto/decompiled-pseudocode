/*
 * XREFs of LdrInitializeEnclave @ 0x1800C9810
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     sub_18001EE04 @ 0x18001EE04 (sub_18001EE04.c)
 *     ZwInitializeEnclave @ 0x18009C990 (ZwInitializeEnclave.c)
 *     ZwTerminateEnclave @ 0x18009E170 (ZwTerminateEnclave.c)
 *     sub_18009E970 @ 0x18009E970 (sub_18009E970.c)
 *     sub_1800C9DEC @ 0x1800C9DEC (sub_1800C9DEC.c)
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
  v10 = sub_18001EE04((unsigned __int64)BaseAddress, 1);
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
  v9 = sub_18009E970((LPVOID (__cdecl *)(LPVOID))v11[8], 0LL, 0, &v13);
  if ( v9 < 0 )
    ZwTerminateEnclave((PVOID)v11[8], 0);
  else
    *((_DWORD *)v11 + 15) = 2;
LABEL_10:
  if ( v11 )
  {
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v11 + 2));
    sub_1800C9DEC(v11);
  }
  return v9;
}
