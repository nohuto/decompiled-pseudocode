/*
 * XREFs of MagSlicerControl @ 0x1C01A96C8
 * Callers:
 *     NtUserSlicerControl @ 0x1C01EC8D0 (NtUserSlicerControl.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C006037C (MagpFindThreadContext.c)
 *     IsDesktopWindow @ 0x1C0092C4C (IsDesktopWindow.c)
 *     IsMessageOnlyWindow @ 0x1C00D63A0 (IsMessageOnlyWindow.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01A7FA4 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     MagControl @ 0x1C01A8228 (MagControl.c)
 *     MagGetLensContextInformation @ 0x1C01A8324 (MagGetLensContextInformation.c)
 *     MagSetLensContextInformation @ 0x1C01A89BC (MagSetLensContextInformation.c)
 *     DwmAsyncMagnSetSlicerDestinationTextures @ 0x1C024CDF8 (DwmAsyncMagnSetSlicerDestinationTextures.c)
 *     DwmAsyncMagnSetWindowSlicer @ 0x1C024D234 (DwmAsyncMagnSetWindowSlicer.c)
 */

__int64 __fastcall MagSlicerControl(_QWORD *a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, unsigned int a6)
{
  unsigned int LensContextInformation; // ebx
  __int64 v10; // r12
  int v11; // r9d
  int v12; // r9d
  __int64 v13; // r9
  _DWORD *v14; // rdx
  _QWORD *ThreadContext; // rax
  __int64 *LensContext; // r10
  __int64 v17; // r11
  int v18; // r8d
  int v19; // ecx
  int v20; // eax
  void *v21; // rax
  unsigned int *v23; // r15
  _QWORD *v24; // rax
  __int64 *v25; // rsi
  __int64 v26; // r11
  void *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned int v32; // r8d
  bool v33; // zf
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  _DWORD v41[10]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v42; // [rsp+68h] [rbp-40h]
  int v43; // [rsp+70h] [rbp-38h]
  int v44; // [rsp+C8h] [rbp+20h] BYREF

  LensContextInformation = -1073741811;
  v10 = 0LL;
  if ( !a4 )
  {
    LOBYTE(v37) = IsDesktopWindow(a3);
    if ( v37 )
      return LensContextInformation;
    LOBYTE(v39) = IsMessageOnlyWindow(v38);
    if ( v39 )
      return LensContextInformation;
    LensContextInformation = MagControl(a1, a2, 0, 0LL);
    if ( (LensContextInformation & 0x80000000) != 0 )
      return LensContextInformation;
    return (unsigned int)MagSetLensContextInformation(a1, a2, a3, 1, 0, 0LL);
  }
  v11 = a4 - 1;
  if ( !v11 )
  {
    LensContextInformation = MagSetLensContextInformation(a1, a2, a3, 1, 1, 0LL);
    if ( (LensContextInformation & 0x80000000) != 0 )
      return LensContextInformation;
    return (unsigned int)MagControl(a1, a2, 1, 0LL);
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    v13 = (unsigned int)(v12 - 1);
    if ( (_DWORD)v13 )
    {
      if ( (_DWORD)v13 == 1 && a6 >= 0x20 )
      {
        v44 = 56;
        LensContextInformation = MagGetLensContextInformation(a1, a2, a3, v13, 8, (__int64)v41, &v44);
        if ( (LensContextInformation & 0x80000000) == 0 )
        {
          v14 = a5;
          *a5 = v41[0];
          v14[1] = v41[2];
          v14[2] = v41[9];
          *((_QWORD *)v14 + 2) = v42;
          v14[6] = v43;
        }
      }
      return LensContextInformation;
    }
    if ( a6 < 0x18 )
      return LensContextInformation;
    ThreadContext = MagpFindThreadContext(a1, a2);
    if ( !ThreadContext )
      return (unsigned int)-1073741661;
    LensContext = MagpFindLensContext((__int64)ThreadContext, a3, 1);
    if ( !LensContext )
      return LensContextInformation;
    v18 = a5[2];
    if ( v18 <= *a5 )
      return LensContextInformation;
    v19 = a5[3];
    v20 = a5[1];
    if ( v19 <= v20
      || a5[4] > *((_DWORD *)LensContext + 62)
               / (unsigned int)(v18 - *a5)
               * (*((_DWORD *)LensContext + 63)
                / (unsigned int)(v19 - v20)) )
    {
      return LensContextInformation;
    }
    v21 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 432LL) + 8LL));
    return (unsigned int)DwmAsyncMagnSetWindowSlicer(v21);
  }
  if ( a6 < 0x10 )
    return LensContextInformation;
  v23 = a5;
  if ( *a5 > 6u || a6 < 32 * *a5 + 16 )
    return LensContextInformation;
  v24 = MagpFindThreadContext(a1, a2);
  if ( !v24 )
    return (unsigned int)-1073741661;
  v25 = MagpFindLensContext((__int64)v24, a3, 1);
  if ( v25 )
  {
    v27 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v26 + 16) + 432LL) + 8LL));
    LensContextInformation = DwmAsyncMagnSetSlicerDestinationTextures(v27);
    if ( (LensContextInformation & 0x80000000) == 0 )
    {
      v30 = v25[32];
      if ( v30 )
      {
        Win32FreePool(v30, v28, v29);
        v25[32] = 0LL;
      }
      v31 = *v23;
      if ( !(_DWORD)v31 || (v10 = Win32AllocPool(24 * v31, 1735226197LL)) != 0 )
      {
        v32 = 0;
        *((_DWORD *)v25 + 60) = *v23;
        *((_DWORD *)v25 + 61) = v23[1];
        *((_DWORD *)v25 + 62) = v23[2];
        *((_DWORD *)v25 + 63) = v23[3];
        v25[32] = v10;
        v33 = *v23 == 0;
        if ( *v23 )
        {
          do
          {
            v34 = v32;
            v35 = v32++;
            v35 *= 32LL;
            v36 = 3 * v34;
            *(_QWORD *)(v10 + 8 * v36) = *(_QWORD *)((char *)v23 + v35 + 16);
            *(_QWORD *)(v10 + 8 * v36 + 8) = *(_QWORD *)((char *)v23 + v35 + 24);
            *(_QWORD *)(v10 + 8 * v36 + 16) = *(_QWORD *)((char *)v23 + v35 + 32);
          }
          while ( v32 < *v23 );
          v33 = *v23 == 0;
        }
        if ( v33 )
          *((_DWORD *)v25 + 4) &= ~0x10u;
        else
          *((_DWORD *)v25 + 4) |= 0x10u;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return LensContextInformation;
}
