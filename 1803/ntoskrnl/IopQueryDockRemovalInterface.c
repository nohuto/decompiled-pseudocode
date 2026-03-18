/*
 * XREFs of IopQueryDockRemovalInterface @ 0x14073A1F8
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1405C79A8 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     IopSynchronousCall @ 0x140499818 (IopSynchronousCall.c)
 */

__int64 __fastcall IopQueryDockRemovalInterface(struct _DEVICE_OBJECT *a1, _QWORD *a2)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v5; // rbx
  int v7; // esi
  _QWORD v8[9]; // [rsp+30h] [rbp-78h] BYREF
  GUID v9; // [rsp+78h] [rbp-30h] BYREF

  v9 = GUID_DOCK_INTERFACE;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20207050u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x30uLL);
  *v5 = 48;
  memset(v8, 0, sizeof(v8));
  LOWORD(v8[0]) = 2075;
  v8[1] = &v9;
  LODWORD(v8[2]) = 48;
  v8[3] = v5;
  v8[4] = 0LL;
  v7 = IopSynchronousCall(a1, (__int64)v8, -1073741637, 0LL, 0LL);
  if ( v7 < 0 )
    ExFreePoolWithTag(v5, 0);
  else
    *a2 = v5;
  return (unsigned int)v7;
}
