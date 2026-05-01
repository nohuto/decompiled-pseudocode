/*
 * XREFs of ?RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z @ 0x18000B110
 * Callers:
 *     ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x180042770 (-OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z.c)
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180045430 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?s_SpecialMsgWndProc@CIAMSpecialWindowBase@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180084070 (-s_SpecialMsgWndProc@CIAMSpecialWindowBase@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

struct CDelayIAMOperations::COperation *__fastcall CDelayIAMOperations::RemoveOperation(
        CDelayIAMOperations *this,
        int a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // r8
  __int64 *i; // rcx
  __int64 v6; // rbx
  unsigned __int64 v8; // rdx

  v2 = *((_QWORD *)this + 4);
  v3 = 0LL;
  if ( !v2 )
    return 0LL;
  for ( i = (__int64 *)*((_QWORD *)this + 3); ; ++i )
  {
    v6 = *i;
    if ( *(_DWORD *)(*i + 8) == a2 )
      break;
    if ( ++v3 >= v2 )
      return 0LL;
  }
  v8 = v2;
  if ( v3 < v2 )
  {
    if ( v3 != v2 - 1 )
    {
      memmove(i, i + 1, 8 * (v2 - v3) - 8);
      v8 = *((_QWORD *)this + 4);
    }
    *((_QWORD *)this + 4) = v8 - 1;
  }
  if ( *(_DWORD *)(v6 + 12) != 5 )
    --*((_DWORD *)this + 14);
  return (struct CDelayIAMOperations::COperation *)v6;
}
