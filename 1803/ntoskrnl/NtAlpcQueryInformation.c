/*
 * XREFs of NtAlpcQueryInformation @ 0x140551C40
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x1404898B8 (AlpcpPortQueryServerSessionInfo.c)
 *     AlpcpPortQueryBasicInfo @ 0x140551E90 (AlpcpPortQueryBasicInfo.c)
 *     AlpcpWaitForPortReferences @ 0x140551EEC (AlpcpWaitForPortReferences.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140551F78 (AlpcpPortQueryConnectedSidInfo.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     AlpcpPortQueryServerInfo @ 0x140748D94 (AlpcpPortQueryServerInfo.c)
 *     ExRaiseAccessViolation @ 0x1407C5920 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
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
  _DWORD *v15; // r14
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
    goto LABEL_38;
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
    v15 = (_DWORD *)a5;
    if ( a5 )
    {
      if ( a5 < 0x7FFFFFFF0000LL )
        a3 = a5;
      *(_DWORD *)a3 = *(_DWORD *)a3;
    }
  }
  else
  {
    v15 = (_DWORD *)a5;
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
              goto LABEL_36;
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
          ServerSessionInfo = AlpcpPortQueryServerInfo((int)v16, (int)v6, a4, (int)v15, PreviousMode);
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
LABEL_36:
    if ( v16 )
      ObfDereferenceObject(v16);
  }
LABEL_38:
  v21 = KeGetCurrentThread();
  v22 = v21->KernelApcDisable++ == -1;
  if ( v22
    && ($005F0E83B22994B61E86C72E0CE43C71 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
    && !v21->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v10;
}
