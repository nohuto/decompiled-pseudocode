/*
 * XREFs of ?QueryInterface@EdgyProcessorTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B3AD0
 * Callers:
 *     ?QueryInterface@EdgyProcessorTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B45C0 (-QueryInterface@EdgyProcessorTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@EdgyProcessorTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B45E0 (-QueryInterface@EdgyProcessorTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgyProcessorTarget::QueryInterface(EdgyProcessorTarget *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      (*(void (__fastcall **)(EdgyProcessorTarget *))(*(_QWORD *)this + 8LL))(this);
      *a3 = (char *)this + 16;
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
