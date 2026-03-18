/*
 * XREFs of pProcessDfbSurfacesInternal @ 0x1C0077B90
 * Callers:
 *     pProcessDfbSurfaces2 @ 0x1C0077AB0 (pProcessDfbSurfaces2.c)
 * Callees:
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C002C9D0 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037AD0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0037DB8 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0037E90 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0042800 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0043070 (--1SURFMEM@@QEAA@XZ.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0078060 (vDynamicConvertNewSurfaceDCs.c)
 *     bMigrateSurfaceForConversion @ 0x1C00F22E0 (bMigrateSurfaceForConversion.c)
 */

__int64 __fastcall pProcessDfbSurfacesInternal(SURFACE *this, int a2)
{
  int v2; // eax
  __int64 v3; // rbx
  __int64 v4; // r14
  int v7; // ecx
  int v8; // eax
  __int64 v9; // r15
  char v10; // si
  int v11; // eax
  int v12; // edx
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // rcx
  struct SFMLOGICALSURFACE *FirstLSurf; // rdi
  __int64 v18; // [rsp+68h] [rbp-49h] BYREF
  char v19; // [rsp+70h] [rbp-41h]
  int v20; // [rsp+74h] [rbp-3Dh]
  int v21; // [rsp+78h] [rbp-39h] BYREF
  __int64 v22; // [rsp+7Ch] [rbp-35h]
  _BYTE v23[20]; // [rsp+84h] [rbp-2Dh]
  _BYTE v24[80]; // [rsp+98h] [rbp-19h] BYREF
  __int64 v25; // [rsp+118h] [rbp+67h] BYREF

  v2 = *((_DWORD *)this + 28);
  v3 = 0LL;
  v4 = *((_QWORD *)this + 61);
  if ( (v2 & 0x80100000) == 0 )
  {
    v7 = *((_DWORD *)this + 29) & 1;
    if ( v7 || (v2 & 0x800) == 0 || (v8 = 1, *((_WORD *)this + 50) != 3) )
      v8 = 0;
    if ( !v8 )
    {
      v18 = 0LL;
      v9 = 0LL;
      v19 = 0;
      v10 = 0;
      v20 = 0;
      if ( !v4 )
      {
        v22 = 0LL;
        *(_QWORD *)&v23[8] = 0LL;
        *(_QWORD *)v23 = 0LL;
        v21 = *((_DWORD *)this + 24);
        v22 = *((_QWORD *)this + 7);
        *(_QWORD *)&v23[12] = 1LL;
        *(_QWORD *)&v23[4] = 0LL;
        if ( v7 )
        {
          v11 = 1;
          if ( (*((_WORD *)this + 51) & 0x800) != 0 )
            v11 = 2049;
          *(_DWORD *)&v23[12] = v11;
        }
        if ( !(unsigned int)SURFMEM::bCreateDIB(
                              (SURFMEM *)&v18,
                              (struct _DEVBITMAPINFO *)&v21,
                              0LL,
                              0LL,
                              0,
                              0LL,
                              0LL,
                              0,
                              1,
                              0,
                              0) )
          goto LABEL_24;
        v25 = *((_QWORD *)this + 6);
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v24, (struct PDEVOBJ *)&v25);
        GreAcquireHmgrSemaphore(v13, v12, v14);
        v9 = v18;
        v4 = v18;
        GreReleaseHmgrSemaphore(v15);
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v24);
        if ( !v9 )
          goto LABEL_24;
        v10 = v19;
      }
      if ( (*((_DWORD *)this + 29) & 1) != 0 )
        *(_DWORD *)(v4 + 112) |= 0x800u;
      *(_QWORD *)(v4 + 48) = *((_QWORD *)this + 6);
      if ( (unsigned int)bMigrateSurfaceForConversion(this, (struct _BASEOBJECT *)v4) )
      {
        if ( (_DWORD)v25 && a2 )
          vDynamicConvertNewSurfaceDCs(*((_QWORD *)this + 6), this);
        if ( v9 )
          v19 = v10 | 1;
        v3 = v4;
LABEL_28:
        SURFMEM::~SURFMEM((SURFMEM *)&v18);
        return v3;
      }
LABEL_24:
      if ( (*((_DWORD *)this + 29) & 1) != 0 )
      {
        FirstLSurf = SURFACE::GetFirstLSurf(this);
        if ( FirstLSurf )
        {
          if ( (int)IsUserReleaseRedirectionBitmapSupported() >= 0 )
            UserReleaseRedirectionBitmap(*((_QWORD *)FirstLSurf + 34));
        }
      }
      goto LABEL_28;
    }
  }
  return 0LL;
}
