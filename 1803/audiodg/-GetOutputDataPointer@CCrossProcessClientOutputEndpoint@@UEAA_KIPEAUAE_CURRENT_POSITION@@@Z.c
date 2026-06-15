/*
 * XREFs of ?GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140055BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140018218 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     WPP_SF_ii @ 0x14003A75C (WPP_SF_ii.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140054C94 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     McTemplateU0pqqqq @ 0x1400551E0 (McTemplateU0pqqqq.c)
 *     WPP_SF_DDDD @ 0x14005527C (WPP_SF_DDDD.c)
 *     McTemplateU0pxxq @ 0x140056A3C (McTemplateU0pxxq.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x140060254 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x1400602F0 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetOutputDataPointer(
        CCrossProcessClientOutputEndpoint *this,
        unsigned int a2,
        struct AE_CURRENT_POSITION *a3)
{
  __int64 v3; // rax
  CCrossProcessBaseEndpoint *v4; // r12
  int v6; // edi
  signed __int64 v8; // r15
  unsigned int v9; // ebp
  signed __int64 v10; // r14
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r8
  unsigned __int8 v13; // r8
  unsigned int v14; // esi
  unsigned int v15; // ecx
  unsigned __int64 v16; // r13
  int v17; // edx
  int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // r10
  int v21; // ecx
  unsigned int v22; // r14d
  unsigned int v23; // r15d
  __int64 v24; // rsi
  unsigned __int64 v26; // [rsp+20h] [rbp-48h]
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]
  unsigned __int64 v28; // [rsp+30h] [rbp-38h]
  unsigned __int64 v29; // [rsp+70h] [rbp+8h]

  v3 = *((_QWORD *)this - 46);
  v4 = (CCrossProcessClientOutputEndpoint *)((char *)this - 432);
  v6 = 0;
  *((_DWORD *)this + 5) = a2;
  *((_DWORD *)this + 4) = 2;
  v8 = *(_QWORD *)(v3 + 16);
  v9 = 0;
  v10 = *(_QWORD *)(v3 + 8);
  v29 = a2;
  AEWMILOG_DATA((unsigned int)this, (char *)this - 432, (unsigned __int8)a3, 0x11u, a2, v10, v8);
  if ( !CCrossProcessBaseEndpoint::IsValidOffset(v4, v10, v11)
    || !CCrossProcessBaseEndpoint::IsValidOffset(v4, v8, v12)
    || !a2 )
  {
LABEL_21:
    v6 = *((_DWORD *)this + 4);
    goto LABEL_22;
  }
  v14 = a2 * *((_DWORD *)this - 88);
  if ( v10 >= v8 )
  {
    v19 = *((_DWORD *)this - 74);
    v16 = v14;
    v9 = v8 + v19 - v10;
  }
  else
  {
    v15 = (unsigned int)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_ii(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xEu,
        (__int64)&WPP_db619c76aadb3ae58938d7fbad798ece_Traceguids,
        v10,
        v8);
    }
    v16 = v14;
    AEWMILOG_GLITCH(v15, v4, v13, 9u, v10, v8, 0LL, v14);
    if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
      McTemplateU0pxxq(v18, v17, (_DWORD)v4, v10, v8, v14);
    CCrossProcessEndpointTraceLogger::Glitch((__int64)this - 248, 3u, "CpGlitchEvent::CLIENT_OUTPUT_SERVER_OVERREAD");
    v9 = *((_DWORD *)this - 74);
    v19 = v9;
  }
  v20 = *((_QWORD *)this - 45);
  v21 = *(_DWORD *)(v20 + 140);
  v22 = v21 + v10 % v19;
  v23 = v21 + v8 % v19;
  if ( v9 < v14 )
  {
    AEWMILOG_GLITCH(v22, v4, v19, 2u, v22, v23, 0LL, v16);
    if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
      McTemplateU0pqqqq(
        *(unsigned int *)(*((_QWORD *)this - 45) + 144LL),
        &EVT_GLITCH_CP_CLIENT_OUTPUT_READ_POINTER_OVERWRITE,
        (__int64)v4,
        v22,
        v23,
        v14,
        *(_DWORD *)(*((_QWORD *)this - 45) + 144LL));
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      LODWORD(v28) = *(_DWORD *)(*((_QWORD *)this - 45) + 144LL);
      LODWORD(v27) = v14;
      LODWORD(v26) = v23;
      WPP_SF_DDDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xFu,
        &WPP_db619c76aadb3ae58938d7fbad798ece_Traceguids,
        v22,
        v26,
        v27,
        v28);
    }
    CCrossProcessEndpointTraceLogger::Glitch(
      (__int64)this - 248,
      4u,
      "CpGlitchEvent::CLIENT_OUTPUT_READ_POINTER_OVERWRITE");
    goto LABEL_21;
  }
  if ( v22 + v14 <= *(_DWORD *)(v20 + 144) )
  {
    v24 = *((_QWORD *)this - 46) + v22;
    *((_DWORD *)this + 4) = 0;
    goto LABEL_23;
  }
  v6 = 1;
  *((_DWORD *)this + 4) = 1;
LABEL_22:
  v24 = *((_QWORD *)this - 41);
LABEL_23:
  AEWMILOG_DATA(v9 / *((_DWORD *)this - 88), v4, v6, 0x12u, v29, v9 / *((_DWORD *)this - 88), v6);
  return v24;
}
