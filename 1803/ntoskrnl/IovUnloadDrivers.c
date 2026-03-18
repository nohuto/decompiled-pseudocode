/*
 * XREFs of IovUnloadDrivers @ 0x1408120F0
 * Callers:
 *     IoShutdownSystem @ 0x1404812F8 (IoShutdownSystem.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ZwDelayExecution @ 0x1401A7B40 (ZwDelayExecution.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ObEnumerateObjectsByType @ 0x1407594A0 (ObEnumerateObjectsByType.c)
 *     IovpUnloadDriver @ 0x140812818 (IovpUnloadDriver.c)
 */

__int64 IovUnloadDrivers()
{
  PVOID *v1; // rbx
  unsigned int v2; // r14d
  PVOID *v3; // rdi
  char v4; // bp
  char v5; // dl
  PVOID *v6; // rdi
  PVOID *v7; // rsi
  _DWORD *v8; // rcx
  PVOID *v9; // rdi
  PVOID v10; // rcx
  LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  if ( !PopShutdownCleanly )
    return 3221225473LL;
  IovDriverListHead = 0LL;
  v1 = 0LL;
  v2 = ObEnumerateObjectsByType();
  while ( 1 )
  {
    v3 = (PVOID *)IovDriverListHead;
    if ( !IovDriverListHead )
      break;
    IovDriverListHead = *(PVOID *)IovDriverListHead;
    if ( (unsigned int)IovpUnloadDriver(v3[1]) == 259 )
    {
      *v3 = v1;
      v1 = v3;
    }
    else
    {
      ObfDereferenceObject(v3[1]);
      ExFreePoolWithTag(v3, 0);
    }
  }
  do
  {
    v4 = 0;
    v5 = 0;
    v6 = 0LL;
    while ( 1 )
    {
      v7 = v1;
      if ( !v1 )
        break;
      v8 = v1[1];
      v1 = (PVOID *)*v1;
      if ( (v8[4] & 1) != 0 )
      {
        ObfDereferenceObject(v8);
        ExFreePoolWithTag(v7, 0);
        v5 = 1;
      }
      else
      {
        *v7 = v6;
        v6 = v7;
      }
    }
    if ( v5 )
    {
      Interval.QuadPart = -100000000LL;
      ZwDelayExecution(0, &Interval);
      v4 = 1;
    }
    v1 = v6;
  }
  while ( v4 == 1 && v6 );
  while ( 1 )
  {
    v9 = v1;
    if ( !v1 )
      break;
    v10 = v1[1];
    v1 = (PVOID *)*v1;
    ObfDereferenceObject(v10);
    ExFreePoolWithTag(v9, 0);
  }
  return v2;
}
