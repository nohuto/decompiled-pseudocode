/*
 * XREFs of ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C00518E8
 * Callers:
 *     bDeleteDCInternalEx @ 0x1C0054EF0 (bDeleteDCInternalEx.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C00551C0 (--1DCMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C004AC70 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C0050890 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     EngSetLastError @ 0x1C008AC50 (EngSetLastError.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z @ 0x1C00A9654 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C00EFA4C (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 */

__int64 __fastcall bDeleteDCOBJ(struct HOBJ__ **this, unsigned int *a2, int *a3)
{
  struct HOBJ__ ***v3; // r14
  int v4; // ebp
  unsigned int *v5; // rax
  unsigned int v6; // edi
  struct HOBJ__ *v7; // r15
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // r8d
  _DWORD *v11; // rsi
  GdiHandleManager *v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  unsigned int v16; // r8d
  unsigned int v17; // ecx
  __int64 v18; // r9
  __int64 v19; // rbx
  char v20; // al
  int v21; // edx
  GdiHandleManager *v22; // rsi
  unsigned int v23; // eax
  __int64 v24; // r9
  unsigned __int64 v25; // rdx
  unsigned int v26; // r8d
  unsigned int v27; // ecx
  __int64 v28; // r9
  _DWORD *v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // r10
  unsigned int v32; // edx
  unsigned int v33; // r8d
  unsigned int v34; // ecx
  __int64 v35; // r10
  __int64 v36; // rdx
  int v37; // ecx
  int v38; // r8d
  ULONG v40; // ecx
  _DWORD *v41; // [rsp+30h] [rbp-48h] BYREF
  int v42; // [rsp+38h] [rbp-40h]

  v3 = (struct HOBJ__ ***)this;
  v4 = 0;
  if ( a2 )
  {
    this = (struct HOBJ__ **)*this;
    *((_DWORD *)this + 9) |= *a2 & 0x1C00000;
    v5 = a2;
  }
  else
  {
    v5 = (unsigned int *)((char *)*this + 36);
  }
  v6 = *v5;
  if ( (*v5 & 0x400000) == 0 && (*((_BYTE *)*v3 + 36) & 8) != 0 )
    v4 = 1;
  *a3 = v4;
  if ( !a2 && !(unsigned int)HmgQueryRemoveAttempted(**v3, 0) )
  {
    v40 = 5023;
LABEL_44:
    EngSetLastError(v40);
    return 0LL;
  }
  if ( *((_WORD *)*v3 + 6) > 1u && (v6 & 0x1C00000) == 0 )
  {
LABEL_43:
    v40 = 170;
    goto LABEL_44;
  }
  if ( !v4 )
  {
    v7 = **v3;
    GreAcquireHmgrSemaphore((int)this, (int)a2, (int)a3);
    HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v41, v7, 1, 0, 0);
    if ( v42 )
    {
      v11 = v41;
      v12 = gpHandleManager;
      v13 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *v41 & 0xFFFFFF);
      v14 = *((_QWORD *)v12 + 2);
      v15 = v13;
      v16 = *(_DWORD *)(v14 + 2056);
      if ( v13 >= v16 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
        goto LABEL_48;
      if ( v13 >= v16 )
        v17 = ((v13 - v16) >> 16) + 1;
      else
        v17 = 0;
      v18 = *(_QWORD *)(v14 + 8LL * v17 + 8);
      if ( v17 )
        v15 = v13 + ((1 - v17) << 16) - v16;
      if ( (unsigned int)v15 >= *(_DWORD *)(v18 + 20) )
LABEL_48:
        v19 = 0LL;
      else
        v19 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * (v15 >> 8)) + 16LL * (unsigned __int8)v15 + 8);
      if ( *((_BYTE *)v11 + 14) == 1 && *((_WORD *)v11 + 6) == WORD1(v7) )
      {
        if ( *(_WORD *)(v19 + 12) != 1 || *(_DWORD *)(v19 + 8) )
        {
          *((_BYTE *)v11 + 15) |= 8u;
        }
        else
        {
          v20 = *((_BYTE *)v11 + 15);
          if ( (v20 & 1) == 0 )
          {
            *((_BYTE *)v11 + 15) = v20 | 0x40;
            v21 = *v11;
            v22 = gpHandleManager;
            v23 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v21 & 0xFFFFFF);
            v24 = *((_QWORD *)v22 + 2);
            v25 = v23;
            v26 = *(_DWORD *)(v24 + 2056);
            if ( v23 >= v26 + ((*(unsigned __int16 *)(v24 + 2) + 0xFFFF) << 16) )
              goto LABEL_50;
            if ( v23 >= v26 )
              v27 = ((v23 - v26) >> 16) + 1;
            else
              v27 = 0;
            v28 = *(_QWORD *)(v24 + 8LL * v27 + 8);
            if ( v27 )
              v25 = ((1 - v27) << 16) - v26 + v23;
            if ( (unsigned int)v25 >= *(_DWORD *)(v28 + 20) )
LABEL_50:
              v29 = 0LL;
            else
              v29 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v28 + 24) + 8 * (v25 >> 8)) + 16LL * (unsigned __int8)v25 + 8);
            v30 = GdiHandleManager::DecodeIndex(
                    (GdiHandleEntryDirectory **)v22,
                    (unsigned __int16)*v29 | (*v29 >> 8) & 0xFF0000u);
            v31 = *((_QWORD *)v22 + 2);
            v32 = v30;
            v33 = *(_DWORD *)(v31 + 2056);
            if ( v30 < v33 + ((*(unsigned __int16 *)(v31 + 2) + 0xFFFF) << 16) )
            {
              if ( v30 >= v33 )
                v34 = ((v30 - v33) >> 16) + 1;
              else
                v34 = 0;
              v35 = *(_QWORD *)(v31 + 8LL * v34 + 8);
              if ( v34 )
                v32 = ((1 - v34) << 16) - v33 + v30;
              *(_DWORD *)(*(_QWORD *)v35 + 24LL * v32 + 8) &= ~1u;
              ExReleasePushLockExclusiveEx(
                *(_QWORD *)(**(_QWORD **)(v35 + 24) + 8 * ((unsigned __int64)v32 >> 8)) + 16LL * (unsigned __int8)v32,
                0LL);
              KeLeaveCriticalRegion();
            }
            KeLeaveCriticalRegion();
            GreReleaseHmgrSemaphore(v37, v36, v38);
LABEL_36:
            if ( !v19 )
              goto LABEL_43;
            goto LABEL_37;
          }
        }
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v41);
      if ( v42 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v41);
    }
    GreReleaseHmgrSemaphore(v9, v8, v10);
    v19 = 0LL;
    goto LABEL_36;
  }
LABEL_37:
  XDCOBJ::bCleanDC((DC **)v3);
  if ( !v4 )
    vDeleteDCInternalWorker((int **)v3, (v6 >> 23) & 1);
  return 1LL;
}
