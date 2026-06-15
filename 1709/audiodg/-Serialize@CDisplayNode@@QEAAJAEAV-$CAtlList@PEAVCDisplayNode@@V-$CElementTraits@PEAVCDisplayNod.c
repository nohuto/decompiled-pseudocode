/*
 * XREFs of ?Serialize@CDisplayNode@@QEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x140044078
 * Callers:
 *     ?SerializeDeviceGraphs@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAPEAEPEAI@Z @ 0x14004420C (-SerializeDeviceGraphs@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031DE4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     memcpy_s @ 0x140034390 (memcpy_s.c)
 *     ?GetDisplayName@CDisplayNode@@QEAAPEBDXZ @ 0x1400436C8 (-GetDisplayName@CDisplayNode@@QEAAPEBDXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEAVCDisplayNode@@AEAPEAU__POSITION@@@Z @ 0x140043CD8 (-GetNext@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 */

__int64 __fastcall CDisplayNode::Serialize(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int v8; // ebx
  const char *DisplayName; // rbp
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  rsize_t v13; // rdx
  void *v14; // rcx
  __int64 v15; // rcx
  __int64 *Next; // rax
  unsigned __int64 v17; // r8
  unsigned int v18; // r10d
  __int64 v19; // r11
  unsigned int v20; // r9d
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  int v23; // eax
  bool v24; // zf
  unsigned int Source; // [rsp+60h] [rbp+18h] BYREF
  _QWORD *i; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0;
  DisplayName = CDisplayNode::GetDisplayName((CDisplayNode *)a1);
  if ( memcpy_s((void *const)(*a3 + (unsigned int)*a4), (unsigned int)(4096 - *a4), "NODE", 5uLL) )
    return (unsigned int)-2147024774;
  *a4 += 5;
  v10 = -1LL;
  v11 = -1LL;
  do
    ++v11;
  while ( DisplayName[v11] );
  if ( memcpy_s(
         (void *const)(*a3 + (unsigned int)*a4),
         (unsigned int)(4096 - *a4),
         DisplayName,
         (unsigned int)(v11 + 1)) )
  {
    return (unsigned int)-2147024774;
  }
  do
    ++v10;
  while ( DisplayName[v10] );
  *a4 += v10 + 1;
  v12 = (unsigned int)*a4;
  v13 = (unsigned int)(4096 - v12);
  v14 = (void *)(*a3 + v12);
  Source = *(_DWORD *)(a1 + 24);
  if ( memcpy_s(v14, v13, &Source, 4uLL) )
  {
    return (unsigned int)-2147024774;
  }
  else
  {
    *a4 += 4;
    for ( i = *(_QWORD **)(a1 + 8); i; *a4 += 4 )
    {
      Next = ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::GetNext(v15, &i);
      v17 = *(_QWORD *)(a2 + 16);
      v18 = 0;
      v8 = -2147023728;
      v19 = *Next;
      if ( v17 )
      {
        v20 = Source;
        v21 = 0LL;
        do
        {
          v22 = *(_QWORD **)a2;
          if ( !*(_QWORD *)a2 )
            goto LABEL_23;
          for ( ; v21; --v21 )
            v22 = (_QWORD *)*v22;
          if ( !v22 )
LABEL_23:
            ATL::AtlThrowImpl(-2147467259);
          if ( v19 == v22[2] )
            v20 = v18;
          ++v18;
          v23 = 0;
          v21 = v18;
          v24 = v19 == v22[2];
          Source = v20;
          if ( !v24 )
            v23 = v8;
          v8 = v23;
        }
        while ( v18 < v17 );
      }
      if ( v8 < 0 )
        break;
      if ( memcpy_s((void *const)(*a3 + (unsigned int)*a4), (unsigned int)(4096 - *a4), &Source, 4uLL) )
        return (unsigned int)-2147024774;
    }
  }
  return (unsigned int)v8;
}
