/*
 * XREFs of IrqArbUpdateInterruptProperties @ 0x1C00A8744
 * Callers:
 *     AcpiUpdateInterruptProperties @ 0x1C00A1AC0 (AcpiUpdateInterruptProperties.c)
 * Callees:
 *     memset @ 0x1C002C4C0 (memset.c)
 *     IrqArbGsivFromIrq @ 0x1C00893E8 (IrqArbGsivFromIrq.c)
 *     IrqArbpSetDeviceProperties @ 0x1C0089908 (IrqArbpSetDeviceProperties.c)
 */

__int64 __fastcall IrqArbUpdateInterruptProperties(int a1, int a2, int a3)
{
  PVOID v6; // rdi
  PRTL_RANGE v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r9
  struct _RTL_RANGE *v10; // rbx
  PRTL_RANGE v11; // rax
  __int128 v13; // [rsp+20h] [rbp-50h] BYREF
  __int128 v14; // [rsp+30h] [rbp-40h]
  __int128 v15; // [rsp+40h] [rbp-30h]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+50h] [rbp-20h] BYREF
  PRTL_RANGE Range; // [rsp+A8h] [rbp+38h] BYREF

  v6 = 0LL;
  RtlGetFirstRange(RangeList, &Iterator, &Range);
  v7 = Range;
  if ( !Range )
    return 3221226021LL;
  do
  {
    if ( (unsigned int)IrqArbGsivFromIrq(LODWORD(v7->Start)) == a1 )
    {
      v6 = *(PVOID *)(v9 + 24);
      *(_DWORD *)(v8 + 48) = a2;
      *(_DWORD *)(v8 + 44) = a3;
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
    v7 = Range;
  }
  while ( Range );
  if ( !v6 )
    return 3221226021LL;
  v10 = 0LL;
  memset(&v13, 0, (unsigned int)((_DWORD)Range + 32));
  RtlGetFirstRange(RangeList, &Iterator, &Range);
  v11 = Range;
  if ( !Range )
    return 3221226021LL;
  v15 = v14;
  do
  {
    if ( v11->Owner == v6 )
    {
      if ( !v10 )
      {
        v10 = v11;
        v13 = *(_OWORD *)&Iterator.RangeListHead;
        v15 = *(_OWORD *)&Iterator.Current;
      }
      *((_DWORD *)v11->UserData + 1) |= 1u;
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
    v11 = Range;
  }
  while ( Range );
  if ( !v10 )
    return 3221226021LL;
  v14 = v15;
  return IrqArbpSetDeviceProperties(v10, &v13);
}
