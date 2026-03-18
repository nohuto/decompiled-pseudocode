/*
 * XREFs of ??1DCOBJ@@QEAA@XZ @ 0x1C004AAC0
 * Callers:
 *     GreRestoreDC @ 0x1C00400D0 (GreRestoreDC.c)
 *     hbmSelectBitmap @ 0x1C004F3A0 (hbmSelectBitmap.c)
 *     bDeleteDCInternalEx @ 0x1C0054EF0 (bDeleteDCInternalEx.c)
 *     ReleaseCacheDC @ 0x1C0057AF0 (ReleaseCacheDC.c)
 *     hdcOpenDCW @ 0x1C005A170 (hdcOpenDCW.c)
 *     GreSelectPalette @ 0x1C006ED50 (GreSelectPalette.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C0089430 (NtGdiGetDeviceCapsAll.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C004C3D0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C004E630 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     bDeleteDCInternalEx @ 0x1C0054EF0 (bDeleteDCInternalEx.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00A9698 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 */

void __fastcall DCOBJ::~DCOBJ(DCOBJ *this)
{
  __int64 v2; // rdi
  HDC v3; // rbp
  int v4; // ebx
  GdiHandleManager *v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  unsigned int v9; // r9d
  unsigned int v10; // ecx
  __int64 v11; // rax
  _DWORD *v12; // rdx
  unsigned int v13; // eax
  GdiHandleEntryDirectory *v14; // rcx
  unsigned __int8 v15; // r9
  struct GdiHandleEntryTable *v16; // rdx
  unsigned __int64 v17; // r8
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+38h] [rbp-30h]
  unsigned int v20; // [rsp+70h] [rbp+8h] BYREF
  struct GdiHandleEntryTable *v21; // [rsp+78h] [rbp+10h] BYREF

  if ( *(_QWORD *)this )
  {
    XDCOBJ::RestoreAttributes(this);
    v2 = *(_QWORD *)this;
    v3 = **(HDC **)this;
    HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v18, *(struct OBJECT **)this, 0, *((_DWORD *)this + 3), 1);
    if ( v19 )
    {
      if ( (*(_BYTE *)(v18 + 15) & 8) == 0 || *(_DWORD *)(v2 + 8) || (v4 = 1, *(_WORD *)(v2 + 12) != 1) )
        v4 = 0;
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 12));
      v5 = gpHandleManager;
      v6 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v18 & 0xFFFFFF);
      v7 = *((_QWORD *)v5 + 2);
      v8 = v6;
      v9 = *(_DWORD *)(v7 + 2056);
      if ( v6 >= v9 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
        goto LABEL_21;
      if ( v6 >= v9 )
        v10 = ((v6 - v9) >> 16) + 1;
      else
        v10 = 0;
      v11 = *(_QWORD *)(v7 + 8LL * v10 + 8);
      if ( v10 )
        v8 = ((1 - v10) << 16) - v9 + (unsigned int)v8;
      if ( (unsigned int)v8 >= *(_DWORD *)(v11 + 20) )
LABEL_21:
        v12 = 0LL;
      else
        v12 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * (v8 >> 8)) + 16LL * (unsigned __int8)v8 + 8);
      v13 = GdiHandleManager::DecodeIndex(v5, (unsigned __int16)*v12 | (*v12 >> 8) & 0xFF0000);
      v14 = (GdiHandleEntryDirectory *)*((_QWORD *)v5 + 2);
      v21 = 0LL;
      v20 = 0;
      if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v14, v13, &v21, &v20) )
      {
        v15 = v20;
        v16 = v21;
        v17 = (unsigned __int64)v20 >> 8;
        *(_DWORD *)(*(_QWORD *)v21 + 24LL * v20 + 8) &= ~1u;
        ExReleasePushLockExclusiveEx(*(_QWORD *)(**((_QWORD **)v16 + 3) + 8 * v17) + 16LL * v15, 0LL);
        KeLeaveCriticalRegion();
      }
      KeLeaveCriticalRegion();
      if ( v4 )
        bDeleteDCInternalEx(v3, 0LL);
    }
  }
}
