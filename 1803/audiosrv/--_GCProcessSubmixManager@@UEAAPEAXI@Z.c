/*
 * XREFs of ??_GCProcessSubmixManager@@UEAAPEAXI@Z @ 0x1800D6660
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_GCAppSubmixClientContext@@QEAAPEAXI@Z @ 0x1800D65BC (--_GCAppSubmixClientContext@@QEAAPEAXI@Z.c)
 */

CProcessSubmixManager *__fastcall CProcessSubmixManager::`scalar deleting destructor'(
        CProcessSubmixManager *this,
        char a2)
{
  CAppSubmixClientContext **v2; // rdi
  CAppSubmixClientContext **v5; // rsi

  v2 = (CAppSubmixClientContext **)*((_QWORD *)this + 7);
  if ( v2 )
  {
    v5 = (CAppSubmixClientContext **)*((_QWORD *)this + 8);
    if ( v2 != v5 )
    {
      do
      {
        if ( *v2 )
          CAppSubmixClientContext::`scalar deleting destructor'(*v2);
        ++v2;
      }
      while ( v2 != v5 );
      v2 = (CAppSubmixClientContext **)*((_QWORD *)this + 7);
    }
    std::_Deallocate(v2, (__int64)(*((_QWORD *)this + 9) - (_QWORD)v2) >> 3, 8uLL);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
