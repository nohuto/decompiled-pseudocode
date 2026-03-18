/*
 * XREFs of ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00D9254
 * Callers:
 *     FreeHook @ 0x1C00D9150 (FreeHook.c)
 * Callees:
 *     PhkFirstValid @ 0x1C0048EE8 (PhkFirstValid.c)
 *     PhkFirstGlobalValid @ 0x1C00CC1D8 (PhkFirstGlobalValid.c)
 */

void __fastcall CheckWHFBits(struct tagTHREADINFO *a1, int a2)
{
  BOOL v4; // esi
  __int64 Valid; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // r9d
  PRKPROCESS *v9; // r15
  int v10; // edx

  v4 = 1;
  Valid = PhkFirstValid((__int64)a1, a2);
  if ( Valid )
    v4 = (*(_DWORD *)(Valid + 64) & 1) == 0 && PhkFirstGlobalValid((__int64)a1, a2, v7) == 0;
  if ( v8 )
  {
    *((_DWORD *)a1 + 150) &= ~(1 << (a2 + 1));
    if ( *((_QWORD *)a1 + 54) )
    {
      v9 = (PRKPROCESS *)*((_QWORD *)a1 + 47);
      if ( v9 == (PRKPROCESS *)PsGetCurrentProcessWin32Process((unsigned int)(a2 + 1), v6) )
      {
        v10 = 0;
      }
      else
      {
        KeAttachProcess(*v9);
        v10 = 1;
      }
      *(_DWORD *)(*((_QWORD *)a1 + 54) + 56LL) = *((_DWORD *)a1 + 150);
      if ( v10 )
        KeDetachProcess();
    }
  }
  if ( v4 )
    *(_DWORD *)(**((_QWORD **)a1 + 52) + 16LL) &= ~(1 << (a2 + 1));
}
