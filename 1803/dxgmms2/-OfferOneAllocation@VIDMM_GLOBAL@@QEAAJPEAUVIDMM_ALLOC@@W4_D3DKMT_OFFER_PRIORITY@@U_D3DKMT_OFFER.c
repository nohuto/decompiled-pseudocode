/*
 * XREFs of ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C0065A40
 * Callers:
 *     ?OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C006A468 (-OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_O.c)
 * Callees:
 *     VidSchSubmitDeviceCommand @ 0x1C00012F0 (VidSchSubmitDeviceCommand.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C00027D0 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     McTemplateK0pc @ 0x1C0023F64 (McTemplateK0pc.c)
 *     VidSchFlushDevice @ 0x1C0078E70 (VidSchFlushDevice.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OfferOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        enum _D3DKMT_OFFER_PRIORITY a3,
        struct _D3DKMT_OFFER_FLAGS a4)
{
  char v4; // bl
  __int64 v5; // rdi
  struct VIDMM_ALLOC *v6; // r15
  __int64 v8; // rsi
  int v9; // r9d
  int v10; // r14d
  int v11; // ecx
  unsigned int v12; // r12d
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  signed __int16 v20; // bp
  __int64 v21; // rdi
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // rax
  VIDMM_GLOBAL *v29; // rdx
  VIDMM_GLOBAL **v30; // r8
  bool v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  _QWORD *i; // rdi
  _QWORD *j; // rbx
  __int64 v40; // rax
  __int64 v41; // rbp
  int v42; // eax
  __int64 v43; // r12
  __int64 v44; // rbx
  int v45; // eax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v50; // rax
  int v51; // r9d
  int v52; // r9d
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 *v63; // r8
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 **v66; // rax
  __int64 v67; // rax
  int v68; // r14d
  __int64 v69; // rax
  int v70; // r9d
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // r8
  _QWORD *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  unsigned __int8 v79; // [rsp+20h] [rbp-D8h]
  char v80; // [rsp+30h] [rbp-C8h]
  bool v81; // [rsp+31h] [rbp-C7h]
  _QWORD v82[21]; // [rsp+50h] [rbp-A8h] BYREF

  v4 = (char)a4.0;
  v5 = a3;
  v6 = a2;
  v8 = **(_QWORD **)a2;
  v9 = **(_DWORD **)(v8 + 504);
  if ( (v9 & 0x40000000) != 0 || v9 < 0 )
  {
    v78 = WdLogNewEntry5_WdWarning(this, a2);
    *(_QWORD *)(v78 + 24) = v6;
    WdLogEvent5_WdWarning(v78);
    return 3221225485LL;
  }
  if ( *(_DWORD *)(v8 + 344) )
  {
    if ( (*((_BYTE *)this + 41448) & 4) == 0 )
    {
      v53 = WdLogNewEntry5_WdWarning(this, a2);
      *(_QWORD *)(v53 + 24) = v6;
      WdLogEvent5_WdWarning(v53);
      if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
        return 3221225485LL;
    }
  }
  v10 = 1;
  switch ( (_DWORD)v5 )
  {
    case 2:
      v11 = 2;
      break;
    case 1:
      v11 = 1;
      break;
    case 3:
      v11 = 3;
      break;
    case 4:
      v11 = 4;
      if ( *(_DWORD *)(v8 + 376) < 0xA0000000 )
        v11 = 2;
      break;
    default:
      v54 = WdLogNewEntry5_WdWarning((unsigned int)(v5 - 3), a2);
      *(_QWORD *)(v54 + 24) = v6;
      *(_QWORD *)(v54 + 32) = v5;
      WdLogEvent5_WdWarning(v54);
      return 3221225485LL;
  }
  v12 = 0;
  *(_DWORD *)(v8 + 432) = v11;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v6 + 12) + 8LL));
  v13 = *(_QWORD *)(v8 + 320);
  v81 = 0;
  v80 = 0;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v13 + 8) == KeGetCurrentThread() )
  {
    v55 = *(_DWORD *)(v13 + 24);
    if ( v55 <= 0 )
    {
      v56 = WdLogNewEntry5_WdAssertion(v15, v14);
      *(_QWORD *)(v56 + 24) = 406LL;
      WdLogEvent5_WdAssertion(v56);
      v55 = *(_DWORD *)(v13 + 24);
    }
    v18 = v55 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v13 + 16, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v51 = *(_DWORD *)(v13 + 28);
        if ( v51 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v17, (__int64)&EventBlockThread, v16, v51);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v13);
      ExAcquirePushLockExclusiveEx(v13 + 16, 0LL);
    }
    if ( *(_QWORD *)(v13 + 8) )
    {
      v57 = WdLogNewEntry5_WdAssertion(v17, v14);
      *(_QWORD *)(v57 + 24) = 430LL;
      WdLogEvent5_WdAssertion(v57);
    }
    if ( *(_DWORD *)(v13 + 24) )
    {
      v58 = WdLogNewEntry5_WdAssertion(v17, v14);
      *(_QWORD *)(v58 + 24) = 431LL;
      WdLogEvent5_WdAssertion(v58);
    }
    *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
    v18 = 1;
  }
  *(_DWORD *)(v13 + 24) = v18;
  v19 = *((_QWORD *)v6 + 12);
  v20 = _InterlockedCompareExchange16((volatile signed __int16 *)(v19 + 4), 1, 0);
  if ( !v20 )
  {
    if ( ((v4 & 2) != 0 || dword_1C0047434) && (*((_BYTE *)this + 41448) & 4) == 0 )
    {
      v59 = *(_QWORD *)(v8 + 104);
      *(_DWORD *)(v8 + 92) |= 2u;
      v80 = 1;
      v14 = *(_QWORD *)(*(_QWORD *)(v59 + 8) + 32LL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 352), *(_QWORD *)(v8 + 8));
      v19 = *(_QWORD *)(*(_QWORD *)(v8 + 104) + 8LL);
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v19 + 32) + 344LL));
    }
    else
    {
      v80 = 0;
    }
  }
  v21 = *(_QWORD *)(v8 + 320);
  if ( *(struct _KTHREAD **)(v21 + 8) != KeGetCurrentThread() )
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v14, v16);
    v60[3] = 275LL;
    v60[4] = 4LL;
    v60[5] = v21;
    v60[6] = 0LL;
    v60[7] = 0LL;
    WdLogEvent5_WdCriticalError(v60);
  }
  v22 = *(_DWORD *)(v21 + 24);
  if ( v22 <= 0 )
  {
    v61 = WdLogNewEntry5_WdAssertion(v19, v14);
    *(_QWORD *)(v61 + 24) = 450LL;
    WdLogEvent5_WdAssertion(v61);
    v22 = *(_DWORD *)(v21 + 24);
  }
  v23 = v22 - 1;
  *(_DWORD *)(v21 + 24) = v23;
  if ( !v23 )
  {
    *(_QWORD *)(v21 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v21 + 16, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( this != (VIDMM_GLOBAL *)-40488LL && *((struct _KTHREAD **)this + 5062) == KeGetCurrentThread() )
  {
    v62 = WdLogNewEntry5_WdAssertion(v25, v24);
    *(_QWORD *)(v62 + 24) = 1306LL;
    WdLogEvent5_WdAssertion(v62);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 40488, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v52 = *((_DWORD *)this + 10126);
      if ( v52 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v26, (__int64)&EventBlockThread, v27, v52);
    }
    ExAcquirePushLockExclusiveEx((char *)this + 40488, 0LL);
  }
  *((_QWORD *)this + 5062) = KeGetCurrentThread();
  if ( !v20 )
  {
    v28 = (_QWORD *)((char *)this + 40472);
    v29 = (VIDMM_GLOBAL *)(v8 + 400);
    v30 = (VIDMM_GLOBAL **)*((_QWORD *)this + 5060);
    v31 = *v28 == (_QWORD)v28;
    v81 = v31;
    if ( *v30 != (VIDMM_GLOBAL *)((char *)this + 40472) )
      __fastfail(3u);
    *(_QWORD *)v29 = v28;
    *(_QWORD *)(v8 + 408) = v30;
    *v30 = v29;
    *((_QWORD *)this + 5060) = v29;
    *(_QWORD *)(v8 + 440) = *((_QWORD *)this + 576);
    if ( v80 )
    {
      v63 = (__int64 *)(v8 + 416);
      v64 = *(unsigned int *)(*((_QWORD *)this + 3) + 200LL);
      v65 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 104) + 8LL) + 16LL) + 8 * v64) + 416LL;
      v66 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 104) + 8LL) + 16LL) + 8 * v64) + 424LL);
      if ( *v66 != (__int64 *)v65 )
        __fastfail(3u);
      *v63 = v65;
      *(_QWORD *)(v8 + 424) = v66;
      *v66 = v63;
      *(_QWORD *)(v65 + 8) = v63;
      v81 = v31;
    }
  }
  *((_QWORD *)this + 5062) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 40488, 0LL);
  KeLeaveCriticalRegion();
  if ( v20 )
  {
    v77 = WdLogNewEntry5_WdWarning(v33, v32);
    *(_QWORD *)(v77 + 24) = v6;
    *(_QWORD *)(v77 + 32) = *(unsigned __int16 *)(*((_QWORD *)v6 + 12) + 4LL);
    WdLogEvent5_WdWarning(v77);
    v12 = DxgkVidMmAllowFailOnOfferReclaimErrors() != 0 ? 0xC000000D : 0;
  }
  else
  {
    if ( (**(_DWORD **)(v8 + 504) & 0x20000000) != 0 )
    {
      if ( (v4 & 2) != 0 || dword_1C0047434 )
      {
        v67 = *(_QWORD *)(v8 + 8);
        ++*((_DWORD *)this + 2094);
        *((_QWORD *)this + 1048) += v67;
      }
      v50 = *(_QWORD *)(v8 + 8);
      ++*((_DWORD *)this + 2090);
      *((_QWORD *)this + 1046) += v50;
    }
    *((_QWORD *)this + 1044) += *(_QWORD *)(v8 + 8);
    ++*((_DWORD *)this + 2086);
    if ( (v4 & 1) == 0 )
    {
      memset(v82, 0, 0x80uLL);
      v34 = *(_QWORD *)(v8 + 320);
      v82[3] = VIDMM_GLOBAL::VidMmiOfferAllocationCallback;
      LODWORD(v82[5]) = 3;
      LODWORD(v82[0]) = 1;
      KeEnterCriticalRegion();
      if ( *(struct _KTHREAD **)(v34 + 8) == KeGetCurrentThread() )
      {
        v68 = *(_DWORD *)(v34 + 24);
        if ( v68 <= 0 )
        {
          v69 = WdLogNewEntry5_WdAssertion(v36, v35);
          *(_QWORD *)(v69 + 24) = 406LL;
          WdLogEvent5_WdAssertion(v69);
          v68 = *(_DWORD *)(v34 + 24);
        }
        v10 = v68 + 1;
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v34 + 16, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v70 = *(_DWORD *)(v34 + 28);
            if ( v70 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v36, (__int64)&EventBlockThread, v37, v70);
          }
          _InterlockedIncrement64((volatile signed __int64 *)v34);
          ExAcquirePushLockExclusiveEx(v34 + 16, 0LL);
        }
        if ( *(_QWORD *)(v34 + 8) )
        {
          v71 = WdLogNewEntry5_WdAssertion(v36, v35);
          *(_QWORD *)(v71 + 24) = 430LL;
          WdLogEvent5_WdAssertion(v71);
        }
        if ( *(_DWORD *)(v34 + 24) )
        {
          v72 = WdLogNewEntry5_WdAssertion(v36, v35);
          *(_QWORD *)(v72 + 24) = 431LL;
          WdLogEvent5_WdAssertion(v72);
        }
        *(_QWORD *)(v34 + 8) = KeGetCurrentThread();
      }
      *(_DWORD *)(v34 + 24) = v10;
      for ( i = *(_QWORD **)(v8 + 296); i != (_QWORD *)(v8 + 296); i = (_QWORD *)*i )
      {
        for ( j = (_QWORD *)*(i - 2); j != i - 2; j = (_QWORD *)*j )
        {
          v36 = (__int64)(j - 5);
          if ( (*(_DWORD *)(j - 1) & 1) == 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v36 + 96) + 8LL));
            v40 = *(_QWORD *)(v36 + 8);
            v82[6] = j - 5;
            v41 = *(_QWORD *)(v40 + 32);
            v42 = VidSchSubmitDeviceCommand(v41, (__int64)v82, v37);
            v43 = v42;
            if ( v42 < 0 )
            {
              v73 = WdLogNewEntry5_WdWarning(v36, v35);
              *(_QWORD *)(v73 + 24) = v43;
              WdLogEvent5_WdWarning(v73);
              VidSchFlushDevice(v41);
              v12 = 0;
              LODWORD(v82[0]) = 0;
              VidSchSubmitDeviceCommand(v41, (__int64)v82, v74);
            }
            else
            {
              v12 = 0;
            }
          }
        }
      }
      v44 = *(_QWORD *)(v8 + 320);
      if ( *(struct _KTHREAD **)(v44 + 8) != KeGetCurrentThread() )
      {
        v75 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v35, v37);
        v75[3] = 275LL;
        v75[4] = 4LL;
        v75[5] = v44;
        v75[6] = 0LL;
        v75[7] = 0LL;
        WdLogEvent5_WdCriticalError(v75);
      }
      v45 = *(_DWORD *)(v44 + 24);
      if ( v45 <= 0 )
      {
        v76 = WdLogNewEntry5_WdAssertion(v36, v35);
        *(_QWORD *)(v76 + 24) = 450LL;
        WdLogEvent5_WdAssertion(v76);
        v45 = *(_DWORD *)(v44 + 24);
      }
      v46 = v45 - 1;
      *(_DWORD *)(v44 + 24) = v46;
      if ( !v46 )
      {
        *(_QWORD *)(v44 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v44 + 16, 0LL);
      }
      KeLeaveCriticalRegion();
      v6 = a2;
    }
    if ( v81 )
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)this + 152LL), 0, 0);
  }
  VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v6);
  if ( bTracingEnabled )
  {
    if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v79 = *(_BYTE *)(v8 + 432);
      McTemplateK0pc(v79, v47, v48, v6, v79);
    }
  }
  return v12;
}
