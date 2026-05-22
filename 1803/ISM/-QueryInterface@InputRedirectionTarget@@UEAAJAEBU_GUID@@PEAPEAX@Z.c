/*
 * XREFs of ?QueryInterface@InputRedirectionTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B5AA0
 * Callers:
 *     ?QueryInterface@InputRedirectionTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B5CE0 (-QueryInterface@InputRedirectionTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputRedirectionTarget::QueryInterface(
        InputRedirectionTarget *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_71951a11_6ad9_47fc_ac52_d90bf1e97b13.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_71951a11_6ad9_47fc_ac52_d90bf1e97b13.Data4 )
    {
      (*(void (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)this + 8LL))(this);
      *a3 = this;
    }
    else if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
           && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      (*(void (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)this + 8LL))(this);
      *a3 = (char *)this + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
