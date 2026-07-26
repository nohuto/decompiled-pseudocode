/*
 * XREFs of NdisCancelDirectOidRequest @ 0x1C0042530
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceRefEx @ 0x1C001E3C8 (ndisReferenceRefEx.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C0043720 (ndisDoCancelDirectOidRequest.c)
 */

void __stdcall NdisCancelDirectOidRequest(NDIS_HANDLE NdisBindingHandle, PVOID RequestId)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // r14
  KIRQL v7; // r12
  __int64 v8; // rcx
  int v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)NdisBindingHandle + 2);
  v3 = 0LL;
  v4 = 0LL;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0xCCu, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, NdisBindingHandle, RequestId);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
  *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
  v8 = *(_QWORD *)(v2 + 2664);
  *(_DWORD *)(v2 + 1856) = 2307531;
  if ( *(_BYTE *)v8 == 5 )
  {
    v3 = v8;
    if ( !ndisReferenceRefEx((PKSPIN_LOCK)(v8 + 320), 2u, &v9) )
      v3 = 0LL;
  }
  else
  {
    v4 = v8;
  }
  *(_QWORD *)(v2 + 520) = 0LL;
  *(_DWORD *)(v2 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v7);
  if ( v4 || v3 )
    ndisDoCancelDirectOidRequest(v4, v3, RequestId);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0xCDu, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, NdisBindingHandle, RequestId);
}
