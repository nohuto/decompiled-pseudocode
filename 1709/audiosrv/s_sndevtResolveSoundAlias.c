/*
 * XREFs of s_sndevtResolveSoundAlias @ 0x180065720
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x18001F580 (MIDL_user_allocate.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ?StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x180065420 (-StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 *     ?_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z @ 0x1800E063C (-_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z.c)
 */

__int64 __fastcall s_sndevtResolveSoundAlias(
        void *a1,
        const unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        LPHANDLE lpTargetHandle,
        wchar_t **a6)
{
  const unsigned __int16 *v6; // rbx
  char *FileW; // r12
  char *v8; // r13
  int v9; // r14d
  DWORD LastError; // edi
  unsigned __int64 v11; // r8
  const unsigned __int16 *v12; // rcx
  int SoundAlias; // ebx
  int v14; // r14d
  HANDLE CurrentProcess; // rax
  __int64 v16; // rax
  size_t v17; // rbx
  wchar_t *v18; // rax
  int dwCreationDisposition; // [rsp+20h] [rbp-E0h]
  char v21; // [rsp+40h] [rbp-C0h]
  unsigned int v22; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int Pid; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+4Ch] [rbp-B4h]
  const unsigned __int16 *v25; // [rsp+50h] [rbp-B0h]
  HKEY phkResult; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 *v27; // [rsp+60h] [rbp-A0h]
  RPC_BINDING_HANDLE Binding; // [rsp+68h] [rbp-98h]
  wchar_t FileName[264]; // [rsp+70h] [rbp-90h] BYREF

  v6 = a2;
  v21 = a4;
  v22 = a4;
  v27 = a3;
  FileW = 0LL;
  v25 = a2;
  v8 = 0LL;
  Binding = a1;
  v9 = 0;
  if ( !a2 )
    return (DWORD)-2147418096;
  if ( !lpTargetHandle )
  {
    if ( !a6 )
      return (DWORD)-2147418096;
    goto LABEL_7;
  }
  *lpTargetHandle = (HANDLE)-1LL;
  if ( a6 )
LABEL_7:
    *a6 = 0LL;
  LastError = RpcImpersonateClient(a1);
  if ( LastError )
    return LastError;
  v24 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      FileName[0] = 0;
      LastError = RegOpenCurrentUser(1u, &phkResult);
      if ( LastError )
        goto LABEL_44;
      v12 = (const unsigned __int16 *)&szSystemDefaultSound;
      if ( !v9 )
        v12 = v6;
      SoundAlias = _GetSoundAlias(v12, FileName, v11, &v22, dwCreationDisposition, phkResult, v27);
      RegCloseKey(phkResult);
      if ( !SoundAlias )
      {
        if ( (v21 & 2) != 0 || v9 == 1 )
        {
          LastError = 1168;
          goto LABEL_44;
        }
        goto LABEL_16;
      }
      if ( FileName[0] )
        break;
      if ( (v21 & 2) != 0 || v9 == 1 )
      {
        LastError = 2;
LABEL_44:
        RpcRevertToSelf();
        goto LABEL_45;
      }
LABEL_16:
      v6 = v25;
      v9 = 1;
    }
    if ( !lpTargetHandle )
    {
      v14 = v24;
      goto LABEL_35;
    }
    FileW = (char *)CreateFileW(FileName, 0x80000000, 3u, 0LL, 3u, 0x60000080u, 0LL);
    if ( FileW != (char *)-1LL )
      break;
    if ( (v21 & 2) != 0 || v9 == 1 )
    {
      LastError = GetLastError();
      goto LABEL_44;
    }
    v6 = v25;
    v9 = 1;
  }
  LastError = I_RpcBindingInqLocalClientPID(Binding, &Pid);
  if ( LastError )
    goto LABEL_44;
  v8 = (char *)OpenProcess(0x40u, 0, Pid);
  LastError = RpcRevertToSelf();
  if ( LastError )
    goto LABEL_44;
  v14 = 0;
  if ( !v8
    || (CurrentProcess = GetCurrentProcess(), !DuplicateHandle(CurrentProcess, FileW, v8, lpTargetHandle, 0, 0, 2u)) )
  {
    LastError = GetLastError();
    goto LABEL_45;
  }
LABEL_35:
  if ( a6 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( FileName[v16] );
    v17 = 2 * v16 + 2;
    v18 = (wchar_t *)MIDL_user_allocate(v17);
    *a6 = v18;
    if ( v18 )
    {
      StringCbCopyExW(v18, v17, FileName, 0LL, 0LL, 0x600u);
    }
    else
    {
      LastError = 14;
      if ( (char *)*lpTargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      {
        CloseHandle(*lpTargetHandle);
        *lpTargetHandle = 0LL;
      }
      *lpTargetHandle = (HANDLE)-1LL;
    }
  }
  if ( v14 == 1 )
    goto LABEL_44;
LABEL_45:
  if ( (unsigned __int64)(FileW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(FileW);
  if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v8);
  return LastError;
}
