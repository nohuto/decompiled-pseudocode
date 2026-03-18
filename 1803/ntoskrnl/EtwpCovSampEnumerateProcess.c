/*
 * XREFs of EtwpCovSampEnumerateProcess @ 0x1407B5E20
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     FsRtlGetFileNameInformation @ 0x1404B6AA0 (FsRtlGetFileNameInformation.c)
 *     FsRtlReleaseFileNameInformation @ 0x14057B7A0 (FsRtlReleaseFileNameInformation.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140595C30 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     EtwpCovSampImageNotify @ 0x1407B63B0 (EtwpCovSampImageNotify.c)
 */

__int64 __fastcall EtwpCovSampEnumerateProcess(__int64 BugCheckParameter1)
{
  int v1; // r14d
  unsigned __int64 *v2; // rdi
  unsigned __int64 v4; // r10
  unsigned __int64 *v5; // rsi
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rax
  _QWORD v9[7]; // [rsp+28h] [rbp-41h] BYREF
  UNICODE_STRING FullImageName; // [rsp+60h] [rbp-9h] BYREF
  _BYTE v11[48]; // [rsp+70h] [rbp+7h] BYREF

  v1 = 0;
  v2 = 0LL;
  if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
    return 0LL;
  if ( (_KPROCESS *)BugCheckParameter1 == KeGetCurrentThread()->ApcState.Process )
    goto LABEL_5;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v11);
    v1 = 1;
LABEL_5:
    v2 = (unsigned __int64 *)MmEnumerateAddressSpaceAndReferenceImages(BugCheckParameter1, 1);
    if ( v2 )
    {
      memset(v9, 0, sizeof(v9));
      v4 = *v2;
      LODWORD(v9[1]) |= 0x400u;
      v9[0] = 56LL;
      v5 = v2;
      if ( v4 )
      {
        do
        {
          if ( (v4 & 3) == 0 )
          {
            v6 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
            v7 = v5[1] & 0xFFFFFFFFFFFF0000uLL;
            *v5 = v6;
            v9[2] = v7;
            v9[4] = v5[3];
            v9[6] = v6;
            if ( (int)FsRtlGetFileNameInformation() >= 0 )
              EtwpCovSampImageNotify(&FullImageName, *(HANDLE *)(BugCheckParameter1 + 736), (PIMAGE_INFO)&v9[1]);
          }
          v5 += 6;
          v4 = *v5;
        }
        while ( *v5 );
      }
    }
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v1 )
  {
    KiUnstackDetachProcess((__int64)v11, 0LL);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
  }
  return 0LL;
}
