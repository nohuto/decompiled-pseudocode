/*
 * XREFs of ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x1C0090810
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x1C00908A8 (-Initialize@CInputManager@@IEAAJXZ.c)
 *     ??_GCInputManager@@IEAAPEAXI@Z @ 0x1C00908F0 (--_GCInputManager@@IEAAPEAXI@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 CInputManager::CreateSessionGlobal(void)
{
  __int64 v0; // rax
  CInputManager *v1; // rbx
  unsigned int v2; // edx
  int v3; // edi

  v0 = Win32AllocPool(136LL, 0x67734D49u);
  v1 = (CInputManager *)v0;
  if ( v0 )
  {
    *(_QWORD *)v0 = 0LL;
    *(_QWORD *)(v0 + 8) = 0LL;
    *(_QWORD *)(v0 + 96) = &CIgnoreInputQueue::`vftable';
    *(_QWORD *)(v0 + 104) = &CDiscardInputQueue::`vftable';
    *(_QWORD *)(v0 + 112) = 0LL;
    *(_DWORD *)(v0 + 120) = 0;
    *(_DWORD *)(v0 + 124) = 0;
    memset((void *)(v0 + 16), 0, 0x50uLL);
  }
  else
  {
    v1 = 0LL;
  }
  if ( v1 )
  {
    v3 = CInputManager::Initialize(v1);
    if ( v3 < 0 )
      CInputManager::`scalar deleting destructor'(v1, v2);
    else
      g_pInputManager = v1;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v3;
}
