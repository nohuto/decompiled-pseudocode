/*
 * XREFs of IoConvertFileHandleToKernelHandle @ 0x14068B520
 * Callers:
 *     IopOpenLinkOrRenameTarget @ 0x140449118 (IopOpenLinkOrRenameTarget.c)
 *     CmpNameFromAttributes @ 0x1404D5588 (CmpNameFromAttributes.c)
 *     NtRestoreKey @ 0x14065FA60 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x14065FD04 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x14065FF88 (NtSaveMergedKeys.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14071553C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x140715718 (ExpQueryElamCertInfo.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     ObDuplicateObject @ 0x140517550 (ObDuplicateObject.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall IoConvertFileHandleToKernelHandle(
        void *a1,
        KPROCESSOR_MODE a2,
        ACCESS_MASK a3,
        char a4,
        _QWORD *Object)
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
  *Object = 0LL;
  if ( !a1 )
    return 0;
  result = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)IoFileObjectType, a2, (PVOID *)&Object, &HandleInformation);
  if ( result >= 0 )
  {
    if ( a4 || (a3 & HandleInformation.GrantedAccess) == a3 )
    {
      v12 = ObDuplicateObject(
              (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->ApcState.Process,
              a1,
              (ULONG_PTR)PsInitialSystemProcess,
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
