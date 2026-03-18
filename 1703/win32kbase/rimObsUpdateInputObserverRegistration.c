/*
 * XREFs of rimObsUpdateInputObserverRegistration @ 0x1C0115F80
 * Callers:
 *     NtRIMUpdateInputObserverRegistration @ 0x1C0100000 (NtRIMUpdateInputObserverRegistration.c)
 *     RIMUpdateInputObserverRegistration @ 0x1C01035F0 (RIMUpdateInputObserverRegistration.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1C0108E58 (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsCheckForRegistrationConflicts @ 0x1C0115780 (rimObsCheckForRegistrationConflicts.c)
 */

__int64 __fastcall rimObsUpdateInputObserverRegistration(
        char *Handle,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        KPROCESSOR_MODE PreviousMode)
{
  int v7; // r12d
  int v9; // edi
  _DWORD *v10; // rbx
  char *v11; // rsi
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  int v15; // edx
  int v16; // r8d
  PVOID Object; // [rsp+20h] [rbp-28h] BYREF

  Object = 0LL;
  v7 = a2;
  v9 = RawInputManagerInputObserverObjectResolveHandle(Handle, a2, PreviousMode, &Object);
  if ( v9 >= 0 )
  {
    v10 = Object;
    v11 = (char *)Object + 168;
    RIMLockExclusive((__int64)Object + 168);
    v12 = v10[25];
    v13 = v10[26];
    v14 = v10[27];
    if ( a4 < 0x30 )
      v9 = -1073741789;
    if ( v9 < 0
      || (v10[25] = 3, v10[26] = 0, v9 = rimObsCheckForRegistrationConflicts((v7 & 2) != 0, v12, v13, v14), v9 < 0) )
    {
      ObCloseHandle(Handle, PreviousMode);
    }
    else
    {
      v10[25] = v15;
      v10[26] = v16;
      v10[28] = v7;
      if ( a3 )
      {
        *((_QWORD *)v10 + 11) = a3;
        v10[24] = a4;
      }
    }
    *((_QWORD *)v11 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v10);
  }
  return (unsigned int)v9;
}
