/*
 * XREFs of ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C0055D80
 * Callers:
 *     FreeHook @ 0x1C0055C70 (FreeHook.c)
 * Callees:
 *     PhkFirstValid @ 0x1C0056078 (PhkFirstValid.c)
 *     PhkFirstGlobalValid @ 0x1C009EB9C (PhkFirstGlobalValid.c)
 */

void __fastcall CheckWHFBits(struct tagTHREADINFO *a1, __int64 a2)
{
  unsigned int v2; // r14d
  BOOL v4; // esi
  __int64 Valid; // rax
  __int64 v6; // r8
  int v7; // r9d
  PRKPROCESS *v8; // r15
  int v9; // edx

  v2 = a2;
  v4 = 1;
  Valid = PhkFirstValid(a1, a2);
  if ( Valid )
    v4 = (*(_DWORD *)(Valid + 64) & 1) == 0 && PhkFirstGlobalValid(a1, v2, v6, 0LL) == 0;
  if ( v7 )
  {
    *((_DWORD *)a1 + 164) &= ~(1 << (v2 + 1));
    if ( *((_QWORD *)a1 + 57) )
    {
      v8 = (PRKPROCESS *)*((_QWORD *)a1 + 50);
      if ( v8 == (PRKPROCESS *)PsGetCurrentProcessWin32Process(v2 + 1) )
      {
        v9 = 0;
      }
      else
      {
        KeAttachProcess(*v8);
        v9 = 1;
      }
      *(_DWORD *)(*((_QWORD *)a1 + 57) + 56LL) = *((_DWORD *)a1 + 164);
      if ( v9 )
        KeDetachProcess();
    }
  }
  if ( v4 )
    *(_DWORD *)(**((_QWORD **)a1 + 55) + 16LL) &= ~(1 << (v2 + 1));
}
