/*
 * XREFs of ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C0050890
 * Callers:
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C00518E8 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 * Callees:
 *     bFreeDCAttributesWorker @ 0x1C001DEB0 (bFreeDCAttributesWorker.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C003CFC0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00496B0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C004B990 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C004EA90 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C004EAB0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C0051F20 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 *     ?prgnRao@DC@@QEAAPEAVREGION@@XZ @ 0x1C0053E24 (-prgnRao@DC@@QEAAPEAVREGION@@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0054DEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00A9698 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EFB84 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

void __fastcall vDeleteDCInternalWorker(int **this, unsigned int a2)
{
  __int64 v4; // rbp
  int v5; // esi
  int *v6; // rbx
  char v7; // al
  int v8; // edx
  GdiHandleManager *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned int v13; // r9d
  unsigned int v14; // ecx
  __int64 v15; // r8
  _DWORD *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // r10
  unsigned int v19; // edx
  unsigned int v20; // r8d
  unsigned int v21; // ecx
  __int64 v22; // r10
  int *v23; // r14
  PDEV **v24; // rax
  GdiHandleManager *v25; // r15
  unsigned int v26; // eax
  __int64 v27; // rbp
  unsigned int v28; // r10d
  unsigned int v29; // edx
  unsigned int v30; // ecx
  __int64 v31; // r9
  __int64 v32; // rbx
  unsigned int v33; // eax
  unsigned int v34; // r9d
  unsigned __int64 v35; // rdx
  unsigned int v36; // ecx
  __int64 v37; // r8
  int *v38; // rdx
  __int16 *v39; // rbx
  __int64 v40; // rbp
  int *v41; // r15
  unsigned int v42; // eax
  GdiHandleManager *v43; // r14
  unsigned int v44; // eax
  __int64 v45; // rbp
  unsigned int v46; // r10d
  unsigned int v47; // edx
  unsigned int v48; // ecx
  __int64 v49; // r9
  __int64 v50; // rbx
  unsigned int v51; // eax
  unsigned int v52; // r8d
  unsigned __int64 v53; // rdx
  unsigned int v54; // ecx
  __int64 v55; // rax
  int *v56; // rdx
  int *v57; // r8
  __int64 v58; // rdx
  __int16 *v59; // rbx
  __int64 v60; // rbp
  REGION *v61; // rcx
  int *v62; // r8
  __int64 v63; // rdx
  REGION *v64; // rcx
  REGION *v65; // rcx
  REGION *v66; // rcx
  PDEV **v67; // rbx
  int v68; // r8d
  int v69; // r8d
  REGION *v70; // rax
  unsigned int v71; // edx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v72; // rdx
  unsigned int v73; // ecx
  int *v74; // [rsp+30h] [rbp-58h] BYREF
  int v75; // [rsp+38h] [rbp-50h]
  PDEV **v76; // [rsp+90h] [rbp+8h] BYREF
  PDEV **v77; // [rsp+A0h] [rbp+18h] BYREF

  if ( !a2 )
    bFreeDCAttributesWorker(*this);
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 18));
  DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)*this + 19));
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct HOBJ__ ***)*this + 20));
  v4 = *((_QWORD *)*this + 13);
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v74, (struct OBJECT *)v4, 0, 0, 1);
  v5 = 0;
  if ( v75 )
  {
    v6 = v74;
    if ( *((_BYTE *)v74 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
    {
      v71 = (unsigned __int16)*(_DWORD *)v4 | (*(_DWORD *)v4 >> 8) & 0xFF0000;
      RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v71 | (v71 >> 8) & 0xFF0000);
    }
    v7 = *((_BYTE *)v6 + 14);
    if ( v7 == 5 )
    {
      v72 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v4 + 616);
      v73 = 0;
    }
    else
    {
      if ( v7 != 16 )
        goto LABEL_7;
      v72 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v4 + 152);
      v73 = 2;
    }
    TrackObjectReferenceDecrement(v73, v72);
LABEL_7:
    --*(_DWORD *)(v4 + 8);
    v8 = *v6;
    v9 = gpHandleManager;
    v10 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v8 & 0xFFFFFF);
    v11 = *((_QWORD *)v9 + 2);
    v12 = v10;
    v13 = *(_DWORD *)(v11 + 2056);
    if ( v10 >= v13 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
      goto LABEL_92;
    if ( v10 >= v13 )
      v14 = ((v10 - v13) >> 16) + 1;
    else
      v14 = 0;
    v15 = *(_QWORD *)(v11 + 8LL * v14 + 8);
    if ( v14 )
      v12 = ((1 - v14) << 16) - v13 + v10;
    if ( (unsigned int)v12 >= *(_DWORD *)(v15 + 20) )
LABEL_92:
      v16 = 0LL;
    else
      v16 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * (v12 >> 8)) + 16LL * (unsigned __int8)v12 + 8);
    v17 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)v9,
            (unsigned __int16)*v16 | (*v16 >> 8) & 0xFF0000u);
    v18 = *((_QWORD *)v9 + 2);
    v19 = v17;
    v20 = *(_DWORD *)(v18 + 2056);
    if ( v17 < v20 + ((*(unsigned __int16 *)(v18 + 2) + 0xFFFF) << 16) )
    {
      if ( v17 >= v20 )
        v21 = ((v17 - v20) >> 16) + 1;
      else
        v21 = 0;
      v22 = *(_QWORD *)(v18 + 8LL * v21 + 8);
      if ( v21 )
        v19 = ((1 - v21) << 16) - v20 + v17;
      *(_DWORD *)(*(_QWORD *)v22 + 24LL * v19 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v22 + 24) + 8 * ((unsigned __int64)v19 >> 8)) + 16LL * (unsigned __int8)v19,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  v23 = *this;
  v24 = (PDEV **)*((_QWORD *)*this + 6);
  v23[9] |= 0x10u;
  v25 = gpHandleManager;
  v76 = v24;
  v26 = GdiHandleManager::DecodeIndex(
          (GdiHandleEntryDirectory **)gpHandleManager,
          (unsigned __int16)*v23 | ((unsigned int)*v23 >> 8) & 0xFF0000);
  v27 = *((_QWORD *)v25 + 2);
  v28 = v26;
  v29 = *(_DWORD *)(v27 + 2056);
  if ( v26 >= v29 + ((*(unsigned __int16 *)(v27 + 2) + 0xFFFF) << 16) )
  {
    v32 = 0LL;
  }
  else
  {
    if ( v26 >= v29 )
      v30 = ((v26 - v29) >> 16) + 1;
    else
      v30 = 0;
    v31 = *(_QWORD *)(v27 + 8LL * v30 + 8);
    if ( v30 )
      v26 += ((1 - v30) << 16) - v29;
    v32 = 0LL;
    if ( v26 < *(_DWORD *)(v31 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v31 + 24) + 8 * ((unsigned __int64)v26 >> 8))
                   + 16LL * (unsigned __int8)v26
                   + 8) )
    {
      v32 = *(_QWORD *)v31 + 24LL * v26;
    }
  }
  v33 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v25, v28);
  v34 = *(_DWORD *)(v27 + 2056);
  v35 = v33;
  if ( v33 >= v34 + ((*(unsigned __int16 *)(v27 + 2) + 0xFFFF) << 16) )
    goto LABEL_97;
  if ( v33 >= v34 )
    v36 = ((v33 - v34) >> 16) + 1;
  else
    v36 = 0;
  v37 = *(_QWORD *)(v27 + 8LL * v36 + 8);
  if ( v36 )
    v35 = ((1 - v36) << 16) - v34 + v33;
  if ( (unsigned int)v35 >= *(_DWORD *)(v37 + 20) )
LABEL_97:
    v38 = 0LL;
  else
    v38 = *(int **)(*(_QWORD *)(**(_QWORD **)(v37 + 24) + 8 * (v35 >> 8)) + 16LL * (unsigned __int8)v35 + 8);
  if ( v38 != v23 )
    v32 = 0LL;
  *(_BYTE *)(v32 + 15) |= 4u;
  v39 = (__int16 *)*((_QWORD *)v23 + 192);
  if ( v39 && v39 != (__int16 *)prgnDefault )
  {
    if ( v39[7] >= 0 )
    {
      Win32FreePool(*((_QWORD *)v23 + 192));
    }
    else
    {
      v40 = qword_1C018FBD0;
      if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
        Win32FreeToPagedLookasideListImpl(v40, v39);
    }
  }
  *((_QWORD *)v23 + 192) = prgnDefault;
  v41 = *this;
  v42 = **this;
  (*this)[9] |= 0x10u;
  v43 = gpHandleManager;
  v44 = GdiHandleManager::DecodeIndex(
          (GdiHandleEntryDirectory **)gpHandleManager,
          (unsigned __int16)v42 | (v42 >> 8) & 0xFF0000);
  v45 = *((_QWORD *)v43 + 2);
  v46 = v44;
  v47 = *(_DWORD *)(v45 + 2056);
  if ( v44 >= v47 + ((*(unsigned __int16 *)(v45 + 2) + 0xFFFF) << 16) )
  {
    v50 = 0LL;
  }
  else
  {
    if ( v44 >= v47 )
      v48 = ((v44 - v47) >> 16) + 1;
    else
      v48 = 0;
    v49 = *(_QWORD *)(v45 + 8LL * v48 + 8);
    if ( v48 )
      v44 += ((1 - v48) << 16) - v47;
    v50 = 0LL;
    if ( v44 < *(_DWORD *)(v49 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v49 + 24) + 8 * ((unsigned __int64)v44 >> 8))
                   + 16LL * (unsigned __int8)v44
                   + 8) )
    {
      v50 = *(_QWORD *)v49 + 24LL * v44;
    }
  }
  v51 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v43, v46);
  v52 = *(_DWORD *)(v45 + 2056);
  v53 = v51;
  if ( v51 >= v52 + ((*(unsigned __int16 *)(v45 + 2) + 0xFFFF) << 16) )
    goto LABEL_102;
  if ( v51 >= v52 )
    v54 = ((v51 - v52) >> 16) + 1;
  else
    v54 = 0;
  v55 = *(_QWORD *)(v45 + 8LL * v54 + 8);
  if ( v54 )
    v53 = ((1 - v54) << 16) - v52 + (unsigned int)v53;
  if ( (unsigned int)v53 >= *(_DWORD *)(v55 + 20) )
LABEL_102:
    v56 = 0LL;
  else
    v56 = *(int **)(*(_QWORD *)(**(_QWORD **)(v55 + 24) + 8 * (v53 >> 8)) + 16LL * (unsigned __int8)v53 + 8);
  if ( v56 != v41 )
    v50 = 0LL;
  *(_BYTE *)(v50 + 15) |= 4u;
  v57 = *this;
  if ( !*((_QWORD *)*this + 195) || (v57[10] & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)*this) )
    v58 = *((_QWORD *)v57 + 193);
  if ( v58 )
  {
    v59 = (__int16 *)*((_QWORD *)v57 + 195);
    if ( !v59 || (v57[10] & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)v57) )
      v59 = (__int16 *)*((_QWORD *)v57 + 193);
    if ( v59 && v59 != (__int16 *)prgnDefault )
    {
      if ( v59[7] >= 0 )
      {
        Win32FreePool((__int64)v59);
      }
      else
      {
        v60 = qword_1C018FBD0;
        if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
          Win32FreeToPagedLookasideListImpl(v60, v59);
      }
    }
  }
  v61 = (REGION *)*((_QWORD *)*this + 195);
  if ( v61 )
    REGION::vDeleteREGION(v61);
  v62 = *this;
  if ( !*((_QWORD *)*this + 196) || (v62[10] & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)*this) )
    v63 = *((_QWORD *)v62 + 194);
  if ( v63 )
  {
    v70 = DC::prgnRao((DC *)v62);
    REGION::vDeleteREGION(v70);
  }
  v64 = (REGION *)*((_QWORD *)*this + 196);
  if ( v64 )
    REGION::vDeleteREGION(v64);
  v65 = (REGION *)*((_QWORD *)*this + 197);
  if ( v65 )
    REGION::vDeleteREGION(v65);
  v66 = (REGION *)*((_QWORD *)*this + 198);
  if ( v66 )
    REGION::vDeleteREGION(v66);
  v77 = (PDEV **)*((_QWORD *)*this + 7);
  v67 = v77;
  XDCOBJ::bDeleteDC((struct HOBJ__ ***)this, a2);
  LOBYTE(v5) = a2 != 0;
  PDEVOBJ::vUnreferencePdev(&v76, v5, v68);
  if ( v67 )
    PDEVOBJ::vUnreferencePdev(&v77, v5, v69);
}
