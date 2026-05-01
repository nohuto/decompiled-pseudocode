/*
 * XREFs of ??$_Med3_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@00AEAP6A_NAEAV10@1@Z@Z @ 0x1800ECCE4
 * Callers:
 *     ??$_Partition_by_median_guess_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YA?AU?$pair@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@PEAV12@@0@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0AEAP6A_NAEAV20@1@Z@Z @ 0x1800EC4EC (--$_Partition_by_median_guess_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@s.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Med3_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        unsigned __int8 (__fastcall **a4)(__int64 *, __int64 *))
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx

  if ( (*a4)(a2, a1) )
  {
    v8 = a2[1];
    a2[1] = a1[1];
    a1[1] = v8;
    v9 = *a2;
    *a2 = *a1;
    *a1 = v9;
  }
  result = ((__int64 (__fastcall *)(__int64 *, __int64 *))*a4)(a3, a2);
  if ( (_BYTE)result )
  {
    v11 = a3[1];
    a3[1] = a2[1];
    a2[1] = v11;
    v12 = *a3;
    *a3 = *a2;
    *a2 = v12;
    result = ((__int64 (__fastcall *)(__int64 *, __int64 *))*a4)(a2, a1);
    if ( (_BYTE)result )
    {
      v13 = a2[1];
      a2[1] = a1[1];
      a1[1] = v13;
      result = *a1;
      v14 = *a2;
      *a2 = *a1;
      *a1 = v14;
    }
  }
  return result;
}
