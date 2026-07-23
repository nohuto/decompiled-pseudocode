/*
 * XREFs of NtAlpcQueryInformation @ 0x1404268B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x14041D194 (AlpcpPortQueryServerSessionInfo.c)
 *     AlpcpPortQueryBasicInfo @ 0x140426B10 (AlpcpPortQueryBasicInfo.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140426B6C (AlpcpPortQueryConnectedSidInfo.c)
 *     AlpcpWaitForPortReferences @ 0x140426D10 (AlpcpWaitForPortReferences.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     AlpcpPortQueryServerInfo @ 0x1406B2164 (AlpcpPortQueryServerInfo.c)
 *     ExRaiseAccessViolation @ 0x14071ED40 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcQueryInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  _DWORD *v6; // r15
  struct _KTHREAD *CurrentThread; // rax
  int v10; // ebx
  KPROCESSOR_MODE PreviousMode; // r12
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  PVOID v15; // rdi
  PULONG v16; // r14
  __int32 v17; // esi
  __int32 v18; // esi
  __int32 v19; // esi
  int ServerSessionInfo; // eax
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  int Object; // [rsp+20h] [rbp-38h]
  PVOID v25; // [rsp+70h] [rbp+18h] BYREF

  v6 = PortInformation;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !PortInformation )
  {
    v10 = -1073741811;
    goto LABEL_40;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
    v15 = 0LL;
    v16 = ReturnLength;
    goto LABEL_24;
  }
  if ( ((PortInformationClass - 3) & 0xFFFFFFF7) != 0 )
  {
    if ( !Length )
    {
      v15 = 0LL;
      PortInformation = (PVOID)0x7FFFFFFF0000LL;
      goto LABEL_18;
    }
    v12 = (unsigned __int64)PortInformation;
    if ( ((unsigned __int8)PortInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = (unsigned __int64)PortInformation + Length - 1;
    PortInformation = (PVOID)0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v6 > v13 || v13 >= 0x7FFFFFFF0000LL )
    {
      v15 = 0LL;
      if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
        ExRaiseAccessViolation();
      goto LABEL_18;
    }
    v14 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    do
    {
      *(_BYTE *)v12 = *(_BYTE *)v12;
      v12 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    while ( v12 != v14 );
  }
  else
  {
    PortInformation = (PVOID)0x7FFFFFFF0000LL;
  }
  v15 = 0LL;
LABEL_18:
  v16 = ReturnLength;
  if ( ReturnLength )
  {
    if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
      PortInformation = ReturnLength;
    *(_DWORD *)PortInformation = *(_DWORD *)PortInformation;
  }
LABEL_24:
  if ( PortHandle )
  {
    v10 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &v25, 0LL);
    v15 = v25;
    if ( v10 < 0 )
      goto LABEL_40;
  }
  if ( PortInformationClass )
  {
    v17 = PortInformationClass - 3;
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
            goto LABEL_38;
          }
          ServerSessionInfo = AlpcpPortQueryServerSessionInfo((__int64)v15, v6, Length, v16);
        }
        else
        {
          ServerSessionInfo = AlpcpWaitForPortReferences((_DWORD)v15, (_DWORD)v6, Length, (_DWORD)v16, PreviousMode);
        }
      }
      else
      {
        ServerSessionInfo = AlpcpPortQueryServerInfo((int)v15, (int)v6, Length, (int)v16, PreviousMode);
      }
    }
    else
    {
      LOBYTE(Object) = PreviousMode;
      ServerSessionInfo = AlpcpPortQueryConnectedSidInfo(v15, v6, PortInformation, v16, Object);
    }
  }
  else
  {
    ServerSessionInfo = AlpcpPortQueryBasicInfo(v15, v6, Length, v16);
  }
  v10 = ServerSessionInfo;
LABEL_38:
  if ( v15 )
    ObfDereferenceObject(v15);
LABEL_40:
  v21 = KeGetCurrentThread();
  v22 = v21->KernelApcDisable + 1;
  v21->KernelApcDisable = v22;
  if ( !v22
    && ($69CD3F157F9F39B6F7113F2231989901 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
    && !v21->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery((__int64)v21);
  }
  return v10;
}
