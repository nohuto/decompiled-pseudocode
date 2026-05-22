/*
 * XREFs of ?QueryInterface@ControllerProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180032E00
 * Callers:
 *     ?QueryInterface@ControllerProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036860 (-QueryInterface@ControllerProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ControllerProcessor@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036870 (-QueryInterface@ControllerProcessor@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::QueryInterface(ControllerProcessor *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  char *v6; // rax

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      (*(void (__fastcall **)(ControllerProcessor *))(*(_QWORD *)this + 8LL))(this);
      v6 = (char *)this + 8;
    }
    else
    {
      if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data1
        || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data4 )
      {
        return (unsigned int)-2147467262;
      }
      (*(void (__fastcall **)(ControllerProcessor *))(*(_QWORD *)this + 8LL))(this);
      v6 = (char *)this + 40;
    }
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
