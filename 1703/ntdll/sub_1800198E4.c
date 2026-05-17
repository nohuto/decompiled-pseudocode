/*
 * XREFs of sub_1800198E4 @ 0x1800198E4
 * Callers:
 *     RtlSubscribeWnfStateChangeNotification @ 0x1800198A0 (RtlSubscribeWnfStateChangeNotification.c)
 *     RtlRegisterForWnfMetaNotification @ 0x180087280 (RtlRegisterForWnfMetaNotification.c)
 * Callees:
 *     sub_18000FFDC @ 0x18000FFDC (sub_18000FFDC.c)
 *     sub_180019A2C @ 0x180019A2C (sub_180019A2C.c)
 *     sub_180019B90 @ 0x180019B90 (sub_180019B90.c)
 *     sub_180019D38 @ 0x180019D38 (sub_180019D38.c)
 *     RtlRunOnceExecuteOnce @ 0x18001B510 (RtlRunOnceExecuteOnce.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_1800755BC @ 0x1800755BC (sub_1800755BC.c)
 *     sub_180086AA0 @ 0x180086AA0 (sub_180086AA0.c)
 */

__int64 __fastcall sub_1800198E4(
        __int64 *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  __int64 v9; // rsi
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rax
  int v21; // [rsp+40h] [rbp-38h] BYREF
  __int64 v22; // [rsp+48h] [rbp-30h] BYREF
  __int64 v23; // [rsp+50h] [rbp-28h] BYREF

  v22 = 0LL;
  v9 = 0LL;
  if ( byte_18015B388 )
  {
    return (unsigned int)-1073741558;
  }
  else
  {
    v14 = RtlRunOnceExecuteOnce(&unk_18015C228, sub_180082ED0, 0LL, 0LL);
    if ( v14 >= 0 )
    {
      if ( !a7 || (v9 = sub_1800755BC()) != 0 )
      {
        v14 = sub_180019D38((unsigned int)&v22, a3, a4, a5, v9, a8, a9);
        if ( v14 < 0 || (v9 = 0LL, v14 = sub_180019B90(&v23, a2, a6), v14 < 0) )
        {
          v19 = v22;
        }
        else
        {
          v18 = v22;
          *a1 = v22;
          v14 = sub_180019A2C(v23, v18);
          if ( v14 < 0 )
          {
            *a1 = 0LL;
            sub_18000FFDC(*(_QWORD *)(v18 + 24), v18, &v21);
          }
          v19 = 0LL;
          v22 = 0LL;
        }
        if ( v19 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
        if ( v9 )
          sub_180086AA0(v9, v15, v16, v17);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)v14;
}
