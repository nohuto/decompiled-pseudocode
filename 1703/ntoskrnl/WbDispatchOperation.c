/*
 * XREFs of WbDispatchOperation @ 0x14053BA60
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     PsGetProcessId @ 0x140100A50 (PsGetProcessId.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     WbProcessModuleUnload @ 0x14045131C (WbProcessModuleUnload.c)
 *     WbProcessStartup @ 0x14045B80C (WbProcessStartup.c)
 *     WbRemoveWarbirdProcess @ 0x1404987CC (WbRemoveWarbirdProcess.c)
 *     WbGetWarbirdProcess @ 0x14053BCA0 (WbGetWarbirdProcess.c)
 *     WbAlloc @ 0x14053BF78 (WbAlloc.c)
 *     WbHeapExecuteReturn @ 0x14053BFD0 (WbHeapExecuteReturn.c)
 *     WbHeapExecuteCall @ 0x14053C4C0 (WbHeapExecuteCall.c)
 *     WbFreeWarbirdProcess @ 0x140549778 (WbFreeWarbirdProcess.c)
 *     WbReEncryptEncryptionSegment @ 0x1405498C0 (WbReEncryptEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x140549E54 (WbDecryptEncryptionSegment.c)
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
      v9 = WbHeapExecuteReturn(v13);
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
        v9 = WbDecryptEncryptionSegment(v13, P, (unsigned int)v2);
        goto LABEL_18;
      case 2:
        v9 = WbReEncryptEncryptionSegment(v13, P, (unsigned int)v2);
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
        v9 = WbProcessStartup((__int64)v13, P, v2);
        goto LABEL_18;
      case 9:
        v9 = WbProcessModuleUnload((__int64)v13, P, v2);
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
