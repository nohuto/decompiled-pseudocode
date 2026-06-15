/*
 * XREFs of ??1CProcessSubmixManager@@UEAA@XZ @ 0x1800AEF14
 * Callers:
 *     ??_GCProcessSubmixManager@@UEAAPEAXI@Z @ 0x1800AF040 (--_GCProcessSubmixManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CApplicationSubmix@@QEAA@XZ @ 0x1800AEE30 (--1CApplicationSubmix@@QEAA@XZ.c)
 */

void __fastcall CProcessSubmixManager::~CProcessSubmixManager(CProcessSubmixManager *this)
{
  CApplicationSubmix **v1; // rdi
  CApplicationSubmix **v3; // rbp
  CApplicationSubmix *v4; // rsi

  v1 = (CApplicationSubmix **)*((_QWORD *)this + 7);
  if ( v1 )
  {
    v3 = (CApplicationSubmix **)*((_QWORD *)this + 8);
    while ( v1 != v3 )
    {
      v4 = *v1;
      if ( *v1 )
      {
        CApplicationSubmix::~CApplicationSubmix(*v1);
        operator delete(v4, (const struct std::nothrow_t *)0x40);
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
