/*
 * XREFs of ??1_Init_locks@std@@QEAA@XZ @ 0x1800D2DA0
 * Callers:
 *     std::_dynamic_atexit_destructor_for__initlocks__ @ 0x1800D6CB0 (std--_dynamic_atexit_destructor_for__initlocks__.c)
 * Callees:
 *     _Mtxdst @ 0x1800D2E1C (_Mtxdst.c)
 */

void __fastcall std::_Init_locks::~_Init_locks(std::_Init_locks *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  __int64 v2; // rdi

  if ( _InterlockedDecrement(&dword_18023D850) < 0 )
  {
    v1 = &stru_18023DD00;
    v2 = 4LL;
    do
    {
      Mtxdst(v1++);
      --v2;
    }
    while ( v2 );
  }
}
