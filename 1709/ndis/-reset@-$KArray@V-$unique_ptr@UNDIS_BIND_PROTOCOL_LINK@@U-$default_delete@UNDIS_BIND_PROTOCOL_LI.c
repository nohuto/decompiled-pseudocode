/*
 * XREFs of ?reset@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXXZ @ 0x1C00B3DAC
 * Callers:
 *     ??1BindStack@Ndis@@QEAA@XZ @ 0x1C00BE4BC (--1BindStack@Ndis@@QEAA@XZ.c)
 * Callees:
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00ABCE8 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E5F98 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

void __fastcall Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::reset(
        __int64 a1)
{
  __int64 v2; // rdi
  volatile signed __int32 *Miniport; // rcx
  NDIS_BIND_LINK_BASE *v4; // rsi

  if ( *(_QWORD *)(a1 + 8) )
  {
    LODWORD(v2) = *(_DWORD *)(a1 + 4);
    while ( (_DWORD)v2 )
    {
      v2 = (unsigned int)(v2 - 1);
      v4 = *(NDIS_BIND_LINK_BASE **)(*(_QWORD *)(a1 + 8) + 8 * v2);
      if ( v4 )
      {
        Miniport = (volatile signed __int32 *)v4[1].BindState.Miniport;
        if ( Miniport )
        {
          if ( _InterlockedExchangeAdd(Miniport + 12, 0xFFFFFFFF) == 1 )
            KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)Miniport);
        }
        NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v4);
        ExFreePoolWithTag(v4, 0x4C745042u);
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0x7272414Bu);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)a1 = 0;
  }
}
