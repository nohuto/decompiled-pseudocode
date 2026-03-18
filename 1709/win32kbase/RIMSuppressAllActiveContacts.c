/*
 * XREFs of RIMSuppressAllActiveContacts @ 0x1C00AA4DC
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x1C000CB48 (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     RIMAbandonPointerDeviceFrame @ 0x1C00188F0 (RIMAbandonPointerDeviceFrame.c)
 *     ListTableIteratorNext @ 0x1C008C710 (ListTableIteratorNext.c)
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1C00941B0 (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0104AB4 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C010D1BC (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C010D6D4 (RIMStartPointerDeviceFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C010F7F8 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C0115660 (RIMCmAddContactSuppressionReasons.c)
 */

char __fastcall RIMSuppressAllActiveContacts(__int64 a1, __int64 a2)
{
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v5; // rsi
  LARGE_INTEGER v6; // rbx
  __int64 v7; // r12
  int v8; // r13d
  __int64 v9; // rax
  int v10; // r15d
  __int64 **v11; // rax
  __int128 v12; // xmm0
  __int64 *v13; // xmm1_8
  __int64 v14; // rax
  char result; // al
  int v16; // r14d
  __int64 **v17; // rax
  __int128 v18; // xmm0
  __int64 *v19; // xmm1_8
  __int64 v20; // rax
  __int128 v21; // [rsp+30h] [rbp-50h] BYREF
  __int64 v22; // [rsp+40h] [rbp-40h]
  __int128 v23; // [rsp+48h] [rbp-38h] BYREF
  __int64 *v24; // [rsp+58h] [rbp-28h]
  __int128 v25; // [rsp+60h] [rbp-20h] BYREF
  __int64 v26; // [rsp+70h] [rbp-10h]
  int v28; // [rsp+D0h] [rbp+50h]
  __int64 v29; // [rsp+D8h] [rbp+58h]

  v29 = *(_QWORD *)(a2 + 776) + 1LL;
  v28 = *(_DWORD *)(a2 + 748) + 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v5 = *(_QWORD *)(a2 + 16);
  v6 = PerformanceCounter;
  RIMAbandonPointerDeviceFrame(a1, v5);
  v7 = a2 + 896;
  v8 = 0;
  v9 = *(_QWORD *)(a2 + 896);
  DWORD2(v25) = 0;
  v26 = v9;
  v10 = 0;
  *(_QWORD *)&v25 = a2 + 896;
  v11 = ListTableIteratorNext((__int64 **)&v21, (__int64)&v25);
  v12 = *(_OWORD *)v11;
  v13 = v11[2];
  DWORD2(v21) = *(_DWORD *)(a2 + 904);
  v14 = *(_QWORD *)(a2 + 896) + 16LL * DWORD2(v21);
  v23 = v12;
  v22 = v14;
  v24 = v13;
  *(_QWORD *)&v21 = a2 + 896;
  v26 = v14;
  v25 = v21;
  result = tagLIST_TABLE_ITERATOR::operator!=((__int64)&v23, (__int64)&v25);
  if ( result )
  {
    do
    {
      v16 = (int)v24;
      if ( (*((_DWORD *)v24 + 651) & 2) != 0 )
      {
        RIMCmAddContactSuppressionReasons(a2, v24 - 2, 512LL);
        if ( !v8 )
        {
          v8 = 1;
          v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                  a1,
                  v5,
                  (LARGE_INTEGER)v6.QuadPart);
        }
        if ( v10 )
          RIMInsertSimulatedContactEndStateInFrame(a1, v5, v16 - 16, v29, v28, 1);
      }
      v17 = ListTableIteratorNext((__int64 **)&v21, (__int64)&v23);
      v18 = *(_OWORD *)v17;
      v19 = v17[2];
      DWORD2(v21) = *(_DWORD *)(v7 + 8);
      v20 = *(_QWORD *)v7 + 16LL * DWORD2(v21);
      v23 = v18;
      v22 = v20;
      v24 = v19;
      *(_QWORD *)&v21 = v7;
      v26 = v20;
      v25 = v21;
      result = tagLIST_TABLE_ITERATOR::operator!=((__int64)&v23, (__int64)&v25);
    }
    while ( result );
    if ( v10 )
    {
      RIMAbArbitratePointerDeviceFrame(a1, v5);
      return RIMCompletePointerDeviceFrame(a1, v5);
    }
  }
  return result;
}
