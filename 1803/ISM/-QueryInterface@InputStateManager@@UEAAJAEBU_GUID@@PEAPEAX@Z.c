/*
 * XREFs of ?QueryInterface@InputStateManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180006650
 * Callers:
 *     ?QueryInterface@InputStateManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800075C0 (-QueryInterface@InputStateManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@InputStateManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180007620 (-QueryInterface@InputStateManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@InputStateManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180007660 (-QueryInterface@InputStateManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputStateManager::QueryInterface(InputStateManager *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  char *v6; // rax

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      (*(void (__fastcall **)(InputStateManager *))(*(_QWORD *)this + 8LL))(this);
      v6 = (char *)this + 24;
    }
    else
    {
      if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data1
        || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data4 )
      {
        return (unsigned int)-2147467262;
      }
      (*(void (__fastcall **)(InputStateManager *))(*(_QWORD *)this + 8LL))(this);
      v6 = (char *)this + 16;
    }
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
