/*
 * XREFs of CmpDestroySecurityCache @ 0x1404CF38C
 * Callers:
 *     CmpLoadKeyCommon @ 0x14007EF3C (CmpLoadKeyCommon.c)
 *     CmpInitializeHive @ 0x1404395AC (CmpInitializeHive.c)
 *     CmpReorganizeHive @ 0x140439CAC (CmpReorganizeHive.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1404BF6E4 (CmpValidateHiveSecurityDescriptors.c)
 *     CmLoadKey @ 0x1404CBC54 (CmLoadKey.c)
 *     CmpCompleteUnloadKey @ 0x1404CD454 (CmpCompleteUnloadKey.c)
 *     CmpFreeAllMemory @ 0x140662C0C (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x14066430C (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x14066AB34 (CmpFlushBackupHive.c)
 *     HvRefreshHive @ 0x14066C778 (HvRefreshHive.c)
 *     CmpDestroyTemporaryHive @ 0x140672B30 (CmpDestroyTemporaryHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
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
    v5 = *(_QWORD **)(v3 + 16);
    if ( *(_QWORD *)(v4 + 8) != v3 + 8 || *v5 != v3 + 8 )
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
