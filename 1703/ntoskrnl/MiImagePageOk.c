/*
 * XREFs of MiImagePageOk @ 0x1400214A8
 * Callers:
 *     MiFinishHardFault @ 0x1400CBC40 (MiFinishHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1401180BC (MiWaitForCollidedFaultComplete.c)
 * Callees:
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 */

_BOOL8 __fastcall MiImagePageOk(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 PrototypePteDirect; // rax
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r10
  _BOOL8 result; // rax
  __int64 Address; // rax
  char v9; // r10
  __int64 v10; // r11
  int v11; // edx

  result = 1;
  if ( (a1 < 0xFFFF800000000000uLL || (MiFlags & 0x10000) != 0)
    && (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) != 0
    && (*(_DWORD *)(a2 + 16) & 0x400LL) != 0
    && ((*(_QWORD *)(a2 + 40) >> 54) & 7) != 3 )
  {
    PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(a2 + 16), a2, a3, a1);
    v5 = *(_QWORD *)PrototypePteDirect;
    if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) != 0 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v5 + 96) + 8LL);
      if ( v6 )
      {
        if ( (v6 & 0xFFFFFFFFFFFFFFF8uLL) != 8 && (v6 & 3) != 2 )
        {
          if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(v5 + 92) & 0xC0000) != 0 )
            return 0;
          Address = MiLocateAddress(v4);
          if ( !Address )
            return 0;
          v11 = *(_DWORD *)(Address + 48);
          if ( (v11 & 7) != 2 )
            return 0;
          if ( (v11 & 0xF8) != 8
            && ((*(_DWORD *)(Address + 64) & 0x8000000) == 0 || (v9 & 4) != 0)
            && ((MiFlags & 0x400) == 0 || (*(_BYTE *)(v10 + 34) & 2) == 0) )
          {
            return 0;
          }
        }
      }
    }
  }
  return result;
}
