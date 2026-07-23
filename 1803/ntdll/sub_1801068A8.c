/*
 * XREFs of sub_1801068A8 @ 0x1801068A8
 * Callers:
 *     EtwEventSetInformation @ 0x180072750 (EtwEventSetInformation.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180008390 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceControl @ 0x18009E210 (ZwTraceControl.c)
 */

__int64 __fastcall sub_1801068A8(__int64 a1, char *a2)
{
  __int64 v2; // rdi
  char v3; // si
  unsigned __int32 v4; // ebx
  NTSTATUS v5; // eax
  ULONG ReturnLength; // [rsp+30h] [rbp-38h] BYREF
  __int64 InputBuffer; // [rsp+38h] [rbp-30h] BYREF
  char v9; // [rsp+40h] [rbp-28h]

  if ( !HIWORD(a1)
    || (v2 = a1 & 0xFFFFFFFFFFFFLL, (a1 & 1) != 0)
    || HIWORD(a1) != *(_WORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x60) )
  {
    v4 = 6;
    goto LABEL_11;
  }
  v3 = *a2;
  if ( (unsigned __int8)*a2 >= 2u )
  {
    v4 = 87;
LABEL_11:
    RtlSetLastWin32Error(v4);
    return v4;
  }
  InputBuffer = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x58);
  v9 = v3;
  v5 = ZwTraceControl(EtwUseDescriptorTypeCode, &InputBuffer, 0x10u, 0LL, 0, &ReturnLength);
  if ( v5 )
  {
    v4 = RtlNtStatusToDosError(v5);
    if ( v4 )
      goto LABEL_11;
  }
  else
  {
    v4 = 0;
  }
  *(_WORD *)(v2 + 98) &= ~0x4000u;
  *(_WORD *)(v2 + 98) |= (v3 & 1) << 14;
  return v4;
}
