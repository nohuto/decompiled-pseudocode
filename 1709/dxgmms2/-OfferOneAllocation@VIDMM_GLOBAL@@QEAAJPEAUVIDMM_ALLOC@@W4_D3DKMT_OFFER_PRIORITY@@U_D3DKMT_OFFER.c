/*
 * XREFs of ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C00616A0
 * Callers:
 *     ?OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C0066008 (-OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_O.c)
 * Callees:
 *     VidSchSubmitDeviceCommand @ 0x1C00111A0 (VidSchSubmitDeviceCommand.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C0011840 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     McTemplateK0pc @ 0x1C0021618 (McTemplateK0pc.c)
 *     VidSchFlushDevice @ 0x1C0070780 (VidSchFlushDevice.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OfferOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        enum _D3DKMT_OFFER_PRIORITY a3,
        struct _D3DKMT_OFFER_FLAGS a4)
{
  char v4; // bl
  __int64 v5; // rsi
  struct VIDMM_ALLOC *v6; // r15
  __int64 v8; // rdi
  int v9; // r9d
  unsigned int v10; // r14d
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
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  _QWORD *v36; // r15
  _QWORD *v37; // rbx
  _QWORD *v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rbp
  int v41; // eax
  __int64 v42; // r12
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v47; // rax
  int v48; // r9d
  int v49; // r9d
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 *v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 **v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  int v65; // r9d
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned __int8 v73; // [rsp+20h] [rbp-D8h]
  bool v74; // [rsp+30h] [rbp-C8h]
  _QWORD v75[21]; // [rsp+50h] [rbp-A8h] BYREF

  v4 = (char)a4.0;
  v5 = a3;
  v6 = a2;
  v8 = **(_QWORD **)a2;
  v9 = **(_DWORD **)(v8 + 504);
  if ( (v9 & 0x40000000) != 0 || v9 < 0 )
  {
    v72 = WdLogNewEntry5_WdWarning(this);
    *(_QWORD *)(v72 + 24) = v6;
    WdLogEvent5_WdWarning(v72);
    return 3221225485LL;
  }
  if ( *(_DWORD *)(v8 + 344) )
  {
    if ( (*((_BYTE *)this + 40872) & 2) == 0 )
    {
      v50 = WdLogNewEntry5_WdWarning(this);
      *(_QWORD *)(v50 + 24) = v6;
      WdLogEvent5_WdWarning(v50);
      if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
        return 3221225485LL;
    }
  }
  if ( (_DWORD)v5 != 2 )
  {
    switch ( (_DWORD)v5 )
    {
      case 1:
        *(_DWORD *)(v8 + 432) = 1;
        goto LABEL_6;
      case 3:
        *(_DWORD *)(v8 + 432) = 3;
        goto LABEL_6;
      case 4:
        if ( *(_DWORD *)(v8 + 376) >= 0xA0000000 )
        {
          *(_DWORD *)(v8 + 432) = 4;
          goto LABEL_6;
        }
        goto LABEL_5;
    }
    v51 = WdLogNewEntry5_WdWarning((unsigned int)(v5 - 3));
    *(_QWORD *)(v51 + 24) = v6;
    *(_QWORD *)(v51 + 32) = v5;
    WdLogEvent5_WdWarning(v51);
    return 3221225485LL;
  }
LABEL_5:
  *(_DWORD *)(v8 + 432) = 2;
LABEL_6:
  v10 = 0;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v6 + 12) + 8LL));
  v11 = *(_QWORD *)(v8 + 320);
  v12 = 0;
  v74 = 0;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v11 + 8) == KeGetCurrentThread() )
  {
    if ( *(int *)(v11 + 24) <= 0 )
    {
      v52 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v52 + 24) = 362LL;
      WdLogEvent5_WdAssertion(v52);
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
        v49 = *(_DWORD *)(v11 + 28);
        if ( v49 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v17, (__int64)&EventBlockThread, v15, v49);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v11);
      ExAcquirePushLockExclusiveEx(v11 + 16, 0LL);
    }
    if ( *(_QWORD *)(v11 + 8) )
    {
      v53 = WdLogNewEntry5_WdAssertion(v17, v16);
      *(_QWORD *)(v53 + 24) = 386LL;
      WdLogEvent5_WdAssertion(v53);
    }
    if ( *(_DWORD *)(v11 + 24) )
    {
      v54 = WdLogNewEntry5_WdAssertion(v17, v16);
      *(_QWORD *)(v54 + 24) = 387LL;
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
    if ( ((v4 & 2) != 0 || dword_1C0040434) && (*((_BYTE *)this + 40872) & 2) == 0 )
    {
      v55 = *(_QWORD *)(v8 + 104);
      v12 = 1;
      *(_DWORD *)(v8 + 92) |= 2u;
      v18 = *(_QWORD *)(*(_QWORD *)(v55 + 8) + 32LL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 336), *(_QWORD *)(v8 + 8));
      v19 = *(_QWORD *)(*(_QWORD *)(v8 + 104) + 8LL);
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v19 + 32) + 328LL));
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
    *(_QWORD *)(v57 + 24) = 406LL;
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
    *(_QWORD *)(v58 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v58);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 39912, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v48 = *((_DWORD *)this + 9982);
      if ( v48 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v25, (__int64)&EventBlockThread, v26, v48);
    }
    ExAcquirePushLockExclusiveEx((char *)this + 39912, 0LL);
  }
  *((_QWORD *)this + 4990) = KeGetCurrentThread();
  if ( !v20 )
  {
    v27 = (_QWORD *)((char *)this + 39896);
    v28 = (VIDMM_GLOBAL *)(v8 + 400);
    v29 = (VIDMM_GLOBAL **)*((_QWORD *)this + 4988);
    v30 = *v27 == (_QWORD)v27;
    v74 = v30;
    if ( *v29 != (VIDMM_GLOBAL *)((char *)this + 39896) )
      __fastfail(3u);
    *(_QWORD *)v28 = v27;
    *(_QWORD *)(v8 + 408) = v29;
    *v29 = v28;
    *((_QWORD *)this + 4988) = v28;
    *(_QWORD *)(v8 + 440) = *((_QWORD *)this + 576);
    if ( v12 )
    {
      v59 = (__int64 *)(v8 + 416);
      v60 = *(unsigned int *)(*((_QWORD *)this + 3) + 200LL);
      v61 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 104) + 8LL) + 16LL) + 8 * v60) + 416LL;
      v62 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 104) + 8LL) + 16LL) + 8 * v60) + 424LL);
      if ( *v62 != (__int64 *)v61 )
        __fastfail(3u);
      *v59 = v61;
      *(_QWORD *)(v8 + 424) = v62;
      *v62 = v59;
      *(_QWORD *)(v61 + 8) = v59;
      v74 = v30;
    }
  }
  *((_QWORD *)this + 4990) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 39912, 0LL);
  KeLeaveCriticalRegion();
  if ( v20 )
  {
    v71 = WdLogNewEntry5_WdWarning(v31);
    *(_QWORD *)(v71 + 24) = v6;
    *(_QWORD *)(v71 + 32) = *(unsigned __int16 *)(*((_QWORD *)v6 + 12) + 4LL);
    WdLogEvent5_WdWarning(v71);
    v10 = DxgkVidMmAllowFailOnOfferReclaimErrors() != 0 ? 0xC000000D : 0;
  }
  else
  {
    if ( (**(_DWORD **)(v8 + 504) & 0x20000000) != 0 )
    {
      if ( (v4 & 2) != 0 || dword_1C0040434 )
      {
        v63 = *(_QWORD *)(v8 + 8);
        ++*((_DWORD *)this + 1950);
        *((_QWORD *)this + 976) += v63;
      }
      v47 = *(_QWORD *)(v8 + 8);
      ++*((_DWORD *)this + 1946);
      *((_QWORD *)this + 974) += v47;
    }
    *((_QWORD *)this + 972) += *(_QWORD *)(v8 + 8);
    ++*((_DWORD *)this + 1942);
    if ( (v4 & 1) == 0 )
    {
      memset(v75, 0, 0x80uLL);
      v32 = *(_QWORD *)(v8 + 320);
      v75[3] = VIDMM_GLOBAL::VidMmiOfferAllocationCallback;
      LODWORD(v75[5]) = 3;
      LODWORD(v75[0]) = 1;
      KeEnterCriticalRegion();
      if ( *(struct _KTHREAD **)(v32 + 8) == KeGetCurrentThread() )
      {
        if ( *(int *)(v32 + 24) <= 0 )
        {
          v64 = WdLogNewEntry5_WdAssertion(v34, v33);
          *(_QWORD *)(v64 + 24) = 362LL;
          WdLogEvent5_WdAssertion(v64);
        }
        ++*(_DWORD *)(v32 + 24);
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v32 + 16, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v65 = *(_DWORD *)(v32 + 28);
            if ( v65 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v34, (__int64)&EventBlockThread, v35, v65);
          }
          _InterlockedIncrement64((volatile signed __int64 *)v32);
          ExAcquirePushLockExclusiveEx(v32 + 16, 0LL);
        }
        if ( *(_QWORD *)(v32 + 8) )
        {
          v66 = WdLogNewEntry5_WdAssertion(v34, v33);
          *(_QWORD *)(v66 + 24) = 386LL;
          WdLogEvent5_WdAssertion(v66);
        }
        if ( *(_DWORD *)(v32 + 24) )
        {
          v67 = WdLogNewEntry5_WdAssertion(v34, v33);
          *(_QWORD *)(v67 + 24) = 387LL;
          WdLogEvent5_WdAssertion(v67);
        }
        *(_QWORD *)(v32 + 8) = KeGetCurrentThread();
        *(_DWORD *)(v32 + 24) = 1;
      }
      v36 = (_QWORD *)(v8 + 296);
      v37 = *(_QWORD **)(v8 + 296);
      if ( v37 != (_QWORD *)(v8 + 296) )
      {
        do
        {
          v38 = (_QWORD *)*(v37 - 2);
          if ( v38 != v37 - 2 )
          {
            do
            {
              v34 = (__int64)(v38 - 5);
              if ( (*(_DWORD *)(v38 - 1) & 1) == 0 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v34 + 96) + 8LL));
                v39 = *(_QWORD *)(v34 + 8);
                v75[6] = v38 - 5;
                v40 = *(_QWORD *)(v39 + 32);
                v41 = VidSchSubmitDeviceCommand(v40, (__int64)v75);
                v42 = v41;
                if ( v41 < 0 )
                {
                  v68 = WdLogNewEntry5_WdWarning(v34);
                  *(_QWORD *)(v68 + 24) = v42;
                  WdLogEvent5_WdWarning(v68);
                  VidSchFlushDevice(v40);
                  LODWORD(v75[0]) = 0;
                  VidSchSubmitDeviceCommand(v40, (__int64)v75);
                }
              }
              v38 = (_QWORD *)*v38;
            }
            while ( v38 != v37 - 2 );
            v36 = (_QWORD *)(v8 + 296);
          }
          v37 = (_QWORD *)*v37;
        }
        while ( v37 != v36 );
        v10 = 0;
      }
      v43 = *(_QWORD *)(v8 + 320);
      if ( *(struct _KTHREAD **)(v43 + 8) != KeGetCurrentThread() )
      {
        v69 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v33, v35);
        v69[3] = 275LL;
        v69[4] = 4LL;
        v69[5] = v43;
        v69[6] = 0LL;
        v69[7] = 0LL;
        WdLogEvent5_WdCriticalError(v69);
      }
      if ( *(int *)(v43 + 24) <= 0 )
      {
        v70 = WdLogNewEntry5_WdAssertion(v34, v33);
        *(_QWORD *)(v70 + 24) = 406LL;
        WdLogEvent5_WdAssertion(v70);
      }
      v22 = (*(_DWORD *)(v43 + 24))-- == 1;
      if ( v22 )
      {
        *(_QWORD *)(v43 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v43 + 16, 0LL);
      }
      KeLeaveCriticalRegion();
      v6 = a2;
    }
    if ( v74 )
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)this + 152LL), 0, 0);
  }
  VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v6);
  if ( bTracingEnabled )
  {
    if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v73 = *(_BYTE *)(v8 + 432);
      McTemplateK0pc(v73, v44, v45, v6, v73);
    }
  }
  return v10;
}
