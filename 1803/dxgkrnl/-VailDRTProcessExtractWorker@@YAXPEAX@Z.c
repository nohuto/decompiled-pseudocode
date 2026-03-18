/*
 * XREFs of ?VailDRTProcessExtractWorker@@YAXPEAX@Z @ 0x1C01E6DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000BC94 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C01BC834 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 */

void __fastcall VailDRTProcessExtractWorker(unsigned int *a1)
{
  struct _KPROCESS *v1; // rdx
  struct _EPROCESS *v3; // r9
  unsigned int RemoteBundleObject; // eax
  bool v5; // zf
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF
  char v7; // [rsp+50h] [rbp-18h]

  v1 = (struct _KPROCESS *)*((_QWORD *)a1 + 24);
  v7 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, v1);
  RemoteBundleObject = DxgkExtractRemoteBundleObject(a1[12], a1[13], (void **)a1 + 7, v3);
  v5 = v7 == 0;
  a1[56] = RemoteBundleObject;
  if ( !v5 )
    KeUnstackDetachProcess(&ApcState);
  KeSetEvent((PRKEVENT)(a1 + 50), 0, 0);
}
