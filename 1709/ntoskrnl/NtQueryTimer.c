/*
 * XREFs of NtQueryTimer @ 0x140758010
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KeQueryTimerDueTime @ 0x140204914 (KeQueryTimerDueTime.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryTimer(
        HANDLE TimerHandle,
        TIMER_INFORMATION_CLASS TimerInformationClass,
        PVOID TimerInformation,
        ULONG Length,
        PULONG ResultLength)
{
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  PULONG v11; // rsi
  int v12; // r15d
  int v13; // r12d
  __int64 v14; // rbx
  __int64 v15; // rdi
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF

  if ( TimerInformationClass )
    return -1073741821;
  if ( Length != 16 )
    return -1073741820;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)TimerInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = 0x7FFFFFFF0000LL;
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)TimerInformation < 0x7FFFFFFF0000LL )
      v10 = (__int64)TimerInformation;
    *(_BYTE *)v10 = *(_BYTE *)v10;
    *(_BYTE *)(v10 + 15) = *(_BYTE *)(v10 + 15);
    v11 = ResultLength;
    if ( ResultLength )
    {
      if ( (unsigned __int64)ResultLength < 0x7FFFFFFF0000LL )
        v9 = (__int64)ResultLength;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
  }
  else
  {
    v11 = ResultLength;
  }
  v12 = ObReferenceObjectByHandle(TimerHandle, 1u, ExTimerObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    v13 = *((_DWORD *)Object + 1);
    v14 = MEMORY[0xFFFFF78000000008];
    v15 = KeQueryTimerDueTime((__int64)Object) - v14;
    ObfDereferenceObject(Object);
    if ( PreviousMode )
    {
      *((_BYTE *)TimerInformation + 8) = v13;
      *(_QWORD *)TimerInformation = v15;
      if ( v11 )
        *v11 = 16;
    }
    else
    {
      *((_BYTE *)TimerInformation + 8) = v13;
      *(_QWORD *)TimerInformation = v15;
      if ( v11 )
        *v11 = 16;
    }
  }
  return v12;
}
