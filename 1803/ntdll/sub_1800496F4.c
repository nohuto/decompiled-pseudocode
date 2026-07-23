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

__int64 __fastcall sub_1800496F4(PVOID *a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, int a7, int a8, int a9)
{
  __int64 v9; // rsi
  NTSTATUS v14; // edi
  PVOID *v15; // rbx
  PVOID v16; // rax
  PVOID BaseAddress; // [rsp+48h] [rbp-30h] BYREF
  __int64 v19; // [rsp+50h] [rbp-28h] BYREF

  BaseAddress = 0LL;
  v9 = 0LL;
  if ( byte_18015C3A8 )
  {
    return (unsigned int)-1073741558;
  }
  else
  {
    v14 = RtlRunOnceExecuteOnce(&stru_18015D268, sub_1800569F0, 0LL, 0LL);
    if ( v14 >= 0 )
    {
      if ( !a7 || (v9 = sub_180049C00()) != 0 )
      {
        v14 = sub_180049B18((unsigned int)&BaseAddress, a3, a4, a5, v9, a8, a9);
        if ( v14 < 0 || (v9 = 0LL, v14 = sub_180049998(&v19, a2, a6), v14 < 0) )
        {
          v16 = BaseAddress;
        }
        else
        {
          v15 = (PVOID *)BaseAddress;
          *a1 = BaseAddress;
          v14 = sub_18004983C(v19, v15);
          if ( v14 < 0 )
          {
            *a1 = 0LL;
            sub_180049E24(v15[3], v15);
          }
          v16 = 0LL;
          BaseAddress = 0LL;
        }
        if ( v16 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
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
