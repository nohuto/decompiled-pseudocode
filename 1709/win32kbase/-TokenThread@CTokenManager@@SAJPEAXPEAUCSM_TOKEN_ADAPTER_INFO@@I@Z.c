/*
 * XREFs of ?TokenThread@CTokenManager@@SAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0089BF0
 * Callers:
 *     NtTokenManagerThread @ 0x1C0089A60 (NtTokenManagerThread.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0035C30 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     GreSfmGetPresentQueueEvent @ 0x1C0089D40 (GreSfmGetPresentQueueEvent.c)
 *     GreSfmOpenTokenEvent @ 0x1C0089DE0 (GreSfmOpenTokenEvent.c)
 *     ?ValidateUserEvent@CTokenManager@@CAJPEAXPEAPEAX@Z @ 0x1C0089EE0 (-ValidateUserEvent@CTokenManager@@CAJPEAXPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall CTokenManager::TokenThread(void *a1, struct CSM_TOKEN_ADAPTER_INFO *a2, unsigned int a3)
{
  __int64 v5; // r14
  __int64 v6; // rsi
  void **v7; // rdi
  int PresentQueueEvent; // ebx
  CTokenManager *v9; // rcx
  unsigned int *v10; // r15
  HANDLE *v11; // r14
  HANDLE Handle; // [rsp+30h] [rbp-50h] BYREF
  HANDLE v14; // [rsp+38h] [rbp-48h] BYREF
  void *v15; // [rsp+40h] [rbp-40h] BYREF
  void *v16[5]; // [rsp+48h] [rbp-38h] BYREF

  v14 = 0LL;
  Handle = 0LL;
  v5 = a3;
  v6 = 0LL;
  memset(v16, 0, sizeof(v16));
  v7 = v16;
  if ( (unsigned int)v5 > 5 )
  {
    v7 = (void **)Win32AllocPoolZInit(8 * v5, 1650675028LL);
    if ( !v7 )
      return 3221225495LL;
  }
  PresentQueueEvent = CTokenManager::ValidateUserEvent(a1, &v14);
  if ( PresentQueueEvent >= 0 )
  {
    PresentQueueEvent = GreSfmOpenTokenEvent(&Handle);
    if ( PresentQueueEvent >= 0 )
    {
      if ( (_DWORD)v5 )
      {
        v10 = (unsigned int *)((char *)a2 + 8);
        while ( 1 )
        {
          PresentQueueEvent = GreSfmGetPresentQueueEvent(*v10, &v15);
          if ( PresentQueueEvent < 0 )
            break;
          v10 += 8;
          v7[v6] = v15;
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= (unsigned int)v5 )
            goto LABEL_8;
        }
      }
      else
      {
LABEL_8:
        if ( g_pTokenManager )
          PresentQueueEvent = CTokenManager::ProcessTokens(v9, v14, Handle, a2, v7, v5);
        else
          PresentQueueEvent = -1073741823;
      }
    }
    if ( (_DWORD)v6 )
    {
      v11 = v7;
      do
      {
        ObCloseHandle(*v11++, 1);
        --v6;
      }
      while ( v6 );
    }
  }
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( v14 )
    ObCloseHandle(v14, 0);
  if ( v7 != v16 )
    Win32FreePool((__int64)v7);
  return (unsigned int)PresentQueueEvent;
}
