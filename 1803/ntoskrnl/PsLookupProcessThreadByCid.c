/*
 * XREFs of PsLookupProcessThreadByCid @ 0x1404D9260
 * Callers:
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 *     PsOpenThread @ 0x1404D52E0 (PsOpenThread.c)
 *     PsOpenProcess @ 0x14059A0D0 (PsOpenProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     PsLookupThreadByThreadId @ 0x1404D75A0 (PsLookupThreadByThreadId.c)
 */

NTSTATUS __fastcall PsLookupProcessThreadByCid(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  PVOID v7; // rdi
  void *v8; // rbx
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  result = PsLookupThreadByThreadId(*(HANDLE *)(a1 + 8), (PETHREAD *)&Object);
  if ( result >= 0 )
  {
    v7 = Object;
    if ( *((_QWORD *)Object + 199) == *(_QWORD *)a1 )
    {
      if ( a2 )
      {
        v8 = (void *)*((_QWORD *)Object + 68);
        ObfReferenceObjectWithTag(v8, 0x746C6644u);
        *a2 = v8;
      }
      *a3 = v7;
      return 0;
    }
    else
    {
      ObfDereferenceObject(Object);
      return -1073741813;
    }
  }
  return result;
}
