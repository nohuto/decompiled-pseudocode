/*
 * XREFs of ?ReleaseManipulations@InteractionSourceManager@@AEAAXXZ @ 0x1801CA8C4
 * Callers:
 *     ??1InteractionSourceManager@@QEAA@XZ @ 0x1801C96F8 (--1InteractionSourceManager@@QEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x1801CBD60 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ.c)
 */

void __fastcall InteractionSourceManager::ReleaseManipulations(InteractionSourceManager *this)
{
  __int64 ***v1; // r14
  __int64 **i; // rbx
  CChainingHelper *v4; // rdi
  __int64 v5; // r12
  CChainingHelper *v6; // rsi

  v1 = (__int64 ***)*((_QWORD *)this + 3);
  for ( i = *v1; i != (__int64 **)v1; i = (__int64 **)*i )
  {
    v4 = (CChainingHelper *)i[3];
    v5 = 3LL;
    v6 = v4;
    do
    {
      *(_BYTE *)v6 &= ~2u;
      *((_DWORD *)v6 + 1) = 0;
      *((_BYTE *)v4 + 36) |= 1u;
      *(_BYTE *)v6 &= ~4u;
      *((_DWORD *)v6 + 2) = 0;
      *((_BYTE *)v4 + 36) |= 2u;
      CChainingHelper::UpdateConfigurationIfDirty(v4);
      v6 = (CChainingHelper *)((char *)v6 + 12);
      --v5;
    }
    while ( v5 );
    CResource::UnRegisterNotifierInternal(*(CResource **)(*((_QWORD *)this + 1) + 8LL), (struct CResource *)i[2]);
  }
  std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::clear((char *)this + 16);
}
