/*
 * XREFs of MiCheckUserVirtualAddress @ 0x140109820
 * Callers:
 *     MiResolveDemandZeroFault @ 0x140044CE0 (MiResolveDemandZeroFault.c)
 *     MiActOnPte @ 0x1400EC4F0 (MiActOnPte.c)
 *     MiCheckVirtualAddress @ 0x140109690 (MiCheckVirtualAddress.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MiLocateVadEvent @ 0x14010C834 (MiLocateVadEvent.c)
 */

__int64 __fastcall MiCheckUserVirtualAddress(unsigned __int64 a1, int *a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r11d
  int v8; // r8d
  int v9; // r9d
  int v10; // r8d
  __int64 v11; // rdi
  __int64 ProtoPteAddress; // r8
  _QWORD *v13; // rax
  __int64 result; // rax
  __int64 VadEvent; // rax
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  v4 = a4;
  if ( (a1 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
    && (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 )
  {
    result = qword_1403884E8;
    *a2 = 1;
    return result;
  }
  v8 = *(_DWORD *)(a3 + 48);
  v9 = v8 & 7;
  if ( v9 == 2
    && (*(_DWORD *)(a3 + 64) & 0x10000000) != 0
    && (VadEvent = MiLocateVadEvent(a3, 32LL), VadEvent && *(struct _KTHREAD **)(VadEvent + 8) != KeGetCurrentThread())
    || (v8 & 0x80000) != 0
    || v9 == 1 )
  {
LABEL_19:
    *a2 = 24;
    return 0LL;
  }
  if ( (v8 & 0x8000) != 0 )
  {
    if ( v9 != 3 && v9 != 5 && *(int *)(a3 + 52) < 0 )
    {
      *a2 = (unsigned __int8)v8 >> 3;
      return 0LL;
    }
    goto LABEL_19;
  }
  if ( (*(_DWORD *)(a3 + 64) & 0x1000000) != 0 && v9 != 7 )
    goto LABEL_19;
  v10 = (unsigned __int8)v8 >> 3;
  *a2 = v10;
  if ( v10 == 7 && v9 == 2 )
    *a2 = 256;
  v11 = a1 >> 12;
  ProtoPteAddress = MiGetProtoPteAddress(a3, v11, v4, &v16);
  if ( !ProtoPteAddress )
    *a2 = 24;
  v13 = *(_QWORD **)(a3 + 120);
  if ( (__int64)v13 < 0
    && v11 - (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) > (unsigned __int64)(*v13 - 1LL) >> 12 )
  {
    *a2 = 24;
  }
  return ProtoPteAddress;
}
