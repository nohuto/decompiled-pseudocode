/*
 * XREFs of ??1_Init_locks@std@@QEAA@XZ @ 0x1800A4F2C
 * Callers:
 *     std::_dynamic_atexit_destructor_for__initlocks__ @ 0x1800CB370 (std--_dynamic_atexit_destructor_for__initlocks__.c)
 *     std::_dynamic_atexit_destructor_for__initlocks___0 @ 0x1800CB460 (std--_dynamic_atexit_destructor_for__initlocks___0.c)
 * Callees:
 *     _Mtxdst @ 0x1800ACA40 (_Mtxdst.c)
 */

void __fastcall std::_Init_locks::~_Init_locks(std::_Init_locks *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  __int64 v2; // rdi

  if ( _InterlockedDecrement(&dword_18017B180) < 0 )
  {
    v1 = &stru_18017B2F0;
    v2 = 4LL;
    do
    {
      Mtxdst(v1++);
      --v2;
    }
    while ( v2 );
  }
}
