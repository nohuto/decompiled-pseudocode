/*
 * XREFs of NtSetCompositionSurfaceAnalogExclusive @ 0x1C0151F30
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001F380 (UserIsCurrentProcessDwm.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0021950 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00252F4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C0036330 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?DeleteAllTokens@CTokenQueue@@AEAAXXZ @ 0x1C0037ADC (-DeleteAllTokens@CTokenQueue@@AEAAXXZ.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0038F40 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?Release@CompositionObject@@QEBA_JXZ @ 0x1C003C7F0 (-Release@CompositionObject@@QEBA_JXZ.c)
 */

__int64 __fastcall NtSetCompositionSurfaceAnalogExclusive(void *a1, int a2)
{
  __int64 v4; // r8
  int v5; // ebx
  CInputSink *v6; // rcx
  CTokenManager *v7; // rdi
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF
  CInputSink *v10; // [rsp+48h] [rbp+20h] BYREF

  Object = 0LL;
  if ( UserIsCurrentProcessDwm() )
  {
    v5 = CompositionSurfaceObject::ResolveHandle(a1, 2LL, v4, (struct CompositionSurfaceObject **)&Object);
    if ( v5 >= 0 )
    {
      v10 = 0LL;
      v5 = CompositionSurfaceObject::LockForWrite((char *)Object, &v10);
      if ( v5 >= 0 )
      {
        v6 = v10;
        *((_BYTE *)v10 + 88) = a2 != 0;
        CInputSink::UnlockAndRelease(v6);
        if ( !a2 )
        {
          v7 = g_pTokenManager;
          if ( g_pTokenManager )
          {
            CTokenManager::AcquireTokenManagerLock(g_pTokenManager);
            CTokenQueue::DeleteAllTokens((CTokenManager *)((char *)v7 + 248));
            *((_QWORD *)v7 + 9) = 0LL;
            ExReleasePushLockExclusiveEx((char *)v7 + 64, 0LL);
          }
        }
      }
      CompositionObject::Release((CompositionObject *)Object);
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v5;
}
