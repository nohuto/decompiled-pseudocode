/*
 * XREFs of ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z @ 0x1C00B24A4
 * Callers:
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x1C00B1C74 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_dele.c)
 *     NdisRegisterProtocolDriver @ 0x1C00B7D70 (NdisRegisterProtocolDriver.c)
 *     NdisRegisterProtocol @ 0x1C00DC150 (NdisRegisterProtocol.c)
 * Callees:
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00AF298 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C00B1474 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00BC2CC (-grow@-$KArray@V-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Rtl@@AEAA_N_K@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00DBF50 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall ndisBindGetProtocolDriver(_QWORD *a1, const struct _UNICODE_STRING *a2, char a3)
{
  __int64 v3; // rbx
  __int64 v7; // r15
  unsigned int v8; // ebp
  int v9; // eax
  __int64 v10; // r14
  const wchar_t **v11; // rcx
  __int64 v12; // rax
  char *PoolWithTag; // rax
  char *v15; // rdi
  struct Rtl::KString *v16; // rax
  struct Rtl::KString *v17; // rcx
  struct Rtl::KString *v18; // rbp
  __int64 v19; // rbp
  _QWORD *v20; // rdx
  KLockHolder v21; // [rsp+20h] [rbp-48h] BYREF
  int v22; // [rsp+88h] [rbp+20h]

  v3 = qword_1C00926E0;
  v21.m_Lock = (KPushLockBase *)qword_1C00926E0;
  KeEnterCriticalRegion();
  v21.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  v7 = qword_1C00926E0;
  v21.m_State = Exclusive;
  v8 = 0;
  v9 = *(_DWORD *)(qword_1C00926E0 + 44);
  v22 = v9;
  while ( v8 != v9 )
  {
    if ( v8 >= (unsigned __int64)*(unsigned int *)(v7 + 44) )
      __fastfail(0xBAD0FFu);
    v10 = *(_QWORD *)(v7 + 48);
    v11 = *(const wchar_t ***)(*(_QWORD *)(v10 + 8LL * v8) + 32LL);
    if ( *(_WORD *)v11 == a2->Length && !_wcsnicmp(v11[1], a2->Buffer, (unsigned __int64)*(unsigned __int16 *)v11 >> 1) )
    {
      if ( a3
        && !ndisBindReadProtocolDriverConfiguration((struct NDIS_BIND_PROTOCOL_DRIVER *)(*(_QWORD *)(v10 + 8LL * v8)
                                                                                       + 8LL)) )
      {
        goto LABEL_23;
      }
      v12 = *(_QWORD *)(v10 + 8LL * v8);
      *a1 = v12;
      if ( v12 )
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 56));
      goto LABEL_10;
    }
    v9 = v22;
    ++v8;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x44745042u);
  v15 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_23:
    *a1 = 0LL;
    goto LABEL_10;
  }
  *((_WORD *)PoolWithTag + 4) = 0;
  *((_QWORD *)PoolWithTag + 3) = PoolWithTag + 16;
  *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 16;
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  *((_DWORD *)PoolWithTag + 10) = 0;
  *((_QWORD *)PoolWithTag + 6) = 0LL;
  *((_DWORD *)PoolWithTag + 14) = 1;
  v16 = Rtl::KString::Initialize(a2);
  v17 = (struct Rtl::KString *)*((_QWORD *)v15 + 4);
  v18 = v16;
  if ( v16 != v17 )
  {
    if ( v17 )
      ExFreePoolWithTag(v17, 0x7274534Bu);
    *((_QWORD *)v15 + 4) = v18;
  }
  if ( *((_QWORD *)v15 + 4)
    && ndisBindReadProtocolDriverConfiguration((struct NDIS_BIND_PROTOCOL_DRIVER *)(v15 + 8))
    && (v19 = qword_1C00926E0,
        (unsigned __int8)Rtl::KArray<KRef<NDIS_BIND_PROTOCOL_DRIVER>>::grow(
                           qword_1C00926E0 + 40,
                           (unsigned int)(*(_DWORD *)(qword_1C00926E0 + 44) + 1))) )
  {
    v20 = (_QWORD *)(*(_QWORD *)(v19 + 48) + 8LL * *(unsigned int *)(v19 + 44));
    if ( v20 )
    {
      *v20 = v15;
      _InterlockedAdd((volatile signed __int32 *)v15 + 14, 1u);
    }
    ++*(_DWORD *)(v19 + 44);
    *a1 = v15;
  }
  else
  {
    *a1 = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v15 + 14, 0xFFFFFFFF) == 1 )
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'(v15);
  }
LABEL_10:
  KLockHolder::~KLockHolder(&v21);
  return a1;
}
