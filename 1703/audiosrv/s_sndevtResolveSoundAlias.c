/*
 * XREFs of s_sndevtResolveSoundAlias @ 0x1800832E0
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x180013D20 (MIDL_user_allocate.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x180082FE0 (-StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 *     ?_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z @ 0x1800D31FC (-_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z.c)
 */

__int64 __fastcall s_sndevtResolveSoundAlias(
        RPC_BINDING_HANDLE BindingHandle,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        LPHANDLE lpTargetHandle,
        wchar_t **a6)
{
  unsigned __int16 *v6; // rbx
  char *FileW; // r13
  char *v8; // r15
  int v9; // r12d
  unsigned int v10; // edi
  unsigned __int64 v11; // r8
  const unsigned __int16 *v12; // rcx
  int SoundAlias; // ebx
  int v14; // r12d
  DWORD LastError; // eax
  HANDLE CurrentProcess; // rax
  __int64 v17; // rax
  size_t v18; // rbx
  wchar_t *v19; // rax
  int dwCreationDisposition; // [rsp+20h] [rbp-E0h]
  unsigned int v22; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v23; // [rsp+44h] [rbp-BCh]
  unsigned int Pid; // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+4Ch] [rbp-B4h]
  HKEY phkResult; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 *v27; // [rsp+58h] [rbp-A8h]
  unsigned __int16 *v28; // [rsp+60h] [rbp-A0h]
  RPC_BINDING_HANDLE Binding; // [rsp+68h] [rbp-98h]
  wchar_t FileName[264]; // [rsp+70h] [rbp-90h] BYREF

  v6 = a2;
  Binding = BindingHandle;
  v23 = a4;
  FileW = 0LL;
  v27 = a3;
  v8 = 0LL;
  v28 = a2;
  v9 = 0;
  v22 = a4;
  if ( !a2 )
    return (unsigned int)-2147418096;
  if ( lpTargetHandle )
  {
    *lpTargetHandle = (HANDLE)-1LL;
    if ( !a6 )
      goto LABEL_8;
  }
  else if ( !a6 )
  {
    return (unsigned int)-2147418096;
  }
  *a6 = 0LL;
LABEL_8:
  v10 = RpcImpersonateClient(BindingHandle);
  if ( !v10 )
  {
    v25 = 1;
    while ( 1 )
    {
      FileName[0] = 0;
      v10 = RegOpenCurrentUser(1u, &phkResult);
      if ( v10 )
        goto LABEL_37;
      v12 = (const unsigned __int16 *)&szSystemDefaultSound;
      if ( !v9 )
        v12 = v6;
      SoundAlias = _GetSoundAlias(v12, FileName, v11, &v22, dwCreationDisposition, phkResult, v27);
      RegCloseKey(phkResult);
      if ( !SoundAlias || !FileName[0] )
        goto LABEL_37;
      if ( !lpTargetHandle )
      {
        v14 = v25;
        goto LABEL_28;
      }
      FileW = (char *)CreateFileW(FileName, 0x80000000, 3u, 0LL, 3u, 0x60000080u, 0LL);
      if ( FileW != (char *)-1LL )
        break;
      if ( (v23 & 2) != 0 || v9 == 1 )
      {
        GetLastError();
        goto LABEL_37;
      }
      v6 = v28;
      v9 = 1;
    }
    if ( I_RpcBindingInqLocalClientPID(Binding, &Pid) )
      goto LABEL_37;
    v8 = (char *)OpenProcess(0x40u, 0, Pid);
    v10 = RpcRevertToSelf();
    if ( v10 )
      goto LABEL_37;
    v14 = 0;
    if ( !v8
      || (CurrentProcess = GetCurrentProcess(), !DuplicateHandle(CurrentProcess, FileW, v8, lpTargetHandle, 0, 0, 2u)) )
    {
      LastError = GetLastError();
LABEL_38:
      v10 = LastError;
      goto LABEL_39;
    }
LABEL_28:
    if ( a6 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( FileName[v17] );
      v18 = 2 * v17 + 2;
      v19 = (wchar_t *)MIDL_user_allocate(v18);
      *a6 = v19;
      if ( v19 )
      {
        StringCbCopyExW(v19, v18, FileName, 0LL, 0LL, 0x600u);
      }
      else
      {
        v10 = 14;
        if ( (char *)*lpTargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        {
          CloseHandle(*lpTargetHandle);
          *lpTargetHandle = 0LL;
        }
        *lpTargetHandle = (HANDLE)-1LL;
      }
    }
    if ( v14 == 1 )
    {
LABEL_37:
      LastError = RpcRevertToSelf();
      goto LABEL_38;
    }
LABEL_39:
    if ( (unsigned __int64)(FileW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(FileW);
    if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v8);
  }
  return v10;
}
