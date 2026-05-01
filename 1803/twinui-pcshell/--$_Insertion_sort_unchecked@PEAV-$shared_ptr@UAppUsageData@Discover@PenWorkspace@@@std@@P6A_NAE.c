/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0P6A_NAEAV10@1@Z@Z @ 0x180194730
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@_JP6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0_JP6A_NAEAV10@2@Z@Z @ 0x180194DD8 (--$_Sort_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@_JP6A_NAEAV12@0@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800FA3E8 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Insertion_sort_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
        __int64 *a1,
        __int64 *a2,
        unsigned __int8 (__fastcall *a3)(__int64 *, __int64 *))
{
  __int64 *i; // rbx
  __int64 *v7; // r14
  __int64 *v8; // rsi
  __int64 v9; // [rsp+28h] [rbp-30h] BYREF
  std::_Ref_count_base *v10; // [rsp+30h] [rbp-28h]

  if ( a1 != a2 )
  {
    for ( i = a1 + 2; i != a2; i += 2 )
    {
      v7 = i;
      v9 = *i;
      v10 = (std::_Ref_count_base *)i[1];
      *i = 0LL;
      i[1] = 0LL;
      v8 = i;
      if ( a3(&v9, a1) )
      {
        if ( a1 != i )
        {
          do
          {
            v8 -= 2;
            std::shared_ptr<KBViewInfo>::operator=(v8 + 2, v8);
          }
          while ( v8 != a1 );
        }
        v7 = a1;
      }
      else
      {
        while ( 1 )
        {
          v8 -= 2;
          if ( !a3(&v9, v8) )
            break;
          std::shared_ptr<KBViewInfo>::operator=(v7, v8);
          v7 = v8;
        }
      }
      std::shared_ptr<KBViewInfo>::operator=(v7, &v9);
      if ( v10 )
        std::_Ref_count_base::_Decref(v10);
    }
  }
}
