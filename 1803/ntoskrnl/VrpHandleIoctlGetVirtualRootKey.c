/*
 * XREFs of VrpHandleIoctlGetVirtualRootKey @ 0x1407088BC
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140707A60 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x140073540 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140073560 (PsAttachSiloToCurrentThread.c)
 *     PsIsThreadInSilo @ 0x1400F17F4 (PsIsThreadInSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     PsGetJobSilo @ 0x1402847C0 (PsGetJobSilo.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall VrpHandleIoctlGetVirtualRootKey(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        _QWORD *a5,
        _DWORD *a6)
{
  int JobSilo; // ebx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r14
  ULONG v12; // ecx
  HANDLE v13; // rcx
  PVOID Object[2]; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+38h] BYREF

  Object[0] = 0LL;
  KeyHandle = 0LL;
  if ( a2 < 0x10 || *(_DWORD *)(a1 + 8) > 2u )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    JobSilo = ObpReferenceObjectByHandleWithTag(*(_QWORD *)a1, 4, (__int64)PsJobType, a3, 0x52566D43u, Object, 0LL, 0LL);
    if ( JobSilo >= 0 )
    {
      JobSilo = PsGetJobSilo((__int64)Object[0]);
      if ( JobSilo >= 0 )
      {
        if ( PsIsThreadInSilo((__int64)KeGetCurrentThread(), (__int64)Object[1]) )
        {
          JobSilo = -1073741811;
        }
        else
        {
          v10 = PsAttachSiloToCurrentThread(v9);
          ObjectAttributes.RootDirectory = 0LL;
          v11 = v10;
          ObjectAttributes.Length = 48;
          v12 = 1088;
          if ( a3 != 1 )
            v12 = 576;
          ObjectAttributes.Attributes = v12;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&VrpRootKeyPaths[8 * *(int *)(a1 + 8)];
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          JobSilo = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
          if ( JobSilo >= 0 )
          {
            v13 = KeyHandle;
            KeyHandle = 0LL;
            JobSilo = 0;
            *a6 = 8;
            *a5 = v13;
          }
          PsDetachSiloFromCurrentThread(v11);
        }
      }
    }
    if ( Object[0] )
      ObfDereferenceObjectWithTag(Object[0], 0x52566D43u);
  }
  return (unsigned int)JobSilo;
}
