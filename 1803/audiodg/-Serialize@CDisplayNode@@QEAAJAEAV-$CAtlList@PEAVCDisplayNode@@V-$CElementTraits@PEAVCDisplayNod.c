/*
 * XREFs of ?Serialize@CDisplayNode@@QEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x140042808
 * Callers:
 *     ?SerializeNodeArray@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x140042B88 (-SerializeNodeArray@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@AT.c)
 * Callees:
 *     memcpy_s @ 0x140033200 (memcpy_s.c)
 *     ?DisplayNodeToIndex@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAVCDisplayNode@@PEAI@Z @ 0x140041668 (-DisplayNodeToIndex@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@AT.c)
 *     ?GetDisplayName@CDisplayNode@@QEAAPEBDXZ @ 0x140041CB0 (-GetDisplayName@CDisplayNode@@QEAAPEBDXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEAVCDisplayNode@@AEAPEAU__POSITION@@@Z @ 0x1400422C0 (-GetNext@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?GetNodeMode@CDisplayNode@@QEAAIXZ @ 0x140042334 (-GetNodeMode@CDisplayNode@@QEAAIXZ.c)
 */

__int64 __fastcall CDisplayNode::Serialize(CDisplayNode *this, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  const char *DisplayName; // r14
  int v9; // ebx
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // r8d
  unsigned int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 *Next; // rax
  unsigned int Source; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v19[6]; // [rsp+28h] [rbp-30h] BYREF

  v19[1] = (_QWORD *)-2LL;
  try
  {
    DisplayName = CDisplayNode::GetDisplayName(this);
  }
  catch ( ... )
  {
    return (unsigned int)-2147418113;
  }
  if ( memcpy_s((void *const)(*a3 + *a4), 4096 - *a4, "NODE", 5uLL) )
    return (unsigned int)-2147024774;
  *a4 += 5;
  v10 = -1LL;
  v11 = -1LL;
  do
    ++v11;
  while ( DisplayName[v11] );
  if ( memcpy_s((void *const)(*a3 + *a4), 4096 - *a4, DisplayName, (unsigned int)(v11 + 1)) )
    return (unsigned int)-2147024774;
  do
    ++v10;
  while ( DisplayName[v10] );
  v12 = v10 + *a4 + 1;
  *a4 = v12;
  try
  {
    Source = *(_DWORD *)(*(_QWORD *)this + 40LL);
  }
  catch ( ... )
  {
    return (unsigned int)-2147418113;
  }
  if ( memcpy_s((void *const)(*a3 + v12), 4096 - v12, &Source, 4uLL) )
    return (unsigned int)-2147024774;
  v13 = *a4 + 4;
  *a4 = v13;
  v9 = 0;
  try
  {
    Source = CDisplayNode::GetNodeMode(this);
  }
  catch ( ... )
  {
    return (unsigned int)-2147418113;
  }
  if ( memcpy_s((void *const)(*a3 + v13), 4096 - v13, &Source, 4uLL) )
    return (unsigned int)-2147024774;
  *a4 += 4;
  v14 = *a4;
  Source = *((_DWORD *)this + 6);
  if ( memcpy_s((void *const)(*a3 + v14), (unsigned int)(4096 - v14), &Source, 4uLL) )
  {
    return (unsigned int)-2147024774;
  }
  else
  {
    *a4 += 4;
    for ( v19[0] = *((_QWORD **)this + 1); v19[0]; *a4 += 4 )
    {
      Next = ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::GetNext(v15, v19);
      v9 = DisplayNodeToIndex(a2, *Next, &Source);
      if ( v9 < 0 )
        break;
      if ( memcpy_s((void *const)(*a3 + *a4), 4096 - *a4, &Source, 4uLL) )
        return (unsigned int)-2147024774;
    }
  }
  return (unsigned int)v9;
}
