/*
 * XREFs of AcpiArblibCommitResources @ 0x1C009F84C
 * Callers:
 *     ACPIBusIrpStartDevice @ 0x1C0096B50 (ACPIBusIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiArblibCommitResources(__int64 a1, __int64 a2)
{
  int v3; // r15d
  int v5; // ebp
  unsigned __int8 *v6; // rsi
  unsigned __int64 v7; // r14
  int v8; // eax
  unsigned __int8 *i; // rax
  NTSTATUS v10; // edi
  struct _RTL_RANGE_LIST RangeList; // [rsp+40h] [rbp-48h] BYREF
  __int64 v13; // [rsp+90h] [rbp+8h] BYREF
  ULONGLONG Start; // [rsp+98h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(a1 + 168);
  if ( *(_BYTE *)(a1 + 129) )
  {
    RtlFreeRangeList(*(PRTL_RANGE_LIST *)(a1 + 176));
    *(_BYTE *)(a1 + 131) = 0;
    *(_BYTE *)(a1 + 129) = 0;
  }
  v5 = 0;
  RtlInitializeRangeList(&RangeList);
  if ( a2 )
  {
    v6 = (unsigned __int8 *)(a2 + 20);
    v7 = a2 + 20 + 20LL * *(unsigned int *)(a2 + 16);
    while ( (unsigned __int64)v6 < v7 )
    {
      v8 = *v6;
      if ( v8 == v3 || (_BYTE)v8 == 7 && v3 == 3 )
      {
        for ( i = v6 + 20; (unsigned __int64)i < v7 && *i == 0x81; i += 20 )
        {
          if ( *((_WORD *)i + 1) == 1 )
          {
            v10 = (*(__int64 (__fastcall **)(unsigned __int8 *, ULONGLONG *, __int64 *))(a1 + 272))(v6, &Start, &v13);
            if ( v10 < 0 )
              goto LABEL_23;
            if ( v13 )
            {
              v10 = RtlAddRange(&RangeList, Start, Start + v13 - 1, 0, 3u, 0LL, 0LL);
              if ( v10 < 0 )
                goto LABEL_23;
              ++v5;
            }
            break;
          }
        }
      }
      v6 += 20;
    }
  }
  v10 = RtlInvertRangeList(*(PRTL_RANGE_LIST *)(a1 + 176), &RangeList);
  if ( v10 >= 0 )
  {
    *(_BYTE *)(a1 + 129) = 1;
    if ( !v5 )
      *(_BYTE *)(a1 + 131) = 1;
  }
LABEL_23:
  RtlFreeRangeList(&RangeList);
  return (unsigned int)v10;
}
