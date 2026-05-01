/*
 * XREFs of ?RmpSystemQueryActivityHostPeakPrivateCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180041190
 * Callers:
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000DE10 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall RmpSystemQueryActivityHostPeakPrivateCommit(struct _RM_ACTIVITY_HOST *a1, unsigned __int64 *a2)
{
  int v3; // ecx
  NTSTATUS result; // eax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // [rsp+40h] [rbp-28h] BYREF
  _BYTE JobInformation[8]; // [rsp+48h] [rbp-20h] BYREF
  unsigned __int64 v9; // [rsp+50h] [rbp-18h]

  v3 = *((_DWORD *)a1 + 14);
  if ( v3 )
  {
    if ( v3 != 1 )
      return -1073741585;
    result = NtQueryInformationJobObject(*((HANDLE *)a1 + 117), MaxJobObjectInfoClass|0x10, JobInformation, 0x10u, 0LL);
    if ( result >= 0 )
    {
      v6 = v9;
LABEL_10:
      *a2 = v6;
      return 0;
    }
  }
  else
  {
    result = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, _QWORD, unsigned __int64 *))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL) + 104LL))(
               (char *)a1 + 552,
               *((unsigned int *)a1 + 155),
               (char *)a1 + 88,
               *((unsigned int *)a1 + 156),
               *((_QWORD *)a1 + 3),
               0LL,
               &v7);
    if ( result >= 0 )
      result = 0;
    if ( result >= 0 )
    {
      v6 = v7;
      goto LABEL_10;
    }
  }
  return result;
}
