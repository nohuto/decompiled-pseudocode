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

struct _KTHREAD *__fastcall PopDispatchNotificationsToList(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // r14
  unsigned int *v4; // rsi
  struct _KTHREAD *result; // rax
  int v6; // ebx
  __int64 v7; // r8
  int updated; // ebx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // [rsp+20h] [rbp-78h]
  int v12; // [rsp+28h] [rbp-70h]
  int v13; // [rsp+30h] [rbp-68h]
  unsigned int v14; // [rsp+40h] [rbp-58h] BYREF
  __int64 v15; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v16[40]; // [rsp+50h] [rbp-48h] BYREF

  ExAcquireFastMutex(&PopSettingLock);
  v2 = (_QWORD *)*a1;
  while ( v2 != a1 )
  {
    v3 = v2;
    v4 = (unsigned int *)v2 + 13;
    while ( (*v4 & 1) != 0 && (*v4 & 2) == 0 )
    {
      v15 = v2[7];
      *v4 = *v4 & 0xFFFFFFFC | 2;
      v6 = PopMarshalSettingValues(v2, v16, 36LL, &v14, v11, v12, v13);
      KeReleaseGuardedMutex(&PopSettingLock);
      v7 = v14;
      v13 = 0;
      v12 = 0;
      v11 = 0LL;
      if ( v6 < 0 )
        v7 = 0LL;
      v14 = v7;
      updated = ZwUpdateWnfStateData((__int64)&v15, (__int64)v16, v7);
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
    v2 = (_QWORD *)*v2;
    if ( (*v4 & 2) == 0 && (*v4 & 4) != 0 )
    {
      v9 = *v3;
      v10 = (_QWORD *)v3[1];
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (_QWORD *)*v10 != v3 )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      PopFreeRegistration(v3);
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
