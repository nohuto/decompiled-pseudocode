/*
 * XREFs of NVMeControllerInitPart1 @ 0x1C0004780
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0001590 (NVMeHwFindAdapter.c)
 *     NVMeHwAdapterControl @ 0x1C0001C50 (NVMeHwAdapterControl.c)
 *     NVMeControllerReset @ 0x1C000559C (NVMeControllerReset.c)
 * Callees:
 *     AdminQueueInitialize @ 0x1C0002B58 (AdminQueueInitialize.c)
 *     GetProcessorInformation @ 0x1C00037D4 (GetProcessorInformation.c)
 *     NVMeControllerIdentify @ 0x1C000E2A8 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C000E414 (NVMeNameSpaceIdentify.c)
 */

char __fastcall NVMeControllerInitPart1(__int64 a1, char a2)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  unsigned int v13; // ebp
  __int64 v14; // rax
  unsigned int i; // esi
  int v16; // eax
  signed __int32 v17[22]; // [rsp+0h] [rbp-58h] BYREF

  if ( a2 && !AdminQueueInitialize(a1) )
  {
    *(_DWORD *)(a1 + 24) = 7;
    return 0;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 120) + 36LL) = (*(_WORD *)(a1 + 236) - 1) & 0xFFF | (((*(_WORD *)(a1 + 236) - 1) & 0xFFF) << 16);
  _InterlockedOr(v17, 0);
  v5 = *(_QWORD *)(a1 + 120);
  v6 = *(_QWORD *)(a1 + 392);
  *(_DWORD *)(v5 + 48) = v6;
  _InterlockedOr(v17, 0);
  *(_DWORD *)(v5 + 52) = HIDWORD(v6);
  _InterlockedOr(v17, 0);
  v7 = *(_QWORD *)(a1 + 120);
  v8 = *(_QWORD *)(a1 + 256);
  *(_DWORD *)(v7 + 40) = v8;
  _InterlockedOr(v17, 0);
  *(_DWORD *)(v7 + 44) = HIDWORD(v8);
  _InterlockedOr(v17, 0);
  v9 = *(_QWORD *)(a1 + 120);
  v17[8] = 4587520;
  *(_DWORD *)(v9 + 20) = 4587520;
  _InterlockedOr(v17, 0);
  StorPortStallExecution(5000LL);
  LODWORD(v12) = (3435973837u * (unsigned __int64)*(unsigned int *)(a1 + 148)) >> 32;
  v13 = *(_DWORD *)(a1 + 148) / 0xAu;
  *(_DWORD *)(*(_QWORD *)(a1 + 120) + 20LL) |= 1u;
  _InterlockedOr(v17, 0);
  v14 = *(_QWORD *)(a1 + 120);
  for ( i = 0; ; ++i )
  {
    v16 = *(_DWORD *)(v14 + 28);
    if ( (v16 & 1) != 0 || i >= v13 )
      break;
    StorPortStallExecution(10000LL);
    v14 = *(_QWORD *)(a1 + 120);
  }
  if ( (v16 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 24) = 8;
    return 0;
  }
  if ( a2 || (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 20) &= ~0x20u;
    NVMeControllerIdentify(a1);
    if ( a2 )
      NVMeNameSpaceIdentify(a1);
  }
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_DWORD *)(a1 + 168) = 65537;
  }
  else if ( !GetProcessorInformation(a1, v12, v10, v11) )
  {
    *(_DWORD *)(a1 + 24) = 10;
    return 0;
  }
  return 1;
}
