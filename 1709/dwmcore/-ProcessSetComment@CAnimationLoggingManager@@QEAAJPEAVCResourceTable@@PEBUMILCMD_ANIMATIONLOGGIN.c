/*
 * XREFs of ?ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@PEBXI@Z @ 0x180157D44
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180076E2C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AA228 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ??A?$map@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@@std@@QEAAAEAPEBGAEBQEAVCResource@@@Z @ 0x180156B14 (--A-$map@PEAVCResource@@PEBGU-$less@PEAVCResource@@@std@@V-$allocator@U-$pair@QEAVCResource@@PEB.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@2@AEBQEAVCResource@@@Z @ 0x1801582E0 (-find@-$_Tree@V-$_Tmap_traits@PEAVCResource@@PEBGU-$less@PEAVCResource@@@std@@V-$allocator@U-$pa.c)
 */

__int64 __fastcall CAnimationLoggingManager::ProcessSetComment(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT *a3,
        size_t *a4)
{
  unsigned int v7; // edi
  unsigned __int64 v8; // rbx
  __int64 *v9; // r14
  void **v10; // rax
  unsigned __int16 *v11; // rax
  unsigned __int16 *v12; // rbp
  int v13; // eax
  const void *retaddr; // [rsp+58h] [rbp+0h]
  char v16; // [rsp+60h] [rbp+8h] BYREF
  struct CResource *ResourceWithoutType; // [rsp+68h] [rbp+10h] BYREF

  ResourceWithoutType = a2;
  v7 = 0;
  ResourceWithoutType = CResourceTable::GetResourceWithoutType(
                          *(CResourceTable **)(*((_QWORD *)this + 6) + 24LL),
                          *((_DWORD *)a3 + 2));
  v8 = (unsigned __int64)ResourceWithoutType;
  if ( ResourceWithoutType )
  {
    v9 = (__int64 *)((char *)this + 88);
    if ( *(_QWORD *)std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::find(
                      v9,
                      &v16,
                      &ResourceWithoutType) != *v9 )
    {
      v10 = (void **)std::map<CResource *,unsigned short const *>::operator[](
                       v9,
                       (unsigned __int64 *)&ResourceWithoutType);
      WPF::ProcessHeapImpl::Free(*v10);
    }
    if ( a4 )
    {
      v11 = (unsigned __int16 *)operator new(saturated_mul(*((unsigned int *)a3 + 3), 2uLL));
      v12 = v11;
      if ( !v11 )
      {
        v7 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x9Bu);
        return v7;
      }
      v13 = StringCchCopyW(v11, *((unsigned int *)a3 + 3), a4);
      if ( v13 < 0 )
        ModuleFailFastForHRESULT(v13, retaddr);
      *(_QWORD *)std::map<CResource *,unsigned short const *>::operator[](v9, (unsigned __int64 *)&ResourceWithoutType) = v12;
    }
    *(_DWORD *)(v8 + 32) &= ~0x10u;
    *(_DWORD *)(v8 + 32) |= a4 != 0LL ? 0x10 : 0;
  }
  return v7;
}
