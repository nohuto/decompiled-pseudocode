/*
 * XREFs of ?OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800074E0
 * Callers:
 *     ?OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180005AE0 (-OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1P.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x18000695C (-GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z.c)
 *     WPP_SF_ @ 0x180006B5C (WPP_SF_.c)
 *     WPP_SF_ddS @ 0x180006D88 (WPP_SF_ddS.c)
 *     ?QueueDuckingWorkItem@CDuckingManager@@AEAAJPEAUIAudioSessionInfo@@KW4DUCK_WORK_ITEM_TYPE@@H@Z @ 0x180008EFC (-QueueDuckingWorkItem@CDuckingManager@@AEAAJPEAUIAudioSessionInfo@@KW4DUCK_WORK_ITEM_TYPE@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDuckingManager::OnStreamStateChanged(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  _UNKNOWN **v8; // rcx
  const wchar_t *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  USHORT v12; // dx
  int PBMRelatedAudioStreamCategory; // ebx
  __int64 v14; // r14
  struct IAudioProcess *v15; // rbx
  unsigned int v16; // eax
  int v17; // r9d
  _UNKNOWN **v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r9d
  struct IAudioProcess *v23; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+70h] [rbp+8h] BYREF

  v23 = 0LL;
  v8 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v9 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
    WPP_SF_ddS(*((_QWORD *)WPP_GLOBAL_Control + 2), v10, v11, a4, *(_DWORD *)(a1 + 292), v9);
    v8 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( *(_DWORD *)(a1 + 296) )
  {
    if ( v8 == &WPP_GLOBAL_Control || (*((_DWORD *)v8 + 7) & 0x8000000) == 0 || *((_BYTE *)v8 + 25) < 4u )
      goto LABEL_16;
    v12 = 15;
LABEL_15:
    WPP_SF_((TRACEHANDLE)v8[2], v12, &WPP_f0c26e893d54393037413041046a80ee_Traceguids);
LABEL_16:
    PBMRelatedAudioStreamCategory = 0;
    goto LABEL_48;
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2) )
  {
    v8 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_16;
    }
    v12 = 16;
    goto LABEL_15;
  }
  v14 = a5;
  PBMRelatedAudioStreamCategory = (*(__int64 (__fastcall **)(__int64, struct IAudioProcess **))(*(_QWORD *)a5 + 24LL))(
                                    a5,
                                    &v23);
  if ( PBMRelatedAudioStreamCategory >= 0 )
  {
    v15 = v23;
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 48LL))(v14);
    PBMRelatedAudioStreamCategory = GetPBMRelatedAudioStreamCategory(v15, v16, &v24);
    if ( PBMRelatedAudioStreamCategory >= 0 )
    {
      if ( v24 != 3 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, &WPP_f0c26e893d54393037413041046a80ee_Traceguids);
        }
        goto LABEL_48;
      }
      if ( a4 == 1 )
      {
        v17 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 288));
        v18 = (_UNKNOWN **)WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v17);
          v18 = (_UNKNOWN **)WPP_GLOBAL_Control;
        }
        if ( *(_DWORD *)(a1 + 292) != 3 )
        {
          v19 = *(unsigned int *)(a1 + 288);
          v20 = 1LL;
LABEL_38:
          PBMRelatedAudioStreamCategory = CDuckingManager::QueueDuckingWorkItem(a1 - 16, a2, v19, v20, 1);
          goto LABEL_39;
        }
      }
      else
      {
        if ( a4 )
        {
LABEL_39:
          v18 = (_UNKNOWN **)WPP_GLOBAL_Control;
          goto LABEL_40;
        }
        v21 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 288));
        v18 = (_UNKNOWN **)WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, &WPP_f0c26e893d54393037413041046a80ee_Traceguids, v21);
          v18 = (_UNKNOWN **)WPP_GLOBAL_Control;
        }
        if ( *(_DWORD *)(a1 + 292) != 3 )
        {
          v20 = 2LL;
          v19 = 0LL;
          goto LABEL_38;
        }
      }
LABEL_40:
      if ( PBMRelatedAudioStreamCategory >= 0 )
        goto LABEL_48;
      goto LABEL_43;
    }
  }
  v18 = (_UNKNOWN **)WPP_GLOBAL_Control;
LABEL_43:
  if ( v18 != &WPP_GLOBAL_Control && (*((_DWORD *)v18 + 7) & 0x8000000) != 0 && *((_BYTE *)v18 + 25) >= 2u )
    WPP_SF_D(
      (TRACEHANDLE)v18[2],
      0x14u,
      &WPP_f0c26e893d54393037413041046a80ee_Traceguids,
      PBMRelatedAudioStreamCategory);
  AudPolicyLogError("CDuckingManager::OnStreamStateChanged", 276, PBMRelatedAudioStreamCategory);
LABEL_48:
  if ( v23 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v23 + 16LL))(v23);
  return (unsigned int)PBMRelatedAudioStreamCategory;
}
