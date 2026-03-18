/*
 * XREFs of ?PostRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180029AA0
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReason@@@Z @ 0x180011520 (-ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReaso.c)
 *     ?PostRender@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180015C90 (-PostRender@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?IsAnimate@CAnimation@@UEAA_NXZ @ 0x18002D030 (-IsAnimate@CAnimation@@UEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800AAB4C (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqqqq @ 0x180126B58 (McTemplateU0qqqqq.c)
 *     McTemplateU0qqx @ 0x180129100 (McTemplateU0qqx.c)
 *     McTemplateU0qqxx @ 0x18013237C (McTemplateU0qqxx.c)
 */

__int64 __fastcall CCrossThreadComposition::PostRender(CCrossThreadComposition *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  int v4; // r15d
  __int64 v5; // rbx
  unsigned __int8 v6; // r14
  CDesktopRenderTarget *v8; // rcx
  __int64 (__fastcall *v9)(CDesktopRenderTarget *, char); // rax
  int v10; // eax
  int v11; // ebp
  unsigned int v12; // ebx
  unsigned int v13; // esi
  unsigned __int8 v14; // r12
  bool v15; // bp
  __int64 i; // rbx
  __int64 v17; // rax
  unsigned __int8 v18; // bp
  __int64 v19; // rcx
  __int64 v20; // r13
  unsigned __int8 v21; // r14
  unsigned __int8 v22; // r8
  int v24; // r9d
  __int64 v25; // rcx
  __int64 v26; // r8
  void (__fastcall *v27)(__int64, ULONG, unsigned int); // rax
  CAnimation *v28; // rcx
  bool (__fastcall *v29)(CAnimation *__hidden); // rax
  char IsAnimate; // al
  __int64 j; // rbx
  _DWORD *v32; // rsi
  int v33; // ecx
  __int64 v34; // rsi
  int v35; // ecx
  int v36; // ecx
  __int64 v37; // rax
  _QWORD *v38; // rcx
  unsigned __int64 v39; // rax
  unsigned int v40; // eax
  __int64 v41; // r9
  unsigned int v42; // r8d
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  _BYTE v48[20]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v49; // [rsp+54h] [rbp-34h]
  unsigned __int8 v50; // [rsp+90h] [rbp+8h]

  v3 = *((_QWORD *)this + 9);
  v4 = 0;
  v5 = 0LL;
  v6 = a2;
  if ( *(_DWORD *)(v3 + 80) )
  {
    do
    {
      v8 = *(CDesktopRenderTarget **)(*(_QWORD *)(v3 + 56) + 8 * v5);
      v9 = *(__int64 (__fastcall **)(CDesktopRenderTarget *, char))(*(_QWORD *)v8 + 160LL);
      if ( v9 == CDesktopRenderTarget::PostRender )
        v10 = CDesktopRenderTarget::PostRender(v8, v6);
      else
        v10 = v9(v8, v6);
      v11 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x110u);
      if ( !v4 || v4 >= 0 && v11 < 0 )
        v4 = v11;
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < *(_DWORD *)(v3 + 80) );
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x1D7u);
      return (unsigned int)v4;
    }
  }
  if ( !v6 )
  {
    LOBYTE(a3) = 0;
    v12 = 0;
    v50 = 0;
    if ( !*((_DWORD *)this + 116) )
    {
LABEL_12:
      v13 = *((_DWORD *)this + 160);
      v14 = 0;
      v15 = (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0;
      for ( i = 0LL; (!v14 || v15) && (unsigned int)i < v13; i = (unsigned int)(i + 1) )
      {
        v28 = *(CAnimation **)(8 * i + *((_QWORD *)this + 77));
        v29 = *(bool (__fastcall **)(CAnimation *__hidden))(*(_QWORD *)v28 + 8LL);
        if ( v29 == CAnimation::IsAnimate )
          IsAnimate = CAnimation::IsAnimate(v28);
        else
          IsAnimate = ((__int64 (__fastcall *)(CAnimation *, __int64, __int64))v29)(v28, a2, a3);
        if ( IsAnimate )
        {
          v14 = 1;
          if ( v15 )
          {
            v47 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(8 * i + *((_QWORD *)this + 77)) + 24LL))(*(_QWORD *)(8 * i + *((_QWORD *)this + 77)));
            if ( v47 )
            {
              ++*(_DWORD *)(v47 + 84);
              *((_BYTE *)this + 496) = 1;
            }
          }
        }
      }
      v17 = *((_QWORD *)this + 27);
      v18 = *(_DWORD *)(v17 + 264) || (*(_BYTE *)(v17 + 376) & 2) != 0 || *(_DWORD *)(v17 + 168);
      v19 = *((_QWORD *)this + 67);
      v20 = *(_QWORD *)(*((_QWORD *)this + 10) + 376LL);
      v21 = v19
         && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v19 + 24) + 56LL))(
              *(_QWORD *)(v19 + 24),
              a2,
              a3);
      if ( *((_BYTE *)this + 496) )
      {
        for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 82); j = (unsigned int)(j + 1) )
        {
          v32 = *(_DWORD **)(*((_QWORD *)this + 38) + 8 * j);
          if ( v32 )
          {
            v33 = v32[21];
            if ( v33 || v32[19] )
            {
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
                McTemplateU0qqxx(v33, a2, v32[4], v32[5], v33, v32[19]);
              dword_18026EDB0 += v32[21];
              dword_18026EDB4 += v32[19];
              v32[21] = 0;
              v32[19] = 0;
            }
          }
        }
        *((_BYTE *)this + 496) = 0;
      }
      v22 = v50;
      if ( v50 || v14 || v18 || v20 || v21 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          McTemplateU0qqqqq(v21, (unsigned int)&EVTDESC_SCHEDULE_COMPOSITIONPASS, v50, v14, v18, v20 != 0, v21);
          v22 = v50;
        }
        if ( v21 )
          v24 = 128;
        else
          v24 = 0;
        v25 = *((_QWORD *)this + 66);
        v26 = (v20 != 0 ? 0x40 : 0) | v24 | (v22 != 0 ? 0x100 : 0) | (v14 != 0 ? 0x10 : 0) | (32 * (unsigned int)v18);
        v27 = *(void (__fastcall **)(__int64, ULONG, unsigned int))(*(_QWORD *)v25 + 104LL);
        if ( v27 == CPartitionVerticalBlankScheduler::ScheduleCompositionPass )
          CPartitionVerticalBlankScheduler::ScheduleCompositionPass(v25, 0, v26);
        else
          v27(v25, 0LL, v26);
      }
      CHWDrawListEngineMetrics::s_cMegaRectPixelsSaved = 0;
      return (unsigned int)v4;
    }
    while ( 1 )
    {
      v34 = *((_QWORD *)this + 55) + 16LL * v12;
      v35 = *(_DWORD *)(v34 + 4);
      if ( v35 )
      {
        v36 = v35 - 1;
        if ( v36 )
        {
          if ( v36 == 1 )
          {
            v37 = *((_QWORD *)this + 44);
            if ( !v37
              || (v38 = *(_QWORD **)(v37 + 16), v39 = *(_QWORD *)(v34 + 8), v38[11] >= v39)
              || v38[7] > v39 && *(_QWORD *)((char *)v38 + 76) < v39 )
            {
              *(_DWORD *)v48 = 8;
              *(_OWORD *)&v48[4] = 0uLL;
              v49 = 0LL;
              *(_DWORD *)&v48[8] = *(_DWORD *)v34;
              CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)v48);
              *(_DWORD *)(v34 + 4) = 0;
              *(_QWORD *)(v34 + 8) = 0LL;
              v40 = *((_DWORD *)this + 116);
              *(_OWORD *)v48 = *(_OWORD *)v34;
              if ( v12 >= v40 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x193u);
              }
              else
              {
                v41 = *((_QWORD *)this + 55);
                v42 = v12;
                if ( v12 < v40 - 1 )
                {
                  do
                  {
                    a2 = v42 + 1;
                    v46 = 2LL * v42;
                    v42 = a2;
                    *(_OWORD *)(v41 + 8 * v46) = *(_OWORD *)(v41 + 16 * a2);
                  }
                  while ( (unsigned int)a2 < *((_DWORD *)this + 116) - 1 );
                }
                --*((_DWORD *)this + 116);
              }
              a3 = v50;
              if ( v12 )
                --v12;
              goto LABEL_68;
            }
          }
        }
        else
        {
          *(_DWORD *)(v34 + 4) = 2;
          v43 = *((_QWORD *)this + 44);
          if ( v43 )
          {
            v44 = *(_QWORD *)(v43 + 16);
            if ( *((_DWORD *)this + 86) == 1 )
              v45 = *(_QWORD *)(v44 + 88);
            else
              v45 = *(_QWORD *)(v44 + 76);
            *(_QWORD *)(v34 + 8) = v45;
            ++*(_QWORD *)(v34 + 8);
          }
        }
      }
      *(_OWORD *)v48 = *(_OWORD *)v34;
LABEL_68:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        McTemplateU0qqx(*(_DWORD *)v48, a2, *(_DWORD *)&v48[4], *(_DWORD *)v48, v48[8]);
        a3 = v50;
      }
      ++v12;
      LOBYTE(a3) = (*(_DWORD *)(v34 + 4) == 2) | a3;
      v50 = a3;
      if ( v12 >= *((_DWORD *)this + 116) )
        goto LABEL_12;
    }
  }
  return (unsigned int)v4;
}
