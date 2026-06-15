/*
 * XREFs of ?AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x140058E90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x1400565F4 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140056F64 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CanCoalesceTimestampMessages@CCrossProcessServerOutputEndpoint@@IEAAHIW4EndpointMessageID@@IPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@@Z @ 0x140059194 (-CanCoalesceTimestampMessages@CCrossProcessServerOutputEndpoint@@IEAAHIW4EndpointMessageID@@IPEA.c)
 *     McTemplateU0pqqqx @ 0x140059990 (McTemplateU0pqqqx.c)
 *     ?AEWMILOG_DROP@@YAXKPEAXE_K1@Z @ 0x140063394 (-AEWMILOG_DROP@@YAXKPEAXE_K1@Z.c)
 *     ?AEWMILOG_TIMESTAMP@@YAXKPEAXEE_K1111@Z @ 0x140063420 (-AEWMILOG_TIMESTAMP@@YAXKPEAXEE_K1111@Z.c)
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
  __int64 v20; // rax
  double v21; // xmm1_8
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  double v24; // xmm1_8
  __int64 v25; // rax
  unsigned __int64 v26; // rsi
  __int64 v27; // rax
  unsigned __int64 v29; // [rsp+20h] [rbp-68h]

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
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_50292f6487a5368530fe30e21e48c679_Traceguids, v7);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessServerOutputEndpoint::AddTimestampMessage", 595, v7);
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
  if ( *(_QWORD *)a5 < v19 )
  {
    v23 = v19 - v18;
    v24 = (double)(int)v23;
    if ( v23 < 0 )
      v24 = v24 + 1.844674407370955e19;
    v22 = *(_QWORD *)(a5 + 24) + (unsigned int)(int)(v24 * 10000000.0 / *(float *)(a5 + 32) + 0.5);
  }
  else
  {
    v20 = v18 - v19;
    v21 = (double)(int)v20;
    if ( v20 < 0 )
      v21 = v21 + 1.844674407370955e19;
    v22 = *(_QWORD *)(a5 + 24) - (unsigned int)(int)(v21 * 10000000.0 / *(float *)(a5 + 32) + 0.5);
  }
  v25 = *(_QWORD *)(a1 + 112);
  v26 = (unsigned __int64)(unsigned int)v10 << 6;
  if ( v9 )
  {
    *(_DWORD *)(v26 + v25 + 56) += a4;
    *(_QWORD *)(v26 + *(_QWORD *)(a1 + 112) + 32) += *(_QWORD *)(a5 + 16);
  }
  else
  {
    *(_DWORD *)(v26 + v25) = a2;
    *(_DWORD *)(v26 + *(_QWORD *)(a1 + 112) + 4) = a3;
    *(_DWORD *)(v26 + *(_QWORD *)(a1 + 112) + 56) = a4;
    *(_DWORD *)(v26 + *(_QWORD *)(a1 + 112) + 8) = a6;
    v27 = *(_QWORD *)(a1 + 112);
    *(_OWORD *)(v26 + v27 + 16) = *(_OWORD *)a5;
    *(_OWORD *)(v26 + v27 + 32) = *(_OWORD *)(a5 + 16);
    *(_QWORD *)(v26 + v27 + 48) = *(_QWORD *)(a5 + 32);
    *(_QWORD *)(v26 + *(_QWORD *)(a1 + 112) + 40) = v22;
  }
  if ( _InterlockedExchange((volatile __int32 *)(a1 + 144), 0) == 1 )
    *(_DWORD *)(v26 + *(_QWORD *)(a1 + 112) + 52) = 1;
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 64) + 4LL), v15);
  v29 = *(int *)(v26 + *(_QWORD *)(a1 + 112) + 52);
  AEWMILOG_TIMESTAMP(v29, (void *)a1, v14, v12, v29, *(_QWORD *)(a5 + 16), v22, *(_QWORD *)a5, *(_QWORD *)(a5 + 8));
  if ( (Microsoft_Windows_AudioEnableBits & 0x400) != 0 )
    McTemplateU0pqqqx(
      *(_DWORD *)(v26 + *(_QWORD *)(a1 + 112) + 56),
      *(_QWORD *)(a1 + 112),
      a1,
      v11,
      v10,
      *(_DWORD *)(v26 + *(_QWORD *)(a1 + 112) + 56),
      *(_QWORD *)(v26 + *(_QWORD *)(a1 + 112) + 40));
  return v7;
}
