/*
 * XREFs of CmpDestroySecurityCache @ 0x140470024
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400AF5E8 (CmpLoadKeyCommon.c)
 *     CmpCompleteUnloadKey @ 0x14046FBB4 (CmpCompleteUnloadKey.c)
 *     CmpInitializeHive @ 0x140470188 (CmpInitializeHive.c)
 *     CmpReorganizeHive @ 0x140470880 (CmpReorganizeHive.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1404746C0 (CmpValidateHiveSecurityDescriptors.c)
 *     CmLoadKey @ 0x140596790 (CmLoadKey.c)
 *     CmpFreeAllMemory @ 0x14068C138 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x14068D9FC (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1406951B8 (CmpFlushBackupHive.c)
 *     HvRefreshHive @ 0x140696DF0 (HvRefreshHive.c)
 *     CmpDestroyTemporaryHive @ 0x14069DC04 (CmpDestroyTemporaryHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

void __fastcall CmpDestroySecurityCache(__int64 a1)
{
  unsigned int i; // edi
  __int64 v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // rdx

  for ( i = 0; i < *(_DWORD *)(a1 + 3040); ++i )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 3056) + 16LL * i + 8);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_QWORD *)(v4 + 8) != v3 + 8 || (v5 = *(_QWORD **)(v3 + 16), *v5 != v3 + 8) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v3, (unsigned int)(*(_DWORD *)(v3 + 24) + 32));
  }
  if ( *(_DWORD *)(a1 + 3040) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 32))(
      *(_QWORD *)(a1 + 3056),
      (unsigned int)(16 * *(_DWORD *)(a1 + 3044)));
  *(_QWORD *)(a1 + 3056) = 0LL;
  *(_DWORD *)(a1 + 3040) = 0;
  *(_DWORD *)(a1 + 3044) = 0;
}
