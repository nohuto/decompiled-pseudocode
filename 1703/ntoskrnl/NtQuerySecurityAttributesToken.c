/*
 * XREFs of NtQuerySecurityAttributesToken @ 0x1404F7910
 * Callers:
 *     <none>
 * Callees:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140089FD0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     SepReferenceTokenByHandle @ 0x1400911E0 (SepReferenceTokenByHandle.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepCaptureUnicodeStringArray @ 0x1404F7B70 (SepCaptureUnicodeStringArray.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ExRaiseAccessViolation @ 0x14071ED40 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtQuerySecurityAttributesToken(
        char *a1,
        __int64 a2,
        unsigned int a3,
        volatile void *a4,
        unsigned int Length,
        unsigned __int64 a6)
{
  char v8; // r12
  unsigned __int8 v9; // si
  __int64 v10; // r14
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  int SecurityAttributesToken; // edi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v16; // rbx
  char v17; // dl
  _BYTE v19[4]; // [rsp+40h] [rbp-58h] BYREF
  int v20; // [rsp+44h] [rbp-54h]
  PVOID Object; // [rsp+48h] [rbp-50h] BYREF
  PVOID P; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v23[8]; // [rsp+58h] [rbp-40h] BYREF

  P = 0LL;
  v20 = 0;
  v8 = 0;
  Object = 0LL;
  v23[0] = 0LL;
  v19[0] = 0;
  v9 = KeGetCurrentThread()->gap0[10];
  v19[1] = v9;
  if ( Length )
  {
    if ( a4 )
      goto LABEL_3;
LABEL_27:
    SecurityAttributesToken = -1073741811;
    v20 = -1073741811;
LABEL_26:
    v16 = (PERESOURCE *)Object;
    goto LABEL_16;
  }
  if ( a4 )
    goto LABEL_27;
LABEL_3:
  if ( v9 )
  {
    ProbeForWrite(a4, Length, 4u);
    v10 = a6;
    v11 = a6;
    if ( (a6 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = a6 + 3;
    if ( a6 >= a6 + 3 || v12 >= 0x7FFFFFFF0000LL )
    {
      if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
        ExRaiseAccessViolation();
    }
    else
    {
      v13 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v11 = *(_BYTE *)v11;
        v11 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v11 != v13 );
    }
  }
  else
  {
    v10 = a6;
  }
  SecurityAttributesToken = SepCaptureUnicodeStringArray(a2, a3, v9, &P);
  v20 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
    goto LABEL_26;
  SecurityAttributesToken = SepReferenceTokenByHandle(a1, 8u, v9, &Object, v19, v23);
  v20 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
    goto LABEL_26;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v16 = (PERESOURCE *)Object;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
  v8 = 1;
  SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                              (__int64)v16,
                              v17,
                              (__int64)P,
                              a3,
                              0,
                              (__int64)a4,
                              Length,
                              v10);
  v20 = SecurityAttributesToken;
LABEL_16:
  if ( v9 == 1 && P )
    ExFreePoolWithTag(P, 0);
  if ( v8 )
  {
    ExReleaseResourceLite(v16[6]);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    SecurityAttributesToken = v20;
    v16 = (PERESOURCE *)Object;
  }
  if ( v16 )
    ObfDereferenceObject(v16);
  return (unsigned int)SecurityAttributesToken;
}
