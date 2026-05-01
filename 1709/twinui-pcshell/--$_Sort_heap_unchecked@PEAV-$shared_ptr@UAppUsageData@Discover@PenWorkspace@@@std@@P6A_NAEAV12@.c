/*
 * XREFs of ??$_Sort_heap_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0AEAP6A_NAEAV10@1@Z@Z @ 0x1800EC8E0
 * Callers:
 *     ??$_Sort_unchecked1@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@_JP6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0_JAEAP6A_NAEAV10@2@Z@Z @ 0x1800EC384 (--$_Sort_unchecked1@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@_JP6A_NAEAV12@0@.c)
 * Callees:
 *     ??4?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EB4B0 (--4-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Pop_heap_hole_by_index@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@_JV12@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@_J1$$QEAV10@AEAP6A_NAEAV10@3@Z@Z @ 0x1800ECBAC (--$_Pop_heap_hole_by_index@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@_JV12@P6A.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Sort_heap_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 *v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // r14
  volatile signed __int32 *v9; // rbx
  __int64 v10; // [rsp+38h] [rbp-30h] BYREF
  volatile signed __int32 *v11; // [rsp+40h] [rbp-28h]

  result = (a2 - (__int64)a1) >> 4;
  if ( result >= 2 )
  {
    v6 = (__int64 *)(a2 - 16);
    v7 = -8LL - (_QWORD)a1;
    v8 = 16LL - (_QWORD)a1;
    do
    {
      v10 = *v6;
      v11 = (volatile signed __int32 *)v6[1];
      *v6 = 0LL;
      v6[1] = 0LL;
      std::shared_ptr<PenWorkspace::Discover::AppUsageData>::operator=(v6, a1);
      std::_Pop_heap_hole_by_index<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,__int64,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
        (_DWORD)a1,
        0,
        ((__int64)v6 + v7 + 8) >> 4,
        (unsigned int)&v10,
        a3);
      v9 = v11;
      if ( v11 && _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
        if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      }
      v6 -= 2;
      result = ((__int64)v6 + v8) >> 4;
    }
    while ( result >= 2 );
  }
  return result;
}
