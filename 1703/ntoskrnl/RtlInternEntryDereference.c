/*
 * XREFs of RtlInternEntryDereference @ 0x1406EF188
 * Callers:
 *     PoEnergyContextCleanup @ 0x140498B70 (PoEnergyContextCleanup.c)
 *     PopEtAggregateKeyCleanup @ 0x1406D0BBC (PopEtAggregateKeyCleanup.c)
 *     PopEtAppIdDereference @ 0x1406D0D30 (PopEtAppIdDereference.c)
 *     PopEtEnergyContextSetState @ 0x1406D0FDC (PopEtEnergyContextSetState.c)
 *     PopEtStringSet @ 0x1406D3460 (PopEtStringSet.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlInternEntryDereference(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v5; // rdx
  __int64 v6; // [rsp+58h] [rbp+10h]

  result = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 16));
  if ( result <= 0 )
  {
    if ( result )
      __fastfail(0xEu);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 16) + 16LL))(a1, 0LL);
    v6 = *(_QWORD *)(a2 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    v5 = (_QWORD *)(*(_QWORD *)(a1 + 8)
                  + 8LL
                  * ((37
                    * (BYTE6(v6)
                     + 37
                     * (BYTE5(v6)
                      + 37
                      * (BYTE4(v6)
                       + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))))
                    + HIBYTE(v6)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1)));
    if ( (*(_QWORD *)a2 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v5 = (_QWORD *)(*(_QWORD *)(a1 + 8)
                    + 8LL
                    * ((37
                      * (BYTE6(v6)
                       + 37
                       * (BYTE5(v6)
                        + 37
                        * (BYTE4(v6)
                         + 37
                         * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))))
                      + HIBYTE(v6)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1)));
    while ( (*v5 & 1) == 0 )
    {
      if ( *v5 == a2 )
      {
        *v5 = *(_QWORD *)a2;
        --*(_DWORD *)a1;
        *(_QWORD *)a2 |= 0x8000000000000002uLL;
        break;
      }
      v5 = (_QWORD *)*v5;
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 16) + 24LL))(a1, 0LL);
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 16) + 8LL))(a1, a2);
  }
  return result;
}
