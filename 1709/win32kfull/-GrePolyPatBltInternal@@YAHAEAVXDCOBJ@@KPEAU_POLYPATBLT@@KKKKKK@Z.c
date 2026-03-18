/*
 * XREFs of ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C001DD20
 * Callers:
 *     NtGdiPolyPatBlt @ 0x1C001DB00 (NtGdiPolyPatBlt.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0029360 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     GrePolyPatBlt @ 0x1C007F804 (GrePolyPatBlt.c)
 * Callees:
 *     bCvtPts1 @ 0x1C000F444 (bCvtPts1.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C001E104 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C002B154 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C002B184 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002C0E0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C1B4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     GreMaskBlt @ 0x1C01023EC (GreMaskBlt.c)
 *     ?bTightBoundsToRegion@DEVLOCKOBJ@@QEAAHXZ @ 0x1C01432A4 (-bTightBoundsToRegion@DEVLOCKOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolyPatBltInternal(
        struct XDCOBJ *this,
        int a2,
        struct _POLYPATBLT *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  int v9; // ebx
  struct _POLYPATBLT *v10; // r14
  unsigned int v12; // r12d
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rdx
  int v19; // r15d
  int v20; // r12d
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // r13
  int v24; // edx
  int v25; // r8d
  int v26; // r9d
  struct EXFORMOBJ *v27; // rdx
  int locked; // eax
  __int64 v29; // rcx
  int v31; // eax
  int v32; // eax
  int v33; // [rsp+70h] [rbp-108h]
  int v34; // [rsp+74h] [rbp-104h]
  int v35; // [rsp+78h] [rbp-100h]
  __int64 v36; // [rsp+80h] [rbp-F8h]
  unsigned __int64 v37; // [rsp+88h] [rbp-F0h] BYREF
  int v38; // [rsp+90h] [rbp-E8h]
  int v39; // [rsp+94h] [rbp-E4h]
  int v40; // [rsp+98h] [rbp-E0h]
  int v41; // [rsp+9Ch] [rbp-DCh]
  int v42; // [rsp+A0h] [rbp-D8h]
  int v43; // [rsp+A4h] [rbp-D4h]
  struct SURFACE *v44; // [rsp+A8h] [rbp-D0h]
  __int64 v45; // [rsp+B0h] [rbp-C8h]
  struct XDCOBJ *v46; // [rsp+B8h] [rbp-C0h]
  __int64 v47; // [rsp+C0h] [rbp-B8h]
  __int64 v48; // [rsp+C8h] [rbp-B0h]
  _BYTE v49[80]; // [rsp+D0h] [rbp-A8h] BYREF
  int v50; // [rsp+120h] [rbp-58h] BYREF
  int v51; // [rsp+124h] [rbp-54h]
  int v52; // [rsp+128h] [rbp-50h]
  int v53; // [rsp+12Ch] [rbp-4Ch]

  v9 = a4;
  v10 = a3;
  v46 = this;
  v12 = 1;
  v33 = 1;
  if ( a4 && a3 && !a5 )
  {
    v13 = (BYTE2(a2) << 8) | BYTE2(a2);
    if ( ((BYTE2(a2) ^ (unsigned __int8)(4 * BYTE2(a2))) & 0xCC) != 0 )
      return 0;
    v14 = *(_QWORD *)this;
    if ( !v14 )
    {
      return 0;
    }
    else
    {
      v15 = *(_QWORD *)(v14 + 80);
      v16 = *(_QWORD *)(v15 + 16);
      v47 = v16;
      v45 = v16;
      if ( (*(_DWORD *)(v15 + 8) & 0x1000) != 0 )
        GreDCSelectBrush(v14, v16);
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v49);
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v49, this, 0) )
      {
        v17 = *(_QWORD *)this;
        v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 68LL);
        v39 = *(_DWORD *)(*(_QWORD *)(v17 + 80) + 312LL) & 1;
        if ( (*(_DWORD *)(*(_QWORD *)(v17 + 80) + 352LL) & 0x1E000) != 0 )
          EXFORMOBJ::vInit((EXFORMOBJ *)&v37, this, 0x204u, 0);
        else
          v37 = v17 + 336;
        v44 = *(struct SURFACE **)(*(_QWORD *)this + 512LL);
        while ( 1 )
        {
          if ( !v9-- )
          {
            v16 = v47;
            v12 = v33;
            goto LABEL_35;
          }
          v36 = 0LL;
          v19 = *(_DWORD *)v10;
          v40 = *(_DWORD *)v10;
          v20 = *((_DWORD *)v10 + 1);
          v41 = v20;
          v21 = *((_DWORD *)v10 + 2);
          v34 = v21;
          v42 = v21;
          v22 = *((_DWORD *)v10 + 3);
          v35 = v22;
          v43 = v22;
          v48 = *((_QWORD *)v10 + 2);
          v23 = v48;
          if ( v48 )
          {
            v36 = GreDCSelectBrush(*(_QWORD *)this, v48);
            v21 = v34;
            v22 = v35;
          }
          v24 = *(_DWORD *)(v37 + 32);
          if ( (v24 & 1) == 0 )
            break;
          v50 = v19;
          v51 = v20;
          v25 = v19 + v21;
          v52 = v25;
          v26 = v20 + v22;
          v53 = v26;
          v27 = (struct EXFORMOBJ *)(v24 & 0x43);
          if ( (_BYTE)v27 != 67 )
          {
            bCvtPts1(v37, &v50, 2LL);
            v26 = v53;
            v25 = v52;
            v20 = v51;
            v19 = v50;
          }
          if ( v39 )
          {
            v50 = ++v19;
            v52 = ++v25;
          }
          if ( v19 > v25 )
          {
            v32 = v19;
            v19 = v25;
            v50 = v25;
            v25 = v32;
            v52 = v32;
          }
          if ( v20 > v26 )
          {
            v31 = v20;
            v20 = v26;
            v51 = v26;
            v26 = v31;
            v53 = v31;
          }
          if ( v19 != v25 && v20 != v26 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0xE0) != 0 )
              XDCOBJ::vAccumulate(this, (struct ERECTL *)&v50);
            if ( v44 )
            {
              locked = GrePatBltLockedDC(this, v27, (struct ERECTL *)&v50, v13, v44, a6, a7, a8, a9);
LABEL_30:
              v33 = locked;
            }
          }
          if ( v23 )
            GreDCSelectBrush(*(_QWORD *)this, v36);
          DEVLOCKOBJ::bTightBoundsToRegion((DEVLOCKOBJ *)v49);
          v10 = (struct _POLYPATBLT *)((char *)v10 + 24);
        }
        locked = GreMaskBlt(**(HDC **)this, v22, 0LL, 0, 0, 0LL, 0, 0, v13 << 16, 0);
        goto LABEL_30;
      }
      v12 = XDCOBJ::bFullScreen(this);
LABEL_35:
      v29 = *(_QWORD *)(*(_QWORD *)this + 80LL);
      if ( *(_QWORD *)(v29 + 16) != v16 )
      {
        *(_QWORD *)(v29 + 16) = v16;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 8LL) |= 0x1000u;
      }
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v49);
    }
  }
  else if ( a4 )
  {
    return 0;
  }
  return v12;
}
