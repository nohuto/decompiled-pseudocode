/*
 * XREFs of NtCreateTimer2 @ 0x14055DBA0
 * Callers:
 *     NtCreateIRTimer @ 0x140586670 (NtCreateIRTimer.c)
 * Callees:
 *     KeInitializeIRTimer @ 0x14003B120 (KeInitializeIRTimer.c)
 *     KeInitializeTimer2 @ 0x14012A690 (KeInitializeTimer2.c)
 *     PsInsertVirtualizedTimer @ 0x14012AA9C (PsInsertVirtualizedTimer.c)
 *     ExpCheckIRTimerAccess @ 0x14045BCD8 (ExpCheckIRTimerAccess.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtCreateTimer2(__int64 *a1, int *a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  char PreviousMode; // si
  __int64 v8; // rcx
  int inserted; // ecx
  _QWORD *v10; // rbx
  _QWORD *v11; // r8
  _KPROCESS *Process; // rcx
  __int64 result; // rax
  __int64 v14; // [rsp+20h] [rbp-48h]
  PVOID Object; // [rsp+50h] [rbp-18h] BYREF
  __int64 v16; // [rsp+58h] [rbp-10h] BYREF
  int v17; // [rsp+88h] [rbp+20h] BYREF

  if ( a4 != 8 && a4 != 2 )
    return 3221225714LL;
  if ( a3 )
    return 3221225713LL;
  if ( a2 && a4 != 2 )
    return 3221225712LL;
  v17 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v8 = (__int64)a1;
    *(_QWORD *)v8 = *(_QWORD *)v8;
    if ( a2 )
    {
      if ( ((unsigned __int8)a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)(a2 + 1) > 0x7FFFFFFF0000LL || a2 + 1 < a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v17 = *a2;
    }
  }
  else if ( a2 )
  {
    v17 = *a2;
  }
  if ( a4 != 2 || (result = ExpCheckIRTimerAccess(v17, PreviousMode), (int)result >= 0) )
  {
    inserted = ObCreateObjectEx(PreviousMode, ExpIRTimerObjectType, 0, PreviousMode, v14, 200, 0, 0, &Object, 0LL);
    if ( inserted >= 0 )
    {
      v10 = Object;
      if ( a4 == 2 )
        KeInitializeIRTimer((__int64)Object, 0LL, 0LL, (unsigned __int8 *)&v17, 2);
      else
        KeInitializeTimer2((__int64)Object, 0LL, 0LL, a4);
      v10[17] = 0LL;
      *((_BYTE *)v10 + 176) |= 8u;
      v11 = v10 + 19;
      v10[19] = 0LL;
      *((_DWORD *)v10 + 48) = a4;
      if ( PreviousMode )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        v10 = Object;
        if ( (*(_DWORD *)&Process->0 & 0x10) != 0 )
          PsInsertVirtualizedTimer((__int64)Process, (__int64)Object + 160, 0, 0, v11);
      }
      inserted = ObInsertObjectEx(v10, 0LL, a5, 0, 0, 0LL, &v16);
      v17 = inserted;
      if ( inserted >= 0 )
        *a1 = v16;
    }
    return (unsigned int)inserted;
  }
  return result;
}
