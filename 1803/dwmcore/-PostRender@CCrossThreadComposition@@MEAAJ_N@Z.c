/*
 * XREFs of ?PostRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180047BF0
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18002D5D0 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?IsAnimate@CAnimation@@UEAA_NXZ @ 0x18003FC60 (-IsAnimate@CAnimation@@UEAA_NXZ.c)
 *     ?PostRender@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800440D0 (-PostRender@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReason@@@Z @ 0x18005A6A0 (-ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReaso.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqqqq @ 0x180148E68 (McTemplateU0qqqqq.c)
 *     McTemplateU0qqx @ 0x18014AC30 (McTemplateU0qqx.c)
 *     McTemplateU0qqxx @ 0x1801553C4 (McTemplateU0qqxx.c)
 */

__int64 __fastcall CCrossThreadComposition::PostRender(CCrossThreadComposition *this, unsigned __int8 a2, __int64 a3)
{
  __int64 v3; // rsi
  int v4; // r15d
  __int64 v5; // rbx
  CDesktopRenderTarget *v8; // rcx
  __int64 (__fastcall *v9)(CDesktopRenderTarget *, char); // rax
  int v10; // eax
  int v11; // ebp
  unsigned int v12; // ebx
  unsigned __int8 v13; // r13
  unsigned int v14; // esi
  unsigned __int8 v15; // r12
  bool v16; // bp
  __int64 i; // rbx
  __int64 v18; // rax
  unsigned __int8 v19; // r13
  unsigned __int8 v20; // bp
  __int64 v21; // rcx
  __int64 v22; // r14
  unsigned __int8 v23; // dl
  int v25; // r9d
  __int64 v26; // rcx
  __int64 v27; // r8
  void (__fastcall *v28)(__int64, _QWORD, __int64); // rax
  __int64 v29; // rbx
  _DWORD *v30; // rsi
  int v31; // ecx
  CAnimation *v32; // rcx
  __int64 (*v33)(void); // rax
  char IsAnimate; // al
  __int64 v35; // rsi
  int v36; // ecx
  int v37; // ecx
  __int64 v38; // rax
  _QWORD *v39; // rax
  unsigned __int64 v40; // rcx
  unsigned int v41; // ecx
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // edx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  _BYTE v50[20]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v51; // [rsp+54h] [rbp-34h]
  unsigned __int8 v52; // [rsp+90h] [rbp+8h]
  unsigned __int8 v53; // [rsp+90h] [rbp+8h]

  v3 = *((_QWORD *)this + 9);
  v4 = 0;
  v5 = 0LL;
  if ( *(_DWORD *)(v3 + 80) )
  {
    do
    {
      v8 = *(CDesktopRenderTarget **)(*(_QWORD *)(v3 + 56) + 8 * v5);
      v9 = *(__int64 (__fastcall **)(CDesktopRenderTarget *, char))(*(_QWORD *)v8 + 160LL);
      if ( v9 == CDesktopRenderTarget::PostRender )
        v10 = CDesktopRenderTarget::PostRender(v8, a2);
      else
        v10 = v9(v8, a2);
      v11 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x100u);
      if ( !v4 || v4 >= 0 && v11 < 0 )
        v4 = v11;
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < *(_DWORD *)(v3 + 80) );
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x1E7u);
      return (unsigned int)v4;
    }
  }
  if ( !a2 )
  {
    v12 = 0;
    v13 = 0;
    v52 = 0;
    if ( !*((_DWORD *)this + 122) )
    {
LABEL_12:
      v14 = *((_DWORD *)this + 166);
      v15 = 0;
      v16 = (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0;
      for ( i = 0LL; (!v15 || v16) && (unsigned int)i < v14; i = (unsigned int)(i + 1) )
      {
        v32 = *(CAnimation **)(8 * i + *((_QWORD *)this + 80));
        v33 = *(__int64 (**)(void))(*(_QWORD *)v32 + 8LL);
        if ( (char *)v33 == (char *)CAnimation::IsAnimate )
          IsAnimate = CAnimation::IsAnimate(v32);
        else
          IsAnimate = v33();
        if ( IsAnimate )
        {
          v15 = 1;
          if ( v16 )
          {
            v49 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(8 * i + *((_QWORD *)this + 80)) + 24LL))(*(_QWORD *)(8 * i + *((_QWORD *)this + 80)));
            if ( v49 )
            {
              ++*(_DWORD *)(v49 + 84);
              *((_BYTE *)this + 520) = 1;
            }
          }
        }
      }
      v18 = *((_QWORD *)this + 30);
      v19 = v52;
      v20 = *(_DWORD *)(v18 + 264) || (*(_BYTE *)(v18 + 424) & 2) != 0 || *(_DWORD *)(v18 + 168);
      v21 = *((_QWORD *)this + 70);
      v22 = *(_QWORD *)(*((_QWORD *)this + 10) + 304LL);
      v23 = v21 && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v21 + 24) + 56LL))(*(_QWORD *)(v21 + 24));
      v53 = v23;
      if ( *((_BYTE *)this + 520) )
      {
        v29 = 0LL;
        if ( *((_DWORD *)this + 88) )
        {
          do
          {
            v30 = *(_DWORD **)(*((_QWORD *)this + 41) + 8 * v29);
            if ( v30 )
            {
              v31 = v30[21];
              if ( v31 || v30[19] )
              {
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
                {
                  McTemplateU0qqxx(v31, v23, v30[4], v30[5], v31, v30[19]);
                  v31 = v30[21];
                }
                dword_1802D62F0 += v31;
                dword_1802D62F4 += v30[19];
                v30[21] = 0;
                v30[19] = 0;
              }
            }
            v29 = (unsigned int)(v29 + 1);
          }
          while ( (unsigned int)v29 < *((_DWORD *)this + 88) );
          v23 = v53;
        }
        *((_BYTE *)this + 520) = 0;
      }
      if ( v19 || v15 || v20 || v22 || v23 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0qqqqq(v23, (unsigned int)&EVTDESC_SCHEDULE_COMPOSITIONPASS, v19, v15, v20, v22 != 0, v23);
        if ( v53 )
          v25 = 128;
        else
          v25 = 0;
        v26 = *((_QWORD *)this + 69);
        v27 = (v22 != 0 ? 0x40 : 0) | v25 | (v19 != 0 ? 0x100 : 0) | (v15 != 0 ? 0x10 : 0) | (32 * (unsigned int)v20);
        v28 = *(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v26 + 104LL);
        if ( (char *)v28 == (char *)CPartitionVerticalBlankScheduler::ScheduleCompositionPass )
          CPartitionVerticalBlankScheduler::ScheduleCompositionPass(v26, 0LL, v27);
        else
          v28(v26, 0LL, v27);
      }
      CHWDrawListEngineMetrics::s_cMegaRectPixelsSaved = 0;
      return (unsigned int)v4;
    }
    while ( 1 )
    {
      v35 = *((_QWORD *)this + 58) + 16LL * v12;
      v36 = *(_DWORD *)(v35 + 4);
      if ( v36 )
      {
        v37 = v36 - 1;
        if ( v37 )
        {
          if ( v37 == 1 )
          {
            v38 = *((_QWORD *)this + 47);
            if ( !v38
              || (v39 = *(_QWORD **)(v38 + 8), v40 = *(_QWORD *)(v35 + 8), v39[11] >= v40)
              || v39[7] > v40 && *(_QWORD *)((char *)v39 + 76) < v40 )
            {
              *(_DWORD *)v50 = 8;
              *(_OWORD *)&v50[4] = 0uLL;
              v51 = 0LL;
              *(_DWORD *)&v50[8] = *(_DWORD *)v35;
              CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)v50, a3);
              *(_DWORD *)(v35 + 4) = 0;
              *(_QWORD *)(v35 + 8) = 0LL;
              v41 = *((_DWORD *)this + 122);
              *(_OWORD *)v50 = *(_OWORD *)v35;
              if ( v12 >= v41 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x19Cu);
              }
              else
              {
                v42 = *((_QWORD *)this + 58);
                a3 = v12;
                if ( v12 < v41 - 1 )
                {
                  do
                  {
                    v46 = a3 + 1;
                    v47 = 2LL * (unsigned int)a3;
                    v48 = 2LL * (unsigned int)(a3 + 1);
                    a3 = (unsigned int)(a3 + 1);
                    *(_OWORD *)(v42 + 8 * v47) = *(_OWORD *)(v42 + 8 * v48);
                    v41 = *((_DWORD *)this + 122);
                  }
                  while ( v46 < v41 - 1 );
                }
                *((_DWORD *)this + 122) = v41 - 1;
              }
              if ( v12 )
                --v12;
              goto LABEL_68;
            }
          }
        }
        else
        {
          *(_DWORD *)(v35 + 4) = 2;
          v43 = *((_QWORD *)this + 47);
          if ( v43 )
          {
            v44 = *(_QWORD *)(v43 + 8);
            if ( *((_DWORD *)this + 92) == 1 )
              v45 = *(_QWORD *)(v44 + 88);
            else
              v45 = *(_QWORD *)(v44 + 76);
            *(_QWORD *)(v35 + 8) = v45 + 1;
          }
        }
      }
      *(_OWORD *)v50 = *(_OWORD *)v35;
LABEL_68:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0qqx(*(_DWORD *)v50, *(_DWORD *)&v50[4], *(_DWORD *)&v50[4], *(_DWORD *)v50, v50[8]);
      ++v12;
      v13 |= *(_DWORD *)(v35 + 4) == 2;
      if ( v12 >= *((_DWORD *)this + 122) )
      {
        v52 = v13;
        goto LABEL_12;
      }
    }
  }
  return (unsigned int)v4;
}
