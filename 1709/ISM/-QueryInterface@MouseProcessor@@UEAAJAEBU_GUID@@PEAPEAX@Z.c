/*
 * XREFs of ?QueryInterface@MouseProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006B920
 * Callers:
 *     ?QueryInterface@MouseProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006CE00 (-QueryInterface@MouseProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MouseProcessor@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006CE20 (-QueryInterface@MouseProcessor@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MouseProcessor@@WMI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006CE30 (-QueryInterface@MouseProcessor@@WMI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MouseProcessor@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006CE70 (-QueryInterface@MouseProcessor@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MouseProcessor@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006CEA0 (-QueryInterface@MouseProcessor@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MouseProcessor@@WMA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006CEE0 (-QueryInterface@MouseProcessor@@WMA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MouseProcessor::QueryInterface(MouseProcessor *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  char v5; // al
  int v6; // r9d
  unsigned __int64 v7; // rdx
  void *v8; // rcx

  v3 = 0;
  if ( !a3 )
  {
    v5 = 3;
    v3 = -2147467261;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 74;
LABEL_22:
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v6, v5);
      return v3;
    }
    return v3;
  }
  *a3 = 0LL;
  if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_00000000_0000_0000_c000_000000000046 )
  {
    v7 = (unsigned __int64)this + 8;
    goto LABEL_18;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data4 )
  {
    v7 = (unsigned __int64)this + 168;
    goto LABEL_18;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9cc90918_33c0_4e97_85b4_faf84befe1a8.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_9cc90918_33c0_4e97_85b4_faf84befe1a8.Data4 )
  {
    v7 = (unsigned __int64)this + 176;
    goto LABEL_18;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_10ab2921_3041_4a95_a1fd_33dc19a24aab.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_10ab2921_3041_4a95_a1fd_33dc19a24aab.Data4 )
  {
    v7 = (unsigned __int64)this + 184;
    goto LABEL_18;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_925481d1_82a9_4761_95ea_d779b9de7e6b.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_925481d1_82a9_4761_95ea_d779b9de7e6b.Data4 )
  {
    v7 = (unsigned __int64)this + 192;
LABEL_18:
    v8 = (void *)(v7 & -(__int64)(this != 0LL));
    *a3 = v8;
    if ( v8 )
      (*(void (__fastcall **)(MouseProcessor *))(*(_QWORD *)this + 8LL))(this);
    return v3;
  }
  v5 = 2;
  v3 = -2147467262;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v6 = 100;
    goto LABEL_22;
  }
  return v3;
}
