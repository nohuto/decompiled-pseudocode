/*
 * XREFs of ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C005E950
 * Callers:
 *     ?OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C0062CA0 (-OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_O.c)
 * Callees:
 *     VidSchSubmitDeviceCommand @ 0x1C00108F0 (VidSchSubmitDeviceCommand.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C0010EC0 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     Template_pc @ 0x1C001F53C (Template_pc.c)
 *     VidSchFlushDevice @ 0x1C004EE80 (VidSchFlushDevice.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OfferOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        enum _D3DKMT_OFFER_PRIORITY a3,
        struct _D3DKMT_OFFER_FLAGS a4)
{
  char v4; // bl
  __int64 v5; // rsi
  struct VIDMM_ALLOC *v6; // r14
  __int64 v8; // rdi
  unsigned int v9; // r9d
  unsigned int v10; // r15d
  __int64 v11; // rsi
  char v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  signed __int16 v20; // bp
  __int64 v21; // rsi
  bool v22; // zf
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  _QWORD *v27; // rax
  VIDMM_GLOBAL *v28; // rdx
  VIDMM_GLOBAL **v29; // r8
  bool v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD *v37; // r14
  _QWORD *v38; // rbx
  _QWORD *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rbp
  int v42; // eax
  __int64 v43; // r12
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // r9d
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  int v59; // r9d
  __int64 *v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 **v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  int v66; // r9d
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // r8
  __int64 v71; // r9
  _QWORD *v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  unsigned __int8 v76; // [rsp+20h] [rbp-D8h]
  bool v77; // [rsp+30h] [rbp-C8h]
  _QWORD v78[3]; // [rsp+38h] [rbp-C0h] BYREF
  _QWORD v79[21]; // [rsp+50h] [rbp-A8h] BYREF

  v4 = (char)a4.0;
  v5 = a3;
  v6 = a2;
  v8 = **(_QWORD **)a2;
  v9 = **(_DWORD **)(v8 + 520);
  if ( (v9 & 0x40000000) != 0 || v9 >= 0x80000000 )
  {
    v75 = WdLogNewEntry5_WdWarning(this, a2);
    *(_QWORD *)(v75 + 24) = v6;
    WdLogEvent5_WdWarning(v75);
    return 3221225485LL;
  }
  if ( *(_DWORD *)(v8 + 344) )
  {
    if ( (*((_BYTE *)this + 40872) & 2) == 0 )
    {
      v49 = WdLogNewEntry5_WdWarning(this, a2);
      *(_QWORD *)(v49 + 24) = v6;
      WdLogEvent5_WdWarning(v49);
      if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
        return 3221225485LL;
    }
  }
  if ( (_DWORD)v5 != 2 )
  {
    switch ( (_DWORD)v5 )
    {
      case 1:
        *(_DWORD *)(v8 + 464) = 1;
        goto LABEL_6;
      case 3:
        *(_DWORD *)(v8 + 464) = 3;
        goto LABEL_6;
      case 4:
        if ( *(_DWORD *)(v8 + 408) >= 0xA0000000 )
        {
          *(_DWORD *)(v8 + 464) = 4;
          goto LABEL_6;
        }
        goto LABEL_5;
    }
    v50 = WdLogNewEntry5_WdWarning((unsigned int)(v5 - 3), 1LL);
    *(_QWORD *)(v50 + 24) = v6;
    *(_QWORD *)(v50 + 32) = v5;
    WdLogEvent5_WdWarning(v50);
    return 3221225485LL;
  }
LABEL_5:
  *(_DWORD *)(v8 + 464) = 2;
LABEL_6:
  v10 = 0;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v6 + 12) + 8LL));
  v11 = *(_QWORD *)(v8 + 320);
  v12 = 0;
  v77 = 0;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v11 + 8) == KeGetCurrentThread() )
  {
    if ( *(int *)(v11 + 24) <= 0 )
    {
      v51 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v51 + 24) = 351LL;
      WdLogEvent5_WdAssertion(v51);
    }
    ++*(_DWORD *)(v11 + 24);
    v18 = 1LL;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v11 + 16, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v52 = *(_DWORD *)(v11 + 28);
        if ( v52 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v17, &EventBlockThread, v15, v52);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v11);
      ExAcquirePushLockExclusiveEx(v11 + 16, 0LL);
    }
    if ( *(_QWORD *)(v11 + 8) )
    {
      v53 = WdLogNewEntry5_WdAssertion(v17, v16);
      *(_QWORD *)(v53 + 24) = 375LL;
      WdLogEvent5_WdAssertion(v53);
    }
    if ( *(_DWORD *)(v11 + 24) )
    {
      v54 = WdLogNewEntry5_WdAssertion(v17, v16);
      *(_QWORD *)(v54 + 24) = 376LL;
      WdLogEvent5_WdAssertion(v54);
    }
    v18 = 1LL;
    *(_QWORD *)(v11 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v11 + 24) = 1;
  }
  v19 = *((_QWORD *)v6 + 12);
  v20 = _InterlockedCompareExchange16((volatile signed __int16 *)(v19 + 4), 1, 0);
  if ( !v20 )
  {
    if ( ((v4 & 2) != 0 || dword_1C003C3FC) && (*((_BYTE *)this + 40872) & 2) == 0 )
    {
      v55 = *(_QWORD *)(v8 + 104);
      v12 = 1;
      *(_DWORD *)(v8 + 92) |= 2u;
      v18 = *(_QWORD *)(*(_QWORD *)(v55 + 8) + 32LL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 296), *(_QWORD *)(v8 + 8));
      v19 = *(_QWORD *)(*(_QWORD *)(v8 + 104) + 8LL);
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v19 + 32) + 288LL));
    }
    else
    {
      v12 = 0;
    }
  }
  v21 = *(_QWORD *)(v8 + 320);
  if ( *(struct _KTHREAD **)(v21 + 8) != KeGetCurrentThread() )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v18, v15);
    v56[3] = 275LL;
    v56[4] = 4LL;
    v56[5] = v21;
    v56[6] = 0LL;
    v56[7] = 0LL;
    WdLogEvent5_WdCriticalError(v56);
  }
  if ( *(int *)(v21 + 24) <= 0 )
  {
    v57 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v57 + 24) = 395LL;
    WdLogEvent5_WdAssertion(v57);
  }
  v22 = (*(_DWORD *)(v21 + 24))-- == 1;
  if ( v22 )
  {
    *(_QWORD *)(v21 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v21 + 16, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( this != (VIDMM_GLOBAL *)-39912LL && *((struct _KTHREAD **)this + 4990) == KeGetCurrentThread() )
  {
    v58 = WdLogNewEntry5_WdAssertion(v24, v23);
    *(_QWORD *)(v58 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v58);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 39912, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v59 = *((_DWORD *)this + 9982);
      if ( v59 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v25, &EventBlockThread, v26, v59);
    }
    ExAcquirePushLockExclusiveEx((char *)this + 39912, 0LL);
  }
  *((_QWORD *)this + 4990) = KeGetCurrentThread();
  if ( !v20 )
  {
    v27 = (_QWORD *)((char *)this + 39896);
    v28 = (VIDMM_GLOBAL *)(v8 + 432);
    v29 = (VIDMM_GLOBAL **)*((_QWORD *)this + 4988);
    v30 = *v27 == (_QWORD)v27;
    v77 = v30;
    if ( *v29 != (VIDMM_GLOBAL *)((char *)this + 39896) )
      __fastfail(3u);
    *(_QWORD *)v28 = v27;
    *(_QWORD *)(v8 + 440) = v29;
    *v29 = v28;
    *((_QWORD *)this + 4988) = v28;
    *(_QWORD *)(v8 + 472) = *((_QWORD *)this + 576);
    if ( v12 )
    {
      v60 = (__int64 *)(v8 + 448);
      v61 = *(unsigned int *)(*((_QWORD *)this + 3) + 200LL);
      v62 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 104) + 8LL) + 16LL) + 8 * v61) + 384LL;
      v63 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 104) + 8LL) + 16LL) + 8 * v61) + 392LL);
      if ( *v63 != (__int64 *)v62 )
        __fastfail(3u);
      *v60 = v62;
      *(_QWORD *)(v8 + 456) = v63;
      *v63 = v60;
      *(_QWORD *)(v62 + 8) = v60;
      v77 = v30;
    }
  }
  *((_QWORD *)this + 4990) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 39912, 0LL);
  KeLeaveCriticalRegion();
  if ( v20 )
  {
    v74 = WdLogNewEntry5_WdWarning(v32, v31);
    *(_QWORD *)(v74 + 24) = v6;
    *(_QWORD *)(v74 + 32) = *(unsigned __int16 *)(*((_QWORD *)v6 + 12) + 4LL);
    WdLogEvent5_WdWarning(v74);
    v10 = DxgkVidMmAllowFailOnOfferReclaimErrors() != 0 ? 0xC000000D : 0;
  }
  else
  {
    if ( (**(_DWORD **)(v8 + 520) & 0x20000000) != 0 )
    {
      if ( (v4 & 2) != 0 || dword_1C003C3FC )
      {
        v64 = *(_QWORD *)(v8 + 8);
        ++*((_DWORD *)this + 1950);
        *((_QWORD *)this + 976) += v64;
      }
      v48 = *(_QWORD *)(v8 + 8);
      ++*((_DWORD *)this + 1946);
      *((_QWORD *)this + 974) += v48;
    }
    *((_QWORD *)this + 972) += *(_QWORD *)(v8 + 8);
    ++*((_DWORD *)this + 1942);
    if ( (v4 & 1) == 0 )
    {
      memset(v79, 0, 0x80uLL);
      v33 = *(_QWORD *)(v8 + 320);
      v79[3] = VIDMM_GLOBAL::VidMmiOfferAllocationCallback;
      LODWORD(v79[5]) = 3;
      LODWORD(v79[0]) = 1;
      KeEnterCriticalRegion();
      if ( *(struct _KTHREAD **)(v33 + 8) == KeGetCurrentThread() )
      {
        if ( *(int *)(v33 + 24) <= 0 )
        {
          v65 = WdLogNewEntry5_WdAssertion(v35, v34);
          *(_QWORD *)(v65 + 24) = 351LL;
          WdLogEvent5_WdAssertion(v65);
        }
        ++*(_DWORD *)(v33 + 24);
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v33 + 16, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v66 = *(_DWORD *)(v33 + 28);
            if ( v66 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_q(v35, &EventBlockThread, v36, v66);
          }
          _InterlockedIncrement64((volatile signed __int64 *)v33);
          ExAcquirePushLockExclusiveEx(v33 + 16, 0LL);
        }
        if ( *(_QWORD *)(v33 + 8) )
        {
          v67 = WdLogNewEntry5_WdAssertion(v35, v34);
          *(_QWORD *)(v67 + 24) = 375LL;
          WdLogEvent5_WdAssertion(v67);
        }
        if ( *(_DWORD *)(v33 + 24) )
        {
          v68 = WdLogNewEntry5_WdAssertion(v35, v34);
          *(_QWORD *)(v68 + 24) = 376LL;
          WdLogEvent5_WdAssertion(v68);
        }
        *(_QWORD *)(v33 + 8) = KeGetCurrentThread();
        *(_DWORD *)(v33 + 24) = 1;
      }
      v37 = (_QWORD *)(v8 + 296);
      v38 = *(_QWORD **)(v8 + 296);
      if ( v38 != (_QWORD *)(v8 + 296) )
      {
        do
        {
          v39 = (_QWORD *)*(v38 - 2);
          if ( v39 != v38 - 2 )
          {
            do
            {
              v35 = (__int64)(v39 - 5);
              if ( (*(_DWORD *)(v39 - 1) & 1) == 0 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v35 + 96) + 8LL));
                v40 = *(_QWORD *)(v35 + 8);
                v79[6] = v39 - 5;
                v41 = *(_QWORD *)(v40 + 32);
                v42 = VidSchSubmitDeviceCommand(v41, (__int64)v79);
                v43 = v42;
                if ( v42 < 0 )
                {
                  v69 = WdLogNewEntry5_WdWarning(v35, v34);
                  *(_QWORD *)(v69 + 24) = v43;
                  WdLogEvent5_WdWarning(v69);
                  v78[0] = 5LL;
                  v78[1] = 0LL;
                  VidSchFlushDevice(v41, (int *)v78, v70, v71);
                  LODWORD(v79[0]) = 0;
                  VidSchSubmitDeviceCommand(v41, (__int64)v79);
                }
              }
              v39 = (_QWORD *)*v39;
            }
            while ( v39 != v38 - 2 );
            v37 = (_QWORD *)(v8 + 296);
          }
          v38 = (_QWORD *)*v38;
        }
        while ( v38 != v37 );
        v10 = 0;
      }
      v44 = *(_QWORD *)(v8 + 320);
      if ( *(struct _KTHREAD **)(v44 + 8) != KeGetCurrentThread() )
      {
        v72 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, v34, v36);
        v72[3] = 275LL;
        v72[4] = 4LL;
        v72[5] = v44;
        v72[6] = 0LL;
        v72[7] = 0LL;
        WdLogEvent5_WdCriticalError(v72);
      }
      if ( *(int *)(v44 + 24) <= 0 )
      {
        v73 = WdLogNewEntry5_WdAssertion(v35, v34);
        *(_QWORD *)(v73 + 24) = 395LL;
        WdLogEvent5_WdAssertion(v73);
      }
      v22 = (*(_DWORD *)(v44 + 24))-- == 1;
      if ( v22 )
      {
        *(_QWORD *)(v44 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v44 + 16, 0LL);
      }
      KeLeaveCriticalRegion();
      v6 = a2;
    }
    if ( v77 )
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)this + 152LL), 0, 0);
  }
  VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v6);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v76 = *(_BYTE *)(v8 + 464);
      Template_pc(v76, v45, v46, v6, v76);
    }
  }
  return v10;
}
