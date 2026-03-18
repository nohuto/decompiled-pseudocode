/*
 * XREFs of MiImagePageOk @ 0x14002C610
 * Callers:
 *     MiFinishHardFault @ 0x14002FC50 (MiFinishHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140125424 (MiWaitForCollidedFaultComplete.c)
 * Callees:
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 */

_BOOL8 __fastcall MiImagePageOk(__int64 a1, __int64 a2)
{
  _BYTE *PrototypePteDirect; // rbx
  unsigned __int64 v3; // r11
  __int64 v4; // rdx
  __int64 v5; // r10
  _BOOL8 result; // rax
  __int64 Address; // rax
  char v8; // r10
  int v9; // edx

  result = 1;
  if ( (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) != 0
    && (*(_DWORD *)(a2 + 16) & 0x400LL) != 0
    && ((*(_QWORD *)(a2 + 40) >> 54) & 7) != 3 )
  {
    PrototypePteDirect = (_BYTE *)MiGetPrototypePteDirect(*(_QWORD *)(a2 + 16));
    v4 = *(_QWORD *)PrototypePteDirect;
    if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) != 0 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(v4 + 96) + 8LL);
      if ( v5 )
      {
        if ( (v5 & 0xFFFFFFFFFFFFFFF8uLL) != 8 && (v5 & 3) != 2 )
        {
          if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(v4 + 92) & 0xC0000) != 0 )
            return 0;
          if ( v3 < 0xFFFF800000000000uLL || (MiFlags & 0x10000) != 0 )
          {
            Address = MiLocateAddress(v3);
            if ( !Address )
              return 0;
            v9 = *(_DWORD *)(Address + 48);
            if ( (v9 & 7) != 2 )
              return 0;
            if ( (v9 & 0xF8) != 8
              && ((*(_DWORD *)(Address + 64) & 0x8000000) == 0 || (v8 & 4) != 0)
              && ((MiFlags & 0x400) == 0 || (PrototypePteDirect[34] & 2) == 0) )
            {
              return 0;
            }
          }
        }
      }
    }
  }
  return result;
}
