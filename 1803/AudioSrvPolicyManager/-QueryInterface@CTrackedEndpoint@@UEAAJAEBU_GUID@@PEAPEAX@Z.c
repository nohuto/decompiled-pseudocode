/*
 * XREFs of ?QueryInterface@CTrackedEndpoint@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002C900
 * Callers:
 *     ?QueryInterface@CTrackedEndpoint@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002D440 (-QueryInterface@CTrackedEndpoint@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CTrackedEndpoint@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002D460 (-QueryInterface@CTrackedEndpoint@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTrackedEndpoint::QueryInterface(CTrackedEndpoint *this, const struct _GUID *a2, char **a3)
{
  unsigned int v3; // ebx
  char *v7; // rcx

  v3 = 0;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  if ( *(_OWORD *)a2 == *(_OWORD *)&IID_IUnknown
    || *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_657804fa_d6ad_4496_8a60_352752af4f89.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_657804fa_d6ad_4496_8a60_352752af4f89.Data4 )
  {
    (*(void (__fastcall **)(CTrackedEndpoint *))(*(_QWORD *)this + 8LL))(this);
    *a3 = (char *)this;
    return 0LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ed9b7e8f_90bc_4064_912f_d749da4a1de5.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_ed9b7e8f_90bc_4064_912f_d749da4a1de5.Data4 )
  {
    (*(void (__fastcall **)(CTrackedEndpoint *))(*(_QWORD *)this + 8LL))(this);
    *a3 = (char *)this + 8;
    return 0LL;
  }
  v7 = (char *)this + 16;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    *a3 = v7;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    *a3 = 0LL;
    return (unsigned int)-2147467262;
  }
  return v3;
}
