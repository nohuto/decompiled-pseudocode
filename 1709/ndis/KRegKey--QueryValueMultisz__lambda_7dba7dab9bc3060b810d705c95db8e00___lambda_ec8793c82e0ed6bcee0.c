/*
 * XREFs of KRegKey::QueryValueMultisz__lambda_7dba7dab9bc3060b810d705c95db8e00___lambda_ec8793c82e0ed6bcee09c56382ecb370___ @ 0x1C00B154C
 * Callers:
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C00BE504 (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 *     ?ReadV1InterfaceBindings@BindStack@Ndis@@AEAA_NPEAU_DEVICE_OBJECT@@@Z @ 0x1C00FB0F4 (-ReadV1InterfaceBindings@BindStack@Ndis@@AEAA_NPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     ??1?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00393A0 (--1-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@w.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00ABCE8 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?reserve@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x1C00B1E84 (-reserve@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z @ 0x1C00B1F8C (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z.c)
 *     ?append@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00B3E40 (-append@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_L.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C00B3E94 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_.c)
 *     ?insertAt@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00B4070 (-insertAt@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00C5A4C (--_V@YAXPEAX@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E5F98 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueMultisz__lambda_7dba7dab9bc3060b810d705c95db8e00___lambda_ec8793c82e0ed6bcee09c56382ecb370___(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4)
{
  WCHAR *v7; // rsi
  WCHAR *PoolWithTag; // r15
  NTSTATUS v10; // eax
  unsigned int v11; // r14d
  __int64 v12; // rax
  const WCHAR *v13; // r14
  _WORD *v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned int v16; // eax
  char v17; // al
  NDIS_BIND_LINK_BASE *v18; // rbx
  const WCHAR *v20; // r13
  volatile signed __int32 *v21; // rbx
  char *v22; // rax
  char *v23; // r14
  volatile signed __int32 **v24; // r15
  volatile signed __int32 *v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r10
  __int64 v28; // rcx
  unsigned __int64 v29; // r9
  volatile signed __int32 *Miniport; // rcx
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-C8h] BYREF
  PVOID v33; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+60h] [rbp-A0h] BYREF

  v7 = 0LL;
  PoolWithTag = (WCHAR *)KeyValueInformation;
  v10 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  v11 = v10;
  if ( v10 == -2147483643 )
  {
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x7A536C4Du);
    if ( !PoolWithTag )
      goto LABEL_46;
    operator delete[](0LL);
    v7 = PoolWithTag;
    v10 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, PoolWithTag, ResultLength, &ResultLength);
    v11 = v10;
  }
  if ( v10 >= 0 )
  {
    if ( *((_DWORD *)PoolWithTag + 1) != 7 )
    {
      v11 = -1073741788;
      goto LABEL_22;
    }
    v12 = *((unsigned int *)PoolWithTag + 2);
    if ( (v12 & 1) != 0 )
    {
      v11 = -1073741811;
      goto LABEL_22;
    }
    v13 = PoolWithTag + 6;
    v14 = PoolWithTag + 6;
    v15 = (unsigned __int64)PoolWithTag + v12 + 12;
    v16 = 0;
    if ( (unsigned __int64)(PoolWithTag + 6) >= v15 )
    {
LABEL_60:
      v11 = -1073741789;
      goto LABEL_22;
    }
LABEL_6:
    if ( *v14 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)++v14 >= v15 )
          goto LABEL_60;
        if ( !*v14 )
        {
          ++v16;
          if ( (unsigned __int64)++v14 < v15 )
            goto LABEL_6;
          goto LABEL_60;
        }
      }
    }
    if ( v16 > 0x80 )
    {
      v11 = -1073740757;
      goto LABEL_22;
    }
    if ( !(unsigned __int8)Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::reserve(
                             a3,
                             v16) )
      goto LABEL_46;
    while ( 1 )
    {
      if ( !*v13 )
      {
        v11 = 0;
        break;
      }
      v20 = v13;
      do
        ++v20;
      while ( *v20 );
      RtlInitUnicodeString(&DestinationString, v13);
      RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
      ndisBindGetProtocolDriver(&v33, &DestinationString, 0LL);
      v21 = (volatile signed __int32 *)v33;
      if ( !v33 )
      {
        P = 0LL;
LABEL_45:
        wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>::~unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>((NDIS_BIND_LINK_BASE **)&P);
LABEL_46:
        v11 = -1073741670;
        break;
      }
      v22 = (char *)ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x4C745042u);
      v23 = v22;
      if ( v22 )
      {
        memset(v22, 0, 0x58uLL);
        *((_WORD *)v23 + 4) = 0;
        *((_QWORD *)v23 + 3) = 0LL;
        *(_QWORD *)v23 = 0LL;
        v23[10] = 0;
        *((_QWORD *)v23 + 2) = 0LL;
        *((_DWORD *)v23 + 8) = 2;
        *(_QWORD *)(v23 + 36) = 1LL;
        *((_QWORD *)v23 + 6) = 0LL;
        *((_QWORD *)v23 + 7) = 0LL;
        Rtl::KArray<void *,1>::reserve(v23 + 48, 4LL);
        *((_QWORD *)v23 + 9) = v23 + 64;
        *((_QWORD *)v23 + 8) = v23 + 64;
        *((_QWORD *)v23 + 10) = 0LL;
      }
      else
      {
        v23 = 0LL;
      }
      if ( v23 )
      {
        v24 = (volatile signed __int32 **)(v23 + 80);
        if ( v23 + 80 != (char *)&v33 )
        {
          v25 = *v24;
          if ( v21 != *v24 )
          {
            if ( v25 )
            {
              if ( _InterlockedExchangeAdd(v25 + 12, 0xFFFFFFFF) == 1 )
                KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v25);
              v21 = (volatile signed __int32 *)v33;
            }
            *v24 = v21;
            _InterlockedIncrement(v21 + 12);
            v21 = (volatile signed __int32 *)v33;
          }
        }
        P = v23;
      }
      else
      {
        P = 0LL;
      }
      if ( _InterlockedExchangeAdd(v21 + 12, 0xFFFFFFFF) == 1 )
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'(v33);
      v18 = (NDIS_BIND_LINK_BASE *)P;
      if ( !P )
        goto LABEL_45;
      v26 = 0LL;
      if ( *(_DWORD *)(a4 + 4) )
      {
        v27 = *((_QWORD *)P + 10);
        v28 = *(_QWORD *)(a4 + 8);
        while ( 1 )
        {
          v29 = *(_QWORD *)(*(_QWORD *)v28 + 80LL);
          if ( v27 <= v29 )
            break;
          ++v26;
          v28 += 8LL;
          if ( v26 >= *(unsigned int *)(a4 + 4) )
            goto LABEL_41;
        }
        if ( v27 >= v29 )
          goto LABEL_18;
        v17 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::insertAt(
                a4,
                v26,
                &P);
      }
      else
      {
LABEL_41:
        v17 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::append(
                a4,
                &P);
      }
      if ( !v17 )
        goto LABEL_45;
      v18 = (NDIS_BIND_LINK_BASE *)P;
LABEL_18:
      ++*(_DWORD *)(a4 + 96);
      if ( v18 )
      {
        Miniport = (volatile signed __int32 *)v18[1].BindState.Miniport;
        if ( Miniport )
        {
          if ( _InterlockedExchangeAdd(Miniport + 12, 0xFFFFFFFF) == 1 )
            KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)Miniport);
          v18 = (NDIS_BIND_LINK_BASE *)P;
        }
        NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v18);
        ExFreePoolWithTag(v18, 0x4C745042u);
      }
      v13 = v20 + 1;
    }
  }
LABEL_22:
  operator delete[](v7);
  return v11;
}
