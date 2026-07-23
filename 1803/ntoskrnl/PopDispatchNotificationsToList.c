/*
 * XREFs of PopDispatchNotificationsToList @ 0x140565C38
 * Callers:
 *     PopDispatchNotifications @ 0x140565BF0 (PopDispatchNotifications.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     PopMarshalSettingValues @ 0x14056609C (PopMarshalSettingValues.c)
 *     PopFreeRegistration @ 0x1405EE18C (PopFreeRegistration.c)
 */

struct _KTHREAD *__fastcall PopDispatchNotificationsToList(WNF_STATE_NAME **a1)
{
  WNF_STATE_NAME *v2; // rdi
  unsigned int v3; // eax
  WNF_STATE_NAME *v4; // rsi
  struct _KTHREAD *result; // rax
  int v6; // ebx
  ULONG v7; // r8d
  NTSTATUS updated; // ebx
  WNF_STATE_NAME **v9; // rax
  ULONG v10; // [rsp+40h] [rbp-58h] BYREF
  WNF_STATE_NAME StateName; // [rsp+48h] [rbp-50h] BYREF
  _BYTE Buffer[40]; // [rsp+50h] [rbp-48h] BYREF

  ExAcquireFastMutex(&PopSettingLock);
  v2 = *a1;
  while ( v2 != (WNF_STATE_NAME *)a1 )
  {
    v3 = v2[6].Data[1];
    v4 = v2;
    while ( (v3 & 1) != 0 && (v3 & 2) == 0 )
    {
      StateName = v2[7];
      v2[6].Data[1] = v2[6].Data[1] & 0xFFFFFFFC | 2;
      v6 = PopMarshalSettingValues(v2, Buffer, 36LL, &v10);
      KeReleaseGuardedMutex(&PopSettingLock);
      v7 = v10;
      if ( v6 < 0 )
        v7 = 0;
      v10 = v7;
      updated = ZwUpdateWnfStateData(&StateName, Buffer, v7, 0LL, 0LL, 0, 0);
      if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
        __fastfail(0x20u);
      ExAcquireFastMutex(&PopSettingLock);
      v3 = v2[6].Data[1] & 0xFFFFFFFD;
      v2[6].Data[1] = v3;
      if ( updated < 0 )
      {
        v3 |= 1u;
        v2[6].Data[1] = v3;
        break;
      }
    }
    v2 = (WNF_STATE_NAME *)*v2;
    if ( (v3 & 2) == 0 && (v3 & 4) != 0 )
    {
      if ( (WNF_STATE_NAME *)v2[1] != v4 || (v9 = (WNF_STATE_NAME **)v4[1], *v9 != v4) )
        __fastfail(3u);
      *v9 = v2;
      v2[1] = (WNF_STATE_NAME)v9;
      PopFreeRegistration(v4);
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
