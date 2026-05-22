/*
 * XREFs of ?QueryInterface@MouseProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006A190
 * Callers:
 *     ?QueryInterface@MouseProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006AB80 (-QueryInterface@MouseProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MouseProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006AB90 (-QueryInterface@MouseProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MouseProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006ABB0 (-QueryInterface@MouseProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MouseProcessor::QueryInterface(MouseProcessor *this, const struct _GUID *a2, MouseProcessor **a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v5; // rcx
  MouseProcessor *v6; // rdx

  v3 = 0;
  if ( !a3 )
    return (unsigned int)-2147467261;
  *a3 = 0LL;
  if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_00000000_0000_0000_c000_000000000046 )
  {
    v5 = (unsigned __int64)this + 24;
  }
  else
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data4 )
    {
      v6 = this;
      goto LABEL_12;
    }
    if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_9cc90918_33c0_4e97_85b4_faf84befe1a8.Data1
      || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_9cc90918_33c0_4e97_85b4_faf84befe1a8.Data4 )
    {
      return (unsigned int)-2147467262;
    }
    v5 = (unsigned __int64)this + 8;
  }
  v6 = (MouseProcessor *)(v5 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
LABEL_12:
  *a3 = v6;
  if ( v6 )
    (*(void (__fastcall **)(MouseProcessor *))(*(_QWORD *)this + 8LL))(this);
  return v3;
}
