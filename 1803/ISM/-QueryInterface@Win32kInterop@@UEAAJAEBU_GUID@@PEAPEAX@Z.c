/*
 * XREFs of ?QueryInterface@Win32kInterop@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180013AA0
 * Callers:
 *     ?QueryInterface@Win32kInterop@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180016E80 (-QueryInterface@Win32kInterop@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@Win32kInterop@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180016EA0 (-QueryInterface@Win32kInterop@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@Win32kInterop@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180016EB0 (-QueryInterface@Win32kInterop@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32kInterop::QueryInterface(Win32kInterop *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // edi
  char *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_926e5c0a_e098_4251_b8a0_a0fe0969e75f )
  {
    (*(void (__fastcall **)(Win32kInterop *))(*(_QWORD *)this + 8LL))(this);
    v6 = (char *)this + 8;
  }
  else
  {
    if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
      || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      return (unsigned int)-2147467262;
    }
    (*(void (__fastcall **)(Win32kInterop *))(*(_QWORD *)this + 8LL))(this);
    v6 = (char *)this + 24;
  }
  *a3 = v6;
  return v3;
}
