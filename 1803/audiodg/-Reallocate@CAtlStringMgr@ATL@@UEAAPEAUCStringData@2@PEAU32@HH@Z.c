/*
 * XREFs of ?Reallocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@PEAU32@HH@Z @ 0x140044C20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??$AtlMultiply@K@ATL@@YAJPEAKKK@Z @ 0x140044B8C (--$AtlMultiply@K@ATL@@YAJPEAKKK@Z.c)
 */

struct ATL::CStringData *__fastcall ATL::CAtlStringMgr::Reallocate(
        ATL::CAtlStringMgr *this,
        struct ATL::CStringData *a2,
        int a3,
        unsigned int a4)
{
  int v4; // ecx
  signed int v5; // ebx
  __int64 v6; // r10
  __int64 v7; // r11
  struct ATL::CStringData *result; // rax
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 < 0 )
    return 0LL;
  v4 = 0x7FFFFFFF - a3;
  if ( 0x7FFFFFFF - a3 >= 1 )
    ++a3;
  if ( v4 < 1 )
    return 0LL;
  v5 = (a3 + 7) & 0xFFFFFFF8;
  if ( a3 > v5 )
    return 0LL;
  if ( (int)ATL::AtlMultiply<unsigned long>(&v9, v5, a4) < 0 )
    return 0LL;
  if ( v9 > 0xFFFFFFE7 )
    return 0LL;
  result = (struct ATL::CStringData *)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v7 + 8) + 16LL))(
                                        *(_QWORD *)(v7 + 8),
                                        v6,
                                        v9 + 24);
  if ( !result )
    return 0LL;
  *((_DWORD *)result + 3) = v5 - 1;
  return result;
}
