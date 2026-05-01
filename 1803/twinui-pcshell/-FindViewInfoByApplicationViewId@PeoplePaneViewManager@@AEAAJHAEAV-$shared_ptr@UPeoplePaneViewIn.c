/*
 * XREFs of ?FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1801C1D98
 * Callers:
 *     ?ClosePeopleShare@PeoplePaneViewManager@@UEAAJH@Z @ 0x1801C17B0 (-ClosePeopleShare@PeoplePaneViewManager@@UEAAJH@Z.c)
 *     ?GetViewContactId@PeoplePaneViewManager@@UEAAJHPEAPEAG@Z @ 0x1801C2890 (-GetViewContactId@PeoplePaneViewManager@@UEAAJHPEAPEAG@Z.c)
 *     ?GetViewDesiredSize@PeoplePaneViewManager@@UEAAJHPEAUtagSIZE@@@Z @ 0x1801C2940 (-GetViewDesiredSize@PeoplePaneViewManager@@UEAAJHPEAUtagSIZE@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800FA420 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x1801C59E0 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ??0?$CAutoHandle@PEAX@@QEAA@PEAX@Z @ 0x1801F7330 (--0-$CAutoHandle@PEAX@@QEAA@PEAX@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::FindViewInfoByApplicationViewId(RTL_SRWLOCK *a1, int a2, _QWORD *a3)
{
  std::_Ref_count_base **Ptr; // r15
  std::_Ref_count_base **v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rcx
  bool v10; // al
  std::_Ref_count_base **v11; // rdx
  unsigned int v12; // ebx
  std::_Ref_count_base *v14[2]; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+30h] [rbp-28h] BYREF
  std::_Ref_count_base **v16; // [rsp+38h] [rbp-20h]
  char v17; // [rsp+60h] [rbp+8h] BYREF

  std::shared_ptr<PeoplePaneViewInfo>::reset(a3);
  AcquireSRWLockShared(a1 + 16);
  Ptr = (std::_Ref_count_base **)a1[18].Ptr;
  v7 = (std::_Ref_count_base **)a1[17].Ptr;
  v16 = v14;
  *(_OWORD *)v14 = 0LL;
  v15 = a2;
  v8 = *(_QWORD *)CAutoHandle<void *>::CAutoHandle<void *>(&v17, &v15);
  while ( v7 != Ptr )
  {
    v9 = *((_QWORD *)*v7 + 6);
    if ( v9 )
    {
      v10 = ~(_DWORD)v9 == *(_DWORD *)v8;
    }
    else
    {
      std::shared_ptr<PeoplePaneViewInfo>::operator=(*(_QWORD **)(v8 + 8), v7);
      v10 = 0;
    }
    if ( v10 )
      break;
    v7 += 2;
  }
  if ( v7 != a1[18].Ptr )
  {
    v11 = v7;
LABEL_12:
    std::shared_ptr<PeoplePaneViewInfo>::operator=(a3, v11);
    v12 = 0;
    goto LABEL_14;
  }
  if ( v14[0] )
  {
    v11 = v14;
    goto LABEL_12;
  }
  v12 = -2147023728;
LABEL_14:
  if ( v14[1] )
    std::_Ref_count_base::_Decref(v14[1]);
  if ( a1 != (RTL_SRWLOCK *)-128LL )
    ReleaseSRWLockShared(a1 + 16);
  return v12;
}
