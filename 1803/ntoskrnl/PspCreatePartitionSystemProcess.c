/*
 * XREFs of PspCreatePartitionSystemProcess @ 0x14077EB18
 * Callers:
 *     PspAllocatePartition @ 0x14064EEF0 (PspAllocatePartition.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     PsCreateMinimalProcess @ 0x14062C5DC (PsCreateMinimalProcess.c)
 */

__int64 __fastcall PspCreatePartitionSystemProcess(HANDLE *a1, _QWORD *a2)
{
  int v4; // eax
  HANDLE v5; // rbx
  NTSTATUS v6; // edi
  __int64 result; // rax
  int v8; // [rsp+50h] [rbp-18h] BYREF
  const wchar_t *v9; // [rsp+58h] [rbp-10h]
  HANDLE Handle; // [rsp+80h] [rbp+18h] BYREF

  Handle = 0LL;
  v8 = 1966108;
  v9 = L"PartitionSystm";
  v4 = PsCreateMinimalProcess(
         PsInitialSystemProcess,
         (__int64)&v8,
         0LL,
         BYTE2(PsInitialSystemProcess[2].ActiveProcessors.Bitmap[0]),
         0LL,
         0,
         4096,
         0LL,
         0LL,
         &Handle);
  v5 = Handle;
  v6 = v4;
  if ( v4 >= 0 )
  {
    v6 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)PsProcessType, 0, &Handle, 0LL);
    if ( v6 >= 0 )
    {
      *a1 = Handle;
      result = 0LL;
      *a2 = v5;
      return result;
    }
    if ( Handle )
      ObfDereferenceObject(Handle);
  }
  if ( v5 )
    ObCloseHandle(v5, 0);
  return (unsigned int)v6;
}
