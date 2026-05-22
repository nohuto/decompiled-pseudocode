/*
 * XREFs of ?QueryInterface@Win32kInterop@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000F1E0
 * Callers:
 *     ?QueryInterface@Win32kInterop@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180012530 (-QueryInterface@Win32kInterop@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@Win32kInterop@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180012560 (-QueryInterface@Win32kInterop@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@Win32kInterop@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800125A0 (-QueryInterface@Win32kInterop@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@Win32kInterop@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800125D0 (-QueryInterface@Win32kInterop@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
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
    v6 = (char *)this + 16;
LABEL_6:
    *a3 = v6;
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    (*(void (__fastcall **)(Win32kInterop *))(*(_QWORD *)this + 8LL))(this);
    v6 = (char *)this + 32;
    goto LABEL_6;
  }
  v3 = -2147467262;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 328, 2);
  return v3;
}
