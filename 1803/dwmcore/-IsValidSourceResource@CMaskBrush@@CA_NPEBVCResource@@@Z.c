/*
 * XREFs of ?IsValidSourceResource@CMaskBrush@@CA_NPEBVCResource@@@Z @ 0x1800C2ED8
 * Callers:
 *     ?ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETSOURCE@@@Z @ 0x180099324 (-ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETSOURCE@@@Z.c)
 * Callees:
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009AE80 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CMaskBrush::IsValidSourceResource(const struct CResource *a1)
{
  bool (__fastcall *v2)(__int64, unsigned int); // rax
  bool v3; // al
  char v4; // bl

  v2 = *(bool (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 48LL);
  if ( v2 == CColorBrush::IsOfType )
    v3 = CColorBrush::IsOfType((__int64)a1, 0x12u);
  else
    v3 = v2((__int64)a1, 18u);
  v4 = 0;
  if ( v3
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 48LL))(a1, 139LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 48LL))(a1, 64LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 48LL))(a1, 51LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 48LL))(a1, 100LL) )
  {
    return 1;
  }
  return v4;
}
