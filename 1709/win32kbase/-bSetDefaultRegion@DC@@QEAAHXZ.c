/*
 * XREFs of ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00521E0
 * Callers:
 *     GreRestoreDC @ 0x1C00400D0 (GreRestoreDC.c)
 *     hbmSelectBitmap @ 0x1C004F3A0 (hbmSelectBitmap.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C0052070 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     GreCreateDisplayDC @ 0x1C0055870 (GreCreateDisplayDC.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0059C88 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0045114 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0046BE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0054DEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     McTemplateK0pz @ 0x1C00FD780 (McTemplateK0pz.c)
 */

__int64 __fastcall DC::bSetDefaultRegion(DC *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned int v5; // ebx
  __int64 v6; // r15
  unsigned int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // eax
  __int64 v10; // r12
  unsigned int v11; // edx
  unsigned int v12; // ecx
  DC *v13; // rdx
  __int64 v14; // rcx
  REGION *v15; // rbx
  _DWORD *v16; // rdi
  int v17; // ecx
  struct REGION *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 result; // rax
  struct _RECTL v22; // xmm0
  bool v23; // zf
  LONG v24; // eax
  int v25; // eax
  REGION *v26; // rdi
  struct _RECTL v27; // [rsp+30h] [rbp-20h] BYREF
  REGION *v28[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v29; // [rsp+80h] [rbp+30h] BYREF

  v3 = *(_DWORD *)this;
  *((_DWORD *)this + 9) |= 0x10u;
  v5 = (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000;
  if ( v5 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v3,
                                  1)
           + 13) == ((unsigned __int16)v3 | (v3 >> 8) & 0xFF0000) >> 16 )
        v5 = (unsigned __int16)v5;
    }
    else
    {
      v5 = (unsigned __int16)v3;
    }
  }
  v6 = *((_QWORD *)gpHandleManager + 2);
  v7 = *(_DWORD *)(v6 + 2056);
  if ( v5 >= v7 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
  {
    v10 = 0LL;
  }
  else
  {
    if ( v5 >= v7 )
      v8 = ((v5 - v7) >> 16) + 1;
    else
      v8 = 0;
    a3 = *(_QWORD *)(v6 + 8LL * v8 + 8);
    if ( v8 )
      v9 = v5 + ((1 - v8) << 16) - v7;
    else
      v9 = v5;
    v10 = 0LL;
    if ( v9 < *(_DWORD *)(a3 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a3 + 24) + 8 * ((unsigned __int64)v9 >> 8))
                   + 16LL * (unsigned __int8)v9
                   + 8) )
    {
      v10 = *(_QWORD *)a3 + 24LL * v9;
    }
  }
  if ( v5 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v5,
                                  1)
           + 13) == HIWORD(v5) )
        v5 = (unsigned __int16)v5;
    }
    else
    {
      v5 = (unsigned __int16)v5;
    }
  }
  v11 = *(_DWORD *)(v6 + 2056);
  if ( v5 >= v11 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
    goto LABEL_51;
  if ( v5 >= v11 )
    v12 = ((v5 - v11) >> 16) + 1;
  else
    v12 = 0;
  a3 = *(_QWORD *)(v6 + 8LL * v12 + 8);
  if ( v12 )
    v5 += ((1 - v12) << 16) - v11;
  if ( v5 >= *(_DWORD *)(a3 + 20) )
LABEL_51:
    v13 = 0LL;
  else
    v13 = *(DC **)(*(_QWORD *)(**(_QWORD **)(a3 + 24) + 8 * ((unsigned __int64)v5 >> 8)) + 16LL * (unsigned __int8)v5 + 8);
  if ( v13 != this )
    v10 = 0LL;
  *(_BYTE *)(v10 + 15) |= 4u;
  v14 = *((_QWORD *)this + 64);
  if ( v14 && (*(_DWORD *)(v14 + 116) & 0x800) != 0 )
    v15 = *(REGION **)((char *)this + 548);
  else
    v15 = (REGION *)*((_QWORD *)this + 66);
  v16 = (_DWORD *)*((_QWORD *)this + 6);
  v28[0] = 0LL;
  v28[1] = v15;
  v27 = *(struct _RECTL *)v28;
  if ( v14 )
  {
    v17 = (int)ghsemDynamicModeChange;
    if ( ghsemDynamicModeChange )
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz(
        v17,
        (unsigned int)&LockAcquireShared,
        a3,
        (_DWORD)ghsemDynamicModeChange,
        (__int64)L"ghsemDynamicModeChange");
    if ( (v16[8] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 64) + 112LL) < 0 )
    {
      v24 = v16[650];
      v27.right += v24;
      v27.left = v24;
      v25 = v16[651];
      v27.top += v25;
      v27.bottom += v25;
    }
    if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz(
        v17,
        (unsigned int)&LockRelease,
        a3,
        (_DWORD)ghsemDynamicModeChange,
        (__int64)L"ghsemDynamicModeChange");
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion();
    }
  }
  v18 = (struct REGION *)*((_QWORD *)this + 192);
  if ( v18 && v18 != prgnDefault )
  {
    v29 = *((_QWORD *)this + 192);
    RGNOBJ::vSet((RGNOBJ *)&v29, &v27);
LABEL_36:
    v19 = *((_QWORD *)this + 192);
    v28[0] = 0LL;
    *(_DWORD *)(v19 + 28) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
    v20 = *(_QWORD *)((char *)this + 940);
    v28[1] = v15;
    v29 = 0LL;
    *(_OWORD *)((char *)this + 1448) = *(_OWORD *)v28;
    *((_QWORD *)this + 179) = 0LL;
    result = 1LL;
    v22 = v27;
    *((_QWORD *)this + 199) = v20;
    *(struct _RECTL *)((char *)this + 1416) = v22;
    return result;
  }
  LODWORD(v28[1]) = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)v28, 0xD8u);
  v26 = v28[0];
  if ( v28[0] )
  {
    RGNOBJ::vSet((RGNOBJ *)v28, &v27);
    v23 = LODWORD(v28[1]) == 1;
    *((_QWORD *)this + 192) = v26;
    if ( v23 )
      REGION::vDeleteREGION(v26);
    goto LABEL_36;
  }
  v23 = LODWORD(v28[1]) == 1;
  *((_QWORD *)this + 192) = prgnDefault;
  if ( v23 )
    REGION::vDeleteREGION(0LL);
  return 0LL;
}
