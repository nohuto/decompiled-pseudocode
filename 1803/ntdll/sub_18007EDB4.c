/*
 * XREFs of sub_18007EDB4 @ 0x18007EDB4
 * Callers:
 *     sub_18002D3B8 @ 0x18002D3B8 (sub_18002D3B8.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     EtwNotificationUnregister @ 0x180008040 (EtwNotificationUnregister.c)
 *     EtwEventRegister @ 0x180029F50 (EtwEventRegister.c)
 *     sub_1801093D4 @ 0x1801093D4 (sub_1801093D4.c)
 */

__int64 __fastcall sub_18007EDB4(_QWORD *a1)
{
  unsigned int v1; // ebx
  char *pShimData; // rsi
  char *v4; // rsi
  __int64 v6; // rax
  signed __int64 v7; // rbp
  ULONGLONG RegHandle; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  RegHandle = 0LL;
  pShimData = (char *)NtCurrentPeb()->pShimData;
  if ( pShimData )
  {
    v4 = pShimData + 1496;
    if ( !v4 || !*((_DWORD *)v4 + 12) )
      v4 = 0LL;
    if ( v4 )
    {
      if ( a1 )
        *a1 = 0LL;
      if ( *((_DWORD *)v4 + 3) )
      {
        v6 = *((_QWORD *)v4 + 2);
        if ( v6 )
        {
          if ( a1 )
            *a1 = v6;
        }
        else
        {
          if ( EtwEventRegister(&ProviderId, 0LL, 0LL, &RegHandle) )
            return v1;
          v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 2, RegHandle, 0LL);
          if ( v7 )
          {
            EtwNotificationUnregister(RegHandle, 0LL);
            if ( a1 )
              *a1 = v7;
          }
          else
          {
            if ( a1 )
              *a1 = RegHandle;
            sub_1801093D4(RegHandle, (__int64)NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer);
          }
        }
        return 1;
      }
    }
  }
  return v1;
}
