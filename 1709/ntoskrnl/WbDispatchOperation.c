/*
 * XREFs of WbDispatchOperation @ 0x140501A60
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     PsGetProcessId @ 0x1400BAF50 (PsGetProcessId.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     WbDecryptEncryptionSegment @ 0x14044A354 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x14044A418 (WbReEncryptEncryptionSegment.c)
 *     WbRemoveWarbirdProcess @ 0x1404FC020 (WbRemoveWarbirdProcess.c)
 *     WbGetWarbirdProcess @ 0x140501C80 (WbGetWarbirdProcess.c)
 *     WbAlloc @ 0x140501FF8 (WbAlloc.c)
 *     sub_140502058 @ 0x140502058 (sub_140502058.c)
 *     WbHeapExecuteCall @ 0x1405024B0 (WbHeapExecuteCall.c)
 *     WbFreeWarbirdProcess @ 0x140575EBC (WbFreeWarbirdProcess.c)
 *     WbProcessModuleUnload @ 0x140583A0C (WbProcessModuleUnload.c)
 *     WbProcessStartup @ 0x14059C164 (WbProcessStartup.c)
 */

__int64 __fastcall WbDispatchOperation(char *Src, SIZE_T NumberOfBytes)
{
  size_t v2; // r14
  unsigned int v4; // ebx
  char *v5; // rax
  int WarbirdProcess; // edi
  int *v7; // rdi
  HANDLE ProcessId; // rax
  int v9; // eax
  int v11; // [rsp+24h] [rbp-44h]
  int v12; // [rsp+28h] [rbp-40h]
  PVOID v13; // [rsp+70h] [rbp+8h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h]

  v2 = (unsigned int)NumberOfBytes;
  v4 = 0;
  v13 = 0LL;
  P = 0LL;
  if ( !Src )
  {
    v12 = 4;
LABEL_11:
    v4 = 1;
    goto LABEL_12;
  }
  if ( (unsigned int)NumberOfBytes < 8 )
  {
    WarbirdProcess = -1073741811;
    v11 = -1073741811;
    goto LABEL_19;
  }
  v5 = &Src[(unsigned int)NumberOfBytes];
  if ( (unsigned __int64)v5 > 0x7FFFFFFF0000LL || v5 < Src )
    MEMORY[0x7FFFFFFF0000] = 0;
  WarbirdProcess = WbAlloc((unsigned int)NumberOfBytes);
  v11 = WarbirdProcess;
  if ( WarbirdProcess < 0 )
    goto LABEL_19;
  v7 = (int *)P;
  memmove(P, Src, v2);
  v12 = *v7;
  if ( *v7 != 7 )
    goto LABEL_11;
LABEL_12:
  ProcessId = PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
  WarbirdProcess = WbGetWarbirdProcess(ProcessId, v4, &v13);
  v11 = WarbirdProcess;
  if ( WarbirdProcess < 0 )
    goto LABEL_19;
  if ( v12 == 4 )
  {
    if ( !P )
    {
      v9 = sub_140502058(v13);
      goto LABEL_18;
    }
LABEL_36:
    WarbirdProcess = -1073741811;
    v11 = -1073741811;
  }
  else
  {
    if ( v12 == 3 )
    {
      v9 = WbHeapExecuteCall(v13, P, Src, (unsigned int)v2);
LABEL_18:
      WarbirdProcess = v9;
      v11 = v9;
      goto LABEL_19;
    }
    switch ( v12 )
    {
      case 1:
        v9 = WbDecryptEncryptionSegment((__int64)v13, (__int64)P, (unsigned int)v2);
        goto LABEL_18;
      case 2:
        v9 = WbReEncryptEncryptionSegment((__int64)v13, (__int64)P, (unsigned int)v2);
        goto LABEL_18;
      case 5:
      case 6:
        WarbirdProcess = -1073741811;
        if ( Src )
          WarbirdProcess = -1073741822;
        v11 = WarbirdProcess;
        break;
      case 7:
        v9 = WbRemoveWarbirdProcess(*(_QWORD *)v13);
        goto LABEL_18;
      case 8:
        v9 = WbProcessStartup(v13, P, (unsigned int)v2);
        goto LABEL_18;
      case 9:
        v9 = WbProcessModuleUnload(v13, P, (unsigned int)v2);
        goto LABEL_18;
      default:
        goto LABEL_36;
    }
  }
LABEL_19:
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 29, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      WbFreeWarbirdProcess(v13);
    WarbirdProcess = v11;
  }
  if ( P )
    ExFreePoolWithTag(P, 0x42524157u);
  return (unsigned int)WarbirdProcess;
}
