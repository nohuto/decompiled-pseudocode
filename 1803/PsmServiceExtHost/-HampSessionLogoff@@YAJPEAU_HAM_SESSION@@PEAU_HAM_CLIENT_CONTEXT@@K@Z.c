/*
 * XREFs of ?HampSessionLogoff@@YAJPEAU_HAM_SESSION@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x1800350E0
 * Callers:
 *     ?HamSrvLogoffSession@@YAJPEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180034F68 (-HamSrvLogoffSession@@YAJPEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 * Callees:
 *     ?HampSessionReleaseLockExclusive@@YAXPEAU_HAM_SESSION@@@Z @ 0x180035180 (-HampSessionReleaseLockExclusive@@YAXPEAU_HAM_SESSION@@@Z.c)
 *     ?HampSessionAcquireLockExclusive@@YAXPEAU_HAM_SESSION@@@Z @ 0x1800351A8 (-HampSessionAcquireLockExclusive@@YAXPEAU_HAM_SESSION@@@Z.c)
 *     ?HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x1800351D8 (-HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 */

__int64 __fastcall HampSessionLogoff(struct _HAM_SESSION *a1, struct _HAM_CLIENT_CONTEXT *a2, int a3)
{
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8

  HampSessionAcquireLockExclusive(a1);
  v6 = *((_DWORD *)a1 + 33);
  if ( (v6 & 2) != 0 )
  {
    v7 = -1073740682;
  }
  else
  {
    v7 = 0;
    *((_DWORD *)a1 + 33) = v6 | 2;
  }
  HampSessionReleaseLockExclusive(a1);
  if ( v7 >= 0 )
  {
    v7 = HampSessionTerminate(a1, v8, v9, a2, a3);
    if ( v7 >= 0 )
      v7 = 0;
    HampSessionAcquireLockExclusive(a1);
    *((_DWORD *)a1 + 33) &= ~2u;
    HampSessionReleaseLockExclusive(a1);
  }
  return (unsigned int)v7;
}
