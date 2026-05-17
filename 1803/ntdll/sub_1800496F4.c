/*
 * XREFs of sub_1800496F4 @ 0x1800496F4
 * Callers:
 *     RtlRegisterForWnfMetaNotification @ 0x180049650 (RtlRegisterForWnfMetaNotification.c)
 *     RtlSubscribeWnfStateChangeNotification @ 0x1800496B0 (RtlSubscribeWnfStateChangeNotification.c)
 *     sub_1800F7614 @ 0x1800F7614 (sub_1800F7614.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlRunOnceExecuteOnce @ 0x1800297E0 (RtlRunOnceExecuteOnce.c)
 *     sub_18004983C @ 0x18004983C (sub_18004983C.c)
 *     sub_180049998 @ 0x180049998 (sub_180049998.c)
 *     sub_180049B18 @ 0x180049B18 (sub_180049B18.c)
 *     sub_180049C00 @ 0x180049C00 (sub_180049C00.c)
 *     sub_180049E24 @ 0x180049E24 (sub_180049E24.c)
 *     sub_18004AD34 @ 0x18004AD34 (sub_18004AD34.c)
 */

__int64 __fastcall sub_1800496F4(
        _QWORD *a1,
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
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  _BYTE v18[8]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-30h] BYREF
  __int64 v20; // [rsp+50h] [rbp-28h] BYREF

  v19 = 0LL;
  v9 = 0LL;
  if ( byte_18015C3A8 )
  {
    return (unsigned int)-1073741558;
  }
  else
  {
    v14 = RtlRunOnceExecuteOnce(
            &qword_18015D268,
            (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))sub_1800569F0,
            0LL,
            0LL);
    if ( v14 >= 0 )
    {
      if ( !a7 || (v9 = sub_180049C00()) != 0 )
      {
        v14 = sub_180049B18((unsigned int)&v19, a3, a4, a5, v9, a8, a9);
        if ( v14 < 0 || (v9 = 0LL, v14 = sub_180049998(&v20, a2, a6), v14 < 0) )
        {
          v16 = v19;
        }
        else
        {
          v15 = v19;
          *a1 = v19;
          v14 = sub_18004983C(v20, v15);
          if ( v14 < 0 )
          {
            *a1 = 0LL;
            sub_180049E24(*(_QWORD *)(v15 + 24), v15, v18);
          }
          v16 = 0LL;
          v19 = 0LL;
        }
        if ( v16 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v19);
        if ( v9 )
          sub_18004AD34(v9);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)v14;
}
