/*
 * XREFs of SmpInitializeControlBlock @ 0x1400047EC
 * Callers:
 *     SmpAllocateControlBlock @ 0x140003AC4 (SmpAllocateControlBlock.c)
 * Callees:
 *     memset_0 @ 0x14000C86D (memset_0.c)
 */

__int64 __fastcall SmpInitializeControlBlock(void *a1, HANDLE SectionHandle)
{
  unsigned int v4; // edi
  void *v5; // rcx
  ULONG_PTR ViewSize; // [rsp+58h] [rbp+7h] BYREF
  void *v8; // [rsp+60h] [rbp+Fh] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+17h] BYREF
  void *EventHandle; // [rsp+C8h] [rbp+77h] BYREF
  PVOID BaseAddress; // [rsp+D0h] [rbp+7Fh] BYREF

  EventHandle = 0LL;
  BaseAddress = 0LL;
  v4 = 0;
  ViewSize = 0LL;
  if ( NtMapViewOfSection(
         SectionHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0LL,
         0LL,
         &ViewSize,
         ViewUnmap,
         0,
         4u) < 0 )
  {
    BaseAddress = 0LL;
  }
  else
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 2;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0) < 0 )
    {
      EventHandle = 0LL;
      goto LABEL_7;
    }
    if ( NtCreateEvent(&v8, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0) >= 0 )
    {
      memset_0(a1, 0, 0x80uLL);
      v4 = 1;
      *((_QWORD *)a1 + 2) = BaseAddress;
      v5 = 0LL;
      *((_QWORD *)a1 + 4) = EventHandle;
      *((_QWORD *)a1 + 5) = v8;
      *((_QWORD *)a1 + 3) = SectionHandle;
      *((_DWORD *)a1 + 1) = 1;
      BaseAddress = 0LL;
      EventHandle = 0LL;
      goto LABEL_5;
    }
  }
  v5 = EventHandle;
LABEL_5:
  if ( v5 )
    NtClose(v5);
LABEL_7:
  if ( BaseAddress )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  return v4;
}
