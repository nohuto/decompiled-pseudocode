/*
 * XREFs of pProcessDfbSurfacesInternal @ 0x1C006D050
 * Callers:
 *     pProcessDfbSurfaces2 @ 0x1C006CF70 (pProcessDfbSurfaces2.c)
 * Callees:
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C0020360 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00418C0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0041B80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0046DB8 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0046E90 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C006BC10 (vDynamicConvertNewSurfaceDCs.c)
 *     bMigrateSurfaceForConversion @ 0x1C006D210 (bMigrateSurfaceForConversion.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

struct OBJECT *__fastcall pProcessDfbSurfacesInternal(struct OBJECT *a1, int a2)
{
  int v2; // eax
  struct OBJECT *v3; // rbx
  struct OBJECT *v4; // r15
  int v7; // r12d
  int v8; // eax
  __int64 v9; // r14
  char v10; // si
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // r8d
  struct SFMLOGICALSURFACE *FirstLSurf; // rdi
  __int64 v20; // [rsp+68h] [rbp-49h] BYREF
  char v21; // [rsp+70h] [rbp-41h]
  int v22; // [rsp+74h] [rbp-3Dh]
  _QWORD v23[4]; // [rsp+78h] [rbp-39h] BYREF
  _BYTE v24[80]; // [rsp+98h] [rbp-19h] BYREF
  __int64 v25; // [rsp+118h] [rbp+67h] BYREF

  v2 = *((_DWORD *)a1 + 28);
  v3 = 0LL;
  v4 = (struct OBJECT *)*((_QWORD *)a1 + 61);
  if ( (v2 & 0x80100000) == 0 )
  {
    v7 = *((_DWORD *)a1 + 29) & 1;
    if ( v7 || (v2 & 0x800) == 0 || (v8 = 1, *((_WORD *)a1 + 50) != 3) )
      v8 = 0;
    if ( !v8 )
    {
      v20 = 0LL;
      v9 = 0LL;
      v21 = 0;
      v10 = 0;
      v22 = 0;
      if ( !v4 )
      {
        memset(v23, 0, sizeof(v23));
        LODWORD(v23[0]) = *((_DWORD *)a1 + 24);
        HIDWORD(v23[0]) = *((_DWORD *)a1 + 14);
        LODWORD(v23[1]) = *((_DWORD *)a1 + 15);
        v23[2] = 0LL;
        LODWORD(v23[3]) = 1;
        if ( v7 )
        {
          v11 = 1;
          if ( (*((_WORD *)a1 + 51) & 0x800) != 0 )
            v11 = 2049;
          LODWORD(v23[3]) = v11;
        }
        if ( !(unsigned int)SURFMEM::bCreateDIB(
                              (SURFMEM *)&v20,
                              (struct _DEVBITMAPINFO *)v23,
                              0LL,
                              0LL,
                              0,
                              0LL,
                              0LL,
                              0,
                              1,
                              0,
                              0) )
          goto LABEL_26;
        v25 = *((_QWORD *)a1 + 6);
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v24, (struct PDEVOBJ *)&v25);
        GreAcquireHmgrSemaphore(v13, v12, v14);
        v9 = v20;
        v4 = (struct OBJECT *)v20;
        if ( (*((_DWORD *)a1 + 29) & 1) != 0 )
          *(_DWORD *)(v20 + 112) |= 0x800u;
        *(_QWORD *)(v9 + 48) = *((_QWORD *)a1 + 6);
        GreReleaseHmgrSemaphore(v16, v15, v17);
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v24);
        v10 = v21;
      }
      if ( (unsigned int)bMigrateSurfaceForConversion(a1, v4) )
      {
        if ( (_DWORD)v25 && a2 )
          vDynamicConvertNewSurfaceDCs(*((_QWORD *)a1 + 6), a1);
        if ( v9 )
          v21 = v10 | 1;
        v3 = v4;
LABEL_19:
        SURFMEM::~SURFMEM((SURFMEM *)&v20);
        return v3;
      }
LABEL_26:
      if ( (*((_DWORD *)a1 + 29) & 1) != 0 )
      {
        FirstLSurf = SURFACE::GetFirstLSurf(a1);
        if ( FirstLSurf )
        {
          if ( (int)IsUserReleaseRedirectionBitmapSupported() >= 0 )
            UserReleaseRedirectionBitmap(*((_QWORD *)FirstLSurf + 34));
        }
      }
      goto LABEL_19;
    }
  }
  return 0LL;
}
