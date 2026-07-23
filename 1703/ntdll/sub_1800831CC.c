/*
 * XREFs of sub_1800831CC @ 0x1800831CC
 * Callers:
 *     sub_180038FC4 @ 0x180038FC4 (sub_180038FC4.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     EtwEventRegister @ 0x18001ADD0 (EtwEventRegister.c)
 *     EtwNotificationUnregister @ 0x18005FD10 (EtwNotificationUnregister.c)
 *     sub_1801063D4 @ 0x1801063D4 (sub_1801063D4.c)
 */

__int64 __fastcall sub_1800831CC(_QWORD *a1)
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
          if ( EtwEventRegister(&stru_180113EE0, 0LL, 0LL, &RegHandle) )
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
            sub_1801063D4(RegHandle, (__int64)NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer);
          }
        }
        return 1;
      }
    }
  }
  return v1;
}
