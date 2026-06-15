/*
 * XREFs of ?GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140056E70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140018218 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140054C94 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     WPP_SF_DDDD @ 0x14005527C (WPP_SF_DDDD.c)
 *     McTemplateU0pqqq @ 0x140057554 (McTemplateU0pqqq.c)
 *     McTemplateU0pxqxq @ 0x140057684 (McTemplateU0pxqxq.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x140060254 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x1400602F0 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint::GetOutputDataPointer(
        CCrossProcessServerOutputEndpoint *this,
        unsigned int a2,
        struct AE_CURRENT_POSITION *a3)
{
  unsigned __int64 v6; // rax
  CCrossProcessBaseEndpoint *v7; // rsi
  int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // xmm0_8
  int v15; // r15d
  int v16; // edx
  unsigned int v17; // r15d
  unsigned int v18; // r8d
  int v19; // eax
  unsigned __int32 v20; // ecx
  unsigned __int64 v21; // rdi
  int v22; // edx
  int v23; // ecx
  unsigned int v24; // edi
  __int64 v25; // r10
  unsigned int v26; // ebp
  unsigned int v27; // r13d
  int v28; // edx
  int v29; // ecx
  __int64 v30; // rdi
  unsigned __int64 v32; // [rsp+20h] [rbp-58h]
  unsigned __int64 v33; // [rsp+28h] [rbp-50h]
  unsigned __int64 v34; // [rsp+30h] [rbp-48h]
  unsigned __int64 v35; // [rsp+80h] [rbp+8h]

  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 5) = a2;
  v6 = *((unsigned int *)this - 88);
  v7 = (CCrossProcessServerOutputEndpoint *)((char *)this - 440);
  *((_DWORD *)this + 4) = 2;
  v35 = a2;
  AEWMILOG_DATA(v35, (char *)this - 440, (unsigned __int8)a3, 9u, v35, v6, 0LL);
  ResetEvent(*((HANDLE *)this - 39));
  LODWORD(v9) = *(_DWORD *)(*((_QWORD *)this - 47) + 156LL);
  if ( (v9 & 1) == 0
    || !a2
    || (v10 = *((_QWORD *)this - 47),
        v11 = *(_QWORD *)(v10 + 8),
        v12 = *(_QWORD *)(v10 + 16),
        !CCrossProcessBaseEndpoint::IsValidOffset(v7, v11, v8))
    || !CCrossProcessBaseEndpoint::IsValidOffset(v7, v12, v8) )
  {
LABEL_27:
    _InterlockedExchange((volatile __int32 *)this - 74, 1);
    goto LABEL_28;
  }
  (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, struct AE_CURRENT_POSITION *, __int64))(*(_QWORD *)v7 + 80LL))(
    v7,
    a3,
    v11);
  v13 = *((_QWORD *)this - 47);
  *(_OWORD *)((char *)this + 88) = *(_OWORD *)&a3->u64DevicePosition;
  *(_OWORD *)((char *)this + 104) = *(_OWORD *)&a3->u64PaddingFrames;
  v14 = *(_QWORD *)&a3->f32FramesPerSecond;
  v15 = *((_DWORD *)this - 90);
  *((_QWORD *)this + 15) = v14;
  v16 = *(_DWORD *)(v13 + 4) + 1;
  v17 = a2 * v15;
  v18 = **((_DWORD **)this - 47);
  v19 = 0;
  if ( v16 != *(_DWORD *)(*((_QWORD *)this - 46) + 132LL) )
    v19 = v16;
  if ( v19 == v18 )
  {
    v20 = 0;
    if ( v18 + 1 != *(_DWORD *)(*((_QWORD *)this - 46) + 132LL) )
      v20 = v18 + 1;
    v21 = (unsigned __int64)v18 << 6;
    _InterlockedExchange(*((volatile __int32 **)this - 47), v20);
    *(_DWORD *)(((unsigned __int64)v20 << 6) + *((_QWORD *)this - 41) + 52) = 1;
    AEWMILOG_GLITCH(v17, v7, v18, 0xAu, v11, *(unsigned int *)(v21 + *((_QWORD *)this - 41) + 4), v12, v17);
    if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
      McTemplateU0pxqxq(v23, v22, (_DWORD)v7, v11, *(_DWORD *)(v21 + *((_QWORD *)this - 41) + 4), v12, v17);
    CCrossProcessEndpointTraceLogger::Glitch(
      (__int64)this - 256,
      6u,
      "CpGlitchEvent::SERVER_OUTPUT_QUEUE_FULL_PACKET_DROP");
  }
  v9 = *((unsigned int *)this - 76);
  if ( (unsigned int)v9 >= (int)v11 - (int)v12 )
    v24 = v12 + v9 - v11;
  else
    v24 = v17;
  v25 = *((_QWORD *)this - 46);
  v8 = *(_DWORD *)(v25 + 140);
  v26 = v8 + v11 % v9;
  v27 = v8 + v12 % v9;
  if ( v24 < v17 )
  {
    AEWMILOG_GLITCH(v27, v7, v26, 2u, v26, v27, 0LL, v17);
    if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
      McTemplateU0pqqq(v29, v28, (_DWORD)v7, v26, v27, v17);
    LODWORD(v9) = (_DWORD)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      LODWORD(v34) = *(_DWORD *)(*((_QWORD *)this - 46) + 144LL);
      LODWORD(v33) = a2 * *((_DWORD *)this - 90);
      LODWORD(v32) = v27;
      WPP_SF_DDDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xAu,
        &WPP_ff04fe40d8673a8f750ef9e0b522be92_Traceguids,
        v26,
        v32,
        v33,
        v34);
    }
    if ( v12 > 0 )
      CCrossProcessEndpointTraceLogger::Glitch(
        (__int64)this - 256,
        7u,
        "CpGlitchEvent::SERVER_OUTPUT_READ_POINTER_OVERWRITE");
    if ( v24 )
    {
      *((_DWORD *)this + 20) = v24;
      *((_DWORD *)this + 4) = 1;
    }
    goto LABEL_27;
  }
  if ( v17 + v26 <= *(_DWORD *)(v25 + 148) )
  {
    *((_DWORD *)this + 4) = 0;
    v30 = *((_QWORD *)this - 47) + v26;
    goto LABEL_29;
  }
  *((_DWORD *)this + 4) = 1;
LABEL_28:
  v30 = *((_QWORD *)this - 42);
LABEL_29:
  AEWMILOG_DATA(v9, v7, v8, 0xAu, v35, 0LL, 0LL);
  return v30;
}
