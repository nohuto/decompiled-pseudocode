/*
 * XREFs of IoConvertFileHandleToKernelHandle @ 0x1406B71C0
 * Callers:
 *     CmpNameFromAttributes @ 0x1404E3564 (CmpNameFromAttributes.c)
 *     IopOpenLinkOrRenameTarget @ 0x140587A24 (IopOpenLinkOrRenameTarget.c)
 *     NtRestoreKey @ 0x1406889E0 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140688C8C (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x140688F10 (NtSaveMergedKeys.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140754C3C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x140754E40 (ExpQueryElamCertInfo.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     ObDuplicateObject @ 0x140507760 (ObDuplicateObject.c)
 */

NTSTATUS __fastcall IoConvertFileHandleToKernelHandle(
        void *a1,
        KPROCESSOR_MODE a2,
        ACCESS_MASK a3,
        char a4,
        PVOID Object)
{
  _QWORD *v5; // r14
  NTSTATUS result; // eax
  PVOID v10; // rsi
  NTSTATUS v11; // ebx
  int v12; // eax
  HANDLE v13; // rdi
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+40h] [rbp-18h] BYREF
  HANDLE Handle[2]; // [rsp+48h] [rbp-10h] BYREF
  PVOID v16; // [rsp+60h] [rbp+8h] BYREF

  v5 = Object;
  *(_QWORD *)Object = 0LL;
  if ( !a1 )
    return 0;
  result = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)IoFileObjectType, a2, &Object, &HandleInformation);
  if ( result >= 0 )
  {
    if ( a4 || (a3 & HandleInformation.GrantedAccess) == a3 )
    {
      v12 = ObDuplicateObject(
              (ULONG_PTR)KeGetCurrentThread()->ApcState.Process,
              a1,
              PsInitialSystemProcess,
              (__int64 *)Handle,
              a3,
              512,
              0,
              0);
      v10 = Object;
      v11 = v12;
      if ( v12 >= 0 )
      {
        v13 = Handle[0];
        v11 = ObReferenceObjectByHandle(Handle[0], 0, (POBJECT_TYPE)IoFileObjectType, 0, &v16, 0LL);
        if ( v11 >= 0 )
        {
          if ( v16 == v10 )
          {
            *v5 = v13;
          }
          else
          {
            v11 = -1073741788;
            ObCloseHandle(v13, 0);
          }
          ObfDereferenceObject(v16);
        }
        else
        {
          ObCloseHandle(v13, 0);
        }
      }
    }
    else
    {
      v10 = Object;
      v11 = -1073741790;
    }
    ObfDereferenceObject(v10);
    return v11;
  }
  return result;
}
