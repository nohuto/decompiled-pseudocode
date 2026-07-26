/*
 * XREFs of ?ndisPcwRemoveCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C00E53B8
 * Callers:
 *     ?ndisCounterSetProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C00E4980 (-ndisCounterSetProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B502C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisPcwDeleteConsumer@@YAXPEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C00E4DAC (-ndisPcwDeleteConsumer@@YAXPEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisPcwRemoveCounter(int a1, __int64 a2)
{
  struct _NDIS_PCW_CONSUMER_BLOCK *v2; // rdi
  struct _NDIS_PCW_CONSUMER_BLOCK *i; // rbx
  KLockHolder v7; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  v7.m_State = Unlocked;
  v7.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  v7.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v7);
  for ( i = ndisPcwConsumerList; i; i = *(struct _NDIS_PCW_CONSUMER_BLOCK **)i )
  {
    if ( *((_DWORD *)i + 2) == a1
      && *((_QWORD *)i + 2) == *(_QWORD *)a2
      && RtlEqualUnicodeString((PCUNICODE_STRING)((char *)i + 24), *(PCUNICODE_STRING *)(a2 + 8), 0) )
    {
      if ( v2 )
        *(_QWORD *)v2 = *(_QWORD *)i;
      else
        ndisPcwConsumerList = *(struct _NDIS_PCW_CONSUMER_BLOCK **)i;
      ndisPcwDeleteConsumer(i);
      break;
    }
    v2 = i;
  }
  KLockHolder::~KLockHolder(&v7);
  return 0LL;
}
