/*
 * XREFs of CitGetMonitorInfo @ 0x1C005CB10
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C001BC74 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 * Callees:
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C005B7B4 (DrvGetCurrentDpiInfoFromHDev.c)
 */

void __fastcall CitGetMonitorInfo(__int64 a1, __int64 a2)
{
  char v4; // dl
  __int64 v5; // rcx
  char v6; // dl
  unsigned int v7; // ecx
  char v8; // al
  __int64 v9; // rcx
  __int64 v10; // r10
  _BYTE v11[104]; // [rsp+20h] [rbp-68h] BYREF

  if ( a1 )
  {
    *(_WORD *)(a2 + 4) = *(_WORD *)(*(_QWORD *)(a1 + 40) + 36LL) - *(_WORD *)(*(_QWORD *)(a1 + 40) + 28LL);
    *(_WORD *)(a2 + 6) = *(_WORD *)(*(_QWORD *)(a1 + 40) + 40LL) - *(_WORD *)(*(_QWORD *)(a1 + 40) + 32LL);
    v4 = 0;
    v5 = *(_QWORD *)(gpDispInfo + 96);
    while ( v5 && v5 != a1 )
    {
      v5 = *(_QWORD *)(v5 + 56);
      ++v4;
    }
    v6 = v4 & 7;
    *(_BYTE *)(a2 + 10) = v6;
    v7 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + 64LL);
    if ( v7 > 0x60 )
    {
      if ( v7 > 0x78 )
      {
        if ( v7 > 0x90 )
        {
          if ( v7 > 0xA8 )
          {
            if ( v7 > 0xC0 )
            {
              if ( v7 > 0xF0 )
              {
                v8 = 112;
                if ( v7 <= 0x120 )
                  v8 = 96;
              }
              else
              {
                v8 = 80;
              }
            }
            else
            {
              v8 = 64;
            }
          }
          else
          {
            v8 = 48;
          }
        }
        else
        {
          v8 = 32;
        }
      }
      else
      {
        v8 = 16;
      }
    }
    else
    {
      v8 = 0;
    }
    *(_BYTE *)(a2 + 10) = v8 | v6;
    v9 = *(_QWORD *)(a1 + 232);
    if ( v9 && (int)DrvGetCurrentDpiInfoFromHDev(v9, (__int64)v11) >= 0 && (v11[92] & 4) != 0 )
      *(_BYTE *)(v10 + 10) |= 8u;
  }
}
