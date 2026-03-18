/*
 * XREFs of ScsiLogSenseRequest @ 0x1C00095B4
 * Callers:
 *     ScsiToNVMe @ 0x1C000A3C4 (ScsiToNVMe.c)
 * Callees:
 *     LogSenseTemperature @ 0x1C00091F4 (LogSenseTemperature.c)
 *     LogSenseInformationalExceptions @ 0x1C0009404 (LogSenseInformationalExceptions.c)
 *     NVMeSetSenseData @ 0x1C00127F4 (NVMeSetSenseData.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall ScsiLogSenseRequest(__int64 a1, unsigned __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  _DWORD *v7; // rsi
  __int64 v8; // rax
  size_t v9; // rax
  unsigned int v10; // eax

  v4 = a2;
  if ( (a3[1] & 1) == 0 && (a3[2] & 0xC0) == 0x40 )
  {
    LOBYTE(a2) = a3[2] & 0x3F;
    if ( (unsigned __int8)a2 <= 0x2Fu )
    {
      a4 = 0x800000002001LL;
      if ( _bittest64(&a4, a2) )
      {
        v5 = 0;
        if ( !a3[3] )
        {
          if ( (_BYTE)a2 )
          {
            if ( (_BYTE)a2 == 13 )
              return (unsigned int)LogSenseTemperature(a1, v4, (__int64)a3, 0x800000002001LL);
            if ( (_BYTE)a2 == 47 )
              return (unsigned int)LogSenseInformationalExceptions(a1, v4, (__int64)a3, 0x800000002001LL);
          }
          else
          {
            if ( *(_BYTE *)(v4 + 2) == 40 )
            {
              v7 = *(_DWORD **)(v4 + 64);
              v8 = 60LL;
            }
            else
            {
              v7 = *(_DWORD **)(v4 + 24);
              v8 = 16LL;
            }
            if ( v7 )
            {
              v9 = *(unsigned int *)(v4 + v8);
              if ( (unsigned int)v9 >= 7 )
              {
                if ( (v9 & 3) != 0 )
                {
                  memset(v7, 0, v9);
                }
                else
                {
                  v10 = (unsigned int)v9 >> 2;
                  if ( v10 )
                    memset(v7, 0, 4LL * v10);
                }
                *v7 = 50331648;
                *((_WORD *)v7 + 2) = 3328;
                *((_BYTE *)v7 + 6) = 47;
                *(_BYTE *)(v4 + 3) = 1;
                return v5;
              }
            }
          }
          LOBYTE(a4) = 36;
          LOBYTE(a2) = 6;
          NVMeSetSenseData(v4, a2, a3, a4);
          return (unsigned int)-1056964602;
        }
      }
    }
  }
  LOBYTE(a4) = 36;
  LOBYTE(a2) = 6;
  NVMeSetSenseData(v4, a2, a3, a4);
  return 3238002694LL;
}
