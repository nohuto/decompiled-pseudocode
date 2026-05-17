/*
 * XREFs of EtwSendNotification @ 0x18005F750
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000359C @ 0x18000359C (sub_18000359C.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwTraceControl @ 0x1800A8990 (ZwTraceControl.c)
 */

__int64 __fastcall EtwSendNotification(__int64 a1, unsigned int a2, char *a3, unsigned int *a4, _DWORD *a5)
{
  char v5; // bp
  unsigned int v8; // esi
  NTSTATUS v11; // eax
  unsigned int v12; // ebx
  unsigned int v14; // r9d
  char v15; // r8
  __int64 v16; // rbp
  _BYTE v17[8]; // [rsp+50h] [rbp-D8h] BYREF
  char v18; // [rsp+58h] [rbp-D0h] BYREF

  v5 = *(_BYTE *)(a1 + 12);
  v8 = *(_DWORD *)(a1 + 16);
  if ( v5 == 1 && !v8 )
    v8 = 60000;
  v11 = ZwTraceControl(17LL, a1, *(unsigned int *)(a1 + 4), a1, 72, v17);
  if ( v11 )
    v12 = RtlNtStatusToDosError(v11);
  else
    v12 = 0;
  if ( v5 )
  {
    v14 = *(_DWORD *)(a1 + 20);
    if ( !v12 )
    {
      if ( v14 )
      {
        v15 = 0;
        v16 = *(_QWORD *)(a1 + 24);
        if ( *(_DWORD *)a1 == 3 )
        {
          v15 = 1;
          a3 = &v18;
          a2 = 120;
        }
        v12 = sub_18000359C(v16, v8, v15, v14, (__int64)a3, a2, a4, a5, *(_DWORD *)a1);
        if ( v16 )
          ZwClose(v16);
      }
    }
  }
  return v12;
}
