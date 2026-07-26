/*
 * XREFs of ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z @ 0x1C00BEC28
 * Callers:
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x1C00BB9F4 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_dele.c)
 *     NdisRegisterProtocolDriver @ 0x1C00C18B0 (NdisRegisterProtocolDriver.c)
 *     NdisRegisterProtocol @ 0x1C00E79E0 (NdisRegisterProtocol.c)
 * Callees:
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z @ 0x1C00B5E88 (-grow@-$KArray@V-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z.c)
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00B785C (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C00B9E68 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E77E8 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

volatile signed __int32 **__fastcall ndisBindGetProtocolDriver(
        volatile signed __int32 **a1,
        const struct _UNICODE_STRING *a2,
        char a3)
{
  __int64 v3; // rbx
  __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rsi
  const wchar_t **v11; // rcx
  volatile signed __int32 *v12; // rax
  volatile signed __int32 *PoolWithTag; // rax
  volatile signed __int32 *v15; // rbx
  struct Rtl::KString *v16; // rax
  struct Rtl::KString *v17; // rcx
  struct Rtl::KString *v18; // rsi
  __int64 v19; // rsi
  KLockHolder v20; // [rsp+20h] [rbp-38h] BYREF

  v3 = qword_1C00996D8;
  v20.m_Lock = (KPushLockBase *)qword_1C00996D8;
  KeEnterCriticalRegion();
  v20.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  v7 = qword_1C00996D8;
  v8 = 0LL;
  v20.m_State = Exclusive;
  v9 = *(unsigned int *)(qword_1C00996D8 + 44);
  while ( v8 != v9 )
  {
    if ( v8 >= *(unsigned int *)(v7 + 44) )
      __fastfail(5u);
    v10 = *(_QWORD *)(v7 + 48);
    v11 = *(const wchar_t ***)(*(_QWORD *)(v10 + 8 * v8) + 24LL);
    if ( *(_WORD *)v11 == a2->Length && !_wcsnicmp(v11[1], a2->Buffer, (unsigned __int64)*(unsigned __int16 *)v11 >> 1) )
    {
      if ( a3 && !ndisBindReadProtocolDriverConfiguration(*(struct NDIS_BIND_PROTOCOL_DRIVER **)(v10 + 8 * v8)) )
        goto LABEL_21;
      v12 = *(volatile signed __int32 **)(v10 + 8 * v8);
      *a1 = v12;
      if ( v12 )
        _InterlockedIncrement(v12 + 12);
      goto LABEL_10;
    }
    ++v8;
  }
  PoolWithTag = (volatile signed __int32 *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x44745042u);
  v15 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_21:
    *a1 = 0LL;
    goto LABEL_10;
  }
  *(_WORD *)PoolWithTag = 0;
  *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 2;
  *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 2;
  *((_QWORD *)PoolWithTag + 3) = 0LL;
  *((_DWORD *)PoolWithTag + 8) = 0;
  *((_QWORD *)PoolWithTag + 5) = 0LL;
  *((_DWORD *)PoolWithTag + 12) = 1;
  v16 = Rtl::KString::Initialize(a2);
  v17 = (struct Rtl::KString *)*((_QWORD *)v15 + 3);
  v18 = v16;
  if ( v16 != v17 )
  {
    if ( v17 )
      ExFreePoolWithTag(v17, 0x7274534Bu);
    *((_QWORD *)v15 + 3) = v18;
    v17 = v18;
  }
  if ( v17
    && ndisBindReadProtocolDriverConfiguration((struct NDIS_BIND_PROTOCOL_DRIVER *)v15)
    && (v19 = qword_1C00996D8,
        Rtl::KArray<KRef<NDIS_BIND_PROTOCOL_DRIVER>,1>::grow(
          (unsigned int *)(qword_1C00996D8 + 40),
          (unsigned int)(*(_DWORD *)(qword_1C00996D8 + 44) + 1))) )
  {
    *(_QWORD *)(*(_QWORD *)(v19 + 48) + 8LL * *(unsigned int *)(v19 + 44)) = v15;
    _InterlockedIncrement(v15 + 12);
    ++*(_DWORD *)(v19 + 44);
    *a1 = v15;
  }
  else
  {
    *a1 = 0LL;
    if ( _InterlockedExchangeAdd(v15 + 12, 0xFFFFFFFF) == 1 )
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v15);
  }
LABEL_10:
  KLockHolder::~KLockHolder(&v20);
  return a1;
}
