/*
 * XREFs of ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C004EAB0
 * Callers:
 *     GreRestoreDC @ 0x1C00400D0 (GreRestoreDC.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C0050890 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C004DBDC (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C004E360 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C004EA90 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00A9698 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EFB84 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

void __fastcall DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(struct HOBJ__ **a1)
{
  struct OBJECT *v2; // rsi
  struct HOBJ__ *v3; // r12
  int v4; // ebp
  __int64 v5; // rdi
  char v6; // al
  unsigned int v7; // edi
  GdiHandleManager *v8; // r14
  __int64 v9; // rcx
  unsigned int v10; // r8d
  unsigned int v11; // edx
  __int64 v12; // r9
  _DWORD *v13; // rdx
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rdx
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  __int64 v19; // r10
  GdiHandleManager *v20; // rbx
  unsigned int v21; // eax
  __int64 v22; // r8
  unsigned __int64 v23; // rdx
  unsigned int v24; // r9d
  unsigned int v25; // ecx
  __int64 v26; // rax
  char v27; // bl
  unsigned int v28; // edx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v29; // rdx
  unsigned int v30; // ecx
  unsigned int v31; // ebx
  __int64 v32; // [rsp+30h] [rbp-48h] BYREF
  int v33; // [rsp+38h] [rbp-40h]

  if ( !a1 )
    return;
  v2 = 0LL;
  v3 = *a1;
  LOWORD(v4) = 0;
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v32, (struct OBJECT *)a1, 0, 0, 1);
  if ( v33 )
  {
    v5 = v32;
    if ( *(_BYTE *)(v32 + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
    {
      v28 = (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000;
      RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v28 | (v28 >> 8) & 0xFF0000);
    }
    v6 = *(_BYTE *)(v5 + 14);
    v4 = *((_DWORD *)a1 + 2);
    if ( v6 == 5 )
    {
      v29 = a1[77];
      v30 = 0;
    }
    else
    {
      if ( v6 != 16 )
      {
LABEL_6:
        --*((_DWORD *)a1 + 2);
        v7 = *(_DWORD *)v5 & 0xFFFFFF;
        if ( v7 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v7,
                                        1)
                 + 13) == HIWORD(v7) )
              v7 = (unsigned __int16)v7;
          }
          else
          {
            v7 = (unsigned __int16)v7;
          }
        }
        v8 = gpHandleManager;
        v9 = *((_QWORD *)gpHandleManager + 2);
        v10 = *(_DWORD *)(v9 + 2056);
        if ( v7 >= v10 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
          goto LABEL_50;
        if ( v7 >= v10 )
          v11 = ((v7 - v10) >> 16) + 1;
        else
          v11 = 0;
        v12 = *(_QWORD *)(v9 + 8LL * v11 + 8);
        if ( v11 )
          v7 += ((1 - v11) << 16) - v10;
        if ( v7 >= *(_DWORD *)(v12 + 20) )
LABEL_50:
          v13 = 0LL;
        else
          v13 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * ((unsigned __int64)v7 >> 8))
                           + 16LL * (unsigned __int8)v7
                           + 8);
        v14 = (unsigned __int16)*v13;
        v15 = v14 | (*v13 >> 8) & 0xFF0000u;
        if ( (unsigned int)v15 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            v31 = (unsigned __int16)v14;
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v14,
                                        1)
                 + 13) == WORD1(v15) )
              v15 = v31;
          }
          else
          {
            v15 = (unsigned __int16)v14;
          }
        }
        v16 = *((_QWORD *)v8 + 2);
        v17 = *(_DWORD *)(v16 + 2056);
        if ( (unsigned int)v15 < v17 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
        {
          if ( (unsigned int)v15 >= v17 )
            v18 = (((unsigned int)v15 - v17) >> 16) + 1;
          else
            v18 = 0;
          v19 = *(_QWORD *)(v16 + 8LL * v18 + 8);
          if ( v18 )
            v15 = ((1 - v18) << 16) - v17 + (unsigned int)v15;
          *(_DWORD *)(*(_QWORD *)v19 + 24 * v15 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)(unsigned int)v15 >> 8))
          + 16LL * (unsigned __int8)v15,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
        goto LABEL_26;
      }
      v29 = a1[19];
      v30 = 2;
    }
    TrackObjectReferenceDecrement(v30, v29);
    goto LABEL_6;
  }
LABEL_26:
  if ( (unsigned __int16)v4 == 1 )
  {
    v32 = 0LL;
    v33 = 0;
    HANDLELOCK::bLockHobj((HANDLELOCK *)&v32, v3, 10);
    if ( v33 )
    {
      v20 = gpHandleManager;
      v21 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v32 & 0xFFFFFF);
      v22 = *((_QWORD *)v20 + 2);
      v23 = v21;
      v24 = *(_DWORD *)(v22 + 2056);
      if ( v21 < v24 + ((*(unsigned __int16 *)(v22 + 2) + 0xFFFF) << 16) )
      {
        if ( v21 >= v24 )
          v25 = ((v21 - v24) >> 16) + 1;
        else
          v25 = 0;
        v26 = *(_QWORD *)(v22 + 8LL * v25 + 8);
        if ( v25 )
          v23 = ((1 - v25) << 16) - v24 + (unsigned int)v23;
        if ( (unsigned int)v23 < *(_DWORD *)(v26 + 20) )
          v2 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * (v23 >> 8))
                                 + 16LL * (unsigned __int8)v23
                                 + 8);
      }
      v27 = *((_BYTE *)GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)v20, v2) + 15);
      HANDLELOCK::vUnlock((HANDLELOCK *)&v32);
      if ( (v27 & 2) != 0 )
        bDeleteFont(v3, 0LL);
      if ( v33 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v32);
    }
  }
}
