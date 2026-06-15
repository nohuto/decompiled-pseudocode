/*
 * XREFs of ?HandleDeviceAccess@@YAJPEAXPEBG1_N@Z @ 0x1800954DC
 * Callers:
 *     s_GrantDeviceAccessForPackage @ 0x180095850 (s_GrantDeviceAccessForPackage.c)
 *     s_RevokeDeviceAccessForPackage @ 0x180095860 (s_RevokeDeviceAccessForPackage.c)
 * Callees:
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180025D84 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x180080E34 (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     ?RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z @ 0x1800956C0 (-RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z.c)
 */

__int64 __fastcall HandleDeviceAccess(void *a1, const unsigned __int16 *a2, const unsigned __int16 *a3, char a4)
{
  unsigned __int16 *v5; // rsi
  int v8; // ebx
  HANDLE CurrentThread; // rax
  unsigned int *v10; // r8
  unsigned __int16 **v11; // r9
  int TokenInformation; // eax
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v14; // rdi
  void *TokenHandle; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int16 *v17; // [rsp+38h] [rbp-30h] BYREF
  struct CAudioSessionManagerProvider *v18; // [rsp+40h] [rbp-28h] BYREF

  v18 = 0LL;
  v5 = 0LL;
  v17 = 0LL;
  TokenHandle = 0LL;
  v8 = RpcImpersonateClient(a1);
  if ( !v8 )
  {
    CurrentThread = GetCurrentThread();
    if ( OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
    {
      TokenInformation = GetTokenInformation(TokenHandle, &v17, v10, v11);
      v5 = v17;
    }
    else
    {
      TokenInformation = GetLastError();
    }
    v8 = TokenInformation;
    RpcRevertToSelf();
  }
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TokenHandle);
    TokenHandle = 0LL;
  }
  if ( v8 )
  {
    if ( v8 > 0 )
      v8 = (unsigned __int16)v8 | 0x80070000;
  }
  else
  {
    (*(void (__fastcall **)(struct IAudioPolicyManager *, const unsigned __int16 *, unsigned __int16 *, const unsigned __int16 *, char))(*(_QWORD *)g_PolicyManager + 40LL))(
      g_PolicyManager,
      a2,
      v5,
      a3,
      a4);
    AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v18);
    v14 = v18;
    v8 = AudioSessionManagerProvider;
    if ( AudioSessionManagerProvider >= 0 )
    {
      v8 = CAudioSessionManagerProvider::RevokeSessions(v18, a2, v5, a3);
      if ( v8 >= 0 )
        v8 = 0;
    }
    if ( v14 )
      (*(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  LocalFree(v5);
  return (unsigned int)v8;
}
