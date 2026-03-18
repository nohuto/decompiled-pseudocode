/*
 * XREFs of ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C0039510
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C002BD78 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCreateDisplayDC @ 0x1C002C340 (GreCreateDisplayDC.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C00393A0 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     hbmSelectBitmapInternal @ 0x1C00A02A0 (hbmSelectBitmapInternal.c)
 *     GreRestoreDCInternal @ 0x1C00A0C40 (GreRestoreDCInternal.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0037A44 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C0039248 (-bDpiScaledSurface@DC@@QEAAHXZ.c)
 *     AllocateObject @ 0x1C003C340 (AllocateObject.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C003DBA0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall DC::bSetDefaultRegion(DC *this)
{
  unsigned int v1; // eax
  GdiHandleManager *v3; // r15
  unsigned int v4; // eax
  __int64 v5; // rbx
  unsigned int v6; // r8d
  unsigned int v7; // edx
  signed int v8; // ecx
  __int64 v9; // r9
  __int64 v10; // rdi
  unsigned int v11; // eax
  unsigned int v12; // r8d
  unsigned __int64 v13; // rdx
  signed int v14; // ecx
  __int64 v15; // rax
  DC *v16; // rdx
  __int64 v17; // rbx
  _DWORD *v18; // rdi
  bool v19; // zf
  __int64 v20; // rcx
  struct REGION *v21; // rax
  __int64 Object; // rax
  __int64 v23; // rdi
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 result; // rax
  struct _RECTL v28; // xmm0
  struct _RECTL v29; // [rsp+20h] [rbp-20h] BYREF
  __int128 v30; // [rsp+30h] [rbp-10h] BYREF
  __int64 v31; // [rsp+70h] [rbp+30h] BYREF
  __int64 v32; // [rsp+78h] [rbp+38h] BYREF

  v1 = *(_DWORD *)this;
  *((_DWORD *)this + 9) |= 0x10u;
  v3 = gpHandleManager;
  v4 = GdiHandleManager::DecodeIndex(
         (GdiHandleEntryDirectory **)gpHandleManager,
         (unsigned __int16)v1 | (v1 >> 8) & 0xFF0000);
  v5 = *((_QWORD *)v3 + 2);
  v6 = v4;
  v7 = *(_DWORD *)(v5 + 2056);
  if ( v4 >= v7 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
    goto LABEL_31;
  if ( v4 >= v7 )
  {
    v8 = ((v4 - v7) >> 16) + 1;
    if ( (v4 - v7) >> 16 != -2 )
      goto LABEL_4;
LABEL_31:
    v10 = 0LL;
    goto LABEL_9;
  }
  v8 = 0;
LABEL_4:
  v9 = *(_QWORD *)(v5 + 8LL * v8 + 8);
  if ( v8 )
    v4 = v4 - (v8 << 16) - v7 + 0x10000;
  v10 = 0LL;
  if ( v4 < *(_DWORD *)(v9 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * ((unsigned __int64)v4 >> 8)) + 16LL * (unsigned __int8)v4 + 8) )
  {
    v10 = *(_QWORD *)v9 + 24LL * v4;
  }
LABEL_9:
  v11 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v3, v6);
  v12 = *(_DWORD *)(v5 + 2056);
  v13 = v11;
  if ( v11 < v12 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
  {
    if ( v11 >= v12 )
    {
      v14 = ((v11 - v12) >> 16) + 1;
      if ( (v11 - v12) >> 16 == -2 )
        goto LABEL_33;
    }
    else
    {
      v14 = 0;
    }
    v15 = *(_QWORD *)(v5 + 8LL * v14 + 8);
    if ( v14 )
      v13 = (_DWORD)v13 - (v14 << 16) - v12 + 0x10000;
    if ( (unsigned int)v13 < *(_DWORD *)(v15 + 20) )
    {
      v16 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * (v13 >> 8)) + 16LL * (unsigned __int8)v13 + 8);
      goto LABEL_16;
    }
  }
LABEL_33:
  v16 = 0LL;
LABEL_16:
  if ( v16 != this )
    v10 = 0LL;
  *(_BYTE *)(v10 + 15) |= 4u;
  if ( (unsigned int)DC::bDpiScaledSurface(this) )
    v17 = *(_QWORD *)((char *)this + 548);
  else
    v17 = *((_QWORD *)this + 66);
  v18 = (_DWORD *)*((_QWORD *)this + 6);
  v19 = *((_QWORD *)this + 64) == 0LL;
  *(_QWORD *)&v29.left = 0LL;
  *(_QWORD *)&v29.right = v17;
  if ( !v19 )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v31);
    if ( (v18[8] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 64) + 112LL) < 0 )
    {
      v29.left = v18[650];
      v29.right = v17 + v29.left;
      v29.top = v18[651];
      v29.bottom = HIDWORD(v17) + v29.top;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion(v20);
    }
  }
  v21 = (struct REGION *)*((_QWORD *)this + 192);
  if ( v21 && v21 != prgnDefault )
  {
    v32 = *((_QWORD *)this + 192);
    RGNOBJ::vSet((RGNOBJ *)&v32, &v29);
    goto LABEL_27;
  }
  DWORD2(v30) = 0;
  Object = AllocateObject(0xD8uLL);
  *(_QWORD *)&v30 = Object;
  v23 = Object;
  if ( Object )
  {
    *(_DWORD *)(Object + 80) = 120;
    *(_QWORD *)(Object + 84) = 1LL;
    *(_QWORD *)(Object + 92) = 0LL;
    *(_DWORD *)(Object + 100) = 0;
    *(_DWORD *)(Object + 104) = 0;
    *(_DWORD *)(Object + 108) = 0x80000000;
    *(_QWORD *)(Object + 112) = 0x7FFFFFFFLL;
    *(_QWORD *)(Object + 40) = Object + 120;
    *(_QWORD *)(Object + 24) = 216LL;
    *(_QWORD *)(Object + 32) = 0LL;
    v24 = (_QWORD *)(Object + 48);
    v24[1] = v24;
    *v24 = v24;
    RGNOBJ::vSet((RGNOBJ *)&v30, &v29);
    *((_QWORD *)this + 192) = v23;
LABEL_27:
    v25 = *((_QWORD *)this + 192);
    *(_QWORD *)&v30 = 0LL;
    *(_DWORD *)(v25 + 28) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
    v26 = *(_QWORD *)((char *)this + 940);
    *((_QWORD *)&v30 + 1) = v17;
    v31 = 0LL;
    *(_OWORD *)((char *)this + 1448) = v30;
    *((_QWORD *)this + 179) = 0LL;
    result = 1LL;
    v28 = v29;
    *((_QWORD *)this + 199) = v26;
    *(struct _RECTL *)((char *)this + 1416) = v28;
    return result;
  }
  *((_QWORD *)this + 192) = prgnDefault;
  return 0LL;
}
