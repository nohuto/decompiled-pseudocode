/*
 * XREFs of xxEngNineGrid @ 0x1C0081A90
 * Callers:
 *     EngNineGrid @ 0x1C00819E0 (EngNineGrid.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0081670 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     RenderNineGrid @ 0x1C0081F24 (RenderNineGrid.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall xxEngNineGrid(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        signed int *a5,
        _DWORD *a6,
        int *a7,
        __int64 a8)
{
  signed int v10; // edx
  signed int v11; // ecx
  unsigned int v12; // r11d
  unsigned int v13; // r10d
  int v14; // eax
  int v15; // r15d
  int v16; // eax
  int v17; // r9d
  int v18; // r8d
  LONG bottom; // edi
  LONG right; // r14d
  BOOL v21; // eax
  unsigned __int8 v22; // dl
  int v23; // r8d
  int v24; // r9d
  int v25; // r14d
  int v26; // edi
  __int64 v27; // r12
  signed int ClearBits; // eax
  __int64 v29; // rsi
  _QWORD *v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // rbx
  SURFOBJ *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  LONG top; // ebx
  LONG v37; // ecx
  LONG v38; // edx
  LONG v39; // r15d
  LONG v40; // r13d
  LONG left; // edi
  LONG v42; // r14d
  LONG v43; // eax
  LONG v44; // eax
  LONG v45; // eax
  __int64 v47[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v48; // [rsp+70h] [rbp-90h]
  __int64 v49; // [rsp+78h] [rbp-88h] BYREF
  char v50; // [rsp+80h] [rbp-80h]
  int v51; // [rsp+84h] [rbp-7Ch]
  __int64 v52; // [rsp+88h] [rbp-78h]
  __int64 v53; // [rsp+90h] [rbp-70h]
  __int64 v54; // [rsp+98h] [rbp-68h]
  __int64 v55; // [rsp+A0h] [rbp-60h]
  __int64 v56; // [rsp+A8h] [rbp-58h]
  struct _SURFOBJ *v57; // [rsp+B0h] [rbp-50h]
  __int64 v58; // [rsp+B8h] [rbp-48h]
  _QWORD v59[4]; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v60; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v61; // [rsp+F0h] [rbp-10h] BYREF
  LONG v62; // [rsp+F8h] [rbp-8h]
  LONG v63; // [rsp+FCh] [rbp-4h]

  v57 = a1;
  v52 = a8;
  v55 = a4;
  v58 = a3;
  v56 = a2;
  v54 = (__int64)a6;
  v53 = (__int64)a7;
  v61 = SURFOBJ_TO_SURFACE(a2);
  SURFOBJ_TO_SURFACE(a1);
  v10 = *a5;
  v11 = a5[2];
  v12 = a5[1];
  v13 = a5[3];
  v47[0] = __PAIR64__(v12, v10);
  v47[1] = __PAIR64__(v13, v11);
  if ( v10 <= v11 )
  {
    v15 = 0;
  }
  else
  {
    v14 = v10;
    LODWORD(v47[0]) = v11;
    v10 = v11;
    LODWORD(v47[1]) = v14;
    v11 = v14;
    v15 = 1;
  }
  v16 = *a7;
  v48 = v15;
  if ( (v16 & 0x20) != 0 )
  {
    v17 = a6[2] - *a6;
    v18 = a6[3] - a6[1];
    if ( v11 - v10 > v17 )
    {
      if ( v15 )
        LODWORD(v47[0]) = v11 - v17;
      else
        LODWORD(v47[1]) = v17 + v10;
    }
    if ( (int)(v13 - v12) > v18 )
    {
      if ( v15 )
        HIDWORD(v47[0]) = v13 - v18;
      else
        HIDWORD(v47[1]) = v12 + v18;
    }
  }
  v60 = *(struct tagRECT *)v47;
  if ( a3 && *(_BYTE *)(a3 + 20) )
    ERECTL::operator*=(&v60, (_DWORD *)(a3 + 4));
  bottom = v60.bottom;
  right = v60.right;
  v21 = IsRectEmptyInl(&v60);
  if ( v24 != right && v23 != bottom && (v22 & !v21) != 0 )
  {
    v25 = right - v24;
    v49 = 0LL;
    v26 = bottom - v23;
    v50 = 0;
    v51 = 0;
    v27 = 0LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&nineGridPushLock, 0LL);
    ClearBits = RtlFindClearBits(&apsoNineGridBitmapHeader, 1u, 0);
    v29 = ClearBits;
    if ( ClearBits == -1 || (v27 = apsoNineGrid[ClearBits]) == 0 )
    {
      memset(v59, 0, sizeof(v59));
      v30 = *(_QWORD **)(v61 + 128);
      if ( v30 )
      {
        v31 = *(_DWORD *)(v61 + 96);
        LODWORD(v59[1]) = 64;
        v59[0] = v31 | 0x10000000000LL;
        LODWORD(v59[3]) = 0;
        v59[2] = *v30;
        if ( SURFMEM::bCreateDIB((SURFMEM *)&v49, (struct _DEVBITMAPINFO *)v59, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        {
          v32 = v49;
          if ( (_DWORD)v29 != -1 )
          {
            v33 = EngLockSurface(*(HSURF *)(v49 + 32));
            v34 = v49;
            v50 |= 1u;
            LOBYTE(v35) = 5;
            apsoNineGrid[v29] = v33;
            HmgSetOwner(*(_QWORD *)(v34 + 32), 0LL, v35);
            *(_DWORD *)(v49 + 92) = 0;
          }
          if ( v32 )
            v27 = v32 + 24;
          else
            v27 = 0LL;
        }
      }
    }
    if ( (_DWORD)v29 != -1 )
      RtlSetBits(&apsoNineGridBitmapHeader, v29, 1u);
    ExReleasePushLockExclusiveEx(&nineGridPushLock, 0LL);
    KeLeaveCriticalRegion();
    if ( v27 )
    {
      if ( v25 > 256 || v26 > 64 )
      {
        top = v60.top;
        v37 = v60.bottom;
        if ( v60.top < v60.bottom )
        {
          v38 = v60.right;
          do
          {
            v39 = top + 64;
            v40 = top + 64;
            if ( top + 64 > v37 || v39 < top )
              v40 = v37;
            left = v60.left;
            if ( v60.left < v38 )
            {
              do
              {
                v42 = left + 256;
                v43 = left + 256;
                if ( left + 256 > v38 || v42 < left )
                  v43 = v38;
                v62 = v43;
                v61 = __PAIR64__(top, left);
                v63 = v40;
                RenderNineGrid(v57, (__int64)&v61, v55, (__int64)v47, v54, v53, v52, v48);
                v38 = v60.right;
                v44 = left;
                left += 256;
              }
              while ( v42 >= v44 && v42 < v60.right );
              v37 = v60.bottom;
            }
            v45 = top;
            top += 64;
          }
          while ( v39 >= v45 && v39 < v37 );
        }
      }
      else
      {
        RenderNineGrid(v57, (__int64)&v60, v55, (__int64)v47, v54, v53, v52, v15);
      }
    }
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&nineGridPushLock, 0LL);
    if ( (_DWORD)v29 != -1 )
      RtlClearBits(&apsoNineGridBitmapHeader, v29, 1u);
    ExReleasePushLockExclusiveEx(&nineGridPushLock, 0LL);
    KeLeaveCriticalRegion();
    SURFMEM::~SURFMEM((SURFMEM *)&v49);
  }
  return 1LL;
}
