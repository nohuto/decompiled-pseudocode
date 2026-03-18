/*
 * XREFs of NVMeDirectiveIdentifyReturnParameters @ 0x1C000F05C
 * Callers:
 *     NVMeInitStreams @ 0x1C0006668 (NVMeInitStreams.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C0002610 (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C000718C (SrbAssignQueueId.c)
 *     SetPrpFromBuffer @ 0x1C000CDE8 (SetPrpFromBuffer.c)
 *     ProcessCommand @ 0x1C000F8C8 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00102C8 (WaitForCommandCompleteWithCustomTimeout.c)
 *     memmove @ 0x1C0012040 (memmove.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

__int64 __fastcall NVMeDirectiveIdentifyReturnParameters(__int64 a1, unsigned int a2, void *a3)
{
  size_t v5; // rdi
  void *v7; // rax
  __int64 PhysicalAddress; // rax
  void *v9; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // rdx
  _QWORD *v12; // rbp
  __int64 v13; // r8
  void *v14; // rbp
  unsigned int v15; // ebx
  int v16; // [rsp+58h] [rbp+10h] BYREF
  void *Src; // [rsp+68h] [rbp+20h]

  Src = 0LL;
  v16 = 0;
  v5 = a2;
  if ( a2 > 0x1000 )
    return 3238002698LL;
  NVMeAllocateDmaBuffer(a1, a2);
  v7 = Src;
  if ( !Src )
    return 3238002691LL;
  if ( (v5 & 3) != 0 )
  {
    if ( !(_DWORD)v5 )
      goto LABEL_11;
    memset(Src, 0, v5);
  }
  else
  {
    if ( !((unsigned int)v5 >> 2) )
      goto LABEL_11;
    memset(Src, 0, 4LL * ((unsigned int)v5 >> 2));
  }
  v7 = Src;
LABEL_11:
  PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v7, &v16);
  v9 = *(void **)(a1 + 656);
  *(_BYTE *)(a1 + 571) = 0;
  v10 = PhysicalAddress;
  memset(v9, 0, 0x1098uLL);
  v11 = *(_QWORD **)(a1 + 656);
  *(_QWORD *)(a1 + 624) = v11;
  *(_DWORD *)(a1 + 560) = 1;
  v12 = v11;
  v16 = SetPrpFromBuffer(a1, v11, v10, v5);
  if ( !v16 )
    goto LABEL_14;
  *((_BYTE *)v12 + 4245) |= 7u;
  *((_DWORD *)v12 + 1025) = -1;
  *((_BYTE *)v12 + 4096) = 26;
  *((_DWORD *)v12 + 1034) = ((unsigned int)v5 >> 2) - 1;
  *((_WORD *)v12 + 2070) = 1;
  v12[527] = NVMeDirectiveCompletion;
  SrbAssignQueueId(a1, a1 + 568);
  ProcessCommand(a1, a1 + 568);
  LOBYTE(v13) = 1;
  WaitForCommandCompleteWithCustomTimeout(a1, a1 + 568, v13, 10000LL);
  if ( *(_BYTE *)(a1 + 571) == 1 )
  {
    v14 = Src;
    memmove(a3, Src, v5);
    v15 = 0;
  }
  else
  {
LABEL_14:
    v14 = Src;
    v15 = -1056964607;
  }
  if ( v14 )
    StorPortExtendedFunction(25LL, a1, v14, v5);
  return v15;
}
