/*
 * XREFs of ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z @ 0x1C00B1F8C
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_7dba7dab9bc3060b810d705c95db8e00___lambda_ec8793c82e0ed6bcee09c56382ecb370___ @ 0x1C00B154C (KRegKey--QueryValueMultisz__lambda_7dba7dab9bc3060b810d705c95db8e00___lambda_ec8793c82e0ed6bcee0.c)
 *     NdisRegisterProtocolDriver @ 0x1C00BEDB0 (NdisRegisterProtocolDriver.c)
 *     NdisRegisterProtocol @ 0x1C00E6190 (NdisRegisterProtocol.c)
 * Callees:
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00B0DE4 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C00B2174 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z @ 0x1C00C86EC (-grow@-$KArray@V-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E5F98 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

volatile signed __int32 **__fastcall ndisBindGetProtocolDriver(
        volatile signed __int32 **a1,
        const struct _UNICODE_STRING *a2,
        char a3)
{
  KPushLockBase *m_Lock; // rbp
  __int64 v7; // r15
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r14
  const wchar_t **v11; // rcx
  volatile signed __int32 *v12; // rax
  volatile signed __int32 *PoolWithTag; // rax
  volatile signed __int32 *v15; // rdi
  struct Rtl::KString *v16; // rax
  struct Rtl::KString *v17; // rcx
  struct Rtl::KString *v18; // rbp
  __int64 v19; // rbp
  volatile signed __int32 **v20; // rdx
  KLockHolder v21; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+88h] [rbp+20h]

  m_Lock = (KPushLockBase *)qword_1C0098800;
  v21.m_Lock = (KPushLockBase *)qword_1C0098800;
  KeEnterCriticalRegion();
  v21.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(m_Lock, 0LL);
  v7 = qword_1C0098800;
  v21.m_State = Exclusive;
  v8 = 0LL;
  v9 = *(unsigned int *)(qword_1C0098800 + 44);
  v22 = v9;
  while ( 1 )
  {
    if ( v8 == v9 )
    {
      PoolWithTag = (volatile signed __int32 *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x44745042u);
      v15 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_25;
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
      }
      if ( *((_QWORD *)v15 + 3)
        && ndisBindReadProtocolDriverConfiguration((struct NDIS_BIND_PROTOCOL_DRIVER *)v15)
        && (v19 = qword_1C0098800,
            (unsigned __int8)Rtl::KArray<KRef<NDIS_BIND_PROTOCOL_DRIVER>,1>::grow(
                               qword_1C0098800 + 40,
                               (unsigned int)(*(_DWORD *)(qword_1C0098800 + 44) + 1))) )
      {
        v20 = (volatile signed __int32 **)(*(_QWORD *)(v19 + 48) + 8LL * *(unsigned int *)(v19 + 44));
        if ( v20 )
        {
          *v20 = v15;
          _InterlockedIncrement(v15 + 12);
        }
        ++*(_DWORD *)(v19 + 44);
        *a1 = v15;
      }
      else
      {
        *a1 = 0LL;
        if ( _InterlockedExchangeAdd(v15 + 12, 0xFFFFFFFF) == 1 )
          KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v15);
      }
LABEL_23:
      KLockHolder::~KLockHolder(&v21);
      return a1;
    }
    if ( v8 >= *(unsigned int *)(v7 + 44) )
      __fastfail(5u);
    v10 = *(_QWORD *)(v7 + 48);
    v11 = *(const wchar_t ***)(*(_QWORD *)(v10 + 8 * v8) + 24LL);
    if ( *(_WORD *)v11 == a2->Length && !_wcsnicmp(v11[1], a2->Buffer, (unsigned __int64)*(unsigned __int16 *)v11 >> 1) )
      break;
    v9 = v22;
    ++v8;
  }
  if ( a3 && !ndisBindReadProtocolDriverConfiguration(*(struct NDIS_BIND_PROTOCOL_DRIVER **)(v10 + 8 * v8)) )
  {
LABEL_25:
    *a1 = 0LL;
    goto LABEL_23;
  }
  v12 = *(volatile signed __int32 **)(v10 + 8 * v8);
  *a1 = v12;
  if ( v12 )
  {
    _InterlockedIncrement(v12 + 12);
    m_Lock = v21.m_Lock;
  }
  ExReleasePushLockExclusiveEx(m_Lock, 0LL);
  KeLeaveCriticalRegion();
  return a1;
}
