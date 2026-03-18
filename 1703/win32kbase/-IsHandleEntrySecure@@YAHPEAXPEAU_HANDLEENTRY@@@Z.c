/*
 * XREFs of ?IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z @ 0x1C00718B8
 * Callers:
 *     NtUserGetDC @ 0x1C00373A0 (NtUserGetDC.c)
 *     ValidateHandleSecure @ 0x1C0040F90 (ValidateHandleSecure.c)
 *     ValidateHwndEx @ 0x1C0071600 (ValidateHwndEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsHandleEntrySecure(void *a1, struct _HANDLEENTRY *a2, __int64 a3)
{
  char *v5; // rbx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v7; // r8d
  __int64 v8; // r9
  __int16 v9; // dx
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  void **v14; // rcx
  unsigned int v15; // r9d

  v5 = (char *)gpKernelHandleTable + 16 * (unsigned int)((a2 - (struct _HANDLEENTRY *)qword_1C0189E38) >> 5);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3);
  v7 = 0;
  v8 = CurrentProcessWin32Process;
  if ( !CurrentProcessWin32Process )
    return 1LL;
  v9 = *((_WORD *)&unk_1C015ED5C + 12 * *((unsigned __int8 *)a2 + 24));
  result = 1LL;
  if ( (v9 & 2) != 0 )
  {
    v12 = *((_QWORD *)v5 + 1);
  }
  else
  {
    if ( (v9 & 1) == 0 )
      return 0LL;
    v11 = *((_QWORD *)v5 + 1);
    if ( !v11 )
      return 0LL;
    v12 = *(_QWORD *)(v11 + 376);
  }
  if ( !v12 )
    return 0LL;
  v13 = *(_QWORD *)(v8 + 720);
  if ( *(_QWORD *)(v12 + 720) == v13 )
    return result;
  v14 = *(void ***)(v13 + 56);
  if ( !v14 )
    return 0LL;
  v15 = *(_DWORD *)(v13 + 48);
  if ( !v15 )
    return 0LL;
  while ( *v14 != a1 )
  {
    ++v7;
    ++v14;
    if ( v7 >= v15 )
      return 0LL;
  }
  return result;
}
