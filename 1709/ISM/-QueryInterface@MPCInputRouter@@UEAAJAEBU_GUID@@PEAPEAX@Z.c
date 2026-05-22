/*
 * XREFs of ?QueryInterface@MPCInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8DD0
 * Callers:
 *     ?QueryInterface@MPCInputRouter@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AAED0 (-QueryInterface@MPCInputRouter@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AAEE0 (-QueryInterface@MPCInputRouter@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WCNA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AAF00 (-QueryInterface@MPCInputRouter@@WCNA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AAF20 (-QueryInterface@MPCInputRouter@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AAF30 (-QueryInterface@MPCInputRouter@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WCNI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AAF40 (-QueryInterface@MPCInputRouter@@WCNI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AAF50 (-QueryInterface@MPCInputRouter@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AAF60 (-QueryInterface@MPCInputRouter@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AAF80 (-QueryInterface@MPCInputRouter@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCInputRouter@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AAF90 (-QueryInterface@MPCInputRouter@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?QueryInterface@DWMInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180018CB0 (-QueryInterface@DWMInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCInputRouter::QueryInterface(MPCInputRouter *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !a3 )
    return 2147942487LL;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_1c93908d_d1c5_4ac5_9269_0398fe8ab53e.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_1c93908d_d1c5_4ac5_9269_0398fe8ab53e.Data4 )
  {
    (*(void (__fastcall **)(MPCInputRouter *))(*(_QWORD *)this + 8LL))(this);
    *a3 = (char *)this + 720;
  }
  else
  {
    return (unsigned int)DWMInputRouter::QueryInterface(this, a2, a3);
  }
  return v3;
}
