/*
 * XREFs of RtlWow64GetCpuAreaInfo @ 0x18006D760
 * Callers:
 *     RtlWow64GetCurrentCpuArea @ 0x18006D6E0 (RtlWow64GetCurrentCpuArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWow64GetCpuAreaInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v5; // di
  int v6; // edx
  __int64 v7; // r10
  unsigned int v8; // r11d
  unsigned int v9; // ecx
  __int64 v10; // r8
  __int64 result; // rax

  *(_QWORD *)(a3 + 24) = a1;
  v5 = *(_WORD *)(a1 + 2);
  if ( v5 == 332 )
  {
    v6 = 0x10000;
  }
  else if ( *(_WORD *)(a1 + 2) == 452 )
  {
    v6 = 0x200000;
  }
  else if ( *(unsigned __int16 *)(a1 + 2) == 34404 )
  {
    v6 = 0x100000;
  }
  else
  {
    if ( *(unsigned __int16 *)(a1 + 2) != 43620 )
      return 3221225485LL;
    v6 = 0x400000;
  }
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  if ( (v6 & 0x10000) == 0 )
  {
    if ( (v6 & 0x100000) != 0 )
    {
      v8 = 1232;
    }
    else
    {
      if ( (v6 & 0x200000) != 0 )
      {
        v9 = 8;
        v8 = 416;
        goto LABEL_5;
      }
      if ( (v6 & 0x400000) == 0 )
        goto LABEL_5;
      v8 = 912;
    }
    v9 = 16;
    goto LABEL_5;
  }
  v9 = 4;
  v8 = 716;
LABEL_5:
  v10 = ~(v9 - 1) & (v9 + a1 + 3);
  *(_QWORD *)a3 = v10;
  *(_QWORD *)(a3 + 8) = (v8 + v10 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (v6 & 0x10000) == 0 )
  {
    if ( (v6 & 0x100000) != 0 )
    {
      v10 += 48LL;
    }
    else if ( (v6 & 0x200000) == 0 )
    {
      if ( (v6 & 0x400000) != 0 )
        v7 = v10;
      v10 = v7;
    }
  }
  *(_QWORD *)(a3 + 16) = v10;
  result = 0LL;
  *(_DWORD *)(a3 + 32) = v6;
  *(_WORD *)(a3 + 36) = v5;
  return result;
}
