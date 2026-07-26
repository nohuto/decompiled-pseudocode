/*
 * XREFs of ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x1C00BBA5C
 * Callers:
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x1C00BB9F4 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_dele.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00FD7B4 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 *     ??0BindState@Ndis@@QEAA@XZ @ 0x1C00BCEF4 (--0BindState@Ndis@@QEAA@XZ.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E77E8 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall Ndis::BindStack::BuildProtocolLink(__int64 a1, _QWORD *a2, volatile signed __int32 **a3)
{
  char *PoolWithTag; // rax
  char *v6; // rbx
  volatile signed __int32 **v7; // r14
  volatile signed __int32 *v8; // rdi
  volatile signed __int32 *v9; // rcx

  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x4C745042u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x58uLL);
    Ndis::BindState::BindState((Ndis::BindState *)v6);
    *((_QWORD *)v6 + 9) = v6 + 64;
    *((_QWORD *)v6 + 8) = v6 + 64;
    *((_QWORD *)v6 + 10) = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v7 = (volatile signed __int32 **)(v6 + 80);
    if ( v6 + 80 != (char *)a3 )
    {
      v8 = *a3;
      v9 = *v7;
      if ( v8 != *v7 )
      {
        if ( v9 && _InterlockedExchangeAdd(v9 + 12, 0xFFFFFFFF) == 1 )
          KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v9);
        *v7 = v8;
        if ( v8 )
          _InterlockedIncrement(v8 + 12);
      }
    }
    *a2 = v6;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
