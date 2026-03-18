/*
 * XREFs of ?vCleanupDCs@@YAXK@Z @ 0x1C0061AE0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007B8E0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     MultiUserCleanupDCs @ 0x1C008C0D0 (MultiUserCleanupDCs.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C004BE80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C224 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?bOwnedBy@ENTRYOBJ@@QEAAHK@Z @ 0x1C004E600 (-bOwnedBy@ENTRYOBJ@@QEAAHK@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     HmgCheckDCForPrivateReferences @ 0x1C0051CD0 (HmgCheckDCForPrivateReferences.c)
 *     bDeleteDCInternal @ 0x1C0061E40 (bDeleteDCInternal.c)
 *     HmgSetLock @ 0x1C0061E84 (HmgSetLock.c)
 *     ?vFixPublicDCWithPrivateReferences@XDCOBJ@@QEAAXK@Z @ 0x1C00FDC20 (-vFixPublicDCWithPrivateReferences@XDCOBJ@@QEAAXK@Z.c)
 */

void __fastcall vCleanupDCs(int a1, int a2, int a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  GdiHandleManager *v7; // r13
  unsigned int v8; // r14d
  __int64 v9; // r10
  __int64 v10; // r9
  unsigned int v11; // eax
  __int64 v12; // rsi
  unsigned int v13; // ebp
  __int64 v14; // r9
  __int64 v15; // r15
  struct HOBJ__ *v16; // r12
  unsigned int v17; // esi
  __int64 v18; // r14
  unsigned int v19; // edx
  __int64 v20; // r9
  unsigned int v21; // eax
  __int64 v22; // rbp
  unsigned int v23; // edx
  unsigned int v24; // edi
  char v25; // al
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  __int64 v29; // rdx
  int v30; // ecx
  int v31; // r8d
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  GdiHandleManager *v35; // rbp
  unsigned int v36; // eax
  __int64 v37; // rdi
  struct _ENTRY *Entry; // rax
  unsigned int v39; // eax
  unsigned int v40; // r8d
  unsigned __int64 v41; // rdx
  unsigned int v42; // ecx
  __int64 v43; // r9
  _QWORD v44[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  GreAcquireHmgrSemaphore(a1, a2, a3);
  v7 = gpHandleManager;
  v8 = *(_DWORD *)gpHandleManager;
  while ( ++v3 < v8 )
  {
    v9 = *((_QWORD *)v7 + 2);
    v4 = *(unsigned int *)(v9 + 2056);
    if ( v3 < (unsigned int)v4 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
    {
      if ( v3 >= (unsigned int)v4 )
        LODWORD(v5) = ((v3 - (unsigned int)v4) >> 16) + 1;
      else
        LODWORD(v5) = 0;
      v10 = *(_QWORD *)(v9 + 8LL * (unsigned int)v5 + 8);
      if ( (_DWORD)v5 )
        v11 = v3 + ((1 - (_DWORD)v5) << 16) - v4;
      else
        v11 = v3;
      v12 = 0LL;
      if ( v11 < *(_DWORD *)(v10 + 20) )
      {
        LODWORD(v6) = v11;
        v4 = (unsigned __int64)v11 >> 8;
        v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * v4) + 16LL * (unsigned __int8)v11 + 8);
        if ( v5 )
        {
          LODWORD(v5) = 3 * v11;
          v12 = *(_QWORD *)v10 + 24LL * v11;
        }
      }
      if ( v12 )
      {
        if ( !v3 )
          break;
        if ( *(_BYTE *)(v12 + 14) == 1 )
        {
          v13 = v3;
          if ( v3 >= 0x10000 )
          {
            if ( *(_DWORD *)v7 > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)v7 + 2),
                                          (unsigned __int16)v3,
                                          1)
                   + 13) == HIWORD(v3) )
                v13 = (unsigned __int16)v3;
            }
            else
            {
              v13 = (unsigned __int16)v3;
            }
          }
          v5 = *((_QWORD *)v7 + 2);
          LODWORD(v6) = *(_DWORD *)(v5 + 2056);
          if ( v13 >= (unsigned int)v6 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
          {
            v15 = 0LL;
            goto LABEL_24;
          }
          if ( v13 >= (unsigned int)v6 )
            v4 = ((v13 - (unsigned int)v6) >> 16) + 1;
          else
            v4 = 0LL;
          v14 = *(_QWORD *)(v5 + 8LL * (unsigned int)v4 + 8);
          if ( (_DWORD)v4 )
            v13 += ((1 - (_DWORD)v4) << 16) - v6;
          if ( v13 >= *(_DWORD *)(v14 + 20) )
          {
            v15 = 0LL;
          }
          else
          {
            v4 = (unsigned __int64)v13 >> 8;
            LODWORD(v5) = 2 * (unsigned __int8)v13;
            v15 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * v4) + 16LL * (unsigned __int8)v13 + 8);
          }
          if ( !v15
            || (*(_BYTE *)(v12 + 15) & 0x40) == 0
            || *(_WORD *)(v15 + 12) && *(struct _KTHREAD **)(v15 + 16) == KeGetCurrentThread() )
          {
LABEL_24:
            v16 = *(struct HOBJ__ **)v15;
            v17 = (unsigned __int16)*(_QWORD *)v15 | ((unsigned int)*(_QWORD *)v15 >> 8) & 0xFF0000;
            if ( v17 >= 0x10000 )
            {
              if ( *(_DWORD *)gpHandleManager > 0x10000u )
              {
                LODWORD(v5) = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                     *((GdiHandleEntryDirectory **)v7 + 2),
                                                     (unsigned __int16)*(_QWORD *)v15,
                                                     1)
                              + 13);
                if ( (_DWORD)v5 == HIWORD(v17) )
                  v17 = (unsigned __int16)v17;
              }
              else
              {
                v17 = (unsigned __int16)*(_QWORD *)v15;
              }
            }
            v18 = *((_QWORD *)v7 + 2);
            v19 = *(_DWORD *)(v18 + 2056);
            if ( v17 >= v19 + ((*(unsigned __int16 *)(v18 + 2) + 0xFFFF) << 16) )
            {
              v22 = 0LL;
            }
            else
            {
              if ( v17 >= v19 )
                LODWORD(v5) = ((v17 - v19) >> 16) + 1;
              else
                LODWORD(v5) = 0;
              v20 = *(_QWORD *)(v18 + 8LL * (unsigned int)v5 + 8);
              if ( (_DWORD)v5 )
                v21 = v17 + ((1 - (_DWORD)v5) << 16) - v19;
              else
                v21 = v17;
              v22 = 0LL;
              if ( v21 < *(_DWORD *)(v20 + 20) )
              {
                LODWORD(v6) = v21;
                v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * ((unsigned __int64)v21 >> 8))
                               + 16LL * (unsigned __int8)v21
                               + 8);
                if ( v5 )
                {
                  LODWORD(v5) = 3 * v21;
                  v22 = *(_QWORD *)v20 + 24LL * v21;
                }
              }
            }
            if ( v17 >= 0x10000 )
            {
              if ( *(_DWORD *)gpHandleManager > 0x10000u )
              {
                LODWORD(v5) = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                     *((GdiHandleEntryDirectory **)v7 + 2),
                                                     (unsigned __int16)v17,
                                                     1)
                              + 13);
                if ( (_DWORD)v5 == HIWORD(v17) )
                  v17 = (unsigned __int16)v17;
              }
              else
              {
                v17 = (unsigned __int16)v17;
              }
            }
            v23 = *(_DWORD *)(v18 + 2056);
            if ( v17 >= v23 + ((*(unsigned __int16 *)(v18 + 2) + 0xFFFF) << 16) )
              goto LABEL_80;
            if ( v17 >= v23 )
              LODWORD(v5) = ((v17 - v23) >> 16) + 1;
            else
              LODWORD(v5) = 0;
            v6 = *(_QWORD *)(v18 + 8LL * (unsigned int)v5 + 8);
            if ( (_DWORD)v5 )
              v17 += ((1 - (_DWORD)v5) << 16) - v23;
            if ( v17 >= *(_DWORD *)(v6 + 20) )
            {
LABEL_80:
              v4 = 0LL;
            }
            else
            {
              LODWORD(v5) = 2 * (unsigned __int8)v17;
              v4 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v6 + 24) + 8 * ((unsigned __int64)v17 >> 8))
                             + 16LL * (unsigned __int8)v17
                             + 8);
            }
            if ( v4 != v15 )
              goto LABEL_48;
            if ( !v22 )
              goto LABEL_48;
            v4 = *(unsigned __int8 *)(v22 + 14);
            v24 = a1;
            if ( !(_BYTE)v4 )
              goto LABEL_48;
            LODWORD(v5) = a1 & 0xFFFFFFFD ^ *(_DWORD *)(v22 + 8);
            if ( (v5 & 0xFFFFFFFE) != 0 )
            {
              if ( (*(_DWORD *)(v22 + 8) & 0xFFFFFFFE) == 0 )
              {
                v44[0] = 0LL;
                v44[1] = 0LL;
                while ( HmgCheckDCForPrivateReferences((DC *)v15, v24) )
                {
                  XDCOBJ::vLock((XDCOBJ *)v44, v16);
                  if ( v44[0] )
                  {
                    XDCOBJ::vFixPublicDCWithPrivateReferences((XDCOBJ *)v44, v24);
                    if ( v44[0] )
                      XDCOBJ::vUnlockFast((XDCOBJ *)v44);
                    v44[0] = 0LL;
                    break;
                  }
                  GreReleaseHmgrSemaphore(v30, v29, v31);
                  KeDelayExecutionThread(0, 0, gpLockShortDelay);
                  GreAcquireHmgrSemaphore(v33, v32, v34);
                  v35 = gpHandleManager;
                  v36 = GdiHandleManager::DecodeIndex(
                          (GdiHandleEntryDirectory **)gpHandleManager,
                          (unsigned __int16)v16 | ((unsigned int)v16 >> 8) & 0xFF0000);
                  v37 = *((_QWORD *)v35 + 2);
                  Entry = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v37, v36, 0);
                  if ( !Entry || *((_BYTE *)Entry + 14) != 1 || !ENTRYOBJ::bOwnedBy(Entry, 0) )
                    break;
                  v39 = GdiHandleManager::DecodeIndex(
                          (GdiHandleEntryDirectory **)v35,
                          (unsigned __int16)v16 | ((unsigned int)v16 >> 8) & 0xFF0000);
                  v40 = *(_DWORD *)(v37 + 2056);
                  v41 = v39;
                  if ( v39 >= v40 + ((*(unsigned __int16 *)(v37 + 2) + 0xFFFF) << 16) )
                    goto LABEL_96;
                  v42 = v39 >= v40 ? ((v39 - v40) >> 16) + 1 : 0;
                  v43 = *(_QWORD *)(v37 + 8LL * v42 + 8);
                  if ( v42 )
                    v41 = ((1 - v42) << 16) - v40 + v39;
                  if ( (unsigned int)v41 >= *(_DWORD *)(v43 + 20) )
LABEL_96:
                    v15 = 0LL;
                  else
                    v15 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v43 + 24) + 8 * (v41 >> 8))
                                    + 16LL * (unsigned __int8)v41
                                    + 8);
                  v24 = a1;
                }
              }
LABEL_48:
              v7 = gpHandleManager;
              v8 = *(_DWORD *)gpHandleManager;
            }
            else
            {
              GreReleaseHmgrSemaphore(v5, v4, v6);
              v25 = *(_BYTE *)(v22 + 15);
              if ( (v25 & 0x20) != 0 )
              {
                *(_BYTE *)(v22 + 15) = v25 & 0xDF;
                while ( *(_WORD *)(v15 + 12) )
                  KeDelayExecutionThread(0, 0, gpLockShortDelay);
              }
              HmgSetLock(v16);
              bDeleteDCInternal(v16, 1LL, 1LL);
              GreAcquireHmgrSemaphore(v27, v26, v28);
              v7 = gpHandleManager;
              v8 = *(_DWORD *)gpHandleManager;
            }
          }
        }
      }
    }
  }
  GreReleaseHmgrSemaphore(v5, v4, v6);
}
