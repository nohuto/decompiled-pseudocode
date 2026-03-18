/*
 * XREFs of NtCreateTimer2 @ 0x1404EB824
 * Callers:
 *     NtCreateIRTimer @ 0x1405F2CC8 (NtCreateIRTimer.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x1400B2730 (KeInitializeTimer2.c)
 *     KeInitializeIRTimer @ 0x14013033C (KeInitializeIRTimer.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     ExpCheckIRTimerAccess @ 0x14059C904 (ExpCheckIRTimerAccess.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtCreateTimer2(__int64 *a1, unsigned __int64 a2, __int64 a3, int a4, ACCESS_MASK a5)
{
  __int64 result; // rax
  char PreviousMode; // di
  __int64 v9; // rcx
  int inserted; // ecx
  _QWORD *v11; // rdi
  __int64 v12; // [rsp+20h] [rbp-48h]
  PVOID Object; // [rsp+50h] [rbp-18h] BYREF
  __int64 v14; // [rsp+58h] [rbp-10h] BYREF
  unsigned int v15; // [rsp+88h] [rbp+20h] BYREF

  if ( a4 != 2 && a4 != 8 )
    return 3221225714LL;
  if ( a3 )
    return 3221225713LL;
  if ( a2 && a4 != 2 )
    return 3221225712LL;
  v15 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v9 = (__int64)a1;
    *(_QWORD *)v9 = *(_QWORD *)v9;
    if ( a2 )
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a2 + 4 > 0x7FFFFFFF0000LL || a2 + 4 < a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v15 = *(_DWORD *)a2;
    }
  }
  else if ( a2 )
  {
    v15 = *(_DWORD *)a2;
  }
  if ( a4 != 2 || (LOBYTE(a2) = PreviousMode, result = ExpCheckIRTimerAccess(v15, a2), (int)result >= 0) )
  {
    inserted = ObCreateObjectEx(PreviousMode, ExpIRTimerObjectType, 0LL, PreviousMode, v12, 168, 0, 0, &Object, 0LL);
    if ( inserted >= 0 )
    {
      v11 = Object;
      if ( a4 == 2 )
        KeInitializeIRTimer((__int64)Object, 0LL, 0LL, (unsigned __int8 *)&v15, 2);
      else
        KeInitializeTimer2((__int64)Object);
      v11[17] = 0LL;
      *((_DWORD *)v11 + 40) = a4;
      inserted = ObInsertObjectEx(v11, 0LL, a5, 0, 0, 0LL, (unsigned __int64 *)&v14);
      v15 = inserted;
      if ( inserted >= 0 )
        *a1 = v14;
    }
    return (unsigned int)inserted;
  }
  return result;
}
