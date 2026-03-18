/*
 * XREFs of MagSlicerControl @ 0x1C01ED248
 * Callers:
 *     NtUserSlicerControl @ 0x1C01E0780 (NtUserSlicerControl.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C002250C (IsDesktopWindow.c)
 *     MagpFindThreadContext @ 0x1C005D1E4 (MagpFindThreadContext.c)
 *     IsMessageOnlyWindow @ 0x1C00F6850 (IsMessageOnlyWindow.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01EBBB0 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     MagControl @ 0x1C01EBE38 (MagControl.c)
 *     MagGetLensContextInformation @ 0x1C01EBF34 (MagGetLensContextInformation.c)
 *     MagSetLensContextInformation @ 0x1C01EC5F4 (MagSetLensContextInformation.c)
 *     DwmAsyncMagnSetSlicerDestinationTextures @ 0x1C024B438 (DwmAsyncMagnSetSlicerDestinationTextures.c)
 *     DwmAsyncMagnSetWindowSlicer @ 0x1C024B874 (DwmAsyncMagnSetWindowSlicer.c)
 */

__int64 __fastcall MagSlicerControl(_QWORD *a1, __int64 a2, __int64 a3, int a4, unsigned int *a5)
{
  unsigned int LensContextInformation; // ebx
  __int64 v9; // r12
  int v10; // r9d
  int v11; // r9d
  __int64 v12; // r9
  unsigned int *v13; // rdx
  _QWORD *ThreadContext; // rax
  __int64 *LensContext; // r10
  __int64 v16; // r11
  int v17; // r8d
  __int64 v18; // r9
  signed int v19; // ecx
  signed int v20; // eax
  __int64 v21; // r8
  __int64 v22; // rdx
  void *v23; // rax
  unsigned int *v25; // r15
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 *v28; // rsi
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r11
  void *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // r8d
  bool v36; // zf
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  _DWORD v44[10]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v45; // [rsp+68h] [rbp-40h]
  unsigned int v46; // [rsp+70h] [rbp-38h]
  int v47; // [rsp+C8h] [rbp+20h] BYREF

  LensContextInformation = -1073741811;
  v9 = 0LL;
  if ( !a4 )
  {
    LOBYTE(v40) = IsDesktopWindow(a3);
    if ( v40 )
      return LensContextInformation;
    LOBYTE(v42) = IsMessageOnlyWindow(v41);
    if ( v42 )
      return LensContextInformation;
    LensContextInformation = MagControl(a1, a2, 0, 0LL);
    if ( (LensContextInformation & 0x80000000) != 0 )
      return LensContextInformation;
    return (unsigned int)MagSetLensContextInformation(a1, a2, a3, 1, 0, 0LL);
  }
  v10 = a4 - 1;
  if ( !v10 )
  {
    LensContextInformation = MagSetLensContextInformation(a1, a2, a3, 1, 1, 0LL);
    if ( (LensContextInformation & 0x80000000) != 0 )
      return LensContextInformation;
    return (unsigned int)MagControl(a1, a2, 1, 0LL);
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    v12 = (unsigned int)(v11 - 1);
    if ( (_DWORD)v12 )
    {
      if ( (_DWORD)v12 == 1 )
      {
        v47 = 56;
        LensContextInformation = MagGetLensContextInformation(a1, a2, a3, v12, 8, (__int64)v44, &v47);
        if ( (LensContextInformation & 0x80000000) == 0 )
        {
          v13 = a5;
          *a5 = v44[0];
          v13[1] = v44[2];
          v13[2] = v44[9];
          *((_QWORD *)v13 + 2) = v45;
          v13[6] = v46;
        }
      }
      return LensContextInformation;
    }
    ThreadContext = MagpFindThreadContext(a1, a2);
    if ( !ThreadContext )
      return (unsigned int)-1073741661;
    LensContext = MagpFindLensContext((__int64)ThreadContext, a3, 1);
    if ( !LensContext )
      return LensContextInformation;
    v17 = a5[2];
    v18 = *a5;
    if ( v17 <= (int)v18 )
      return LensContextInformation;
    v19 = a5[3];
    v20 = a5[1];
    if ( v19 <= v20 )
      return LensContextInformation;
    v21 = (unsigned int)(v17 - v18);
    HIDWORD(v22) = 0;
    if ( a5[4] > *((_DWORD *)LensContext + 62)
               / (unsigned int)v21
               * (*((_DWORD *)LensContext + 63)
                / (unsigned int)(v19 - v20)) )
      return LensContextInformation;
    LODWORD(v22) = *((_DWORD *)LensContext + 62) % (unsigned int)v21;
    v23 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 408LL) + 8LL), v22, v21, v18);
    return (unsigned int)DwmAsyncMagnSetWindowSlicer(v23);
  }
  v25 = a5;
  if ( *a5 > 6 )
    return LensContextInformation;
  v26 = MagpFindThreadContext(a1, a2);
  if ( !v26 )
    return (unsigned int)-1073741661;
  v28 = MagpFindLensContext((__int64)v26, a3, 1);
  if ( v28 )
  {
    v32 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 408LL) + 8LL), v27, v29, v30);
    LensContextInformation = DwmAsyncMagnSetSlicerDestinationTextures(v32);
    if ( (LensContextInformation & 0x80000000) == 0 )
    {
      v33 = v28[32];
      if ( v33 )
      {
        Win32FreePool(v33);
        v28[32] = 0LL;
      }
      v34 = *v25;
      if ( !(_DWORD)v34 || (v9 = Win32AllocPool(24 * v34, 1735226197LL)) != 0 )
      {
        v35 = 0;
        *((_DWORD *)v28 + 60) = *v25;
        *((_DWORD *)v28 + 61) = v25[1];
        *((_DWORD *)v28 + 62) = v25[2];
        *((_DWORD *)v28 + 63) = v25[3];
        v28[32] = v9;
        v36 = *v25 == 0;
        if ( *v25 )
        {
          do
          {
            v37 = v35;
            v38 = v35++;
            v38 *= 32LL;
            v39 = 3 * v37;
            *(_QWORD *)(v9 + 8 * v39) = *(_QWORD *)((char *)v25 + v38 + 16);
            *(_QWORD *)(v9 + 8 * v39 + 8) = *(_QWORD *)((char *)v25 + v38 + 24);
            *(_QWORD *)(v9 + 8 * v39 + 16) = *(_QWORD *)((char *)v25 + v38 + 32);
          }
          while ( v35 < *v25 );
          v36 = *v25 == 0;
        }
        if ( v36 )
          *((_DWORD *)v28 + 4) &= ~0x10u;
        else
          *((_DWORD *)v28 + 4) |= 0x10u;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return LensContextInformation;
}
