/*
 * XREFs of DxgkOpenSyncObjectFromNtHandle2 @ 0x1C01AC290
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C00D9CCC (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle2(
        struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *a1,
        __int64 a2,
        __int64 a3)
{
  return DxgkOpenSyncObjectFromNtHandle2Impl(a1, 1, a3);
}
