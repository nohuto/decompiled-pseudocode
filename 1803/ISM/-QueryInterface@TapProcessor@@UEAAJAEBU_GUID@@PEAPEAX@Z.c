/*
 * XREFs of ?QueryInterface@TapProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B6440
 * Callers:
 *     ?QueryInterface@TapProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B6710 (-QueryInterface@TapProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@TapProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B6720 (-QueryInterface@TapProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@TapProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B6730 (-QueryInterface@TapProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TapProcessor::QueryInterface(TapProcessor *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data4 )
    {
      (*(void (__fastcall **)(TapProcessor *))(*(_QWORD *)this + 8LL))(this);
      *a3 = this;
    }
    else if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
           && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      (*(void (__fastcall **)(TapProcessor *))(*(_QWORD *)this + 8LL))(this);
      *a3 = (char *)this + 24;
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
