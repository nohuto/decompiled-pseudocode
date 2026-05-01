/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0AEAP6A_NAEAV10@1@Z@Z @ 0x1800EC9F4
 * Callers:
 *     ??$_Sort_unchecked1@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@_JP6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0_JAEAP6A_NAEAV10@2@Z@Z @ 0x1800EC384 (--$_Sort_unchecked1@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@_JP6A_NAEAV12@0@.c)
 * Callees:
 *     ??4?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EB4B0 (--4-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Insertion_sort_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
        __int64 *a1,
        __int64 *a2,
        __int64 (__fastcall **a3)(__int64 *, __int64 *))
{
  __int64 *v6; // rbx
  __int64 *v7; // rbp
  __int64 *v8; // r15
  __int64 *i; // rdi
  __int64 *v10; // rcx
  __int64 *v11; // rdi
  __int64 *j; // rdx
  char v13; // al
  volatile signed __int32 *v14; // rdi
  __int64 v15; // [rsp+28h] [rbp-30h] BYREF
  volatile signed __int32 *v16; // [rsp+30h] [rbp-28h]

  if ( a1 != a2 )
  {
    v6 = a1 + 2;
    if ( a1 + 2 != a2 )
    {
      v7 = a1;
      do
      {
        v8 = v6;
        v15 = *v6;
        v16 = (volatile signed __int32 *)v7[3];
        *v6 = 0LL;
        v7[3] = 0LL;
        if ( (unsigned __int8)(*a3)(&v15, a1) )
        {
          for ( i = v6; i != a1; std::shared_ptr<PenWorkspace::Discover::AppUsageData>::operator=(i + 2, i) )
            i -= 2;
          v10 = a1;
        }
        else
        {
          v11 = v7;
          for ( j = v7; ; j = v11 )
          {
            v13 = (*a3)(&v15, j);
            v10 = v8;
            if ( !v13 )
              break;
            std::shared_ptr<PenWorkspace::Discover::AppUsageData>::operator=(v8, v11);
            v8 = v11;
            v11 -= 2;
          }
        }
        std::shared_ptr<PenWorkspace::Discover::AppUsageData>::operator=(v10, &v15);
        v14 = v16;
        if ( v16 && _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        }
        v6 += 2;
        v7 += 2;
      }
      while ( v6 != a2 );
    }
  }
}
