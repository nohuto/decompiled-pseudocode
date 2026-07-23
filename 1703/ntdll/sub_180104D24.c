/*
 * XREFs of sub_180104D24 @ 0x180104D24
 * Callers:
 *     sub_180051D04 @ 0x180051D04 (sub_180051D04.c)
 * Callees:
 *     ZwTraceControl @ 0x1800A8990 (ZwTraceControl.c)
 */

NTSTATUS __fastcall sub_180104D24(__int16 a1, _QWORD *a2, _WORD *a3)
{
  NTSTATUS result; // eax
  unsigned int v6; // [rsp+30h] [rbp-18h] BYREF
  __int16 v7; // [rsp+34h] [rbp-14h]
  __int16 v8; // [rsp+50h] [rbp+8h] BYREF
  ULONG v9; // [rsp+68h] [rbp+20h] BYREF

  v8 = a1;
  result = ZwTraceControl(EtwRegisterPrivateSession, &v8, 2u, &v6, 8u, &v9);
  if ( !result )
  {
    *a2 = v6;
    *a3 = v7;
  }
  return result;
}
