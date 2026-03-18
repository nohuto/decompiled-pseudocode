/*
 * XREFs of NVMeGetCommandEffectsLog @ 0x1C000E398
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C00048E4 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C00028B0 (NVMeAllocateDmaBuffer.c)
 *     ProcessCommand @ 0x1C0010058 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011A4C (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C0013D00 (memset.c)
 */

_UNKNOWN **__fastcall NVMeGetCommandEffectsLog(__int64 a1, char a2)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rbp
  _QWORD *v6; // rsi
  void *v7; // rcx
  __int64 PhysicalAddress; // rax
  void *v9; // rcx
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // r8
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  int v14; // [rsp+40h] [rbp+8h] BYREF

  result = &retaddr;
  v3 = *(_QWORD *)(a1 + 656);
  v14 = 0;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    result = *(_UNKNOWN ***)(a1 + 1080);
    if ( (*((_BYTE *)result + 261) & 2) != 0 )
    {
      v6 = (_QWORD *)(a1 + 3224);
      v7 = *(void **)(a1 + 3224);
      if ( v7 || (result = (_UNKNOWN **)NVMeAllocateDmaBuffer(a1, 0x1000u), (v7 = (void *)*v6) != 0LL) )
      {
        memset(v7, 0, 0x1000uLL);
        PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, *v6, &v14);
        v9 = *(void **)(a1 + 656);
        *(_BYTE *)(a1 + 571) = 0;
        v10 = PhysicalAddress;
        memset(v9, 0, 0x1098uLL);
        *(_QWORD *)(a1 + 624) = *(_QWORD *)(a1 + 656);
        *(_DWORD *)(a1 + 560) = 1;
        *(_BYTE *)(v3 + 4245) |= 3u;
        *(_WORD *)(v3 + 4236) = 0;
        *(_DWORD *)(v3 + 4100) = -1;
        *(_BYTE *)(v3 + 4136) = 5;
        v11 = *(_DWORD *)(v3 + 4136);
        *(_QWORD *)(v3 + 4120) = v10;
        *(_BYTE *)(v3 + 4096) = 2;
        *(_DWORD *)(v3 + 4136) = v11 & 0xF000FFFF | 0x3FF0000;
        *(_BYTE *)(v3 + 4245) |= 4u;
        *(_QWORD *)(v3 + 4200) = *v6;
        *(_DWORD *)(v3 + 4232) = 4096;
        ProcessCommand(a1, a1 + 568);
        LOBYTE(v12) = a2;
        return (_UNKNOWN **)WaitForCommandCompleteWithCustomTimeout(a1, a1 + 568, v12, 10000LL);
      }
    }
  }
  return result;
}
