/*
 * XREFs of PopWnfFullscreenVideoCallback @ 0x1406C7270
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x14006F948 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x14006F988 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x14006FC2C (PpmAcquireLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x140457810 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopWnfFullscreenVideoCallback(__int64 a1)
{
  int v1; // ebx
  int v2; // eax
  unsigned int v4; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v5[8]; // [rsp+28h] [rbp-20h] BYREF
  int v6; // [rsp+30h] [rbp-18h] BYREF

  v4 = 8;
  v1 = ExQueryWnfStateData(a1, (__int64)v5, (__int64)&v6, &v4);
  if ( v1 >= 0 )
  {
    if ( v4 < 8 )
      return 0;
    PpmAcquireLock(&PopFxSystemLatencyLock);
    if ( byte_14034BB6E )
    {
      v2 = v6 & 2;
      if ( (v6 & 2) != 0 )
      {
LABEL_9:
        PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
        return (unsigned int)v1;
      }
    }
    else
    {
      v2 = v6 & 2;
      if ( (v6 & 2) == 0 )
        goto LABEL_9;
    }
    byte_14034BB6E = v2 != 0;
    PoFxSendSystemLatencyUpdate();
    goto LABEL_9;
  }
  return (unsigned int)v1;
}
