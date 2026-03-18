/*
 * XREFs of ?IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z @ 0x1C00816F0
 * Callers:
 *     ValidateHandleSecure @ 0x1C003E310 (ValidateHandleSecure.c)
 *     ValidateHwndEx @ 0x1C00476F0 (ValidateHwndEx.c)
 *     NtUserGetDC @ 0x1C0048830 (NtUserGetDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsHandleEntrySecure(void *a1, struct _HANDLEENTRY *a2, __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v6; // rbx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v8; // r8d
  __int64 v9; // r9
  __int16 v10; // ax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r9
  void **v15; // rax
  unsigned int v16; // edx

  v3 = gpKernelHandleTable;
  v6 = 3LL * (unsigned int)((a2 - (struct _HANDLEENTRY *)qword_1C018E9B8) >> 5);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3);
  v8 = 0;
  v9 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v10 = *((_WORD *)&unk_1C015EA5C + 12 * *((unsigned __int8 *)a2 + 24));
    if ( (v10 & 2) != 0 )
    {
      v12 = v3[v6 + 1];
    }
    else
    {
      if ( (v10 & 1) == 0 )
        return 0LL;
      v11 = v3[v6 + 1];
      if ( !v11 )
        return 0LL;
      v12 = *(_QWORD *)(v11 + 400);
    }
    if ( v12 )
    {
      if ( *(PVOID *)v12 == gpepCSRSS )
        return 1LL;
      v13 = *(_QWORD *)(v9 + 728);
      if ( *(_QWORD *)(v12 + 728) == v13 )
        return 1LL;
      v15 = *(void ***)(v13 + 56);
      if ( v15 )
      {
        v16 = *(_DWORD *)(v13 + 48);
        if ( v16 )
        {
          while ( *v15 != a1 )
          {
            ++v8;
            ++v15;
            if ( v8 >= v16 )
              return 0LL;
          }
          return 1LL;
        }
      }
    }
    return 0LL;
  }
  return 1LL;
}
