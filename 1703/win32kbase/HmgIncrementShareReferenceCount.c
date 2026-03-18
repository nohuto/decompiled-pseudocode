/*
 * XREFs of HmgIncrementShareReferenceCount @ 0x1C00367D0
 * Callers:
 *     EngLockSurface @ 0x1C0036A00 (EngLockSurface.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0037088 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0038D30 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C0039C50 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C00E80E0 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00F2AF0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C00F745C (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C002F350 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C0030C40 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00EBBCC (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 */

void __fastcall HmgIncrementShareReferenceCount(struct _BASEOBJECT *a1)
{
  unsigned int v1; // eax
  unsigned int v3; // edx
  signed int v4; // esi
  unsigned __int16 *v5; // rbx
  char v6; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v7; // rdx
  unsigned int v8; // ecx
  GdiHandleManager *v9; // rbp
  unsigned int v10; // edi
  __int64 v11; // rcx
  unsigned int v12; // r8d
  signed int v13; // edx
  __int64 v14; // rax
  _DWORD *v15; // rdx
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rcx
  unsigned int v19; // edx
  __int64 v20; // r10
  unsigned int v21; // edx
  unsigned int v22; // ebx
  unsigned int v23; // edi
  unsigned __int16 *v24; // [rsp+20h] [rbp-28h] BYREF
  int v25; // [rsp+28h] [rbp-20h]

  v1 = *(_DWORD *)a1;
  v3 = *(_DWORD *)a1;
  v4 = 0;
  v24 = 0LL;
  v25 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v24, (unsigned __int16)v1 | (v3 >> 8) & 0xFF0000, 0, 0);
  if ( !v25 )
    return;
  v5 = v24;
  if ( !v24 )
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v24);
    return;
  }
  if ( *((_BYTE *)v24 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
  {
    v21 = (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000;
    RECALTLOCKSTACKBACKTRACE((unsigned __int16)v21 | (v21 >> 8) & 0xFF0000, a1);
  }
  v6 = *((_BYTE *)v5 + 14);
  if ( v6 == 5 )
  {
    v7 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a1 + 77);
    v8 = 0;
  }
  else
  {
    if ( v6 != 16 )
      goto LABEL_8;
    v7 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a1 + 19);
    v8 = 2;
  }
  TrackObjectReferenceIncrement(v8, v7);
LABEL_8:
  ++*((_DWORD *)a1 + 2);
  v9 = gpHandleManager;
  v10 = *(_DWORD *)v5 & 0xFFFFFF;
  if ( v10 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      v22 = *v5;
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v10,
                                  1)
           + 13) == HIWORD(v10) )
        v10 = v22;
    }
    else
    {
      v10 = *v5;
    }
  }
  v11 = *((_QWORD *)v9 + 2);
  v12 = *(_DWORD *)(v11 + 2056);
  if ( v10 >= v12 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
    goto LABEL_40;
  if ( v10 >= v12 )
  {
    v13 = ((v10 - v12) >> 16) + 1;
    if ( (v10 - v12) >> 16 == -2 )
    {
LABEL_40:
      v15 = 0LL;
      goto LABEL_16;
    }
  }
  else
  {
    v13 = 0;
  }
  v14 = *(_QWORD *)(v11 + 8LL * v13 + 8);
  if ( v13 )
    v10 = v10 - (v13 << 16) - v12 + 0x10000;
  if ( v10 >= *(_DWORD *)(v14 + 20) )
    goto LABEL_40;
  v15 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * ((unsigned __int64)v10 >> 8))
                   + 16LL * (unsigned __int8)v10
                   + 8);
LABEL_16:
  v16 = (unsigned __int16)*v15;
  v17 = v16 | (*v15 >> 8) & 0xFF0000u;
  if ( (unsigned int)v17 >= 0x10000 )
  {
    if ( *(_DWORD *)v9 > 0x10000u )
    {
      v23 = (unsigned __int16)v16;
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)v9 + 2),
                                  (unsigned __int16)v16,
                                  1)
           + 13) == WORD1(v17) )
        v17 = v23;
    }
    else
    {
      v17 = (unsigned __int16)v16;
    }
    if ( (unsigned int)v17 >= 0x10000 && *(_DWORD *)v9 > 0x10000u )
      GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v9 + 2), (unsigned __int16)v17, 1);
  }
  v18 = *((_QWORD *)v9 + 2);
  v19 = *(_DWORD *)(v18 + 2056);
  if ( (unsigned int)v17 < v19 + ((*(unsigned __int16 *)(v18 + 2) + 0xFFFF) << 16) )
  {
    if ( (unsigned int)v17 < v19 || (v4 = (((unsigned int)v17 - v19) >> 16) + 1, ((unsigned int)v17 - v19) >> 16 != -2) )
    {
      v20 = *(_QWORD *)(v18 + 8LL * v4 + 8);
      if ( v4 )
        v17 = (_DWORD)v17 - (v4 << 16) - v19 + 0x10000;
      *(_DWORD *)(*(_QWORD *)v20 + 24 * v17 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * ((unsigned __int64)(unsigned int)v17 >> 8))
      + 16LL * (unsigned __int8)v17,
        0LL);
      KeLeaveCriticalRegion();
    }
  }
  KeLeaveCriticalRegion();
}
