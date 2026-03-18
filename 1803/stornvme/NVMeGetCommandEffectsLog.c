/*
 * XREFs of NVMeGetCommandEffectsLog @ 0x1C000E864
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0004908 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C0002820 (NVMeAllocateDmaBuffer.c)
 *     ProcessCommand @ 0x1C001052C (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011F28 (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall NVMeGetCommandEffectsLog(__int64 a1, char a2)
{
  __int64 v2; // rsi
  __int64 result; // rax
  void **v6; // rbx
  __int64 v7; // r8
  bool v8; // zf
  void *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 688);
  result = 0LL;
  v13 = 0LL;
  v12 = 0;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    result = *(_QWORD *)(a1 + 1112);
    if ( (*(_BYTE *)(result + 261) & 2) != 0 )
    {
      v6 = (void **)(a1 + 3264);
      v7 = *(_QWORD *)(a1 + 3264);
      if ( v7 )
      {
        result = StorPortGetPhysicalAddress(a1, 0LL, v7, &v12);
        v13 = result;
        v8 = result == 0;
      }
      else
      {
        result = NVMeAllocateDmaBuffer(a1, 0x1000u);
        v8 = *v6 == 0LL;
      }
      if ( !v8 )
      {
        memset(*v6, 0, 0x1000uLL);
        v9 = *(void **)(a1 + 688);
        *(_BYTE *)(a1 + 603) = 0;
        memset(v9, 0, 0x10A0uLL);
        *(_QWORD *)(a1 + 656) = *(_QWORD *)(a1 + 688);
        *(_DWORD *)(a1 + 592) = 1;
        *(_BYTE *)(v2 + 4253) |= 3u;
        *(_WORD *)(v2 + 4244) = 0;
        v10 = v13;
        *(_DWORD *)(v2 + 4100) = -1;
        *(_QWORD *)(v2 + 4120) = v10;
        *(_BYTE *)(v2 + 4136) = 5;
        LODWORD(v10) = *(_DWORD *)(v2 + 4136);
        *(_BYTE *)(v2 + 4096) = 2;
        *(_DWORD *)(v2 + 4136) = v10 & 0xF000FFFF | 0x3FF0000;
        *(_BYTE *)(v2 + 4253) |= 4u;
        *(_QWORD *)(v2 + 4200) = *v6;
        *(_QWORD *)(v2 + 4208) = v13;
        *(_QWORD *)(a1 + 3272) = v13;
        *(_DWORD *)(v2 + 4240) = 4096;
        ProcessCommand(a1, a1 + 600);
        LOBYTE(v11) = a2;
        return WaitForCommandCompleteWithCustomTimeout(a1, a1 + 600, v11, 10000LL);
      }
    }
  }
  return result;
}
