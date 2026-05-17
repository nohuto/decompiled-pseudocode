/*
 * XREFs of EtwSendNotification @ 0x1800081C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwTraceControl @ 0x18009E210 (ZwTraceControl.c)
 *     sub_1801076A4 @ 0x1801076A4 (sub_1801076A4.c)
 */

__int64 __fastcall EtwSendNotification(int *a1, int a2, char *a3, __int64 a4, __int64 a5)
{
  char v5; // bp
  int v8; // edi
  NTSTATUS v11; // eax
  int v12; // r8d
  ULONG v13; // ebx
  int v15; // r9d
  int v16; // r10d
  int v17; // r11d
  __int64 v18; // rbp
  char *v19; // rax
  char v20; // [rsp+58h] [rbp-D0h] BYREF

  v5 = *((_BYTE *)a1 + 12);
  v8 = a1[4];
  if ( v5 == 1 && !v8 )
    v8 = 60000;
  v11 = ZwTraceControl(17LL, a1, (unsigned int)a1[1]);
  if ( v11 )
    v13 = RtlNtStatusToDosError(v11);
  else
    v13 = 0;
  if ( v5 )
  {
    if ( !v13 )
    {
      v15 = a1[5];
      if ( v15 )
      {
        v16 = *a1;
        v17 = 120;
        v18 = *((_QWORD *)a1 + 3);
        v19 = &v20;
        if ( *a1 != 3 )
          v17 = a2;
        if ( v16 != 3 )
          v19 = a3;
        LOBYTE(v12) = v16 == 3;
        v13 = sub_1801076A4(v18, v8, v12, v15, (__int64)v19, v17, a4, a5, *a1);
        if ( v18 )
          ZwClose(v18);
      }
    }
  }
  return v13;
}
