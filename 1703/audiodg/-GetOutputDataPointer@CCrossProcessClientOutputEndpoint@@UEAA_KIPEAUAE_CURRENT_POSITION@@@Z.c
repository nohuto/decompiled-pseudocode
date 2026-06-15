/*
 * XREFs of ?GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140055D90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x14001BA38 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@I@Z @ 0x140031C50 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@I@Z.c)
 *     WPP_SF_ii @ 0x14003BA08 (WPP_SF_ii.c)
 *     Template_pqqqq @ 0x140056788 (Template_pqqqq.c)
 *     Template_pxxq @ 0x14005682C (Template_pxxq.c)
 *     WPP_SF_DDDD @ 0x1400568C0 (WPP_SF_DDDD.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x1400600F0 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x1400603A0 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetOutputDataPointer(
        CCrossProcessClientOutputEndpoint *this,
        unsigned int a2,
        struct AE_CURRENT_POSITION *a3)
{
  __int64 v3; // rax
  char *v4; // r14
  unsigned int v7; // r15d
  signed __int64 v8; // rsi
  signed __int64 v9; // rbp
  unsigned __int64 v10; // r13
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r8
  unsigned __int8 v13; // r8
  unsigned int v14; // edi
  unsigned int v15; // ecx
  int v16; // edx
  int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // r10
  int v20; // ecx
  unsigned int v21; // ebp
  unsigned int v22; // esi
  __int64 v23; // rdi

  v3 = *((_QWORD *)this - 46);
  v4 = (char *)this - 432;
  *((_DWORD *)this + 5) = a2;
  *((_DWORD *)this + 4) = 2;
  v7 = 0;
  v8 = *(_QWORD *)(v3 + 16);
  v9 = *(_QWORD *)(v3 + 8);
  v10 = a2;
  AEWMILOG_DATA((unsigned int)this, (char *)this - 432, (unsigned __int8)a3, 0x11u, a2, v9, v8);
  if ( CCrossProcessBaseEndpoint::IsValidOffset((CCrossProcessBaseEndpoint *)v4, v9, v11)
    && CCrossProcessBaseEndpoint::IsValidOffset((CCrossProcessBaseEndpoint *)v4, v8, v12)
    && a2 )
  {
    v14 = a2 * *((_DWORD *)this - 88);
    if ( v9 >= v8 )
    {
      v18 = *((_DWORD *)this - 74);
      v7 = v8 + v18 - v9;
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
          0xCu,
          (__int64)&WPP_18bcff24aefe30010f0feed95000f45d_Traceguids,
          v9,
          v8);
      }
      AEWMILOG_GLITCH(v15, v4, v13, 9u, v9, v8, 0LL, v14);
      if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
        Template_pxxq(v17, v16, (_DWORD)v4, v9, v8, v14);
      CCrossProcessEndpointTraceLogger::Glitch((__int64)this - 248, 3u);
      v18 = *((_DWORD *)this - 74);
      v7 = v18;
    }
    v19 = *((_QWORD *)this - 45);
    v20 = *(_DWORD *)(v19 + 140);
    v21 = v20 + v9 % v18;
    v22 = v20 + v8 % v18;
    if ( v7 >= v14 )
    {
      if ( v14 + v21 <= *(_DWORD *)(v19 + 144) )
      {
        *((_DWORD *)this + 4) = 0;
        v23 = *((_QWORD *)this - 46) + v21;
        goto LABEL_22;
      }
      *((_DWORD *)this + 4) = 1;
    }
    else
    {
      AEWMILOG_GLITCH(v22, v4, v21, 2u, v21, v22, 0LL, v14);
      if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
        Template_pqqqq(
          *(_DWORD *)(*((_QWORD *)this - 45) + 144LL),
          (unsigned int)&EVT_GLITCH_CP_CLIENT_OUTPUT_READ_POINTER_OVERWRITE,
          (_DWORD)v4,
          v21,
          v22,
          v14,
          *(_DWORD *)(*((_QWORD *)this - 45) + 144LL));
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_DDDD(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          13LL,
          &WPP_18bcff24aefe30010f0feed95000f45d_Traceguids,
          v21,
          v22,
          v14,
          *(_DWORD *)(*((_QWORD *)this - 45) + 144LL));
      }
      CCrossProcessEndpointTraceLogger::Glitch((__int64)this - 248, 4u);
    }
  }
  v23 = *((_QWORD *)this - 41);
LABEL_22:
  AEWMILOG_DATA(
    v7 / *((_DWORD *)this - 88),
    v4,
    *((_DWORD *)this + 4),
    0x12u,
    v10,
    v7 / *((_DWORD *)this - 88),
    *((int *)this + 4));
  return v23;
}
