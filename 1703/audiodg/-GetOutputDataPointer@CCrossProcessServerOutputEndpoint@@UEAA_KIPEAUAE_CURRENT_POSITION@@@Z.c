/*
 * XREFs of ?GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x14001C170
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x14001BA38 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@I@Z @ 0x140031C50 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@I@Z.c)
 *     WPP_SF_DDDD @ 0x1400568C0 (WPP_SF_DDDD.c)
 *     Template_pqqq @ 0x14005691C (Template_pqqq.c)
 *     Template_pxqxq @ 0x140056A50 (Template_pxqxq.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x1400600F0 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x1400603A0 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint::GetOutputDataPointer(
        CCrossProcessServerOutputEndpoint *this,
        unsigned int a2,
        struct AE_CURRENT_POSITION *a3)
{
  unsigned __int64 v6; // rax
  CCrossProcessBaseEndpoint *v7; // rsi
  int v8; // r8d
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // rax
  unsigned int v14; // r12d
  int v15; // edx
  unsigned int v16; // r8d
  int v17; // eax
  unsigned __int32 v18; // ecx
  unsigned __int64 v19; // rdi
  int v20; // edx
  int v21; // ecx
  __int64 v22; // rcx
  unsigned int v23; // edi
  __int64 v24; // r10
  unsigned int v25; // ebp
  int v26; // edx
  int v27; // ecx
  int v28; // r12d
  __int64 v29; // rdi
  char v31; // [rsp+28h] [rbp-50h]
  int v32; // [rsp+80h] [rbp+8h]
  unsigned __int64 v33; // [rsp+98h] [rbp+20h]

  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 5) = a2;
  v6 = *((unsigned int *)this - 88);
  v7 = (CCrossProcessServerOutputEndpoint *)((char *)this - 440);
  *((_DWORD *)this + 4) = 2;
  v33 = a2;
  AEWMILOG_DATA(v33, (char *)this - 440, (unsigned __int8)a3, 9u, v33, v6, 0LL);
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
LABEL_26:
    _InterlockedExchange((volatile __int32 *)this - 74, 1);
    goto LABEL_27;
  }
  (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, struct AE_CURRENT_POSITION *, __int64))(*(_QWORD *)v7 + 80LL))(
    v7,
    a3,
    v11);
  v13 = *((_QWORD *)this - 47);
  v14 = *((_DWORD *)this - 90) * a2;
  *(_OWORD *)((char *)this + 88) = *(_OWORD *)&a3->u64DevicePosition;
  *(_OWORD *)((char *)this + 104) = *(_OWORD *)&a3->u64PaddingFrames;
  *((_QWORD *)this + 15) = *(_QWORD *)&a3->f32FramesPerSecond;
  v15 = *(_DWORD *)(v13 + 4) + 1;
  v16 = **((_DWORD **)this - 47);
  v17 = 0;
  if ( v15 != *(_DWORD *)(*((_QWORD *)this - 46) + 132LL) )
    v17 = v15;
  if ( v17 == v16 )
  {
    v18 = 0;
    if ( v16 + 1 != *(_DWORD *)(*((_QWORD *)this - 46) + 132LL) )
      v18 = v16 + 1;
    v19 = (unsigned __int64)v16 << 6;
    _InterlockedExchange(*((volatile __int32 **)this - 47), v18);
    *(_DWORD *)(((unsigned __int64)v18 << 6) + *((_QWORD *)this - 41) + 52) = 1;
    AEWMILOG_GLITCH(v14, v7, v16, 0xAu, v11, *(unsigned int *)(v19 + *((_QWORD *)this - 41) + 4), v12, v14);
    if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
      Template_pxqxq(v21, v20, (_DWORD)v7, v11, *(_DWORD *)(v19 + *((_QWORD *)this - 41) + 4), v12, v14);
    CCrossProcessEndpointTraceLogger::Glitch((char *)this - 256, 6LL);
  }
  v22 = *((unsigned int *)this - 76);
  if ( (unsigned int)v22 < (int)v11 - (int)v12 )
    v23 = v14;
  else
    v23 = v12 + v22 - v11;
  v24 = *((_QWORD *)this - 46);
  v8 = *(_DWORD *)(v24 + 140);
  v25 = v8 + v11 % v22;
  v9 = v8 + (unsigned int)(v12 % v22);
  v32 = v9;
  if ( v23 < v14 )
  {
    AEWMILOG_GLITCH(v9, v7, v25, 2u, v25, v9, 0LL, v14);
    if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
    {
      v31 = v14;
      v28 = v32;
      Template_pqqq(v27, v26, (_DWORD)v7, v25, v32, v31);
    }
    else
    {
      v28 = v32;
    }
    LODWORD(v9) = (_DWORD)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_DDDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        10LL,
        &WPP_50292f6487a5368530fe30e21e48c679_Traceguids,
        v25,
        v28,
        *((_DWORD *)this - 90) * a2,
        *(_DWORD *)(*((_QWORD *)this - 46) + 144LL));
    }
    if ( v12 > 0 )
      CCrossProcessEndpointTraceLogger::Glitch((char *)this - 256, 7LL);
    if ( v23 )
    {
      *((_DWORD *)this + 20) = v23;
      *((_DWORD *)this + 4) = 1;
    }
    goto LABEL_26;
  }
  if ( v14 + v25 <= *(_DWORD *)(v24 + 148) )
  {
    *((_DWORD *)this + 4) = 0;
    v29 = *((_QWORD *)this - 47) + v25;
    goto LABEL_28;
  }
  *((_DWORD *)this + 4) = 1;
LABEL_27:
  v29 = *((_QWORD *)this - 42);
LABEL_28:
  AEWMILOG_DATA(v9, v7, v8, 0xAu, v33, 0LL, 0LL);
  return v29;
}
