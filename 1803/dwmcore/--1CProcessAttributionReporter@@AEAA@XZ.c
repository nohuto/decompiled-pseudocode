/*
 * XREFs of ??1CProcessAttributionReporter@@AEAA@XZ @ 0x180148090
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x18005E608 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcessAttributionReporter::~CProcessAttributionReporter(CProcessAttributionReporter *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  char *v3; // rcx
  char *v4; // rcx
  char *v5; // rcx
  char *v6; // rcx

  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 15);
  if ( v2 )
    (**v2)(v2, 1LL);
  v3 = (char *)*((_QWORD *)this + 12);
  if ( v3 )
  {
    std::_Deallocate(v3, (__int64)(*((_QWORD *)this + 14) - (_QWORD)v3) >> 2, 4uLL);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  v4 = (char *)*((_QWORD *)this + 9);
  if ( v4 )
  {
    std::_Deallocate(v4, (__int64)(*((_QWORD *)this + 11) - (_QWORD)v4) >> 2, 4uLL);
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  v5 = (char *)*((_QWORD *)this + 6);
  if ( v5 )
  {
    std::_Deallocate(v5, (__int64)(*((_QWORD *)this + 8) - (_QWORD)v5) >> 2, 4uLL);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  v6 = (char *)*((_QWORD *)this + 3);
  if ( v6 )
  {
    std::_Deallocate(v6, (__int64)(*((_QWORD *)this + 5) - (_QWORD)v6) >> 2, 4uLL);
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  if ( *(_QWORD *)this )
  {
    std::_Deallocate(*(char **)this, (__int64)(*((_QWORD *)this + 2) - *(_QWORD *)this) >> 2, 4uLL);
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
}
