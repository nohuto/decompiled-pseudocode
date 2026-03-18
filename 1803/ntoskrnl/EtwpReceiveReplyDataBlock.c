/*
 * XREFs of EtwpReceiveReplyDataBlock @ 0x1405C3328
 * Callers:
 *     NtTraceControl @ 0x14058F8F0 (NtTraceControl.c)
 * Callees:
 *     KeRemoveQueueEx @ 0x1400F5070 (KeRemoveQueueEx.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     EtwpUnreferenceDataBlock @ 0x14058DCB4 (EtwpUnreferenceDataBlock.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall EtwpReceiveReplyDataBlock(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  void *v5; // rcx
  NTSTATUS v7; // ebx
  PLIST_ENTRY v8; // rbp
  PLIST_ENTRY v9; // rdi
  struct _LIST_ENTRY *Flink; // rsi
  unsigned int Flink_high; // eax
  PLIST_ENTRY EntryArray; // [rsp+60h] [rbp+8h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0;
  v5 = (void *)*a1;
  Timeout.QuadPart = EtwpOneMs * a1[1];
  v7 = ObReferenceObjectByHandle(v5, 4u, EtwpRegistrationObjectType, 1, (PVOID *)&EntryArray, 0LL);
  if ( v7 >= 0 )
  {
    v8 = EntryArray;
    if ( (BYTE2(EntryArray[6].Flink) & 4) != 0 )
    {
      KeRemoveQueueEx((PKQUEUE)EntryArray[3].Flink, 1, 0, &Timeout, &EntryArray, 1u);
      v9 = EntryArray;
      if ( EntryArray == (PLIST_ENTRY)258 || EntryArray == (PLIST_ENTRY)192 )
      {
        v7 = (int)EntryArray;
      }
      else
      {
        Flink = EntryArray[1].Flink;
        Flink_high = HIDWORD(Flink->Flink);
        if ( Flink_high > a2 )
        {
          v7 = -1073741789;
        }
        else
        {
          memmove(a1, EntryArray[1].Flink, Flink_high);
          Flink_high = HIDWORD(Flink->Flink);
          v7 = 0;
        }
        *a3 = Flink_high;
        EtwpUnreferenceDataBlock((volatile signed __int32 *)Flink);
        ExFreePoolWithTag(v9, 0);
      }
    }
    else
    {
      v7 = -1073741816;
    }
    ObfDereferenceObject(v8);
  }
  return (unsigned int)v7;
}
