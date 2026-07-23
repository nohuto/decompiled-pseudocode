/*
 * XREFs of RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18006DBB4
 * Callers:
 *     RtlRegisterForWnfMetaNotification @ 0x18006DB10 (RtlRegisterForWnfMetaNotification.c)
 *     RtlSubscribeWnfStateChangeNotification @ 0x18006DB70 (RtlSubscribeWnfStateChangeNotification.c)
 * Callees:
 *     RtlpRemoveUserSubFromNameSub @ 0x18000A2F0 (RtlpRemoveUserSubFromNameSub.c)
 *     RtlRunOnceExecuteOnce @ 0x1800367D0 (RtlRunOnceExecuteOnce.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x18006DCFC (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpCreateWnfNameSubscription @ 0x18006DE60 (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateWnfUserSubscription @ 0x18006E008 (RtlpCreateWnfUserSubscription.c)
 *     RtlpCreateSerializationGroup @ 0x18006E0F0 (RtlpCreateSerializationGroup.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x180085D6C (RtlpDecrementWnfSerializationGroup.c)
 */

__int64 __fastcall RtlpSubscribeWnfStateChangeNotificationInternal(
        PVOID *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  __int64 SerializationGroup; // rsi
  NTSTATUS WnfUserSubscription; // edi
  char **v15; // rbx
  PVOID v16; // rax
  int v18; // [rsp+40h] [rbp-38h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-30h] BYREF
  __int64 v20; // [rsp+50h] [rbp-28h] BYREF

  BaseAddress = 0LL;
  SerializationGroup = 0LL;
  if ( byte_18015F3E8 )
  {
    return (unsigned int)-1073741558;
  }
  else
  {
    WnfUserSubscription = RtlRunOnceExecuteOnce(&RunOnce, RtlpInitializeWnf, 0LL, 0LL);
    if ( WnfUserSubscription >= 0 )
    {
      if ( !a7 || (SerializationGroup = RtlpCreateSerializationGroup()) != 0 )
      {
        WnfUserSubscription = RtlpCreateWnfUserSubscription(
                                (unsigned int)&BaseAddress,
                                a3,
                                a4,
                                a5,
                                SerializationGroup,
                                a8,
                                a9);
        if ( WnfUserSubscription < 0
          || (SerializationGroup = 0LL,
              WnfUserSubscription = RtlpCreateWnfNameSubscription(&v20, a2, a6),
              WnfUserSubscription < 0) )
        {
          v16 = BaseAddress;
        }
        else
        {
          v15 = (char **)BaseAddress;
          *a1 = BaseAddress;
          WnfUserSubscription = RtlpAddWnfUserSubToNameSub(v20, v15);
          if ( WnfUserSubscription < 0 )
          {
            *a1 = 0LL;
            RtlpRemoveUserSubFromNameSub(v15[3], v15, &v18);
          }
          v16 = 0LL;
          BaseAddress = 0LL;
        }
        if ( v16 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
        if ( SerializationGroup )
          RtlpDecrementWnfSerializationGroup(SerializationGroup);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)WnfUserSubscription;
}
