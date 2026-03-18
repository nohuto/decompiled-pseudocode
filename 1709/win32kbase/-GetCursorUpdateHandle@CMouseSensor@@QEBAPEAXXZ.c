/*
 * XREFs of ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x1C0012C30
 * Callers:
 *     NtMITGetCursorUpdateHandle @ 0x1C009AEE0 (NtMITGetCursorUpdateHandle.c)
 * Callees:
 *     LockProcessByClientId @ 0x1C00921C0 (LockProcessByClientId.c)
 */

void *__fastcall CMouseSensor::GetCursorUpdateHandle(CMouseSensor *this)
{
  __int64 v2; // rcx
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  HANDLE v5; // rbx
  void *v6; // rdx
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  HANDLE SourceProcessHandle; // [rsp+60h] [rbp+20h] BYREF
  void *TargetHandle; // [rsp+68h] [rbp+28h] BYREF
  PVOID Object; // [rsp+70h] [rbp+30h] BYREF

  v2 = *((int *)this + 238);
  TargetHandle = (void *)-1LL;
  SourceProcessHandle = (HANDLE)-1LL;
  if ( (int)LockProcessByClientId(v2, &Object) >= 0 )
  {
    v3 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 0x20000u, 0LL, 0, &SourceProcessHandle);
    v4 = (__int64)SourceProcessHandle;
    if ( v3 < 0 )
      v4 = -1LL;
    SourceProcessHandle = (HANDLE)v4;
    ObfDereferenceObject(Object);
  }
  v5 = SourceProcessHandle;
  if ( SourceProcessHandle != (HANDLE)-1LL )
  {
    v6 = (void *)*((_QWORD *)this + 109);
    if ( v6 )
    {
      v7 = ZwDuplicateObject(SourceProcessHandle, v6, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &TargetHandle, 0x100000u, 0, 2u);
      v8 = (__int64)TargetHandle;
      if ( v7 < 0 )
        v8 = -1LL;
      TargetHandle = (void *)v8;
    }
    ZwClose(v5);
  }
  return TargetHandle;
}
