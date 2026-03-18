/*
 * XREFs of ??0_Init_locks@std@@QEAA@XZ @ 0x1800D2D14
 * Callers:
 *     std::_dynamic_initializer_for__initlocks__ @ 0x180001000 (std--_dynamic_initializer_for__initlocks__.c)
 * Callees:
 *     _Mtxinit @ 0x1800D2E24 (_Mtxinit.c)
 */

std::_Init_locks *__fastcall std::_Init_locks::_Init_locks(std::_Init_locks *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rdi

  if ( !_InterlockedIncrement(&dword_18023D850) )
  {
    v2 = &stru_18023DD00;
    v3 = 4LL;
    do
    {
      Mtxinit(v2++);
      --v3;
    }
    while ( v3 );
  }
  return this;
}
