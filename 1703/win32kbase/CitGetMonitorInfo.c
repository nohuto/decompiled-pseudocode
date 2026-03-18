/*
 * XREFs of CitGetMonitorInfo @ 0x1C0083BF0
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0052944 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 * Callees:
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C0026CD0 (DrvGetCurrentDpiInfoFromHDev.c)
 */

void __fastcall CitGetMonitorInfo(__int64 a1, __int64 a2)
{
  char v4; // r8
  char v5; // cl
  __int64 v6; // rdx
  char v7; // r8
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // r10
  _BYTE v11[104]; // [rsp+20h] [rbp-68h] BYREF

  if ( a1 )
  {
    *(_WORD *)(a2 + 4) = *(_WORD *)(*(_QWORD *)(a1 + 40) + 36LL) - *(_WORD *)(*(_QWORD *)(a1 + 40) + 28LL);
    *(_WORD *)(a2 + 6) = *(_WORD *)(*(_QWORD *)(a1 + 40) + 40LL) - *(_WORD *)(*(_QWORD *)(a1 + 40) + 32LL);
    v4 = 0;
    v5 = 1;
    v6 = *((_QWORD *)gpDispInfo + 12);
    while ( v6 && v6 != a1 )
    {
      v6 = *(_QWORD *)(v6 + 56);
      ++v4;
    }
    v7 = v4 & 7;
    *(_BYTE *)(a2 + 10) = v7;
    v8 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + 128LL);
    if ( v8 > 0x60 )
    {
      if ( v8 > 0x78 )
      {
        if ( v8 > 0x90 )
        {
          if ( v8 > 0xA8 )
          {
            if ( v8 > 0xC0 )
            {
              if ( v8 > 0xF0 )
                v5 = (v8 > 0x120) + 6;
              else
                v5 = 5;
            }
            else
            {
              v5 = 4;
            }
          }
          else
          {
            v5 = 3;
          }
        }
        else
        {
          v5 = 2;
        }
      }
    }
    else
    {
      v5 = 0;
    }
    *(_BYTE *)(a2 + 10) = v7 | (16 * v5);
    v9 = *(_QWORD *)(a1 + 120);
    if ( v9 && (int)DrvGetCurrentDpiInfoFromHDev(v9, (__int64)v11) >= 0 && (v11[92] & 4) != 0 )
      *(_BYTE *)(v10 + 10) |= 8u;
  }
}
