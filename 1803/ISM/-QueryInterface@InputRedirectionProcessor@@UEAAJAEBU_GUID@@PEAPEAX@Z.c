/*
 * XREFs of ?QueryInterface@InputRedirectionProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B4FE0
 * Callers:
 *     ?QueryInterface@InputRedirectionProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B5870 (-QueryInterface@InputRedirectionProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@InputRedirectionProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B5880 (-QueryInterface@InputRedirectionProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@InputRedirectionProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B5890 (-QueryInterface@InputRedirectionProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputRedirectionProcessor::QueryInterface(
        InputRedirectionProcessor *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  char *v6; // rax

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data4 )
    {
      (*(void (__fastcall **)(InputRedirectionProcessor *))(*(_QWORD *)this + 8LL))(this);
      *a3 = this;
    }
    else
    {
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_548c27d0_a710_4ec7_92d1_67a7dee54efb.Data1
        && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_548c27d0_a710_4ec7_92d1_67a7dee54efb.Data4 )
      {
        (*(void (__fastcall **)(InputRedirectionProcessor *))(*(_QWORD *)this + 8LL))(this);
        v6 = (char *)this + 8;
      }
      else if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data1
             && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data4 )
      {
        (*(void (__fastcall **)(InputRedirectionProcessor *))(*(_QWORD *)this + 8LL))(this);
        v6 = (char *)this + 16;
      }
      else
      {
        if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
          || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
        {
          return (unsigned int)-2147467262;
        }
        (*(void (__fastcall **)(InputRedirectionProcessor *))(*(_QWORD *)this + 8LL))(this);
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
