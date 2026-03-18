/*
 * XREFs of ??1CProcessAttributionManager@@AEAA@XZ @ 0x180145D24
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x18005E608 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CProcessAttributionManager::~CProcessAttributionManager(CProcessAttributionManager *this)
{
  void **v1; // rsi
  __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  char *v5; // rcx

  v1 = *(void ***)this;
  v3 = 0LL;
  v4 = (unsigned __int64)(*((_QWORD *)this + 1) - *(_QWORD *)this + 7LL) >> 3;
  if ( *(_QWORD *)this > *((_QWORD *)this + 1) )
    v4 = 0LL;
  if ( v4 )
  {
    do
    {
      operator delete(*v1);
      ++v3;
      ++v1;
    }
    while ( v3 != v4 );
  }
  v5 = (char *)*((_QWORD *)this + 3);
  if ( v5 )
  {
    std::_Deallocate(v5, (__int64)(*((_QWORD *)this + 5) - (_QWORD)v5) >> 3, 8uLL);
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  if ( *(_QWORD *)this )
  {
    std::_Deallocate(*(char **)this, (__int64)(*((_QWORD *)this + 2) - *(_QWORD *)this) >> 3, 8uLL);
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
}
