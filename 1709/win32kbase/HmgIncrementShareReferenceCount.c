/*
 * XREFs of HmgIncrementShareReferenceCount @ 0x1C004C880
 * Callers:
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C003DE40 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     EngLockSurface @ 0x1C004C660 (EngLockSurface.c)
 *     hbmSelectBitmap @ 0x1C004F3A0 (hbmSelectBitmap.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C005268C (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0054F7C (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C006BC10 (vDynamicConvertNewSurfaceDCs.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C009F010 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C00ED7C0 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00F4F60 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C00F8284 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0049604 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00A9698 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00EFAD0 (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C00FE3F0 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall HmgIncrementShareReferenceCount(struct OBJECT *a1)
{
  __int64 v2; // rdi
  unsigned int v3; // edx
  char v4; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v5; // rdx
  unsigned int v6; // edi
  GdiHandleManager *v7; // rsi
  __int64 v8; // rcx
  unsigned int v9; // r8d
  unsigned int v10; // edx
  __int64 v11; // r9
  _DWORD *v12; // rdx
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rdx
  unsigned int v16; // r8d
  unsigned int v17; // ecx
  __int64 v18; // r10
  unsigned int v19; // ebx
  __int64 v20; // [rsp+30h] [rbp-38h] BYREF
  int v21; // [rsp+38h] [rbp-30h]

  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v20, a1, 0, 0, 0);
  if ( v21 )
  {
    v2 = v20;
    if ( *(_BYTE *)(v20 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
    {
      v3 = (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000;
      RECALTLOCKSTACKBACKTRACE((unsigned __int16)v3 | (v3 >> 8) & 0xFF0000, a1);
    }
    v4 = *(_BYTE *)(v2 + 14);
    if ( v4 == 5 )
    {
      v5 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a1 + 77);
      if ( v5 && qword_1C018DF68 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C018DF68, v5, 1);
    }
    else if ( v4 == 16 )
    {
      TrackObjectReferenceIncrement(
        2u,
        *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)a1 + 19));
    }
    ++*((_DWORD *)a1 + 2);
    v6 = *(_DWORD *)v2 & 0xFFFFFF;
    if ( v6 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v6,
                                    1)
             + 13) == HIWORD(v6) )
          v6 = (unsigned __int16)v6;
      }
      else
      {
        v6 = (unsigned __int16)v6;
      }
    }
    v7 = gpHandleManager;
    v8 = *((_QWORD *)gpHandleManager + 2);
    v9 = *(_DWORD *)(v8 + 2056);
    if ( v6 >= v9 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
      goto LABEL_37;
    if ( v6 >= v9 )
      v10 = ((v6 - v9) >> 16) + 1;
    else
      v10 = 0;
    v11 = *(_QWORD *)(v8 + 8LL * v10 + 8);
    if ( v10 )
      v6 += ((1 - v10) << 16) - v9;
    if ( v6 >= *(_DWORD *)(v11 + 20) )
LABEL_37:
      v12 = 0LL;
    else
      v12 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * ((unsigned __int64)v6 >> 8))
                       + 16LL * (unsigned __int8)v6
                       + 8);
    v13 = (unsigned __int16)*v12;
    v14 = v13 | (*v12 >> 8) & 0xFF0000u;
    if ( (unsigned int)v14 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v19 = (unsigned __int16)v13;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v13,
                                    1)
             + 13) == WORD1(v14) )
          v14 = v19;
      }
      else
      {
        v14 = (unsigned __int16)v13;
      }
    }
    v15 = *((_QWORD *)v7 + 2);
    v16 = *(_DWORD *)(v15 + 2056);
    if ( (unsigned int)v14 < v16 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
    {
      if ( (unsigned int)v14 >= v16 )
        v17 = (((unsigned int)v14 - v16) >> 16) + 1;
      else
        v17 = 0;
      v18 = *(_QWORD *)(v15 + 8LL * v17 + 8);
      if ( v17 )
        v14 = ((1 - v17) << 16) - v16 + (unsigned int)v14;
      *(_DWORD *)(*(_QWORD *)v18 + 24 * v14 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * ((unsigned __int64)(unsigned int)v14 >> 8))
      + 16LL * (unsigned __int8)v14,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
}
