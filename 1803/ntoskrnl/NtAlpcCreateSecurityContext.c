/*
 * XREFs of NtAlpcCreateSecurityContext @ 0x14055D9AC
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateSecurityContext @ 0x1404D2E50 (AlpcpCreateSecurityContext.c)
 *     AlpcpDeleteBlob @ 0x1404D9EC0 (AlpcpDeleteBlob.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcCreateSecurityContext(HANDLE PortHandle, ULONG Flags, PALPC_SECURITY_ATTR SecurityAttribute)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v7; // rcx
  __m128i v8; // xmm2
  unsigned __int64 v9; // xmm2_8
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  NTSTATUS v12; // edi
  PVOID v13; // r15
  ULONG_PTR v14; // rbx
  struct _SECURITY_QUALITY_OF_SERVICE *v16; // xmm2_8
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-48h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v18; // [rsp+38h] [rbp-40h] BYREF
  ALPC_HANDLE ContextHandle; // [rsp+58h] [rbp-20h]
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( Flags )
  {
    v12 = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)SecurityAttribute & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v7 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)SecurityAttribute < 0x7FFFFFFF0000LL )
        v7 = (__int64)SecurityAttribute;
      *(_BYTE *)v7 = *(_BYTE *)v7;
      *(_BYTE *)(v7 + 23) = *(_BYTE *)(v7 + 23);
      v8 = *(__m128i *)&SecurityAttribute->Flags;
      ContextHandle = SecurityAttribute->ContextHandle;
      v9 = _mm_srli_si128(v8, 8).m128i_u64[0];
      v10 = v9;
      if ( v9 )
      {
        v11 = v9;
        if ( v9 >= 0x7FFFFFFF0000LL )
          v11 = 0x7FFFFFFF0000LL;
        v18 = *(struct _SECURITY_QUALITY_OF_SERVICE *)v11;
      }
    }
    else
    {
      v16 = (struct _SECURITY_QUALITY_OF_SERVICE *)_mm_srli_si128(*(__m128i *)&SecurityAttribute->Flags, 8).m128i_u64[0];
      v10 = (unsigned __int64)v16;
      if ( v16 )
        v18 = *v16;
    }
    v12 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( v12 >= 0 )
    {
      if ( !v10 )
        v18 = *(struct _SECURITY_QUALITY_OF_SERVICE *)((char *)Object + 260);
      v13 = Object;
      v12 = AlpcpCreateSecurityContext(
              (volatile signed __int64 *)Object,
              KeGetCurrentThread(),
              1,
              &v18,
              &BugCheckParameter2);
      if ( v12 >= 0 )
      {
        v14 = BugCheckParameter2;
        SecurityAttribute->ContextHandle = *(ALPC_HANDLE *)(BugCheckParameter2 + 8);
        AlpcpDereferenceBlobEx(v14, 1);
      }
      ObfDereferenceObject(v13);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v12;
}
