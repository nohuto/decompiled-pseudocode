/*
 * XREFs of ?IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z @ 0x1C0034B74
 * Callers:
 *     UserIsWindowGdiScaled @ 0x1C0022280 (UserIsWindowGdiScaled.c)
 *     ValidateHwndEx @ 0x1C0022ED0 (ValidateHwndEx.c)
 *     ValidateHandleSecure @ 0x1C0034E70 (ValidateHandleSecure.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsHandleEntrySecure(void *a1, struct _HANDLEENTRY *a2)
{
  _QWORD *v2; // rdi
  __int64 v5; // rbx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v7; // r8d
  __int64 v8; // r9
  __int16 v9; // ax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r9
  void **v14; // rax
  unsigned int v15; // edx

  v2 = gpKernelHandleTable;
  v5 = 3LL * (unsigned int)((a2 - (struct _HANDLEENTRY *)qword_1C01A0E28) >> 5);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v7 = 0;
  v8 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v9 = *((_WORD *)&unk_1C0172BBC + 12 * *((unsigned __int8 *)a2 + 24));
    if ( (v9 & 2) != 0 )
    {
      v11 = v2[v5 + 1];
    }
    else
    {
      if ( (v9 & 1) == 0 )
        return 0LL;
      v10 = v2[v5 + 1];
      if ( !v10 )
        return 0LL;
      v11 = *(_QWORD *)(v10 + 416);
    }
    if ( v11 )
    {
      if ( *(PVOID *)v11 == gpepCSRSS )
        return 1LL;
      v12 = *(_QWORD *)(v8 + 760);
      if ( *(_QWORD *)(v11 + 760) == v12 )
        return 1LL;
      v14 = *(void ***)(v12 + 56);
      if ( v14 )
      {
        v15 = *(_DWORD *)(v12 + 48);
        if ( v15 )
        {
          while ( *v14 != a1 )
          {
            ++v7;
            ++v14;
            if ( v7 >= v15 )
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
