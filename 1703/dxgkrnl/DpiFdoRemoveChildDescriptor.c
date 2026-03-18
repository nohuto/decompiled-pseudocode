/*
 * XREFs of DpiFdoRemoveChildDescriptor @ 0x1C01C51C8
 * Callers:
 *     DpiFdoHandleTargetConnectionState @ 0x1C01C4A2C (DpiFdoHandleTargetConnectionState.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1C01C5208 (DpiFdoRemoveChildDescriptors.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiFdoRemoveChildDescriptor(__int64 a1, _QWORD *a2)
{
  _QWORD **v2; // r8
  void **v3; // rcx

  if ( *(_DWORD *)a2 == 1 )
    --*(_DWORD *)(a1 + 3320);
  v2 = (_QWORD **)a2[4];
  v3 = (void **)a2[5];
  if ( v2[1] != a2 + 4 || *v3 != a2 + 4 )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  DpiFdoReleaseChildDescriptor(a2);
}
