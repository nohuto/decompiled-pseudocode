/*
 * XREFs of ?QueryInterface@MagnifierComponent@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A5800
 * Callers:
 *     ?QueryInterface@MagnifierComponent@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A6000 (-QueryInterface@MagnifierComponent@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MagnifierComponent::QueryInterface(MagnifierComponent *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  char v6; // al
  int v7; // r9d

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e187cae3_0bed_435a_a136_e7f29a05243f.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_e187cae3_0bed_435a_a136_e7f29a05243f.Data4 )
    {
      (*(void (__fastcall **)(MagnifierComponent *))(*(_QWORD *)this + 8LL))(this);
      *a3 = this;
    }
    else if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
           && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      (*(void (__fastcall **)(MagnifierComponent *))(*(_QWORD *)this + 8LL))(this);
      *a3 = (char *)this + 8;
    }
    else
    {
      v6 = 2;
      v3 = -2147467262;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v7 = 137;
        goto LABEL_12;
      }
    }
  }
  else
  {
    v6 = 87;
    v3 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 120;
LABEL_12:
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v7, v6);
    }
  }
  return v3;
}
