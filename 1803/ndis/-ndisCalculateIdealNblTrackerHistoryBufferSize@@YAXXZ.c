/*
 * XREFs of ?ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ @ 0x1C00EFF30
 * Callers:
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C011C20C (-ndisNblTrackerInitialize@@YAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     ?ndisIsValidNblTrackerHistoryBufferSize@@YA_N_KK@Z @ 0x1C011F9D0 (-ndisIsValidNblTrackerHistoryBufferSize@@YA_N_KK@Z.c)
 */

void ndisCalculateIdealNblTrackerHistoryBufferSize(void)
{
  unsigned int v0; // edx
  unsigned __int64 v1; // rcx
  unsigned int v2; // eax
  _DWORD SystemInformation[16]; // [rsp+20h] [rbp-58h] BYREF

  memset(SystemInformation, 0, sizeof(SystemInformation));
  if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) >= 0 )
  {
    v1 = (unsigned __int64)SystemInformation[3] << 12;
    if ( !ndisNblTrackerHistorySize || !ndisIsValidNblTrackerHistoryBufferSize(v1, v0) )
    {
      if ( v1 > 0x40000000 )
      {
        if ( v1 > 0x80000000 )
        {
          if ( v1 > 0x100000000LL )
          {
            v2 = 0x400000;
            if ( v1 <= 0x400000000LL )
              v2 = 0x40000;
            ndisNblTrackerHistorySize = v2;
          }
          else
          {
            ndisNblTrackerHistorySize = 0x8000;
          }
        }
        else
        {
          ndisNblTrackerHistorySize = 0x4000;
        }
      }
      else
      {
        ndisNblTrackerHistorySize = 0x2000;
      }
    }
  }
  else
  {
    ndisNblTrackerHistorySize = 4096;
  }
}
