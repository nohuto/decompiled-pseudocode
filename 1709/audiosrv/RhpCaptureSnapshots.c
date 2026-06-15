/*
 * XREFs of RhpCaptureSnapshots @ 0x18006F260
 * Callers:
 *     ReportHangInternal2 @ 0x1800603FC (ReportHangInternal2.c)
 *     ReportHangInternal2_0 @ 0x18006F030 (ReportHangInternal2_0.c)
 * Callees:
 *     memset @ 0x180033A5A (memset.c)
 */

NTSTATUS __fastcall RhpCaptureSnapshots(_QWORD *a1, _QWORD *a2, NTSTATUS *a3, int a4, int *a5)
{
  NTSTATUS *v8; // rdi
  NTSTATUS result; // eax
  __int64 i; // rcx
  int *v11; // rdi
  void *v12; // rax
  void *v13; // rdx
  int v14; // eax
  void *v15; // rcx
  int v16; // edi
  void *ProcessHandle; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+28h] [rbp-20h] BYREF
  _CLIENT_ID ClientId; // [rsp+30h] [rbp-18h] BYREF
  int v20; // [rsp+68h] [rbp+20h] BYREF

  v20 = a4;
  memset(a1, 0, 0x80uLL);
  v8 = a3;
  *a2 = 0LL;
  a2[1] = 0LL;
  result = -1;
  for ( i = 16LL; i; --i )
    *v8++ = -1;
  v11 = a5;
  if ( *a5 )
  {
    result = RtlQueryResourcePolicy(0LL, 0LL, &v20, 4LL);
    if ( result < 0 || v20 > 10 )
    {
      v12 = (void *)*v11;
      ClientId.UniqueThread = 0LL;
      ClientId.UniqueProcess = v12;
      result = NtOpenProcess(&ProcessHandle, 0x4D0u, (POBJECT_ATTRIBUTES)&ObjectAttributes, &ClientId);
      *a3 = result;
      if ( result >= 0 )
      {
        v13 = ProcessHandle;
        *a1 = 0LL;
        v18 = 0LL;
        v14 = PssNtCaptureSnapshot(&v18, v13, 3690994175LL, 1048607LL);
        v15 = ProcessHandle;
        v16 = v14;
        *a3 = v14;
        result = NtClose(v15);
        if ( v16 >= 0 )
        {
          result = v18;
          *a1 = v18;
          *(_BYTE *)a2 = 8;
        }
      }
    }
    else
    {
      *a3 = -1073741801;
    }
  }
  return result;
}
