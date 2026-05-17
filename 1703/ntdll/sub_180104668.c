/*
 * XREFs of sub_180104668 @ 0x180104668
 * Callers:
 *     EtwEventSetInformation @ 0x180019E30 (EtwEventSetInformation.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceControl @ 0x1800A8990 (ZwTraceControl.c)
 */

__int64 __fastcall sub_180104668(__int64 a1, char *a2)
{
  __int64 v2; // rdi
  char v3; // si
  ULONG v4; // ebx
  NTSTATUS v5; // eax

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
  v5 = ZwTraceControl();
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
