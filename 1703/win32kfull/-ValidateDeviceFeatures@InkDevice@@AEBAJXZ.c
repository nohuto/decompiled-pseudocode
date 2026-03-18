/*
 * XREFs of ?ValidateDeviceFeatures@InkDevice@@AEBAJXZ @ 0x1C021EC88
 * Callers:
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021DA00 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall InkDevice::ValidateDeviceFeatures(InkDevice *this, __int64 a2, const GUID *a3, const GUID *a4)
{
  unsigned int v4; // ebx
  int v6; // [rsp+30h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-48h] BYREF
  int *v8; // [rsp+58h] [rbp-28h]
  __int64 v9; // [rsp+60h] [rbp-20h]

  v4 = 0;
  if ( *((_DWORD *)this + 29) == 1 )
  {
    if ( *((_DWORD *)this + 30) == 1 )
    {
      if ( *((_DWORD *)this + 35) == 1 )
      {
        if ( *((_DWORD *)this + 28) != 72 )
        {
          v4 = -1073741762;
          if ( hProvider > 2u )
          {
            v6 = -1073741762;
            v8 = &v6;
            v9 = 4LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, a3, a4, 3u, &pData);
          }
        }
      }
      else
      {
        v4 = -1073741637;
        if ( hProvider > 2u )
        {
LABEL_9:
          v6 = -1073741637;
          v8 = &v6;
          v9 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, a3, a4, 3u, &pData);
        }
      }
    }
    else
    {
      v4 = -1073741637;
      if ( hProvider > 2u )
        goto LABEL_9;
    }
  }
  else
  {
    v4 = -1073741637;
    if ( hProvider > 2u )
      goto LABEL_9;
  }
  return v4;
}
