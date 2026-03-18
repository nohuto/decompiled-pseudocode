/*
 * XREFs of xxEngNineGrid @ 0x1C000F8A0
 * Callers:
 *     EngNineGrid @ 0x1C000F7F0 (EngNineGrid.c)
 * Callees:
 *     RenderNineGrid @ 0x1C000FD60 (RenderNineGrid.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00182EC (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall xxEngNineGrid(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v10; // edx
  signed int v11; // ecx
  int v12; // r14d
  int v13; // r11d
  unsigned int v14; // r9d
  int v15; // edi
  int v16; // r15d
  int v17; // esi
  __int64 v18; // rbx
  int v19; // eax
  int v20; // edi
  int v21; // r14d
  __int64 v22; // r12
  signed int ClearBits; // eax
  __int64 v24; // rsi
  signed int v26; // ebx
  int v27; // ecx
  int v28; // edx
  int v29; // r15d
  int v30; // r13d
  int v31; // edi
  int v32; // r14d
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // r10d
  int v37; // r8d
  _QWORD *v38; // rcx
  unsigned int v39; // eax
  __int64 v40; // rbx
  SURFOBJ *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // eax
  __int64 v45[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v46; // [rsp+70h] [rbp-90h]
  __int64 v47; // [rsp+78h] [rbp-88h]
  __int64 v48; // [rsp+80h] [rbp-80h] BYREF
  char v49; // [rsp+88h] [rbp-78h]
  int v50; // [rsp+8Ch] [rbp-74h]
  __int64 v51; // [rsp+90h] [rbp-70h]
  __int64 v52; // [rsp+98h] [rbp-68h]
  __int64 v53; // [rsp+A0h] [rbp-60h]
  __int64 v54; // [rsp+A8h] [rbp-58h]
  struct _SURFOBJ *v55; // [rsp+B0h] [rbp-50h]
  __int64 v56; // [rsp+B8h] [rbp-48h]
  _QWORD v57[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v58[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v59; // [rsp+F0h] [rbp-10h] BYREF
  int v60; // [rsp+F8h] [rbp-8h]
  int v61; // [rsp+FCh] [rbp-4h]

  v51 = a6;
  v47 = a7;
  v55 = a1;
  v52 = a8;
  v53 = a4;
  v56 = a3;
  v54 = a2;
  v59 = SURFOBJ_TO_SURFACE(a2);
  SURFOBJ_TO_SURFACE(a1);
  v10 = *a5;
  v11 = a5[2];
  v12 = v10;
  v13 = a5[1];
  v14 = a5[3];
  v15 = *a5;
  LODWORD(v45[0]) = *a5;
  v46 = v10 > v11;
  v16 = v11;
  HIDWORD(v45[0]) = v13;
  v17 = v11;
  v45[1] = __PAIR64__(v14, v11);
  if ( v10 > v11 )
  {
    v44 = v10;
    LODWORD(v45[0]) = v11;
    v10 = v11;
    LODWORD(v45[1]) = v44;
    v11 = v44;
  }
  v18 = v47;
  if ( (*(_DWORD *)v47 & 0x20) != 0 )
  {
    v36 = *(_DWORD *)(v51 + 8) - *(_DWORD *)v51;
    v37 = *(_DWORD *)(v51 + 12) - *(_DWORD *)(v51 + 4);
    if ( v11 - v10 > v36 )
    {
      if ( v15 <= v17 )
        LODWORD(v45[1]) = v36 + v10;
      else
        LODWORD(v45[0]) = v11 - v36;
    }
    if ( (int)(v14 - v13) > v37 )
    {
      if ( v12 <= v16 )
        HIDWORD(v45[1]) = v13 + v37;
      else
        HIDWORD(v45[0]) = v14 - v37;
    }
  }
  *(_OWORD *)v58 = *(_OWORD *)v45;
  if ( a3 && *(_BYTE *)(a3 + 20) )
    ERECTL::operator*=(v58, a3 + 4);
  if ( SLODWORD(v58[0]) < 0
    || v58[0] < 0
    || SLODWORD(v58[1]) > a1->sizlBitmap.cx
    || (v19 = 1, SHIDWORD(v58[1]) > a1->sizlBitmap.cy) )
  {
    v19 = 0;
  }
  if ( LODWORD(v58[0]) != LODWORD(v58[1]) && HIDWORD(v58[0]) != HIDWORD(v58[1]) && v19 )
  {
    v20 = LODWORD(v58[1]) - LODWORD(v58[0]);
    v48 = 0LL;
    v21 = HIDWORD(v58[1]) - HIDWORD(v58[0]);
    v49 = 0;
    v50 = 0;
    v22 = 0LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&nineGridPushLock, 0LL);
    ClearBits = RtlFindClearBits(&apsoNineGridBitmapHeader, 1u, 0);
    v24 = ClearBits;
    if ( ClearBits == -1 || (v22 = apsoNineGrid[ClearBits]) == 0 )
    {
      memset(v57, 0, sizeof(v57));
      v38 = *(_QWORD **)(v59 + 128);
      if ( v38 )
      {
        v39 = *(_DWORD *)(v59 + 96);
        LODWORD(v57[1]) = 64;
        v57[0] = v39 | 0x10000000000LL;
        LODWORD(v57[3]) = 0;
        v57[2] = *v38;
        if ( SURFMEM::bCreateDIB((SURFMEM *)&v48, (struct _DEVBITMAPINFO *)v57, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        {
          v40 = v48;
          if ( (_DWORD)v24 != -1 )
          {
            v41 = EngLockSurface(*(HSURF *)(v48 + 32));
            v42 = v48;
            v49 |= 1u;
            LOBYTE(v43) = 5;
            apsoNineGrid[v24] = v41;
            HmgSetOwner(*(_QWORD *)(v42 + 32), 0LL, v43);
            *(_DWORD *)(v48 + 92) = 0;
          }
          v22 = 0LL;
          if ( v40 )
            v22 = v40 + 24;
          v18 = v47;
        }
      }
    }
    if ( (_DWORD)v24 != -1 )
      RtlSetBits(&apsoNineGridBitmapHeader, v24, 1u);
    ExReleasePushLockExclusiveEx(&nineGridPushLock, 0LL);
    KeLeaveCriticalRegion();
    if ( v22 )
    {
      if ( v21 > 64 || v20 > 256 )
      {
        v26 = HIDWORD(v58[0]);
        v27 = HIDWORD(v58[1]);
        if ( SHIDWORD(v58[0]) < SHIDWORD(v58[1]) )
        {
          v28 = v58[1];
          do
          {
            v29 = v26 + 64;
            v30 = v26 + 64;
            if ( v26 + 64 > v27 || v29 < v26 )
              v30 = v27;
            v31 = v58[0];
            if ( SLODWORD(v58[0]) < v28 )
            {
              do
              {
                v32 = v31 + 256;
                v33 = v31 + 256;
                if ( v31 + 256 > v28 || v32 < v31 )
                  v33 = v28;
                v60 = v33;
                v59 = __PAIR64__(v26, v31);
                v61 = v30;
                RenderNineGrid(v55, (__int64)&v59, v53, (__int64)v45, v51, v47, v52, v46);
                v28 = v58[1];
                v34 = v31;
                v31 += 256;
              }
              while ( v32 < SLODWORD(v58[1]) && v32 >= v34 );
              v27 = HIDWORD(v58[1]);
            }
            v35 = v26;
            v26 += 64;
          }
          while ( v29 < v27 && v29 >= v35 );
        }
      }
      else
      {
        RenderNineGrid(v55, (__int64)v58, v53, (__int64)v45, v51, v18, v52, v46);
      }
    }
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&nineGridPushLock, 0LL);
    if ( (_DWORD)v24 != -1 )
      RtlClearBits(&apsoNineGridBitmapHeader, v24, 1u);
    ExReleasePushLockExclusiveEx(&nineGridPushLock, 0LL);
    KeLeaveCriticalRegion();
    SURFMEM::~SURFMEM((SURFMEM *)&v48);
  }
  return 1LL;
}
