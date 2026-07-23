/*
 * XREFs of NtQuerySecurityAttributesToken @ 0x140546170
 * Callers:
 *     <none>
 * Callees:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140060010 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepReferenceTokenByHandle @ 0x1400EF490 (SepReferenceTokenByHandle.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SepCaptureUnicodeStringArray @ 0x140546370 (SepCaptureUnicodeStringArray.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtQuerySecurityAttributesToken(
        HANDLE TokenHandle,
        PUNICODE_STRING Attributes,
        ULONG NumberOfAttributes,
        PVOID Buffer,
        ULONG Length,
        PULONG ReturnLength)
{
  char v9; // r15
  unsigned __int8 v10; // bl
  PULONG v11; // r13
  NTSTATUS SecurityAttributesToken; // esi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v14; // rdi
  __int64 v15; // rdx
  _BYTE v17[3]; // [rsp+41h] [rbp-47h] BYREF
  int v18; // [rsp+44h] [rbp-44h]
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF
  PVOID P; // [rsp+50h] [rbp-38h] BYREF
  __int64 v21; // [rsp+58h] [rbp-30h] BYREF

  P = 0LL;
  v9 = 0;
  Object = 0LL;
  v10 = KeGetCurrentThread()->gap0[10];
  if ( Length )
  {
    if ( Buffer )
      goto LABEL_3;
LABEL_17:
    SecurityAttributesToken = -1073741811;
    v18 = -1073741811;
LABEL_18:
    v14 = (PERESOURCE *)Object;
    goto LABEL_8;
  }
  if ( Buffer )
    goto LABEL_17;
LABEL_3:
  if ( v10 )
  {
    ProbeForWrite(Buffer, Length, 4u);
    v11 = ReturnLength;
    ProbeForWrite(ReturnLength, 4uLL, 4u);
  }
  else
  {
    v11 = ReturnLength;
  }
  SecurityAttributesToken = SepCaptureUnicodeStringArray(Attributes, NumberOfAttributes, v10, &P);
  v18 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
    goto LABEL_18;
  SecurityAttributesToken = SepReferenceTokenByHandle(TokenHandle, 8u, v10, &Object, v17, &v21);
  v18 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
    goto LABEL_18;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v14 = (PERESOURCE *)Object;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
  v9 = 1;
  SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                              (__int64)v14,
                              v15,
                              (__int64)P,
                              NumberOfAttributes,
                              0,
                              Buffer,
                              Length,
                              v11);
  v18 = SecurityAttributesToken;
LABEL_8:
  if ( v10 == 1 && P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
  {
    ExReleaseResourceLite(v14[6]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    SecurityAttributesToken = v18;
    v14 = (PERESOURCE *)Object;
  }
  if ( v14 )
    ObfDereferenceObject(v14);
  return SecurityAttributesToken;
}
