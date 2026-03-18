/*
 * XREFs of MmGetSectionStrongImageReference @ 0x140755FFC
 * Callers:
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     MiLocateHotPatchBase @ 0x14074C654 (MiLocateHotPatchBase.c)
 *     PspGetSystemDllSecureHandle @ 0x1408E13F8 (PspGetSystemDllSecureHandle.c)
 * Callees:
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     MiGetSectionStrongImageReference @ 0x140755FAC (MiGetSectionStrongImageReference.c)
 */

NTSTATUS __fastcall MmGetSectionStrongImageReference(void *a1, KPROCESSOR_MODE a2, PVOID a3, _QWORD *a4)
{
  NTSTATUS result; // eax
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  int SectionStrongImageReference; // ebx
  PVOID v11; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 || (result = ObReferenceObjectByHandle(a1, 0, MmSectionObjectType, a2, &v11, 0LL), a3 = v11, result >= 0) )
  {
    v8 = MiSectionControlArea((__int64)a3);
    if ( (*(_DWORD *)(v8 + 56) & 0x20) != 0 && (*(_DWORD *)(v8 + 92) & 0xC0000) != 0 )
    {
      v9 = *(_QWORD *)(v8 + 96);
      if ( *(_QWORD *)(v9 + 48)
        || (SectionStrongImageReference = MiGetSectionStrongImageReference(*(_QWORD *)(v8 + 96)),
            SectionStrongImageReference >= 0) )
      {
        SectionStrongImageReference = 0;
        *a4 = *(_QWORD *)(v9 + 48);
      }
    }
    else
    {
      SectionStrongImageReference = -1073741811;
    }
    if ( a1 )
      ObfDereferenceObject(a3);
    return SectionStrongImageReference;
  }
  return result;
}
