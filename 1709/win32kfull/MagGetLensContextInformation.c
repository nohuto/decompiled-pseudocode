/*
 * XREFs of MagGetLensContextInformation @ 0x1C01A8324
 * Callers:
 *     MagSlicerControl @ 0x1C01A96C8 (MagSlicerControl.c)
 *     NtUserMagGetContextInformation @ 0x1C01E8F30 (NtUserMagGetContextInformation.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C006037C (MagpFindThreadContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01A7FA4 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     _GetMagnificationInputTransform @ 0x1C01DFE78 (_GetMagnificationInputTransform.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1C024DB58 (DwmSyncMagnUpdateWindowSharedTextures.c)
 */

__int64 __fastcall MagGetLensContextInformation(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int *a7)
{
  unsigned int updated; // edi
  _QWORD *ThreadContext; // rax
  int v10; // r9d
  __int64 v11; // r14
  __int64 *v13; // rax
  int v14; // eax
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r11d
  __int64 *v21; // rbp
  unsigned int v22; // eax
  int v23; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v25; // rcx
  __int64 v26; // r13
  void *v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  void *v32; // rsi
  void *v33; // rcx
  unsigned int *v34; // rax
  unsigned int *v35; // r8
  int v36; // ecx
  __int64 v37; // r9
  unsigned int v38; // edx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 *v42; // rax
  __int64 *v43; // r8
  int v44; // edx
  int v45; // ecx
  int v46; // eax
  int v47; // r9d
  __int64 v48; // r10
  __int64 v49; // rdx
  __int64 *v50; // rax
  int v51; // eax
  __int64 *v52; // rax
  __int128 v53; // xmm1
  __int64 *LensContext; // rax
  __int64 v55; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v56[3]; // [rsp+58h] [rbp-40h] BYREF

  updated = -1073741811;
  ThreadContext = MagpFindThreadContext(a1, a2);
  v11 = (__int64)ThreadContext;
  if ( !ThreadContext )
    return 3221225635LL;
  switch ( a5 )
  {
    case 2:
      if ( !a3 )
        return updated;
      if ( a3 != -1 || (LensContext = *(__int64 **)(*(_QWORD *)(ThreadContext[2] + 432LL) + 224LL)) == 0LL )
      {
        LensContext = MagpFindLensContext(v11, a3, v10);
        if ( !LensContext )
          return updated;
      }
      *(_OWORD *)a6 = *(_OWORD *)(LensContext + 9);
      return 0;
    case 3:
      if ( !a3 )
        return updated;
      if ( a3 != -1 || (v52 = *(__int64 **)(*(_QWORD *)(ThreadContext[2] + 432LL) + 224LL)) == 0LL )
      {
        v52 = MagpFindLensContext(v11, a3, v10);
        if ( !v52 )
          return updated;
      }
      if ( (v52[2] & 2) != 0 )
      {
        *(_OWORD *)a6 = *(_OWORD *)(v52 + 11);
        v53 = *(_OWORD *)(v52 + 13);
      }
      else
      {
        *(_OWORD *)a6 = gMagOutTransformIdentity;
        v53 = xmmword_1C0323E28;
      }
      *(_OWORD *)(a6 + 16) = v53;
      return 0;
    case 4:
      return (unsigned int)GetMagnificationInputTransform(a6) == 0 ? 0xC0000001 : 0;
    case 5:
      if ( !a3 )
        return updated;
      if ( a3 != -1 || (v50 = *(__int64 **)(*(_QWORD *)(ThreadContext[2] + 432LL) + 232LL)) == 0LL )
      {
        v50 = MagpFindLensContext(v11, a3, v10);
        if ( !v50 )
          return updated;
      }
      if ( (v50[2] & 4) != 0 )
      {
        *(_OWORD *)a6 = *(_OWORD *)(v50 + 15);
        *(_OWORD *)(a6 + 16) = *(_OWORD *)(v50 + 17);
        *(_OWORD *)(a6 + 32) = *(_OWORD *)(v50 + 19);
        *(_OWORD *)(a6 + 48) = *(_OWORD *)(v50 + 21);
        *(_OWORD *)(a6 + 64) = *(_OWORD *)(v50 + 23);
        *(_OWORD *)(a6 + 80) = *(_OWORD *)(v50 + 25);
        v51 = *((_DWORD *)v50 + 54);
      }
      else
      {
        *(_OWORD *)a6 = gMagEffectIdentity;
        *(_OWORD *)(a6 + 16) = xmmword_1C0323E50;
        *(_OWORD *)(a6 + 32) = xmmword_1C0323E60;
        *(_OWORD *)(a6 + 48) = xmmword_1C0323E70;
        *(_OWORD *)(a6 + 64) = xmmword_1C0323E80;
        *(_OWORD *)(a6 + 80) = xmmword_1C0323E90;
        v51 = dword_1C0323EA0;
      }
      *(_DWORD *)(a6 + 96) = v51;
      return 0;
    case 6:
      if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return updated;
      v42 = MagpFindLensContext((__int64)ThreadContext, a3, v10);
      v43 = v42;
      if ( !v42 )
        return updated;
      v44 = *a7;
      if ( (unsigned int)*a7 >= 8 )
      {
        v45 = *((_DWORD *)v42 + 56);
        *(_DWORD *)a6 = v45;
        v46 = *((_DWORD *)v42 + 57);
        *(_DWORD *)(a6 + 4) = v46;
        v47 = v46 + v45;
        v48 = (unsigned int)(v46 + v45);
        if ( (unsigned int)(v44 - 8) >= (unsigned __int64)(8 * v48) )
        {
          if ( v47 )
          {
            v49 = 0LL;
            do
            {
              *(_QWORD *)(a6 + v49 + 8) = *(_QWORD *)(v49 + v43[29]);
              v49 += 8LL;
              --v48;
            }
            while ( v48 );
          }
          *a7 = 8 * v47 + 8;
          return 0;
        }
      }
      return (unsigned int)-1073741820;
    case 7:
      if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return updated;
      v34 = (unsigned int *)MagpFindLensContext((__int64)ThreadContext, a3, v10);
      v35 = v34;
      if ( !v34 )
        return updated;
      v36 = *a7;
      if ( (unsigned int)*a7 >= 0x10 )
      {
        v37 = v34[60];
        *(_DWORD *)a6 = v37;
        *(_DWORD *)(a6 + 4) = v34[61];
        *(_DWORD *)(a6 + 8) = v34[62];
        *(_DWORD *)(a6 + 12) = v34[63];
        if ( (unsigned int)(v36 - 16) >= (unsigned __int64)(24 * v37) )
        {
          v38 = 0;
          if ( (_DWORD)v37 )
          {
            do
            {
              v39 = v38++;
              v40 = 3 * v39;
              v41 = *((_QWORD *)v35 + 32);
              *(_OWORD *)(a6 + 8 * v40 + 16) = *(_OWORD *)(v41 + 8 * v40);
              *(_QWORD *)(a6 + 8 * v40 + 32) = *(_QWORD *)(v41 + 8 * v40 + 16);
            }
            while ( v38 < *(_DWORD *)a6 );
          }
          *a7 = 24 * *(_DWORD *)a6 + 16;
          return 0;
        }
      }
      return (unsigned int)-1073741820;
  }
  if ( a5 != 8 )
  {
    if ( a5 == 9 )
    {
      if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return updated;
      v15 = MagpFindLensContext((__int64)ThreadContext, a3, v10);
      if ( !v15 )
        return updated;
      *(_DWORD *)a6 = 0;
      v14 = (v15[2] & 0x40) != 0;
    }
    else
    {
      if ( a5 != 10 )
        return updated;
      if ( !a3 )
        return updated;
      v13 = MagpFindLensContext((__int64)ThreadContext, a3, v10);
      if ( !v13 )
        return updated;
      v14 = *((_DWORD *)v13 + 66);
    }
    *(_DWORD *)a6 = v14;
    return 0;
  }
  LODWORD(v55) = 0;
  if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return updated;
  v16 = MagpFindLensContext((__int64)ThreadContext, a3, v10);
  v21 = v16;
  if ( !v16 )
    return updated;
  v22 = *((_DWORD *)v16 + 4);
  v23 = (v22 >> 6) & 1;
  if ( (v22 & 0x20) != 0 || !*((_DWORD *)v21 + 60) )
  {
    *(_DWORD *)a6 = 0;
    *(_DWORD *)(a6 + 8) = 0;
    *(_QWORD *)(a6 + 40) = 0LL;
    *(_DWORD *)(a6 + 4) = *((_DWORD *)v21 + 60);
    *(_DWORD *)(a6 + 12) = *((_DWORD *)v21 + 61);
    *(_DWORD *)(a6 + 16) = *((_DWORD *)v21 + 62);
    *(_DWORD *)(a6 + 20) = *((_DWORD *)v21 + 63);
LABEL_45:
    if ( (*((_DWORD *)v21 + 4) & 0x80u) != 0 )
      *(_DWORD *)(a6 + 48) = v20;
    return 0;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19);
  v56[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v56;
  v56[1] = a3;
  _InterlockedAdd((volatile signed __int32 *)(a3 + 8), 1u);
  v26 = ReferenceDwmProcess();
  if ( gdwInAtomicOperation )
  {
    v25 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v27 = (void *)ReferenceDwmApiPort(v25);
  UserSessionSwitchLeaveCrit(v29, v28);
  if ( v27 && v26 )
  {
    updated = DwmSyncMagnUpdateWindowSharedTextures(
                v27,
                (__int64)(v21 + 4),
                *(_QWORD *)(a6 + 24),
                v23,
                (*((_DWORD *)v21 + 4) >> 7) & 1,
                a6,
                (__int64)&v55);
  }
  else
  {
    DereferenceDwmApiPort(v27);
    updated = -1073741823;
  }
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v31, v30);
  DereferenceDwmProcess(v26);
  if ( (updated & 0x80000000) != 0 )
    return updated;
  if ( *(int *)a6 < 0 )
    goto LABEL_39;
  if ( *(_DWORD *)(a6 + 4) != *((_DWORD *)v21 + 60)
    || *(_DWORD *)(a6 + 12) != *((_DWORD *)v21 + 61)
    || *(_DWORD *)(a6 + 16) != *((_DWORD *)v21 + 62)
    || *(_DWORD *)(a6 + 20) != *((_DWORD *)v21 + 63) )
  {
    v33 = *(void **)(a6 + 40);
    if ( v33 )
    {
      ObfDereferenceObject(v33);
      *(_QWORD *)(a6 + 40) = 0LL;
    }
    return (unsigned int)-1073741811;
  }
  if ( !*(_DWORD *)(a6 + 8)
    || (v32 = *(void **)(a6 + 40)) == 0LL
    || (*(_QWORD *)(a6 + 40) = 0LL,
        updated = ObOpenObjectByPointer(v32, 0x80u, 0LL, 4u, MmSectionObjectType, 1, (PHANDLE)(a6 + 40)),
        ObfDereferenceObject(v32),
        (updated & 0x80000000) == 0) )
  {
LABEL_39:
    if ( (unsigned int)*a7 >= 0x30 )
    {
      v20 = v55;
      goto LABEL_45;
    }
    return (unsigned int)-1073741820;
  }
  return updated;
}
