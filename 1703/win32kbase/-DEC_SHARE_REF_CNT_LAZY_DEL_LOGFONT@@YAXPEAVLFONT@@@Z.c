/*
 * XREFs of ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0030780
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002C340 (GreCreateDisplayDC.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0031560 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C003F66C (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     GreRestoreDCInternal @ 0x1C00A0C40 (GreRestoreDCInternal.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C002F388 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0030EA0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0033040 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAA_NI_N@Z @ 0x1C00335A0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAA_NI_N@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EBC80 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

void __fastcall DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(struct HOBJ__ **a1)
{
  struct OBJECT *v2; // rbp
  struct HOBJ__ *v3; // r12
  int v4; // r14d
  unsigned int v5; // esi
  GdiHandleManager *v6; // rbx
  int v7; // r15d
  unsigned int v8; // eax
  GdiHandleManager *v9; // rbx
  unsigned int v10; // eax
  struct _ENTRY *Entry; // rbx
  bool v12; // zf
  char v13; // al
  GdiHandleManager *v14; // rsi
  unsigned int v15; // edi
  __int64 v16; // rcx
  unsigned int v17; // r8d
  signed int v18; // edx
  __int64 v19; // rax
  _DWORD *v20; // rdx
  int v21; // eax
  __int64 v22; // rbx
  __int64 v23; // rcx
  unsigned int v24; // r8d
  signed int v25; // edx
  __int64 v26; // r10
  GdiHandleManager *v27; // rbx
  unsigned int v28; // eax
  __int64 v29; // r8
  unsigned __int64 v30; // rdx
  unsigned int v31; // r9d
  signed int v32; // ecx
  __int64 v33; // rax
  unsigned int v34; // ebx
  unsigned int v35; // edx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v36; // rdx
  unsigned int v37; // ecx
  unsigned int v38; // ebx
  unsigned int v39; // edi
  struct _ENTRY *v40; // [rsp+20h] [rbp-48h] BYREF
  int v41; // [rsp+28h] [rbp-40h]
  int v42; // [rsp+2Ch] [rbp-3Ch]
  __int64 v43; // [rsp+78h] [rbp+10h] BYREF

  if ( a1 )
  {
    v2 = 0LL;
    v3 = *a1;
    LOWORD(v4) = 0;
    v5 = (unsigned __int16)v3 | ((unsigned int)v3 >> 8) & 0xFF0000;
    v40 = 0LL;
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v43);
    v6 = gpHandleManager;
    v7 = 1;
    v41 = 1;
    v8 = GdiHandleManager::DecodeIndex(gpHandleManager, v5);
    if ( GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v6 + 2), v8, 0) )
    {
      v9 = gpHandleManager;
      v10 = GdiHandleManager::DecodeIndex(gpHandleManager, v5);
      Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v9 + 2), v10, 0);
      v40 = Entry;
      _m_prefetchw((char *)Entry + 8);
      v12 = (*((_BYTE *)Entry + 15) & 0x20) == 0;
      v42 = *((_DWORD *)Entry + 2);
      if ( !v12 )
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v40);
        v7 = v41;
        if ( !v41 )
          goto LABEL_29;
        Entry = v40;
      }
      if ( Entry )
      {
        if ( *((_BYTE *)Entry + 14) == 5 && gbGdiHmgrAltStacks && gpentHmgrAltStacks )
        {
          v35 = (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000;
          RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v35 | (v35 >> 8) & 0xFF0000);
        }
        v13 = *((_BYTE *)Entry + 14);
        v4 = *((_DWORD *)a1 + 2);
        if ( v13 == 5 )
        {
          v36 = a1[77];
          v37 = 0;
        }
        else
        {
          if ( v13 != 16 )
            goto LABEL_8;
          v36 = a1[19];
          v37 = 2;
        }
        TrackObjectReferenceDecrement(v37, v36);
LABEL_8:
        --*((_DWORD *)a1 + 2);
        v14 = gpHandleManager;
        v15 = *(_DWORD *)Entry & 0xFFFFFF;
        if ( v15 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            v38 = *(unsigned __int16 *)Entry;
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v15,
                                        1)
                 + 13) == HIWORD(v15) )
              v15 = v38;
          }
          else
          {
            v15 = *(unsigned __int16 *)Entry;
          }
        }
        v16 = *((_QWORD *)v14 + 2);
        v17 = *(_DWORD *)(v16 + 2056);
        if ( v15 >= v17 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
          goto LABEL_59;
        if ( v15 >= v17 )
        {
          v18 = ((v15 - v17) >> 16) + 1;
          if ( (v15 - v17) >> 16 == -2 )
            goto LABEL_59;
        }
        else
        {
          v18 = 0;
        }
        v19 = *(_QWORD *)(v16 + 8LL * v18 + 8);
        if ( v18 )
          v15 = v15 - (v18 << 16) - v17 + 0x10000;
        if ( v15 < *(_DWORD *)(v19 + 20) )
        {
          v20 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)v15 >> 8))
                           + 16LL * (unsigned __int8)v15
                           + 8);
          goto LABEL_18;
        }
LABEL_59:
        v20 = 0LL;
LABEL_18:
        v21 = (unsigned __int16)*v20;
        v22 = v21 | (*v20 >> 8) & 0xFF0000u;
        if ( (unsigned int)v22 >= 0x10000 )
        {
          if ( *(_DWORD *)v14 > 0x10000u )
          {
            v39 = (unsigned __int16)v21;
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)v14 + 2),
                                        (unsigned __int16)v21,
                                        1)
                 + 13) == WORD1(v22) )
              v22 = v39;
          }
          else
          {
            v22 = (unsigned __int16)v21;
          }
          if ( (unsigned int)v22 >= 0x10000 && *(_DWORD *)v14 > 0x10000u )
            GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v14 + 2), (unsigned __int16)v22, 1);
        }
        v23 = *((_QWORD *)v14 + 2);
        v24 = *(_DWORD *)(v23 + 2056);
        if ( (unsigned int)v22 >= v24 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16) )
          goto LABEL_28;
        if ( (unsigned int)v22 >= v24 )
        {
          v25 = (((unsigned int)v22 - v24) >> 16) + 1;
          if ( ((unsigned int)v22 - v24) >> 16 == -2 )
          {
LABEL_28:
            KeLeaveCriticalRegion();
            goto LABEL_29;
          }
        }
        else
        {
          v25 = 0;
        }
        v26 = *(_QWORD *)(v23 + 8LL * v25 + 8);
        if ( v25 )
          v22 = (_DWORD)v22 - (v25 << 16) - v24 + 0x10000;
        *(_DWORD *)(*(_QWORD *)v26 + 24 * v22 + 8) &= ~1u;
        ExReleasePushLockExclusiveEx(
          *(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * ((unsigned __int64)(unsigned int)v22 >> 8))
        + 16LL * (unsigned __int8)v22,
          0LL);
        KeLeaveCriticalRegion();
        goto LABEL_28;
      }
    }
    else
    {
      v7 = 0;
      v41 = 0;
      KeLeaveCriticalRegion();
    }
    if ( v7 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v40);
LABEL_29:
    if ( (unsigned __int16)v4 != 1 )
      return;
    v40 = 0LL;
    v41 = 0;
    HANDLELOCK::bLockHobj((HANDLELOCK *)&v40, v3, 0xAu);
    if ( !v41 || !v40 )
      goto LABEL_42;
    v27 = gpHandleManager;
    v28 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v40 & 0xFFFFFF);
    v29 = *((_QWORD *)v27 + 2);
    v30 = v28;
    v31 = *(_DWORD *)(v29 + 2056);
    if ( v28 < v31 + ((*(unsigned __int16 *)(v29 + 2) + 0xFFFF) << 16) )
    {
      if ( v28 < v31 )
      {
        v32 = 0;
LABEL_36:
        v33 = *(_QWORD *)(v29 + 8LL * v32 + 8);
        if ( v32 )
          v30 = (_DWORD)v30 - (v32 << 16) - v31 + 0x10000;
        if ( (unsigned int)v30 < *(_DWORD *)(v33 + 20) )
          v2 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * (v30 >> 8))
                                 + 16LL * (unsigned __int8)v30
                                 + 8);
        goto LABEL_40;
      }
      v32 = ((v28 - v31) >> 16) + 1;
      if ( (v28 - v31) >> 16 != -2 )
        goto LABEL_36;
    }
LABEL_40:
    v34 = *((unsigned __int8 *)GdiHandleManager::GetEntryFromObject(v27, v2) + 15);
    HANDLELOCK::vUnlock((HANDLELOCK *)&v40);
    if ( ((v34 >> 1) & 1) != 0 )
      bDeleteFont(v3, 0LL);
LABEL_42:
    if ( v41 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v40);
  }
}
