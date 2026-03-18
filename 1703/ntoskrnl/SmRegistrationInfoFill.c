/*
 * XREFs of SmRegistrationInfoFill @ 0x1405D9E94
 * Callers:
 *     SmGetRegistrationInfo @ 0x1405D9DD0 (SmGetRegistrationInfo.c)
 * Callees:
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     ObOpenObjectByPointer @ 0x14050ED20 (ObOpenObjectByPointer.c)
 */

__int64 __fastcall SmRegistrationInfoFill(void **a1, KPROCESSOR_MODE AccessMode, _QWORD *a3)
{
  void *v3; // rcx
  NTSTATUS v6; // ebx
  HANDLE v7; // rcx
  HANDLE v9; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a1;
  v9 = 0LL;
  v6 = ObOpenObjectByPointer(v3, 0, 0LL, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &v9);
  if ( v6 < 0 )
  {
    v7 = v9;
  }
  else
  {
    v7 = 0LL;
    *a3 = v9;
    v6 = 0;
    v9 = 0LL;
  }
  if ( v7 )
    ObCloseHandle(v7, AccessMode);
  return (unsigned int)v6;
}
