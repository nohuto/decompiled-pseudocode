/*
 * XREFs of ??1CAnimationLoggingManager@@UEAA@XZ @ 0x180156A64
 * Callers:
 *     ??_GCAnimationLoggingManager@@UEAAPEAXI@Z @ 0x180156B90 (--_GCAnimationLoggingManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@2@0@Z @ 0x180157F00 (-erase@-$_Tree@V-$_Tmap_traits@PEAVCResource@@PEBGU-$less@PEAVCResource@@@std@@V-$allocator@U-$p.c)
 */

void __fastcall CAnimationLoggingManager::~CAnimationLoggingManager(CAnimationLoggingManager *this)
{
  void **v1; // rdi
  __int64 **v3; // rbx
  __int64 *v4; // rbx
  __int64 *v5; // rax
  __int64 *i; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (void **)((char *)this + 88);
  v3 = (__int64 **)*((_QWORD *)this + 11);
  *(_QWORD *)this = &CAnimationLoggingManager::`vftable';
  v4 = *v3;
  while ( v4 != *v1 )
  {
    WPF::ProcessHeapImpl::Free((void *)v4[5]);
    if ( !*((_BYTE *)v4 + 25) )
    {
      v5 = (__int64 *)v4[2];
      if ( *((_BYTE *)v5 + 25) )
      {
        for ( i = (__int64 *)v4[1]; !*((_BYTE *)i + 25) && v4 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v4 = i;
        v4 = i;
      }
      else
      {
        do
        {
          v4 = v5;
          v5 = (__int64 *)*v5;
        }
        while ( !*((_BYTE *)v5 + 25) );
      }
    }
  }
  std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::erase(
    v1,
    &v7,
    *(_QWORD *)*v1,
    *v1);
  WPF::ProcessHeapImpl::Free(*v1);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 7);
  CResource::~CResource(this);
}
