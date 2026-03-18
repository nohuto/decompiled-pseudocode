/*
 * XREFs of MiCheckUserVirtualAddress @ 0x14007C120
 * Callers:
 *     MiActOnPte @ 0x14007B8E8 (MiActOnPte.c)
 *     MiResolveDemandZeroFault @ 0x1400BA780 (MiResolveDemandZeroFault.c)
 *     MiCheckVirtualAddress @ 0x1400C20D0 (MiCheckVirtualAddress.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     MiLocateVadEvent @ 0x1400CE790 (MiLocateVadEvent.c)
 */

__int64 __fastcall MiCheckUserVirtualAddress(unsigned __int64 a1, int *a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r11d
  int v8; // r8d
  int v9; // r9d
  int v10; // r8d
  unsigned __int64 v11; // rdi
  __int64 ProtoPteAddress; // r8
  _QWORD *v13; // rax
  __int64 result; // rax
  __int64 VadEvent; // rax
  char v16; // [rsp+30h] [rbp+8h] BYREF

  v4 = a4;
  if ( (a1 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
    && (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 )
  {
    result = qword_14036C1A8;
    *a2 = 1;
    return result;
  }
  v8 = *(_DWORD *)(a3 + 48);
  v9 = v8 & 7;
  if ( v9 == 2 && (*(_DWORD *)(a3 + 64) & 0x10000000) != 0 )
  {
    VadEvent = MiLocateVadEvent(a3, 32LL);
    if ( VadEvent && *(struct _KTHREAD **)(VadEvent + 8) != KeGetCurrentThread() )
      goto LABEL_21;
  }
  if ( (v8 & 0x80000) != 0 || v9 == 1 )
    goto LABEL_21;
  if ( (v8 & 0x8000) != 0 )
  {
    if ( v9 != 3 && v9 != 5 && *(_DWORD *)(a3 + 52) >= 0x80000000 )
    {
      *a2 = (unsigned __int8)v8 >> 3;
      return 0LL;
    }
LABEL_21:
    *a2 = 24;
    return 0LL;
  }
  if ( v9 != 7 && (*(_DWORD *)(a3 + 64) & 0x1000000) != 0 )
    goto LABEL_21;
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
