/*
 * XREFs of NVMeGetRichDeviceDescription @ 0x1C000BB0C
 * Callers:
 *     NVMeHwUnitControl @ 0x1C0001F30 (NVMeHwUnitControl.c)
 * Callees:
 *     memset @ 0x1C0012380 (memset.c)
 */

__int64 __fastcall NVMeGetRichDeviceDescription(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  unsigned int v5; // ecx
  int v6; // r8d
  __int64 v7; // rdx
  unsigned int v8; // edx
  _BYTE *v9; // r8
  __int64 v10; // rax

  v2 = *(_QWORD *)(a1 + 1080);
  v3 = 0;
  if ( a2 && a2[1] >= 0x6Cu )
  {
    if ( (*(_DWORD *)(a1 + 20) & 1) != 0 )
    {
      memset(a2, 0, 0x6CuLL);
      *a2 = 1;
      v5 = 7;
      a2[1] = 108;
      v6 = 0;
      v7 = 7LL;
      *(_OWORD *)((char *)a2 + 25) = *(_OWORD *)(v2 + 24);
      *(_OWORD *)((char *)a2 + 41) = *(_OWORD *)(v2 + 40);
      *(_QWORD *)((char *)a2 + 57) = *(_QWORD *)(v2 + 56);
      do
      {
        if ( (unsigned __int8)(*(_BYTE *)(v2 + v7 + 64) - 33) <= 0x5Du && ++v6 == 16 )
          break;
        if ( !v7 )
          break;
        --v5;
        --v7;
      }
      while ( v7 >= 0 );
      v8 = 0;
      if ( v5 < 8 )
      {
        v9 = (_BYTE *)((int)v5 + v2 + 64);
        do
        {
          if ( (unsigned __int8)(*v9 - 33) <= 0x5Du )
          {
            v10 = v8++;
            *((_BYTE *)a2 + v10 + 90) = *v9;
            if ( v8 >= 0x10 )
              break;
          }
          ++v5;
          ++v9;
        }
        while ( v5 < 8 );
      }
    }
    else
    {
      return (unsigned int)-1056964599;
    }
  }
  else
  {
    return (unsigned int)-1056964602;
  }
  return v3;
}
