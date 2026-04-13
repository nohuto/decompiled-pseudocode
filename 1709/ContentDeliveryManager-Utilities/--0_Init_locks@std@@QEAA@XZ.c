/*
 * XREFs of ??0_Init_locks@std@@QEAA@XZ @ 0x180097E08
 * Callers:
 *     std::_dynamic_initializer_for__initlocks__ @ 0x180001630 (std--_dynamic_initializer_for__initlocks__.c)
 *     std::_dynamic_initializer_for__initlocks___0 @ 0x180001680 (std--_dynamic_initializer_for__initlocks___0.c)
 * Callees:
 *     _Mtxinit @ 0x18009F7E4 (_Mtxinit.c)
 */

std::_Init_locks *__fastcall std::_Init_locks::_Init_locks(std::_Init_locks *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rdi

  if ( !_InterlockedIncrement(&dword_18015CD60) )
  {
    v2 = &stru_18015CF50;
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
