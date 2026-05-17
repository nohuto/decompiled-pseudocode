/*
 * XREFs of EtwSendNotification @ 0x1800192A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtTraceControl @ 0x1800A37D0 (NtTraceControl.c)
 *     EtwpReceiveReplyDataBlock @ 0x180109F34 (EtwpReceiveReplyDataBlock.c)
 */

__int64 __fastcall EtwSendNotification(__int64 a1, int a2, char *a3, __int64 a4, __int64 a5)
{
  char v5; // bp
  int v8; // esi
  NTSTATUS v11; // eax
  int v12; // r8d
  ULONG v13; // ebx
  int v15; // r9d
  void *v16; // rbp
  char v17; // [rsp+58h] [rbp-D0h] BYREF

  v5 = *(_BYTE *)(a1 + 12);
  v8 = *(_DWORD *)(a1 + 16);
  if ( v5 == 1 && !v8 )
    v8 = 60000;
  v11 = NtTraceControl(17LL, a1, *(unsigned int *)(a1 + 4));
  if ( v11 )
    v13 = RtlNtStatusToDosError(v11);
  else
    v13 = 0;
  if ( v5 )
  {
    if ( !v13 )
    {
      v15 = *(_DWORD *)(a1 + 20);
      if ( v15 )
      {
        LOBYTE(v12) = 0;
        v16 = *(void **)(a1 + 24);
        if ( *(_DWORD *)a1 == 3 )
        {
          LOBYTE(v12) = 1;
          a3 = &v17;
          a2 = 120;
        }
        v13 = EtwpReceiveReplyDataBlock((_DWORD)v16, v8, v12, v15, (__int64)a3, a2, a4, a5, *(_DWORD *)a1);
        if ( v16 )
          NtClose(v16);
      }
    }
  }
  return v13;
}
