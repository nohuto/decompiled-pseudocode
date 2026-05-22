/*
 * XREFs of ?QueryInterface@InputRedirectionComponent@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A7050
 * Callers:
 *     ?QueryInterface@InputRedirectionComponent@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A79D0 (-QueryInterface@InputRedirectionComponent@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@InputRedirectionComponent@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A79E0 (-QueryInterface@InputRedirectionComponent@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@InputRedirectionComponent@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A79F0 (-QueryInterface@InputRedirectionComponent@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputRedirectionComponent::QueryInterface(
        InputRedirectionComponent *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // edi
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
      v7 = 124;
LABEL_19:
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v7, v6);
      return v3;
    }
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e187cae3_0bed_435a_a136_e7f29a05243f.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_e187cae3_0bed_435a_a136_e7f29a05243f.Data4 )
  {
    (*(void (__fastcall **)(InputRedirectionComponent *))(*(_QWORD *)this + 8LL))(this);
    *a3 = this;
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_548c27d0_a710_4ec7_92d1_67a7dee54efb.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_548c27d0_a710_4ec7_92d1_67a7dee54efb.Data4 )
  {
    (*(void (__fastcall **)(InputRedirectionComponent *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 8;
LABEL_16:
    *a3 = v8;
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data4 )
  {
    (*(void (__fastcall **)(InputRedirectionComponent *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 16;
    goto LABEL_16;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    (*(void (__fastcall **)(InputRedirectionComponent *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 24;
    goto LABEL_16;
  }
  v6 = 2;
  v3 = -2147467262;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 153;
    goto LABEL_19;
  }
  return v3;
}
