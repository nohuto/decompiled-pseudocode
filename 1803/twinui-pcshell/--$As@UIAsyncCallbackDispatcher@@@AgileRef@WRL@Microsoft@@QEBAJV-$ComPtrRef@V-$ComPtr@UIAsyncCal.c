/*
 * XREFs of ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x18018C8B0
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27___ @ 0x18018CE8C (CreationThreadDispatcher--RunSync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27___.c)
 *     CreationThreadDispatcher::RunSync__lambda_5671f6d4fec33abe381e1d9c920ba336___ @ 0x1801ABAB4 (CreationThreadDispatcher--RunSync__lambda_5671f6d4fec33abe381e1d9c920ba336___.c)
 *     CreationThreadDispatcher::RunSync__lambda_0a797daff9b242b959bbd8d51d98a883___ @ 0x18021A4D0 (CreationThreadDispatcher--RunSync__lambda_0a797daff9b242b959bbd8d51d98a883___.c)
 *     CreationThreadDispatcher::RunSync__lambda_49f034628129c0f6bb6239b08c86aef5___ @ 0x18021A5D8 (CreationThreadDispatcher--RunSync__lambda_49f034628129c0f6bb6239b08c86aef5___.c)
 *     CreationThreadDispatcher::RunSync__lambda_69db3e9761c77a5f5df8b9f478688ffa___ @ 0x18021A6E0 (CreationThreadDispatcher--RunSync__lambda_69db3e9761c77a5f5df8b9f478688ffa___.c)
 *     CreationThreadDispatcher::RunSync__lambda_8fc5e3e8e4215e3f9514c32427d8c9ae___ @ 0x18021A7E4 (CreationThreadDispatcher--RunSync__lambda_8fc5e3e8e4215e3f9514c32427d8c9ae___.c)
 *     CreationThreadDispatcher::RunSync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf___ @ 0x18021A8EC (CreationThreadDispatcher--RunSync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf___.c)
 *     CreationThreadDispatcher::RunSync__lambda_f100e3a3eb499b75a430141e91e776cf___ @ 0x180222390 (CreationThreadDispatcher--RunSync__lambda_f100e3a3eb499b75a430141e91e776cf___.c)
 *     CreationThreadDispatcher::RunSync__lambda_9bfd9a3a8ffc22fdb84219f9a69e0562___ @ 0x180223180 (CreationThreadDispatcher--RunSync__lambda_9bfd9a3a8ffc22fdb84219f9a69e0562___.c)
 *     CreationThreadDispatcher::RunSync__lambda_a108a8c11bb5b98786bc6ab4691e60b5___ @ 0x180223284 (CreationThreadDispatcher--RunSync__lambda_a108a8c11bb5b98786bc6ab4691e60b5___.c)
 *     CreationThreadDispatcher::RunSync__lambda_0f869028d2211307d6500fcb06deb8db___ @ 0x1802578E4 (CreationThreadDispatcher--RunSync__lambda_0f869028d2211307d6500fcb06deb8db___.c)
 *     CreationThreadDispatcher::RunSync__lambda_3811e63994a6acdbea5f41d0f15c3e3d___ @ 0x1802579CC (CreationThreadDispatcher--RunSync__lambda_3811e63994a6acdbea5f41d0f15c3e3d___.c)
 *     CreationThreadDispatcher::RunSync__lambda_49edb9179b1ba6407f235e88a6b30a0e___ @ 0x180257AB4 (CreationThreadDispatcher--RunSync__lambda_49edb9179b1ba6407f235e88a6b30a0e___.c)
 *     CreationThreadDispatcher::RunSync__lambda_dc5eb0db6b15ac5b17502a4ce4d18856___ @ 0x180272FB8 (CreationThreadDispatcher--RunSync__lambda_dc5eb0db6b15ac5b17502a4ce4d18856___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>(Microsoft::WRL::AgileRef *this, void **a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)a2);
  return Microsoft::WRL::AgileRef::InternalResolve(this, &GUID_7702e77c_66f6_479b_af2b_e316cff5f814, a2);
}
