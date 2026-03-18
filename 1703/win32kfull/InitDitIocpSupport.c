/*
 * XREFs of InitDitIocpSupport @ 0x1C01A02EC
 * Callers:
 *     ?InitalizeDitInfoObjectArray@@YAJPEAUDIT_INFO@@@Z @ 0x1C019C9C8 (-InitalizeDitInfoObjectArray@@YAJPEAUDIT_INFO@@@Z.c)
 * Callees:
 *     CleanupDitIocpSupport @ 0x1C019FF28 (CleanupDitIocpSupport.c)
 */

__int64 __fastcall InitDitIocpSupport(int a1)
{
  HANDLE v1; // r15
  int v2; // ebx
  HANDLE v3; // r14
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 KernelIocp; // rax
  void *KernelIocpWcp; // rax
  void *v9; // rax
  void *v10; // rax
  void *v11; // rax

  v1 = ghDITRITEvent;
  v2 = 0;
  v3 = ghDITEvent;
  v5 = ghDITMmcssEvent;
  v6 = ghDITResetEvent;
  if ( a1 )
  {
    KernelIocp = ghDITIocp;
  }
  else
  {
    KernelIocp = CreateKernelIocp(1LL);
    ghDITIocp = KernelIocp;
  }
  if ( KernelIocp )
  {
    KernelIocpWcp = (void *)CreateKernelIocpWcp();
    ghDITResetEventWcp = KernelIocpWcp;
    if ( KernelIocpWcp )
    {
      v2 = AssociateKernelIocpWcp(KernelIocpWcp, ghDITIocp, v6, KernelIocpWcp, 1LL, 0, &gbDITResetEventAlreadySignaled);
      if ( v2 < 0 )
        goto LABEL_14;
    }
    v9 = (void *)CreateKernelIocpWcp();
    ghDITMmcssEventWcp = v9;
    if ( v9 )
    {
      v2 = AssociateKernelIocpWcp(v9, ghDITIocp, v5, v9, 1LL, 0, &gbDITMmcssEventAlreadySignaled);
      if ( v2 < 0 )
        goto LABEL_14;
    }
    if ( !a1 )
    {
      if ( (v10 = (void *)CreateKernelIocpWcp(), (ghDITEventWcp = v10) != 0LL)
        && (v2 = AssociateKernelIocpWcp(v10, ghDITIocp, v3, v10, 1LL, 0, 0LL), v2 < 0)
        || (v11 = (void *)CreateKernelIocpWcp(), (ghDITRITEventWcp = v11) != 0LL)
        && (v2 = AssociateKernelIocpWcp(v11, ghDITIocp, v1, v11, 1LL, 0, 0LL), v2 < 0) )
      {
LABEL_14:
        CleanupDitIocpSupport(0);
      }
    }
  }
  return (unsigned int)v2;
}
