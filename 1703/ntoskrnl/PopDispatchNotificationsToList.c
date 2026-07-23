/*
 * XREFs of PopDispatchNotificationsToList @ 0x1404C5F9C
 * Callers:
 *     PopDispatchNotifications @ 0x1404C7270 (PopDispatchNotifications.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     PopMarshalSettingValues @ 0x1404C7D08 (PopMarshalSettingValues.c)
 *     PopFreeRegistration @ 0x1405796B8 (PopFreeRegistration.c)
 */

struct _KTHREAD *__fastcall PopDispatchNotificationsToList(WNF_STATE_NAME **a1)
{
  WNF_STATE_NAME *v2; // rdi
  WNF_STATE_NAME *v3; // r14
  unsigned int *v4; // rsi
  struct _KTHREAD *result; // rax
  int v6; // ebx
  ULONG v7; // r8d
  NTSTATUS updated; // ebx
  WNF_STATE_NAME v9; // rcx
  WNF_STATE_NAME **v10; // rax
  ULONG v11; // [rsp+40h] [rbp-58h] BYREF
  WNF_STATE_NAME StateName; // [rsp+48h] [rbp-50h] BYREF
  _BYTE Buffer[40]; // [rsp+50h] [rbp-48h] BYREF

  ExAcquireFastMutex(&PopSettingLock);
  v2 = *a1;
  while ( v2 != (WNF_STATE_NAME *)a1 )
  {
    v3 = v2;
    v4 = (unsigned int *)&v2[6] + 1;
    while ( (*v4 & 1) != 0 && (*v4 & 2) == 0 )
    {
      StateName = v2[7];
      *v4 = *v4 & 0xFFFFFFFC | 2;
      v6 = PopMarshalSettingValues(v2, Buffer, 36LL, &v11);
      KeReleaseGuardedMutex(&PopSettingLock);
      v7 = v11;
      if ( v6 < 0 )
        v7 = 0;
      v11 = v7;
      updated = ZwUpdateWnfStateData(&StateName, Buffer, v7, 0LL, 0LL, 0, 0);
      if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
        __fastfail(0x20u);
      ExAcquireFastMutex(&PopSettingLock);
      *v4 &= ~2u;
      if ( updated < 0 )
      {
        *v4 |= 1u;
        break;
      }
    }
    v2 = (WNF_STATE_NAME *)*v2;
    if ( (*v4 & 2) == 0 && (*v4 & 4) != 0 )
    {
      v9 = *v3;
      v10 = (WNF_STATE_NAME **)v3[1];
      if ( *(WNF_STATE_NAME **)(*(_QWORD *)v3 + 8LL) != v3 || *v10 != v3 )
        __fastfail(3u);
      *v10 = (WNF_STATE_NAME *)v9;
      *(_QWORD *)(*(_QWORD *)&v9 + 8LL) = v10;
      PopFreeRegistration(v3);
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
