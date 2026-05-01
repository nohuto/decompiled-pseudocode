/*
 * XREFs of ??$_Make_heap_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0AEAP6A_NAEAV10@1@Z@Z @ 0x1800EC7E4
 * Callers:
 *     ??$_Sort_unchecked1@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@_JP6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0_JAEAP6A_NAEAV10@2@Z@Z @ 0x1800EC384 (--$_Sort_unchecked1@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@_JP6A_NAEAV12@0@.c)
 * Callees:
 *     ??$_Pop_heap_hole_by_index@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@_JV12@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@_J1$$QEAV10@AEAP6A_NAEAV10@3@Z@Z @ 0x1800ECBAC (--$_Pop_heap_hole_by_index@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@_JV12@P6A.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Make_heap_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  int v5; // ebp
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 *v8; // r14
  volatile signed __int32 *v9; // rdi
  __int64 v10; // [rsp+38h] [rbp-30h] BYREF
  volatile signed __int32 *v11; // [rsp+40h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v5 = a1;
  v6 = (a2 - a1) >> 4;
  if ( v6 >= 2 )
  {
    result = v6 / 2;
    v7 = v6 / 2;
    if ( v6 / 2 > 0 )
    {
      v8 = (__int64 *)(a1 + 16 * result);
      do
      {
        --v7;
        v8 -= 2;
        v10 = *v8;
        v11 = (volatile signed __int32 *)v8[1];
        *v8 = 0LL;
        v8[1] = 0LL;
        result = std::_Pop_heap_hole_by_index<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,__int64,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
                   v5,
                   v7,
                   v6,
                   (unsigned int)&v10,
                   a3);
        v9 = v11;
        if ( v11 )
        {
          result = (unsigned int)_InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF);
          if ( (_DWORD)result == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
            result = (unsigned int)_InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF);
            if ( (_DWORD)result == 1 )
              result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
          }
        }
      }
      while ( v7 > 0 );
    }
  }
  return result;
}
