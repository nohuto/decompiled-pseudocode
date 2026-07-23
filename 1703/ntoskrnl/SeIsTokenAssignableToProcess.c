/*
 * XREFs of SeIsTokenAssignableToProcess @ 0x14043FBC0
 * Callers:
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     PspAssignPrimaryToken @ 0x1406E0B70 (PspAssignPrimaryToken.c)
 * Callees:
 *     RtlSidDominates @ 0x140064060 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x140064158 (SepCopyTokenIntegrity.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObFastDereferenceObject @ 0x1400EE840 (ObFastDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     SepIsChildTokenByPointer @ 0x14043FD30 (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x14043FDC0 (SepIsSiblingTokenByPointer.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 */

NTSTATUS __fastcall SeIsTokenAssignableToProcess(__int64 a1, char *a2)
{
  char v2; // di
  PERESOURCE *v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v7; // rax
  int v8; // ebx
  int v9; // r15d
  NTSTATUS result; // eax
  char v11; // bl
  PSID Sid2; // [rsp+20h] [rbp-20h]
  PSID Sid1; // [rsp+30h] [rbp-10h]
  char v14; // [rsp+78h] [rbp+38h] BYREF
  BOOLEAN Dominates; // [rsp+80h] [rbp+40h] BYREF
  char v16; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0;
  *a2 = 0;
  v14 = 0;
  v16 = 0;
  Dominates = 0;
  v5 = (PERESOURCE *)PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  if ( !v5 )
    return -1073741823;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(v5[6], 1u);
  SepCopyTokenIntegrity();
  ExReleaseResourceLite(v5[6]);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  ObFastDereferenceObject(
    (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
    (unsigned __int64)v5);
  v7 = KeGetCurrentThread();
  --v7->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  SepCopyTokenIntegrity();
  v8 = *(_DWORD *)(a1 + 192);
  v9 = *(_DWORD *)(a1 + 196);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v8 == 2 && v9 < 2 )
    return -1073741659;
  result = RtlSidDominates(Sid1, Sid2, &Dominates);
  if ( result >= 0 )
  {
    if ( Dominates )
    {
      result = SepIsChildTokenByPointer(a1, &v14);
      v11 = v14;
      if ( !v14 )
      {
        if ( result < 0 )
          return result;
        result = SepIsSiblingTokenByPointer(a1, &v16);
      }
    }
    else
    {
      v11 = v14;
    }
    if ( result >= 0 )
    {
      if ( v11 || v16 )
        v2 = 1;
      *a2 = v2;
    }
  }
  return result;
}
