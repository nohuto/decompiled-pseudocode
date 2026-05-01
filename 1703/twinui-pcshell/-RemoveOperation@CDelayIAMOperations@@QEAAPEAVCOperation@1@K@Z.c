/*
 * XREFs of ?RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z @ 0x180006D70
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180008380 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x18000F1B0 (-OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct CDelayIAMOperations::COperation *__fastcall CDelayIAMOperations::RemoveOperation(
        CDelayIAMOperations *this,
        int a2)
{
  struct CDelayIAMOperations::COperation *result; // rax
  unsigned __int64 v4; // r8
  __int64 *i; // rcx
  __int64 v6; // rdi
  unsigned __int64 v7; // rdx

  result = 0LL;
  v4 = 0LL;
  if ( *((_QWORD *)this + 4) )
  {
    for ( i = (__int64 *)*((_QWORD *)this + 3); ; ++i )
    {
      v6 = *i;
      if ( *(_DWORD *)(*i + 8) == a2 )
        break;
      if ( ++v4 >= *((_QWORD *)this + 4) )
        return result;
    }
    v7 = *((_QWORD *)this + 4);
    if ( v4 < v7 )
    {
      if ( v4 != v7 - 1 )
        memmove(
          (void *)(*((_QWORD *)this + 3) + 8 * v4),
          (const void *)(*((_QWORD *)this + 3) + 8 * v4 + 8),
          8 * (v7 - v4) - 8);
      --*((_QWORD *)this + 4);
    }
    if ( *(_DWORD *)(v6 + 12) != 5 )
      --*((_DWORD *)this + 14);
    return (struct CDelayIAMOperations::COperation *)v6;
  }
  return result;
}
