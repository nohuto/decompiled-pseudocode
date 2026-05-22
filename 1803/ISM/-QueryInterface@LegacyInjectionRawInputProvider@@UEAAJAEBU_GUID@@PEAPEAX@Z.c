/*
 * XREFs of ?QueryInterface@LegacyInjectionRawInputProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006B680
 * Callers:
 *     ?QueryInterface@LegacyInjectionRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006BF10 (-QueryInterface@LegacyInjectionRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@LegacyInjectionRawInputProvider@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006BF20 (-QueryInterface@LegacyInjectionRawInputProvider@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@LegacyInjectionRawInputProvider@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006BF30 (-QueryInterface@LegacyInjectionRawInputProvider@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LegacyInjectionRawInputProvider::QueryInterface(
        LegacyInjectionRawInputProvider *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  char *v6; // rax

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9978c53c_56b6_4c55_ba5f_5495e889e2fe.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_9978c53c_56b6_4c55_ba5f_5495e889e2fe.Data4 )
    {
      (*(void (__fastcall **)(LegacyInjectionRawInputProvider *))(*(_QWORD *)this + 8LL))(this);
      *a3 = this;
    }
    else
    {
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data1
        && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data4 )
      {
        (*(void (__fastcall **)(LegacyInjectionRawInputProvider *))(*(_QWORD *)this + 8LL))(this);
        v6 = (char *)this + 8;
      }
      else
      {
        if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
          || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
        {
          return (unsigned int)-2147467262;
        }
        (*(void (__fastcall **)(LegacyInjectionRawInputProvider *))(*(_QWORD *)this + 8LL))(this);
        v6 = (char *)this + 24;
      }
      *a3 = v6;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
