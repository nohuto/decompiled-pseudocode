/*
 * XREFs of ?QueryInterface@GazeProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180043490
 * Callers:
 *     ?QueryInterface@GazeProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180043870 (-QueryInterface@GazeProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@GazeProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180043880 (-QueryInterface@GazeProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GazeProcessor::QueryInterface(GazeProcessor *this, const struct _GUID *a2, void **a3)
{
  if ( !a3 )
    return 2147942487LL;
  if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    return 2147500034LL;
  }
  (*(void (__fastcall **)(GazeProcessor *))(*(_QWORD *)this + 8LL))(this);
  *a3 = (char *)this + 16;
  return 0LL;
}
