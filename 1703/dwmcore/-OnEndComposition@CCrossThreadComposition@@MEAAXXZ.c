/*
 * XREFs of ?OnEndComposition@CCrossThreadComposition@@MEAAXXZ @ 0x180035070
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800666B0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18005BB24 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXXZ @ 0x1800658C0 (-ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXXZ.c)
 *     ?IsAnimate@CAnimation@@UEAA_NPEA_N@Z @ 0x1800BC820 (-IsAnimate@CAnimation@@UEAA_NPEA_N@Z.c)
 *     ?EndOfFrame@CHwCallbackRendererEvents@@UEAAXPEAVCCounterManager@@@Z @ 0x1800C3B70 (-EndOfFrame@CHwCallbackRendererEvents@@UEAAXPEAVCCounterManager@@@Z.c)
 *     ?EndOfFrame@CWarpDrawListCacheEvents@@UEAAXPEAVCCounterManager@@@Z @ 0x1800C3B90 (-EndOfFrame@CWarpDrawListCacheEvents@@UEAAXPEAVCCounterManager@@@Z.c)
 *     ?EndOfFrame@CHwDrawListCacheEvents@@UEAAXPEAVCCounterManager@@@Z @ 0x1800C3BA0 (-EndOfFrame@CHwDrawListCacheEvents@@UEAAXPEAVCCounterManager@@@Z.c)
 *     ?EndOfFrame@CTessellatedPrimitivesEvents@@UEAAXPEAVCCounterManager@@@Z @ 0x1800C3BB0 (-EndOfFrame@CTessellatedPrimitivesEvents@@UEAAXPEAVCCounterManager@@@Z.c)
 *     ?EndOfFrame@CPrimitiveGroupEvents@@UEAAXPEAVCCounterManager@@@Z @ 0x1800C3BD0 (-EndOfFrame@CPrimitiveGroupEvents@@UEAAXPEAVCCounterManager@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_qqqqq @ 0x18013BD74 (Template_qqqqq.c)
 *     Template_qqx @ 0x18013FC64 (Template_qqx.c)
 *     Template_xxxx @ 0x180145A64 (Template_xxxx.c)
 */

void __fastcall CCrossThreadComposition::OnEndComposition(CCrossThreadComposition *this, unsigned int a2)
{
  unsigned __int8 v2; // r13
  unsigned int i; // edi
  unsigned int v5; // r14d
  unsigned __int8 v6; // si
  bool v7; // r15
  unsigned int j; // edi
  __int64 v9; // rax
  unsigned int v10; // ebp
  char v11; // di
  __int64 v12; // rcx
  __int64 v13; // r15
  unsigned __int8 v14; // r14
  CPartitionVerticalBlankScheduler *v15; // rcx
  void (*v16)(void); // rax
  CCounterManager *v17; // r14
  __int64 v18; // rsi
  CCounterManager *v19; // rdi
  const char **v20; // rbx
  CHwDrawListCacheEvents *v21; // rcx
  void (__fastcall *v22)(CHwCallbackRendererEvents *__hidden, struct CCounterManager *); // rax
  __int64 v23; // r12
  CAnimation *v24; // rcx
  bool (__fastcall *v25)(CAnimation *__hidden, bool *); // rax
  __int64 v26; // rsi
  int v27; // ecx
  int v28; // ecx
  __int64 v29; // rax
  _QWORD *v30; // rcx
  unsigned __int64 v31; // rax
  unsigned int v32; // eax
  __int64 v33; // r9
  unsigned int v34; // r8d
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned int v41; // edx
  _DWORD *v42; // r12
  int v43; // ecx
  _BYTE v44[20]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v45; // [rsp+54h] [rbp-34h]
  unsigned int k; // [rsp+90h] [rbp+8h] BYREF

  v2 = 0;
  for ( i = 0; i < *((_DWORD *)this + 128); ++i )
  {
    v26 = *((_QWORD *)this + 61) + 16LL * i;
    v27 = *(_DWORD *)(v26 + 4);
    if ( v27 )
    {
      v28 = v27 - 1;
      if ( v28 )
      {
        if ( v28 == 1 )
        {
          v29 = *((_QWORD *)this + 49);
          if ( !v29
            || (v30 = *(_QWORD **)(v29 + 16), v31 = *(_QWORD *)(v26 + 8), v30[11] >= v31)
            || v30[7] > v31 && *(_QWORD *)((char *)v30 + 76) < v31 )
          {
            *(_DWORD *)v44 = 8;
            *(_OWORD *)&v44[4] = 0uLL;
            v45 = 0LL;
            *(_DWORD *)&v44[8] = *(_DWORD *)v26;
            CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)v44);
            *(_DWORD *)(v26 + 4) = 0;
            *(_QWORD *)(v26 + 8) = 0LL;
            v32 = *((_DWORD *)this + 128);
            *(_OWORD *)v44 = *(_OWORD *)v26;
            if ( i >= v32 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x193u);
            }
            else
            {
              v33 = *((_QWORD *)this + 61);
              v34 = i;
              if ( i < v32 - 1 )
              {
                do
                {
                  a2 = v34 + 1;
                  v38 = 2LL * v34;
                  v39 = 2LL * (v34 + 1);
                  v34 = a2;
                  *(_OWORD *)(v33 + 8 * v38) = *(_OWORD *)(v33 + 8 * v39);
                }
                while ( a2 < *((_DWORD *)this + 128) - 1 );
              }
              --*((_DWORD *)this + 128);
            }
            if ( i )
              --i;
            goto LABEL_62;
          }
        }
      }
      else
      {
        *(_DWORD *)(v26 + 4) = 2;
        v35 = *((_QWORD *)this + 49);
        if ( v35 )
        {
          v36 = *(_QWORD *)(v35 + 16);
          if ( *((_DWORD *)this + 96) == 1 )
            v37 = *(_QWORD *)(v36 + 88);
          else
            v37 = *(_QWORD *)(v36 + 76);
          *(_QWORD *)(v26 + 8) = v37;
          ++*(_QWORD *)(v26 + 8);
        }
      }
    }
    *(_OWORD *)v44 = *(_OWORD *)v26;
LABEL_62:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_qqx(*(_DWORD *)v44, a2, *(_DWORD *)&v44[4], *(_DWORD *)v44, v44[8]);
    v2 |= *(_DWORD *)(v26 + 4) == 2;
  }
  v5 = *((_DWORD *)this + 168);
  v6 = 0;
  v7 = (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0;
  for ( j = 0; (!v6 || v7) && j < v5; ++j )
  {
    LOBYTE(k) = 0;
    v23 = 8LL * j;
    v24 = *(CAnimation **)(v23 + *((_QWORD *)this + 81));
    v25 = *(bool (__fastcall **)(CAnimation *__hidden, bool *))(*(_QWORD *)v24 + 8LL);
    if ( v25 == CAnimation::IsAnimate )
      CAnimation::IsAnimate(v24, (bool *)&k);
    else
      v25(v24, (bool *)&k);
    if ( (_BYTE)k )
    {
      v6 = 1;
      if ( v7 )
      {
        v40 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v23 + *((_QWORD *)this + 81)) + 24LL))(*(_QWORD *)(v23 + *((_QWORD *)this + 81)));
        if ( v40 )
        {
          ++*(_DWORD *)(v40 + 76);
          *((_BYTE *)this + 544) = 1;
        }
      }
    }
  }
  v9 = *((_QWORD *)this + 30);
  v10 = 0;
  v11 = *(_DWORD *)(v9 + 264) || (*(_BYTE *)(v9 + 376) & 2) != 0 || *(_DWORD *)(v9 + 168);
  v12 = *((_QWORD *)this + 71);
  v13 = *(_QWORD *)(*((_QWORD *)this + 5) + 376LL);
  v14 = v12 && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 24) + 56LL))(*(_QWORD *)(v12 + 24));
  if ( *((_BYTE *)this + 544) )
  {
    v41 = 0;
    for ( k = 0; v41 < *((_DWORD *)this + 92); k = v41 )
    {
      v42 = *(_DWORD **)(*((_QWORD *)this + 43) + 8LL * v41);
      if ( v42 )
      {
        v43 = v42[19];
        if ( v43 || v42[17] )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
          {
            Template_xxxx(v43, (unsigned int)&CHANNELANIMATIONS_ACTIVE, v42[4], v42[5], v43, v42[17]);
            v41 = k;
          }
          v42[19] = 0;
          v42[17] = 0;
        }
      }
      ++v41;
    }
    *((_BYTE *)this + 544) = 0;
  }
  if ( v2 || v6 || v11 || v13 || v14 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qqqqq(v14, (unsigned int)&EVTDESC_SCHEDULE_COMPOSITIONPASS, v2, v6, v11, v13 != 0, v14);
    v15 = (CPartitionVerticalBlankScheduler *)*((_QWORD *)this + 70);
    v16 = *(void (**)(void))(*(_QWORD *)v15 + 104LL);
    if ( (char *)v16 == (char *)CPartitionVerticalBlankScheduler::ScheduleCompositionPass )
      CPartitionVerticalBlankScheduler::ScheduleCompositionPass(v15);
    else
      v16();
  }
  v17 = CCounterManager::s_pGlobalPerFrameCounterManager;
  v18 = 21LL;
  v19 = CCounterManager::s_pGlobalPerFrameCounterManager;
  CHWDrawListEngineMetrics::s_cMegaRectPixelsSaved = 0;
  v20 = (const char **)((char *)CCounterManager::s_pGlobalPerFrameCounterManager + 88);
  do
  {
    if ( *((_BYTE *)v20 + 8) )
      DbgPrintEx(0x65u, 0, "EndFrameStats %s %d\n", *v20, *(_DWORD *)v19);
    v19 = (CCounterManager *)((char *)v19 + 4);
    v20 += 2;
    --v18;
  }
  while ( v18 );
  if ( *((_DWORD *)v17 + 112) )
  {
    do
    {
      v21 = *(CHwDrawListCacheEvents **)(*((_QWORD *)v17 + 53) + 8LL * v10);
      v22 = **(void (__fastcall ***)(CHwCallbackRendererEvents *__hidden, struct CCounterManager *))v21;
      if ( v22 == CHwDrawListCacheEvents::EndOfFrame )
      {
        CHwDrawListCacheEvents::EndOfFrame(v21, v17);
      }
      else if ( v22 == CTessellatedPrimitivesEvents::EndOfFrame )
      {
        CTessellatedPrimitivesEvents::EndOfFrame(v21, v17);
      }
      else if ( v22 == CWarpDrawListCacheEvents::EndOfFrame )
      {
        CWarpDrawListCacheEvents::EndOfFrame(v21, v17);
      }
      else if ( v22 == CPrimitiveGroupEvents::EndOfFrame )
      {
        CPrimitiveGroupEvents::EndOfFrame(v21, v17);
      }
      else if ( v22 == CHwCallbackRendererEvents::EndOfFrame )
      {
        CHwCallbackRendererEvents::EndOfFrame(v21, v17);
      }
      else
      {
        v22(v21, v17);
      }
      ++v10;
    }
    while ( v10 < *((_DWORD *)v17 + 112) );
  }
}
