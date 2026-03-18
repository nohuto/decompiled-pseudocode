/*
 * XREFs of Bulk_ProcessStreamOnEndpointStopOrHalt @ 0x1C002CA38
 * Callers:
 *     Bulk_EP_EndpointHalted @ 0x1C002B9E0 (Bulk_EP_EndpointHalted.c)
 *     Bulk_EP_FSEReceived @ 0x1C002BA40 (Bulk_EP_FSEReceived.c)
 * Callees:
 *     memmove @ 0x1C0002A00 (memmove.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C000DF64 (WPP_RECORDER_SF_dddd.c)
 *     Bulk_FindStage @ 0x1C002BE60 (Bulk_FindStage.c)
 */

__int64 __fastcall Bulk_ProcessStreamOnEndpointStopOrHalt(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r11
  __int64 v4; // rsi
  __int64 v5; // r10
  __int64 v6; // r9
  int v7; // r8d
  unsigned int v8; // edx
  bool v9; // cl
  unsigned int v10; // edx
  size_t v11; // r8
  __int64 result; // rax
  int v13; // [rsp+28h] [rbp-40h]
  int v14; // [rsp+30h] [rbp-38h]
  int v15; // [rsp+38h] [rbp-30h]
  int v16; // [rsp+40h] [rbp-28h]
  unsigned int v17; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v18; // [rsp+78h] [rbp+10h] BYREF

  if ( !Bulk_FindStage(
          a1,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 136LL) + 32LL) + 16LL)
                    + 16LL * *(unsigned int *)(a1 + 64)) & 0xFFFFFFFFFFFFFFF0uLL,
          (__int64 *)&v18,
          &v17)
    || (v2 = (__int64)v18) == 0 )
  {
    result = *(unsigned int *)(a1 + 348);
    goto LABEL_22;
  }
  v3 = *(_QWORD *)(a1 + 56);
  v4 = *v18;
  v5 = *(_QWORD *)(*(_QWORD *)v3 + 272LL);
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 136) + 32LL) + 16LL) + 16LL * *(unsigned int *)(a1 + 64);
  if ( (v5 & 0x1800000000LL) != 0 )
  {
    if ( (v5 & 0x1000000000LL) == 0 )
    {
      v8 = *(_DWORD *)(v6 + 8);
      v9 = (v8 & 0x80u) == 0;
      v10 = v8 >> 8;
      v11 = 0LL;
      if ( (v5 & 0x200000000000LL) == 0 || !v9 )
        v11 = v10;
      goto LABEL_13;
    }
    if ( (v5 & 0x800000000LL) != 0 )
    {
      v11 = 0LL;
      goto LABEL_13;
    }
    v7 = *(_DWORD *)(v6 + 12);
  }
  else
  {
    v7 = *(_DWORD *)(v6 + 8);
  }
  v11 = v7 & 0xFFFFFF;
LABEL_13:
  if ( (v5 & 0x10000000000LL) != 0 )
    v11 = (*(_DWORD *)(v6 + 12) & 0x1FFFF) + (unsigned int)v11;
  if ( (unsigned int)v11 > *((_DWORD *)v18 + 10) )
  {
    v16 = v11;
    v15 = *(_DWORD *)(a1 + 64);
    v14 = *(_DWORD *)(v3 + 144);
    v13 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(v3 + 80),
      3u,
      0xEu,
      0xCu,
      (__int64)&WPP_7e05ccf1ecbe36c41fbb6a7cdf44ebc9_Traceguids,
      v13,
      v14,
      v15,
      v16);
    v11 = 0LL;
  }
  *(_DWORD *)(v4 + 108) += v11;
  if ( (*(_DWORD *)(*(_QWORD *)(v4 + 48) + 32LL) & 1) != 0 && *(_DWORD *)(v4 + 76) == 2 )
    memmove(*(void **)(v2 + 64), *(const void **)(*(_QWORD *)(v2 + 72) + 16LL), v11);
  result = v17;
LABEL_22:
  *(_DWORD *)(a1 + 352) = result;
  return result;
}
