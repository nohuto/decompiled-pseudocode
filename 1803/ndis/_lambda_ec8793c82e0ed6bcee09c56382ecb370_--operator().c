/*
 * XREFs of _lambda_ec8793c82e0ed6bcee09c56382ecb370_::operator() @ 0x1C00BB60C
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_7dba7dab9bc3060b810d705c95db8e00___lambda_ec8793c82e0ed6bcee09c56382ecb370___ @ 0x1C00BA960 (KRegKey--QueryValueMultisz__lambda_7dba7dab9bc3060b810d705c95db8e00___lambda_ec8793c82e0ed6bcee0.c)
 * Callees:
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00B3770 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x1C00BB9F4 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_dele.c)
 *     ?append@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00BEFA0 (-append@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_L.c)
 *     ?insertAt@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00BF0D4 (-insertAt@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E77E8 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall lambda_ec8793c82e0ed6bcee09c56382ecb370_::operator()(__int64 *a1, const WCHAR *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  NDIS_BIND_LINK_BASE *v5; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // r10
  char v10; // al
  __int64 v11; // rax
  unsigned int v12; // edi
  volatile signed __int32 *Miniport; // rcx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  PVOID P; // [rsp+48h] [rbp+18h] BYREF

  if ( !*a2 )
    return 3221225485LL;
  RtlInitUnicodeString(&DestinationString, a2);
  RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
  Ndis::BindStack::BuildProtocolLink(v3, &P, &DestinationString);
  v5 = (NDIS_BIND_LINK_BASE *)P;
  if ( !P )
    goto LABEL_14;
  v6 = *a1;
  v7 = 0LL;
  if ( *(_DWORD *)(*a1 + 4) )
  {
    v8 = *((_QWORD *)P + 10);
    v4 = *(_QWORD *)(v6 + 8);
    while ( 1 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)v4 + 80LL);
      if ( v8 <= v9 )
        break;
      ++v7;
      v4 += 8LL;
      if ( v7 >= *(unsigned int *)(*a1 + 4) )
        goto LABEL_7;
    }
    if ( v8 >= v9 )
      goto LABEL_9;
    v10 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::insertAt(
            v6,
            v7,
            &P);
  }
  else
  {
LABEL_7:
    v10 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::append(
            v6,
            &P,
            v4);
  }
  v5 = (NDIS_BIND_LINK_BASE *)P;
  if ( !v10 )
  {
LABEL_14:
    v12 = -1073741670;
    goto LABEL_10;
  }
LABEL_9:
  v11 = *a1;
  v12 = 0;
  ++*(_DWORD *)(v11 + 96);
LABEL_10:
  if ( v5 )
  {
    Miniport = (volatile signed __int32 *)v5[1].BindState.Miniport;
    if ( Miniport )
    {
      if ( _InterlockedExchangeAdd(Miniport + 12, 0xFFFFFFFF) == 1 )
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)Miniport);
      v5 = (NDIS_BIND_LINK_BASE *)P;
    }
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v5);
    ExFreePoolWithTag(v5, 0x4C745042u);
  }
  return v12;
}
