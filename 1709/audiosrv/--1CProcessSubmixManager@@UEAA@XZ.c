/*
 * XREFs of ??1CProcessSubmixManager@@UEAA@XZ @ 0x18009F288
 * Callers:
 *     ??_GCProcessSubmixManager@@UEAAPEAXI@Z @ 0x18009F3C0 (--_GCProcessSubmixManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAppSubmixClientContext@@QEAA@XZ @ 0x18009F1A4 (--1CAppSubmixClientContext@@QEAA@XZ.c)
 */

void __fastcall CProcessSubmixManager::~CProcessSubmixManager(CProcessSubmixManager *this)
{
  CAppSubmixClientContext **v1; // rdi
  CAppSubmixClientContext **v3; // rbp
  CAppSubmixClientContext *v4; // rsi

  v1 = (CAppSubmixClientContext **)*((_QWORD *)this + 7);
  if ( v1 )
  {
    v3 = (CAppSubmixClientContext **)*((_QWORD *)this + 8);
    while ( v1 != v3 )
    {
      v4 = *v1;
      if ( *v1 )
      {
        CAppSubmixClientContext::~CAppSubmixClientContext(*v1);
        operator delete(v4, (const struct std::nothrow_t *)0x48);
      }
      ++v1;
    }
    std::_Deallocate(*((_QWORD **)this + 7), (__int64)(*((_QWORD *)this + 9) - *((_QWORD *)this + 7)) >> 3, 8uLL);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
}
