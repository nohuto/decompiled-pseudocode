/*
 * XREFs of MagGetLensContextInformation @ 0x1C01EBF34
 * Callers:
 *     NtUserMagGetContextInformation @ 0x1C01DCD40 (NtUserMagGetContextInformation.c)
 *     MagSlicerControl @ 0x1C01ED248 (MagSlicerControl.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C005D1E4 (MagpFindThreadContext.c)
 *     _GetMagnificationInputTransform @ 0x1C01D3AC8 (_GetMagnificationInputTransform.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01EBBB0 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1C024C0BC (DwmSyncMagnUpdateWindowSharedTextures.c)
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
  unsigned int v8; // ebx
  _QWORD *ThreadContext; // rax
  int v10; // r9d
  __int64 v11; // r14
  __int64 *v13; // rax
  int v14; // r13d
  __int64 *v15; // rax
  __int64 *v16; // rbp
  unsigned int v17; // eax
  int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  void *v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rsi
  unsigned int updated; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  void *v31; // rdi
  void *v32; // rcx
  unsigned int *v33; // rax
  unsigned int *v34; // r11
  int v35; // ecx
  __int64 v36; // r9
  unsigned int v37; // edx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 *v41; // rax
  __int64 *v42; // r8
  int v43; // edx
  int v44; // ecx
  int v45; // eax
  int v46; // r9d
  __int64 v47; // r10
  __int64 v48; // rdx
  __int64 *v49; // rax
  int v50; // eax
  __int64 *v51; // rax
  __int64 *LensContext; // rax
  __int64 v53; // [rsp+50h] [rbp-58h] BYREF
  __int64 v54; // [rsp+58h] [rbp-50h]
  _QWORD v55[4]; // [rsp+60h] [rbp-48h] BYREF

  v8 = -1073741811;
  ThreadContext = MagpFindThreadContext(a1, a2);
  v11 = (__int64)ThreadContext;
  if ( !ThreadContext )
    return 3221225635LL;
  switch ( a5 )
  {
    case 2:
      if ( !a3 )
        return v8;
      if ( a3 != -1 || (LensContext = *(__int64 **)(*(_QWORD *)(ThreadContext[2] + 408LL) + 224LL)) == 0LL )
      {
        LensContext = MagpFindLensContext(v11, a3, v10);
        if ( !LensContext )
          return v8;
      }
      *(_OWORD *)a6 = *(_OWORD *)(LensContext + 9);
      return 0;
    case 3:
      if ( !a3 )
        return v8;
      if ( a3 != -1 || (v51 = *(__int64 **)(*(_QWORD *)(ThreadContext[2] + 408LL) + 224LL)) == 0LL )
      {
        v51 = MagpFindLensContext(v11, a3, v10);
        if ( !v51 )
          return v8;
      }
      if ( (v51[2] & 2) != 0 )
      {
        *(_OWORD *)a6 = *(_OWORD *)(v51 + 11);
        *(_OWORD *)(a6 + 16) = *(_OWORD *)(v51 + 13);
      }
      else
      {
        *(_OWORD *)a6 = gMagOutTransformIdentity;
        *(_OWORD *)(a6 + 16) = xmmword_1C03294A0;
      }
      return 0;
    case 4:
      return (unsigned int)GetMagnificationInputTransform(a6) == 0 ? 0xC0000001 : 0;
    case 5:
      if ( !a3 )
        return v8;
      if ( a3 != -1 || (v49 = *(__int64 **)(*(_QWORD *)(ThreadContext[2] + 408LL) + 232LL)) == 0LL )
      {
        v49 = MagpFindLensContext(v11, a3, v10);
        if ( !v49 )
          return v8;
      }
      if ( (v49[2] & 4) != 0 )
      {
        *(_OWORD *)a6 = *(_OWORD *)(v49 + 15);
        *(_OWORD *)(a6 + 16) = *(_OWORD *)(v49 + 17);
        *(_OWORD *)(a6 + 32) = *(_OWORD *)(v49 + 19);
        *(_OWORD *)(a6 + 48) = *(_OWORD *)(v49 + 21);
        *(_OWORD *)(a6 + 64) = *(_OWORD *)(v49 + 23);
        *(_OWORD *)(a6 + 80) = *(_OWORD *)(v49 + 25);
        v50 = *((_DWORD *)v49 + 54);
      }
      else
      {
        *(_OWORD *)a6 = gMagEffectIdentity;
        *(_OWORD *)(a6 + 16) = xmmword_1C03294C0;
        *(_OWORD *)(a6 + 32) = xmmword_1C03294D0;
        *(_OWORD *)(a6 + 48) = xmmword_1C03294E0;
        *(_OWORD *)(a6 + 64) = xmmword_1C03294F0;
        *(_OWORD *)(a6 + 80) = xmmword_1C0329500;
        v50 = dword_1C0329510;
      }
      *(_DWORD *)(a6 + 96) = v50;
      return 0;
    case 6:
      if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return v8;
      v41 = MagpFindLensContext((__int64)ThreadContext, a3, v10);
      v42 = v41;
      if ( !v41 )
        return v8;
      v43 = *a7;
      if ( (unsigned int)*a7 < 8 )
        return (unsigned int)-1073741820;
      v44 = *((_DWORD *)v41 + 56);
      *(_DWORD *)a6 = v44;
      v45 = *((_DWORD *)v41 + 57);
      *(_DWORD *)(a6 + 4) = v45;
      v46 = v45 + v44;
      v47 = (unsigned int)(v45 + v44);
      if ( (unsigned int)(v43 - 8) < (unsigned __int64)(8 * v47) )
        return (unsigned int)-1073741820;
      if ( v46 )
      {
        v48 = 0LL;
        do
        {
          *(_QWORD *)(v48 + a6 + 8) = *(_QWORD *)(v48 + v42[29]);
          v48 += 8LL;
          --v47;
        }
        while ( v47 );
      }
      *a7 = 8 * v46 + 8;
      return 0;
    case 7:
      if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return v8;
      v33 = (unsigned int *)MagpFindLensContext((__int64)ThreadContext, a3, v10);
      v34 = v33;
      if ( !v33 )
        return v8;
      v35 = *a7;
      if ( (unsigned int)*a7 < 0x10 )
        return (unsigned int)-1073741820;
      v36 = v33[60];
      *(_DWORD *)a6 = v36;
      *(_DWORD *)(a6 + 4) = v33[61];
      *(_DWORD *)(a6 + 8) = v33[62];
      *(_DWORD *)(a6 + 12) = v33[63];
      if ( (unsigned int)(v35 - 16) < (unsigned __int64)(24 * v36) )
        return (unsigned int)-1073741820;
      v37 = 0;
      if ( (_DWORD)v36 )
      {
        do
        {
          v38 = v37++;
          v39 = 3 * v38;
          v40 = *((_QWORD *)v34 + 32);
          *(_OWORD *)(a6 + 8 * v39 + 16) = *(_OWORD *)(v40 + 8 * v39);
          *(_QWORD *)(a6 + 8 * v39 + 32) = *(_QWORD *)(v40 + 8 * v39 + 16);
        }
        while ( v37 < *(_DWORD *)a6 );
      }
      *a7 = 24 * *(_DWORD *)a6 + 16;
      return 0;
  }
  if ( a5 != 8 )
  {
    if ( a5 != 9 )
      return v8;
    if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      return v8;
    v13 = MagpFindLensContext((__int64)ThreadContext, a3, v10);
    if ( !v13 )
      return v8;
    *(_DWORD *)a6 = 0;
    *(_DWORD *)a6 = (v13[2] & 0x40) != 0;
    return 0;
  }
  LODWORD(v53) = 0;
  v14 = 0;
  if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return v8;
  v15 = MagpFindLensContext((__int64)ThreadContext, a3, v10);
  v16 = v15;
  if ( !v15 )
    return v8;
  v17 = *((_DWORD *)v15 + 4);
  v18 = (v17 >> 6) & 1;
  if ( (v17 & 0x20) != 0 || !*((_DWORD *)v16 + 60) )
  {
    v27 = a6;
    *(_DWORD *)a6 = 0;
    *(_DWORD *)(a6 + 8) = 0;
    *(_QWORD *)(a6 + 40) = 0LL;
    *(_DWORD *)(a6 + 4) = *((_DWORD *)v16 + 60);
    *(_DWORD *)(a6 + 12) = *((_DWORD *)v16 + 61);
    *(_DWORD *)(a6 + 16) = *((_DWORD *)v16 + 62);
    *(_DWORD *)(a6 + 20) = *((_DWORD *)v16 + 63);
LABEL_40:
    if ( (*((_DWORD *)v16 + 4) & 0x80u) != 0 )
      *(_DWORD *)(v27 + 48) = v14;
    return 0;
  }
  v55[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v55;
  ++*(_DWORD *)(a3 + 8);
  v55[1] = a3;
  v54 = ReferenceDwmProcess();
  if ( gdwInAtomicOperation )
  {
    v19 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v22 = (void *)ReferenceDwmApiPort(v19, gdwInAtomicOperation, v20, v21);
  UserSessionSwitchLeaveCrit(v24, v23, v25, v26);
  v27 = a6;
  if ( v22 && v54 )
  {
    updated = DwmSyncMagnUpdateWindowSharedTextures(
                v22,
                (__int64)(v16 + 4),
                *(_QWORD *)(a6 + 24),
                v18,
                (*((_DWORD *)v16 + 4) >> 7) & 1,
                a6,
                (__int64)&v53);
    v14 = v53;
    v8 = updated;
  }
  else
  {
    DereferenceDwmApiPort(v22);
    v8 = -1073741823;
  }
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v30, v29);
  DereferenceDwmProcess(v54);
  if ( (v8 & 0x80000000) != 0 )
    return v8;
  if ( *(int *)a6 < 0 )
    goto LABEL_34;
  if ( *(_DWORD *)(a6 + 4) != *((_DWORD *)v16 + 60)
    || *(_DWORD *)(a6 + 12) != *((_DWORD *)v16 + 61)
    || *(_DWORD *)(a6 + 16) != *((_DWORD *)v16 + 62)
    || *(_DWORD *)(a6 + 20) != *((_DWORD *)v16 + 63) )
  {
    v32 = *(void **)(a6 + 40);
    if ( v32 )
    {
      ObfDereferenceObject(v32);
      *(_QWORD *)(a6 + 40) = 0LL;
    }
    return (unsigned int)-1073741811;
  }
  if ( !*(_DWORD *)(a6 + 8)
    || (v31 = *(void **)(a6 + 40)) == 0LL
    || (*(_QWORD *)(a6 + 40) = 0LL,
        v8 = ObOpenObjectByPointer(v31, 0x80u, 0LL, 4u, MmSectionObjectType, 1, (PHANDLE)(a6 + 40)),
        ObfDereferenceObject(v31),
        (v8 & 0x80000000) == 0) )
  {
LABEL_34:
    if ( (unsigned int)*a7 < 0x30 )
      return (unsigned int)-1073741820;
    goto LABEL_40;
  }
  return v8;
}
