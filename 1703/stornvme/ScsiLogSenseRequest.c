/*
 * XREFs of ScsiLogSenseRequest @ 0x1C0008CBC
 * Callers:
 *     ScsiToNVMe @ 0x1C0009970 (ScsiToNVMe.c)
 * Callees:
 *     LogSenseTemperature @ 0x1C0008908 (LogSenseTemperature.c)
 *     LogSenseInformationalExceptions @ 0x1C0008B18 (LogSenseInformationalExceptions.c)
 *     NVMeSetSenseData @ 0x1C0010A04 (NVMeSetSenseData.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

__int64 __fastcall ScsiLogSenseRequest(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned __int8 v5; // dl
  unsigned int v6; // ebx
  _DWORD *v8; // rsi
  unsigned int *v9; // rax
  size_t v10; // rax
  unsigned int v11; // eax

  v4 = a2;
  if ( (a3[1] & 1) == 0 && (a3[2] & 0xC0) == 0x40 )
  {
    v5 = a3[2] & 0x3F;
    if ( v5 <= 0x2Fu )
    {
      a4 = 0x800000002001LL;
      if ( _bittest64(&a4, v5) )
      {
        v6 = 0;
        if ( !a3[3] )
        {
          if ( v5 )
          {
            if ( v5 == 13 )
              return (unsigned int)LogSenseTemperature(a1, v4, (__int64)a3, 0x800000002001LL);
            if ( v5 == 47 )
              return (unsigned int)LogSenseInformationalExceptions(a1, v4, (__int64)a3, 0x800000002001LL);
          }
          else
          {
            if ( *(_BYTE *)(v4 + 2) == 40 )
            {
              v8 = *(_DWORD **)(v4 + 64);
              v9 = (unsigned int *)(v4 + 60);
            }
            else
            {
              v8 = *(_DWORD **)(v4 + 24);
              v9 = (unsigned int *)(v4 + 16);
            }
            if ( v8 )
            {
              v10 = *v9;
              if ( (unsigned int)v10 >= 7 )
              {
                if ( (v10 & 3) != 0 )
                {
                  memset(v8, 0, v10);
                }
                else
                {
                  v11 = (unsigned int)v10 >> 2;
                  if ( v11 )
                    memset(v8, 0, 4LL * v11);
                }
                *v8 = 50331648;
                *((_WORD *)v8 + 2) = 3328;
                *((_BYTE *)v8 + 6) = 47;
                *(_BYTE *)(v4 + 3) = 1;
                return v6;
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
