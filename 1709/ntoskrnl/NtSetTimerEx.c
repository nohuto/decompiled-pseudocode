/*
 * XREFs of NtSetTimerEx @ 0x1400E17C0
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x1400B0710 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1400B526C (PoCaptureReasonContext.c)
 *     ExpSetTimer @ 0x1400E1930 (ExpSetTimer.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtSetTimerEx(int a1, __int64 a2, _OWORD *a3, unsigned int a4)
{
  _OWORD *v4; // rbx
  char PreviousMode; // di
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 result; // rax
  char v12[8]; // [rsp+50h] [rbp-48h] BYREF
  PVOID P; // [rsp+58h] [rbp-40h] BYREF
  _OWORD v14[3]; // [rsp+60h] [rbp-38h] BYREF

  v4 = a3;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && a4 )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (unsigned __int64)a3 + a4;
    if ( v7 > 0x7FFFFFFF0000LL || v7 < (unsigned __int64)a3 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( (_DWORD)a2 )
    return 3221225475LL;
  if ( a4 != 48 )
    return 3221225476LL;
  if ( PreviousMode )
  {
    v14[0] = *a3;
    v14[1] = a3[1];
    v14[2] = a3[2];
    v4 = v14;
  }
  if ( *((_DWORD *)v4 + 8) > 0x7FFFFFFFu )
    return 3221225713LL;
  v8 = *((_QWORD *)v4 + 3);
  if ( v8 )
  {
    LOBYTE(a2) = PreviousMode;
    result = PoCaptureReasonContext(v8, a2, 0LL, 0, (__int64)v12, &P);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    P = 0LL;
    v12[0] = 0;
  }
  LOBYTE(a2) = PreviousMode;
  v9 = ExpSetTimer(
         a1,
         a2,
         (int)v4,
         *((_QWORD *)v4 + 1),
         *((_QWORD *)v4 + 2),
         (__int64)P,
         v12[0],
         *((_DWORD *)v4 + 8),
         *((_DWORD *)v4 + 9),
         *((_QWORD *)v4 + 5));
  v10 = v9;
  if ( v9 < 0 || v9 == 1073741861 )
  {
    if ( P )
      PoDestroyReasonContext(P);
  }
  return v10;
}
