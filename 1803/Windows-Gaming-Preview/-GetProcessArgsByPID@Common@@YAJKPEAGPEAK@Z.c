/*
 * XREFs of ?GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z @ 0x18003CE34
 * Callers:
 *     ?GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003F120 (-GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042940 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall Common::GetProcessArgsByPID(DWORD dwProcessId, char *a2, unsigned __int16 *a3, unsigned int *a4)
{
  char *v5; // rdi
  NTSTATUS v6; // r14d
  unsigned int v7; // esi
  unsigned __int16 *v8; // rbp
  HANDLE v10; // r15
  signed int LastError; // eax
  int v12; // ebx
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int16 v15; // r9
  int v16; // r8d
  _WORD *v17; // rax
  __int64 v18; // rdx
  char *v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // r8
  signed __int64 v23; // rdx
  __int16 v24; // ax
  ULONG ProcessInformationLength; // [rsp+70h] [rbp+18h] BYREF

  ProcessInformationLength = 512;
  v5 = a2;
  v6 = -1073741820;
  v7 = 0;
  v8 = 0LL;
  if ( !a3 )
    return 2147500035LL;
  *(_WORD *)a2 = 0;
  v10 = OpenProcess(0x1000u, 0, dwProcessId);
  if ( v10 )
    goto LABEL_16;
  LastError = GetLastError();
  v12 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v12 = LastError;
  if ( v12 >= 0 )
  {
LABEL_16:
    v13 = 0;
    do
    {
      if ( v13 >= 2 || ProcessInformationLength > 0x10000 )
        break;
      operator delete(v8);
      v8 = (unsigned __int16 *)operator new[](
                                 ProcessInformationLength + 2LL,
                                 (const struct std::nothrow_t *)&std::nothrow);
      v6 = v8
         ? NtQueryInformationProcess(
             v10,
             ProcessImageFileMapping|ProcessUserModeIOPL,
             v8,
             ProcessInformationLength,
             &ProcessInformationLength)
         : -1073741801;
      ++v13;
    }
    while ( v6 == -1073741820 );
    v12 = 0;
    if ( v6 < 0 )
      v12 = v6 | 0x10000000;
    if ( v12 >= 0 )
    {
      v14 = *v8 >> 1;
      v15 = 32;
      v8[v14 + 8] = 0;
      v16 = 1;
      if ( v8[8] == 34 )
        v15 = 34;
      if ( (unsigned int)v14 <= 1 )
        goto LABEL_44;
      v17 = v8 + 9;
      while ( 1 )
      {
        v18 = (unsigned int)(v16 + 1);
        if ( *v17 == v15 )
          break;
        ++v17;
        ++v16;
        if ( (unsigned int)v18 >= (unsigned int)v14 )
          goto LABEL_44;
      }
      v7 = v14 - v16;
      v19 = (char *)&v8[v18 + 8];
      if ( !v19 || !v7 )
        goto LABEL_44;
      do
      {
        if ( *(_WORD *)v19 != 32 )
          break;
        v19 += 2;
        --v7;
      }
      while ( v7 );
      v20 = *(unsigned int *)a3;
      v12 = 0;
      v21 = v20 - 1;
      if ( v7 < (int)v20 - 1 )
        v21 = v7;
      v7 = v21;
      if ( (unsigned __int64)(v20 - 1) > 0x7FFFFFFE )
        v12 = -2147024809;
      if ( v12 < 0 )
      {
        if ( !*(_DWORD *)a3 )
        {
LABEL_44:
          *(_DWORD *)a3 = v7;
          goto LABEL_45;
        }
      }
      else if ( v21 <= 0x7FFFFFFEuLL )
      {
        v12 = 0;
        if ( !*(_DWORD *)a3 )
          goto LABEL_41;
        v22 = v21 - v20;
        v23 = v19 - v5;
        do
        {
          if ( !(v22 + v20) )
            break;
          v24 = *(_WORD *)&v5[v23];
          if ( !v24 )
            break;
          *(_WORD *)v5 = v24;
          v5 += 2;
          --v20;
        }
        while ( v20 );
        if ( !v20 )
        {
LABEL_41:
          v5 -= 2;
          v12 = -2147024774;
        }
      }
      else
      {
        v12 = -2147024809;
      }
      *(_WORD *)v5 = 0;
      goto LABEL_44;
    }
  }
LABEL_45:
  operator delete(v8);
  if ( v10 )
    CloseHandle(v10);
  return (unsigned int)v12;
}
