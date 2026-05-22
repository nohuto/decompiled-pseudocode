/*
 * XREFs of ?QueryInterface@InputStateManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180006350
 * Callers:
 *     ?QueryInterface@InputStateManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800076D0 (-QueryInterface@InputStateManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@InputStateManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180007730 (-QueryInterface@InputStateManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@InputStateManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180007770 (-QueryInterface@InputStateManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputStateManager::QueryInterface(InputStateManager *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  char v6; // al
  int v7; // r9d
  char *v8; // rax

  v3 = 0;
  if ( !a3 )
  {
    v6 = 87;
    v3 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 215;
LABEL_13:
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 1, v7, v6);
      return v3;
    }
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    (*(void (__fastcall **)(InputStateManager *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 24;
LABEL_10:
    *a3 = v8;
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data4 )
  {
    (*(void (__fastcall **)(InputStateManager *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 16;
    goto LABEL_10;
  }
  v6 = 2;
  v3 = -2147467262;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 232;
    goto LABEL_13;
  }
  return v3;
}
