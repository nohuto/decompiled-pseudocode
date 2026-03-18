/*
 * XREFs of SmRegistrationInfoFill @ 0x140738E58
 * Callers:
 *     SmGetRegistrationInfo @ 0x1407382CC (SmGetRegistrationInfo.c)
 * Callees:
 *     ObOpenObjectByPointer @ 0x1404C5930 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 */

__int64 __fastcall SmRegistrationInfoFill(void **a1, KPROCESSOR_MODE AccessMode, HANDLE *a3)
{
  void *v3; // rcx
  NTSTATUS v6; // ebx
  HANDLE v7; // rcx
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a1;
  Handle = 0LL;
  v6 = ObOpenObjectByPointer(v3, 0, 0LL, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Handle);
  if ( v6 < 0 )
  {
    v7 = Handle;
  }
  else
  {
    v7 = 0LL;
    *a3 = Handle;
    v6 = 0;
    Handle = 0LL;
  }
  if ( v7 )
    ObCloseHandle(v7, AccessMode);
  return (unsigned int)v6;
}
