/*
 * XREFs of NtAcquireProcessActivityReference @ 0x14056CA3C
 * Callers:
 *     <none>
 * Callees:
 *     ExCpuSetResourceManagerAccessCheck @ 0x14002B79C (ExCpuSetResourceManagerAccessCheck.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     PspCreateActivityReference @ 0x14056CB48 (PspCreateActivityReference.c)
 */

__int64 __fastcall NtAcquireProcessActivityReference(_QWORD *a1, ULONG_PTR a2, int a3)
{
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v7; // r8
  __int64 result; // rax
  PVOID v9; // rbx
  int ActivityReference; // edi
  _QWORD v11[3]; // [rsp+48h] [rbp-20h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  if ( a3 )
    return 3221225713LL;
  result = ExCpuSetResourceManagerAccessCheck(PreviousMode);
  if ( (int)result >= 0 )
  {
    result = ObpReferenceObjectByHandleWithTag(
               a2,
               4096,
               (__int64)PsProcessType,
               PreviousMode,
               1665233744,
               &Object,
               0LL,
               0LL);
    if ( (int)result >= 0 )
    {
      v9 = Object;
      ActivityReference = PspCreateActivityReference(Object, v11);
      if ( ActivityReference >= 0 )
        *a1 = v11[0];
      ObfDereferenceObjectWithTag(v9, 0x63417350u);
      return (unsigned int)ActivityReference;
    }
  }
  return result;
}
