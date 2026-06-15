/*
 * XREFs of ?AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x140056AD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140054280 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140054BE4 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CanCoalesceTimestampMessages@CCrossProcessServerOutputEndpoint@@IEAAHIW4EndpointMessageID@@IPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@@Z @ 0x140056DD0 (-CanCoalesceTimestampMessages@CCrossProcessServerOutputEndpoint@@IEAAHIW4EndpointMessageID@@IPEA.c)
 *     McTemplateU0pqqqx @ 0x1400575E4 (McTemplateU0pqqqx.c)
 *     ?AEWMILOG_DROP@@YAXKPEAXE_K1@Z @ 0x140060394 (-AEWMILOG_DROP@@YAXKPEAXE_K1@Z.c)
 *     ?AEWMILOG_TIMESTAMP@@YAXKPEAXEE_K1111@Z @ 0x140060420 (-AEWMILOG_TIMESTAMP@@YAXKPEAXEE_K1111@Z.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint::AddTimestampMessage(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        int a6,
        int a7)
{
  unsigned int v7; // ebx
  int v9; // r13d
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r15
  unsigned __int8 v12; // r9
  __int32 v13; // edx
  unsigned int v14; // r8d
  __int32 v15; // r12d
  unsigned int v16; // eax
  unsigned int v17; // esi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  double v21; // xmm1_8
  __int64 v22; // rax
  double v23; // xmm0_8
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  double v26; // xmm0_8
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  __int64 v29; // rax
  unsigned __int64 v31; // [rsp+20h] [rbp-68h]

  v7 = 0;
  v9 = 0;
  v10 = *(unsigned int *)(*(_QWORD *)(a1 + 64) + 4LL);
  v11 = **(unsigned int **)(a1 + 64);
  if ( !CCrossProcessBaseEndpoint::IsValidQueueIndex(
          (CCrossProcessBaseEndpoint *)a1,
          *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4LL))
    || !CCrossProcessBaseEndpoint::IsValidQueueIndex((CCrossProcessBaseEndpoint *)a1, v11) )
  {
    v7 = -2005139387;
    goto LABEL_8;
  }
  v13 = 0;
  v14 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 132LL);
  if ( (_DWORD)v10 + 1 != v14 )
    v13 = v10 + 1;
  if ( v13 == (_DWORD)v11 )
  {
    AEWMILOG_DROP(v10 + 1, (void *)a1, v14, v10, v11);
    v7 = -2005139385;
LABEL_8:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_ff04fe40d8673a8f750ef9e0b522be92_Traceguids, v7);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessServerOutputEndpoint::AddTimestampMessage", 0x253u, v7);
    return v7;
  }
  v15 = v13;
  if ( a7 == 1 && v14 > 5 )
  {
    v16 = (unsigned int)v11 > (unsigned int)v10 ? v10 + v14 - v11 : (int)v10 - (int)v11;
    if ( v16 >= 5 )
    {
      v17 = v10 - 1;
      if ( !(_DWORD)v10 )
        v17 = v14 - 1;
      if ( (unsigned int)CCrossProcessServerOutputEndpoint::CanCoalesceTimestampMessages(a1, v17, a2, a3, a5, a6) )
      {
        v15 = v10;
        v9 = 1;
        LODWORD(v10) = v17;
      }
    }
  }
  v18 = *(_QWORD *)a5;
  v19 = *(_QWORD *)(a5 + 8);
  v20 = *(_QWORD *)(a5 + 24);
  v21 = *(float *)(a5 + 32);
  if ( *(_QWORD *)a5 < v19 )
  {
    v25 = v19 - v18;
    v26 = (double)(int)v25;
    if ( v25 < 0 )
      v26 = v26 + 1.844674407370955e19;
    v24 = (unsigned int)(int)(v26 * 10000000.0 / v21 + 0.5) + v20;
  }
  else
  {
    v22 = v18 - v19;
    v23 = (double)(int)v22;
    if ( v22 < 0 )
      v23 = v23 + 1.844674407370955e19;
    v24 = v20 - (unsigned int)(int)(v23 * 10000000.0 / v21 + 0.5);
  }
  v27 = *(_QWORD *)(a1 + 112);
  v28 = (unsigned __int64)(unsigned int)v10 << 6;
  if ( v9 )
  {
    *(_DWORD *)(v28 + v27 + 56) += a4;
    *(_QWORD *)(v28 + *(_QWORD *)(a1 + 112) + 32) += *(_QWORD *)(a5 + 16);
  }
  else
  {
    *(_DWORD *)(v28 + v27) = a2;
    *(_DWORD *)(v28 + *(_QWORD *)(a1 + 112) + 4) = a3;
    *(_DWORD *)(v28 + *(_QWORD *)(a1 + 112) + 56) = a4;
    *(_DWORD *)(v28 + *(_QWORD *)(a1 + 112) + 8) = a6;
    v29 = *(_QWORD *)(a1 + 112);
    *(_OWORD *)(v28 + v29 + 16) = *(_OWORD *)a5;
    *(_OWORD *)(v28 + v29 + 32) = *(_OWORD *)(a5 + 16);
    *(_QWORD *)(v28 + v29 + 48) = *(_QWORD *)(a5 + 32);
    *(_QWORD *)(v28 + *(_QWORD *)(a1 + 112) + 40) = v24;
  }
  if ( _InterlockedExchange((volatile __int32 *)(a1 + 144), 0) == 1 )
    *(_DWORD *)(v28 + *(_QWORD *)(a1 + 112) + 52) = 1;
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 64) + 4LL), v15);
  v31 = *(int *)(v28 + *(_QWORD *)(a1 + 112) + 52);
  AEWMILOG_TIMESTAMP(v31, (void *)a1, v14, v12, v31, *(_QWORD *)(a5 + 16), v24, *(_QWORD *)a5, *(_QWORD *)(a5 + 8));
  if ( (Microsoft_Windows_AudioEnableBits & 0x400) != 0 )
    McTemplateU0pqqqx(
      *(_DWORD *)(v28 + *(_QWORD *)(a1 + 112) + 56),
      *(_QWORD *)(a1 + 112),
      a1,
      v11,
      v10,
      *(_DWORD *)(v28 + *(_QWORD *)(a1 + 112) + 56),
      *(_QWORD *)(v28 + *(_QWORD *)(a1 + 112) + 40));
  return v7;
}
