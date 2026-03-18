/*
 * XREFs of NtAlpcQueryInformation @ 0x140562440
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x14043CC94 (AlpcpPortQueryServerSessionInfo.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     AlpcpPortQueryServerInfo @ 0x1405611F4 (AlpcpPortQueryServerInfo.c)
 *     AlpcpPortQueryBasicInfo @ 0x140562680 (AlpcpPortQueryBasicInfo.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1405626DC (AlpcpPortQueryConnectedSidInfo.c)
 *     AlpcpWaitForPortReferences @ 0x140562884 (AlpcpWaitForPortReferences.c)
 *     ExRaiseAccessViolation @ 0x14075EBA0 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtAlpcQueryInformation(HANDLE Handle, int a2, __int64 a3, unsigned int a4, unsigned __int64 a5)
{
  _DWORD *v6; // r15
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v10; // ebx
  char PreviousMode; // r12
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  unsigned int *v15; // r14
  PVOID v16; // rsi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  NTSTATUS ServerSessionInfo; // eax
  struct _KTHREAD *v21; // rcx
  bool v22; // zf
  int Object; // [rsp+20h] [rbp-38h]
  PVOID v25; // [rsp+70h] [rbp+18h] BYREF

  v6 = (_DWORD *)a3;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !a3 )
  {
    v10 = -1073741811;
    goto LABEL_39;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((a2 - 3) & 0xFFFFFFF7) != 0 )
    {
      if ( a4 )
      {
        v12 = a3;
        if ( (a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = a4 + a3 - 1;
        a3 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)v6 > v13 || v13 >= 0x7FFFFFFF0000LL )
        {
          if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0 )
            ExRaiseAccessViolation();
        }
        else
        {
          v14 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          do
          {
            *(_BYTE *)v12 = *(_BYTE *)v12;
            v12 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          }
          while ( v12 != v14 );
        }
      }
      else
      {
        a3 = 0x7FFFFFFF0000LL;
      }
    }
    else
    {
      a3 = 0x7FFFFFFF0000LL;
    }
    v15 = (unsigned int *)a5;
    if ( a5 )
    {
      if ( a5 < 0x7FFFFFFF0000LL )
        a3 = a5;
      *(_DWORD *)a3 = *(_DWORD *)a3;
    }
  }
  else
  {
    v15 = (unsigned int *)a5;
  }
  v16 = 0LL;
  if ( !Handle
    || (v10 = ObReferenceObjectByHandle(Handle, 0x20000u, AlpcPortObjectType, PreviousMode, &v25, 0LL),
        v16 = v25,
        v10 >= 0) )
  {
    if ( a2 )
    {
      v17 = a2 - 3;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 7;
          if ( v19 )
          {
            if ( v19 != 1 )
            {
              v10 = -1073741811;
              goto LABEL_37;
            }
            ServerSessionInfo = AlpcpPortQueryServerSessionInfo((__int64)v16, v6, a4, v15);
          }
          else
          {
            ServerSessionInfo = AlpcpWaitForPortReferences((_DWORD)v16, (_DWORD)v6, a4, (_DWORD)v15, PreviousMode);
          }
        }
        else
        {
          ServerSessionInfo = AlpcpPortQueryServerInfo((__int64)v16, (__int64)v6, a4, v15, PreviousMode);
        }
      }
      else
      {
        LOBYTE(Object) = PreviousMode;
        ServerSessionInfo = AlpcpPortQueryConnectedSidInfo(v16, v6, a3, v15, Object);
      }
    }
    else
    {
      ServerSessionInfo = AlpcpPortQueryBasicInfo(v16, v6, a4, v15);
    }
    v10 = ServerSessionInfo;
LABEL_37:
    if ( v16 )
      ObfDereferenceObject(v16);
  }
LABEL_39:
  v21 = KeGetCurrentThread();
  v22 = v21->KernelApcDisable++ == -1;
  if ( v22
    && ($B476B70DB57F76B110DA5B9238C3E934 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
    && !v21->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery((__int64)v21);
  }
  return (unsigned int)v10;
}
