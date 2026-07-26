/*
 * XREFs of ?reset@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXXZ @ 0x1C00BEF08
 * Callers:
 *     ??1BindStack@Ndis@@QEAA@XZ @ 0x1C00BB938 (--1BindStack@Ndis@@QEAA@XZ.c)
 * Callees:
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00B3770 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E77E8 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

void __fastcall Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::reset(
        __int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdi
  volatile signed __int32 *Miniport; // rcx
  NDIS_BIND_LINK_BASE *v5; // rsi

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 )
  {
    LODWORD(v3) = *(_DWORD *)(a1 + 4);
    while ( (_DWORD)v3 )
    {
      v2 = *(_QWORD **)(a1 + 8);
      v3 = (unsigned int)(v3 - 1);
      v5 = (NDIS_BIND_LINK_BASE *)v2[v3];
      if ( v5 )
      {
        Miniport = (volatile signed __int32 *)v5[1].BindState.Miniport;
        if ( Miniport )
        {
          if ( _InterlockedExchangeAdd(Miniport + 12, 0xFFFFFFFF) == 1 )
            KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)Miniport);
        }
        NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v5);
        ExFreePoolWithTag(v5, 0x4C745042u);
        v2 = *(_QWORD **)(a1 + 8);
      }
    }
    ExFreePoolWithTag(v2, 0x7272414Bu);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)a1 = 0;
  }
}
