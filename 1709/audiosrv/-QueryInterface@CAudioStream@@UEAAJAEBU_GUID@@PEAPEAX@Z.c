/*
 * XREFs of ?QueryInterface@CAudioStream@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001C950
 * Callers:
 *     ?QueryInterface@CAudioStream@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036E50 (-QueryInterface@CAudioStream@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioStream@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036E60 (-QueryInterface@CAudioStream@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::QueryInterface(CAudioStream *this, const struct _GUID *a2, char **a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  char *v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax

  if ( !a3 )
    return 2147500035LL;
  v5 = *(_QWORD *)&GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data1 - *(_QWORD *)&a2->Data1;
  if ( *(_QWORD *)&GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data1 == *(_QWORD *)&a2->Data1 )
    v5 = *(_QWORD *)GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data4 - *(_QWORD *)a2->Data4;
  if ( v5 )
  {
    v6 = *(_QWORD *)&GUID_61109534_0908_443e_8fc9_d09276dc6f1d.Data1 - *(_QWORD *)&a2->Data1;
    if ( *(_QWORD *)&GUID_61109534_0908_443e_8fc9_d09276dc6f1d.Data1 == *(_QWORD *)&a2->Data1 )
      v6 = *(_QWORD *)GUID_61109534_0908_443e_8fc9_d09276dc6f1d.Data4 - *(_QWORD *)a2->Data4;
    if ( v6 )
    {
      v7 = (char *)this + 16;
      v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
        v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
      if ( v8 )
      {
        *a3 = 0LL;
        return 2147500034LL;
      }
      else
      {
        *a3 = v7;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))(v7);
        return 0LL;
      }
    }
    else
    {
      (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 8LL))(this);
      *a3 = (char *)this + 8;
      return 0LL;
    }
  }
  else
  {
    (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 8LL))(this);
    result = 0LL;
    *a3 = (char *)this;
  }
  return result;
}
