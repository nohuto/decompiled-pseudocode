/*
 * XREFs of ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180097110
 * Callers:
 *     _CAudioResourceManager::DestroyStream_::_1_::dtor$5 @ 0x180068CCC (_CAudioResourceManager--DestroyStream_--_1_--dtor$5.c)
 *     _CPlaybackNotifier::UpdateAudioPlaybackStatus_::_1_::dtor$0 @ 0x180068F6C (_CPlaybackNotifier--UpdateAudioPlaybackStatus_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::GetDeviceGraphStoreForEndpoint_::_1_::dtor$1 @ 0x180069038 (_CDeviceGraphStore--GetDeviceGraphStoreForEndpoint_--_1_--dtor$1.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

__int64 __fastcall std::wstring::~wstring(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 >= 8 )
    std::_Deallocate(*(_QWORD **)a1, v1 + 1, 2uLL);
  result = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
