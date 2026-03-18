/*
 * XREFs of ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C00531E0
 * Callers:
 *     GreIntersectClipRect @ 0x1C0055340 (GreIntersectClipRect.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003AC98 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0042C1C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0045000 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0045114 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C00457B0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0046BE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     AllocateObject @ 0x1C0047B40 (AllocateObject.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?vGet_sizlWindow@DC@@QEAAXPEAUtagSIZE@@@Z @ 0x1C0051EF0 (-vGet_sizlWindow@DC@@QEAAXPEAUtagSIZE@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0054DEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bWrapped@ERECTL@@QEAAHXZ @ 0x1C0055778 (-bWrapped@ERECTL@@QEAAHXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0055844 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngSetLastError @ 0x1C008AC50 (EngSetLastError.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct _RECTL *a2, int a3)
{
  REGION *v4; // r12
  _WORD *Object; // rax
  REGION *v9; // rsi
  _QWORD *v10; // rax
  int v11; // eax
  unsigned int v12; // edx
  GdiHandleManager *v13; // r13
  unsigned int v14; // eax
  __int64 v15; // rdi
  unsigned int v16; // edx
  unsigned int v17; // ecx
  __int64 v18; // r10
  unsigned int v19; // r8d
  __int64 v20; // rbx
  __int64 v21; // rdx
  unsigned int v22; // eax
  unsigned int v23; // r8d
  unsigned __int64 v24; // rdx
  int v25; // r13d
  unsigned int v26; // ecx
  __int64 v27; // r9
  DC *v28; // rdx
  unsigned int v29; // ebx
  REGION *v30; // rdi
  REGION *v31; // rcx
  bool v32; // zf
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  REGION *v36; // r14
  int v37; // r12d
  LONG cx; // ebx
  _DWORD *v39; // rdi
  __int64 v40; // rcx
  int v41; // eax
  LONG v42; // ebx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  REGION *v46; // rcx
  REGION *v47; // [rsp+20h] [rbp-48h] BYREF
  int v48; // [rsp+28h] [rbp-40h]
  struct _RECTL v49; // [rsp+30h] [rbp-38h] BYREF
  __int16 *v50; // [rsp+40h] [rbp-28h] BYREF
  int v51; // [rsp+48h] [rbp-20h]
  REGION *v52; // [rsp+50h] [rbp-18h] BYREF
  int v53; // [rsp+58h] [rbp-10h]
  REGION *v54; // [rsp+B0h] [rbp+48h] BYREF
  LONG cy; // [rsp+B8h] [rbp+50h]
  int v56; // [rsp+C0h] [rbp+58h]
  tagSIZE v57; // [rsp+C8h] [rbp+60h] BYREF

  v56 = a3;
  v4 = (REGION *)*((_QWORD *)this + 28);
  if ( (a2->left & 0xF8000000) != 0 && (a2->left & 0xF8000000) != -134217728
    || (a2->bottom & 0xF8000000) != 0 && (a2->bottom & 0xF8000000) != -134217728
    || (a2->right & 0xF8000000) != 0 && (a2->right & 0xF8000000) != -134217728
    || (a2->top & 0xF8000000) != 0 && (a2->top & 0xF8000000) != -134217728 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v48 = 0;
  Object = AllocateObject(0xD8uLL, 4u, 0);
  v47 = (REGION *)Object;
  v9 = (REGION *)Object;
  if ( !Object )
    return 0;
  *((_DWORD *)Object + 20) = 120;
  *(_QWORD *)(Object + 42) = 1LL;
  *(_QWORD *)(Object + 46) = 0LL;
  *((_DWORD *)Object + 25) = 0;
  *((_DWORD *)Object + 26) = 0;
  *((_DWORD *)Object + 27) = 0x80000000;
  *((_QWORD *)Object + 14) = 0x7FFFFFFFLL;
  *((_QWORD *)Object + 5) = Object + 60;
  *((_QWORD *)Object + 3) = 216LL;
  *((_QWORD *)Object + 4) = 0LL;
  v10 = Object + 24;
  v10[1] = v10;
  *v10 = v10;
  RGNOBJ::vSet((RGNOBJ *)&v47, a2);
  v11 = *(_DWORD *)this;
  v12 = *(_DWORD *)this;
  *((_DWORD *)this + 9) |= 0x10u;
  v13 = gpHandleManager;
  v14 = GdiHandleManager::DecodeIndex(
          (GdiHandleEntryDirectory **)gpHandleManager,
          (unsigned __int16)v11 | (v12 >> 8) & 0xFF0000);
  v15 = *((_QWORD *)v13 + 2);
  v16 = *(_DWORD *)(v15 + 2056);
  if ( v14 >= v16 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
  {
    v20 = 0LL;
  }
  else
  {
    if ( v14 >= v16 )
      v17 = ((v14 - v16) >> 16) + 1;
    else
      v17 = 0;
    v18 = *(_QWORD *)(v15 + 8LL * v17 + 8);
    if ( v17 )
      v19 = v14 + ((1 - v17) << 16) - v16;
    else
      v19 = v14;
    v20 = 0LL;
    if ( v19 >= *(_DWORD *)(v18 + 20) )
      v21 = 0LL;
    else
      v21 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * ((unsigned __int64)v19 >> 8))
                      + 16LL * (unsigned __int8)v19
                      + 8);
    if ( v21 )
      v20 = *(_QWORD *)v18 + 24LL * v19;
  }
  v22 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v13, v14);
  v23 = *(_DWORD *)(v15 + 2056);
  v24 = v22;
  if ( v22 >= v23 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
  {
    v25 = 0;
  }
  else
  {
    if ( v22 >= v23 )
    {
      v26 = ((v22 - v23) >> 16) + 1;
      v25 = 0;
    }
    else
    {
      v25 = 0;
      v26 = 0;
    }
    v27 = *(_QWORD *)(v15 + 8LL * v26 + 8);
    if ( v26 )
      v24 = ((1 - v26) << 16) - v23 + v22;
    if ( (unsigned int)v24 < *(_DWORD *)(v27 + 20) )
    {
      v28 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * (v24 >> 8)) + 16LL * (unsigned __int8)v24 + 8);
      goto LABEL_23;
    }
  }
  v28 = 0LL;
LABEL_23:
  if ( v28 != this )
    v20 = 0LL;
  *(_BYTE *)(v20 + 15) |= 4u;
  if ( v4 )
  {
    v49.right = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v49, 0xD8u);
    v30 = *(REGION **)&v49.left;
    if ( *(_QWORD *)&v49.left )
    {
      v54 = v4;
      v29 = RGNOBJ::iCombine((RGNOBJ *)&v49, (struct RGNOBJ *)&v54, (struct RGNOBJ *)&v47, a3);
      if ( v29 )
      {
        v30 = *(REGION **)&v49.left;
        v31 = v54;
        ++*(_DWORD *)(*(_QWORD *)&v49.left + 32LL);
        *((_QWORD *)this + 28) = v30;
        v32 = (*((_DWORD *)v31 + 8))-- == 1;
        if ( v32 )
          REGION::vDeleteREGION(v31);
      }
      else
      {
        REGION::vDeleteREGION(*(REGION **)&v49.left);
        v30 = 0LL;
      }
      v9 = v47;
    }
    else
    {
      v29 = 0;
    }
    REGION::vDeleteREGION(v9);
    if ( v49.right != 1 )
      goto LABEL_35;
    v46 = v30;
    goto LABEL_60;
  }
  if ( a3 != 1 )
  {
    v53 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v52, 0xD8u);
    v51 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v50, 0xD8u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v50, v33, v34, v35);
    v36 = v52;
    if ( v52 )
    {
      if ( v50 )
      {
        DC::vGet_sizlWindow(this, &v57);
        v32 = *((_QWORD *)this + 64) == 0LL;
        v37 = 0;
        cx = v57.cx;
        v39 = (_DWORD *)*((_QWORD *)this + 6);
        cy = v57.cy;
        if ( !v32 )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v54);
          if ( (v39[8] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 64) + 112LL) < 0 )
          {
            v37 = v39[650];
            cx += v37;
            v25 = v39[651];
            cy = v25 + v57.cy;
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          if ( ghsemDynamicModeChange )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
            PsLeavePriorityRegion();
          }
        }
        v40 = *((_DWORD *)this + 10) & 1;
        v41 = *((_DWORD *)this + 2 * v40 + 358);
        v42 = cx - v41;
        v49.left = v37 - v41;
        v43 = *((_DWORD *)this + 2 * v40 + 359);
        v49.right = v42;
        v49.bottom = cy - v43;
        v49.top = v25 - v43;
        if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v49) && (unsigned int)ERECTL::bWrapped((ERECTL *)&v49) )
        {
          v29 = 0;
          REGION::vDeleteREGION(v36);
        }
        else
        {
          RGNOBJ::vSet((RGNOBJ *)&v50, &v49);
          v29 = RGNOBJ::iCombine((RGNOBJ *)&v52, (struct RGNOBJ *)&v50, (struct RGNOBJ *)&v47, v56);
          if ( v29 )
          {
            v36 = v52;
            v9 = v47;
            ++*((_DWORD *)v52 + 8);
            *((_QWORD *)this + 28) = v36;
LABEL_47:
            REGION::vDeleteREGION(v9);
            RGNMEMOBJTMP::~RGNMEMOBJTMP(&v50, v44, v45);
            if ( v53 != 1 )
              goto LABEL_35;
            v46 = v36;
LABEL_60:
            REGION::vDeleteREGION(v46);
LABEL_35:
            if ( v48 == 1 )
              REGION::vDeleteREGION(0LL);
            return v29;
          }
          REGION::vDeleteREGION(v52);
          v9 = v47;
        }
        v36 = 0LL;
        goto LABEL_47;
      }
      REGION::vDeleteREGION(v52);
      v36 = 0LL;
    }
    v29 = 0;
    goto LABEL_47;
  }
  ++*((_DWORD *)v9 + 8);
  v29 = 2;
  *((_QWORD *)this + 28) = v9;
  return v29;
}
