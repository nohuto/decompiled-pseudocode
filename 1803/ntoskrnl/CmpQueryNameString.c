/*
 * XREFs of CmpQueryNameString @ 0x140561CB8
 * Callers:
 *     CmpTraceHiveMountBaseFileMounted @ 0x140496E1C (CmpTraceHiveMountBaseFileMounted.c)
 *     CmKtmNotification @ 0x14054ED10 (CmKtmNotification.c)
 *     CmpInitCmRM @ 0x140561DC4 (CmpInitCmRM.c)
 *     CmpStartRMLog @ 0x1405F4564 (CmpStartRMLog.c)
 *     CmpTraceHiveRestoreStart @ 0x1406EE88C (CmpTraceHiveRestoreStart.c)
 *     CmpAddRemoveRMLogContainer @ 0x1406F9D80 (CmpAddRemoveRMLogContainer.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x1404A78E0 (ObQueryNameStringMode.c)
 *     ExpAllocateStringRoutine @ 0x140518FA0 (ExpAllocateStringRoutine.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall CmpQueryNameString(void *a1, UNICODE_STRING *a2)
{
  NTSTATUS result; // eax
  int v4; // ebx
  SIZE_T i; // rbp
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING *v7; // rdi
  int v8; // eax
  SIZE_T Length; // rcx
  wchar_t *StringRoutine; // rax
  NTSTATUS appended; // eax
  unsigned __int16 v12; // dx
  wchar_t *Buffer; // r8
  unsigned int v14; // [rsp+60h] [rbp+18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  result = ObReferenceObjectByHandle(a1, 1u, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
  v4 = result;
  if ( result >= 0 )
  {
    for ( i = 272LL; ; i = v14 )
    {
      PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, i, 0x62534D43u);
      v7 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      v8 = ObQueryNameStringMode((char *)Object, (__int64)PoolWithTag, i, &v14, 0);
      v4 = v8;
      if ( v8 >= 0 )
      {
        a2->Length = 0;
        Length = v7->Length;
        a2->MaximumLength = v7->Length;
        StringRoutine = (wchar_t *)ExpAllocateStringRoutine(Length);
        a2->Buffer = StringRoutine;
        if ( StringRoutine )
        {
          appended = RtlAppendUnicodeStringToString(a2, v7);
          v12 = a2->Length;
          v4 = appended;
          if ( a2->Length )
          {
            Buffer = a2->Buffer;
            do
            {
              if ( Buffer[((unsigned __int64)v12 >> 1) - 1] )
                break;
              v12 -= 2;
              a2->Length = v12;
            }
            while ( v12 );
          }
        }
        else
        {
          v4 = -1073741801;
        }
LABEL_9:
        if ( v7 )
          ExFreePoolWithTag(v7, 0);
        break;
      }
      if ( v8 != -2147483643 || v14 <= (unsigned int)i )
        goto LABEL_9;
      ExFreePoolWithTag(v7, 0);
    }
    ObfDereferenceObject(Object);
    return v4;
  }
  return result;
}
