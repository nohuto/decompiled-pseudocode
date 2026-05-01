/*
 * XREFs of ??0AppStateChangePublisher@@QEAA@XZ @ 0x1801A9F5C
 * Callers:
 *     ??0AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ @ 0x1801A86CC (--0AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180098DA4 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ??4?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801AA060 (--4-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 */

// Hidden C++ exception states: #wind=1
AppStateChangePublisher *__fastcall AppStateChangePublisher::AppStateChangePublisher(AppStateChangePublisher *this)
{
  std::_Ref_count_base *v2; // rcx
  _DWORD *v4; // [rsp+48h] [rbp+10h]

  *(_DWORD *)this = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v4 = operator new(0x50uLL);
  v4[2] = 1;
  v4[3] = 1;
  *(_QWORD *)v4 = &std::_Ref_count_obj<DocumentCollectionsConfig>::`vftable';
  memset_0(v4 + 4, 0, 0x40uLL);
  *((_QWORD *)v4 + 3) = 0LL;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 5) = 0LL;
  *((_QWORD *)this + 1) = v4 + 4;
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = v4;
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  **((_BYTE **)this + 1) = 1;
  std::vector<std::wstring>::operator=(*((_QWORD *)this + 1) + 8LL);
  *(_DWORD *)(*((_QWORD *)this + 1) + 32LL) = 6;
  *(_DWORD *)(*((_QWORD *)this + 1) + 36LL) = 1800;
  *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) = 0LL;
  *(_DWORD *)(*((_QWORD *)this + 1) + 48LL) = 0;
  *(_QWORD *)(*((_QWORD *)this + 1) + 56LL) = 0LL;
  return this;
}
