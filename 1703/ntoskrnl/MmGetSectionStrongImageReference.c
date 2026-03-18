/*
 * XREFs of MmGetSectionStrongImageReference @ 0x1406BF1BC
 * Callers:
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     MiLocateHotPatchBase @ 0x1406B5678 (MiLocateHotPatchBase.c)
 *     PspInitPhase3 @ 0x1408269D4 (PspInitPhase3.c)
 * Callees:
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     SeGetStrongImageReference @ 0x1406F04D4 (SeGetStrongImageReference.c)
 */

NTSTATUS __fastcall MmGetSectionStrongImageReference(void *a1, KPROCESSOR_MODE a2, PVOID a3, _QWORD *a4)
{
  NTSTATUS result; // eax
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  int StrongImageReference; // ebx
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF
  PVOID v12; // [rsp+60h] [rbp+8h] BYREF

  if ( a1 )
  {
    result = ObReferenceObjectByHandle(a1, 0, MmSectionObjectType, a2, &v12, 0LL);
    a3 = v12;
    if ( result < 0 )
      return result;
  }
  v8 = MiSectionControlArea((__int64)a3);
  if ( (*(_DWORD *)(v8 + 56) & 0x20) == 0 || (*(_DWORD *)(v8 + 92) & 0xC0000) == 0 )
  {
    StrongImageReference = -1073741811;
    goto LABEL_10;
  }
  v9 = *(_QWORD *)(v8 + 96);
  if ( *(_QWORD *)(v9 + 16) )
    goto LABEL_8;
  StrongImageReference = SeGetStrongImageReference(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8uLL, v11);
  if ( StrongImageReference >= 0 )
  {
    *(_QWORD *)(v9 + 16) = v11[0];
LABEL_8:
    StrongImageReference = 0;
    *a4 = *(_QWORD *)(v9 + 16);
  }
LABEL_10:
  if ( a1 )
    ObfDereferenceObject(a3);
  return StrongImageReference;
}
