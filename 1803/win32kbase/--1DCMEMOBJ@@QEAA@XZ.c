/*
 * XREFs of ??1DCMEMOBJ@@QEAA@XZ @ 0x1C002FCB0
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002D5C0 (GreCreateDisplayDC.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002AB40 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C002F350 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     bDeleteDCInternalEx @ 0x1C0030D10 (bDeleteDCInternalEx.c)
 */

void __fastcall DCMEMOBJ::~DCMEMOBJ(struct HOBJ__ ***this)
{
  struct HOBJ__ **v1; // rax
  bool v2; // zf
  struct HOBJ__ **v3; // rdi
  HDC v4; // r14
  BOOL v5; // esi
  GdiHandleManager *v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // r9
  _DWORD *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // r10
  unsigned int v16; // edx
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // r10
  struct HOBJ__ **v20; // [rsp+30h] [rbp-30h] BYREF
  int v21; // [rsp+38h] [rbp-28h]
  int v22; // [rsp+3Ch] [rbp-24h]
  __int64 v23; // [rsp+40h] [rbp-20h] BYREF
  int v24; // [rsp+48h] [rbp-18h]
  unsigned int v25; // [rsp+80h] [rbp+20h] BYREF
  int v26; // [rsp+88h] [rbp+28h] BYREF

  v1 = *this;
  if ( *this )
  {
    v21 = 0;
    v22 = 0;
    *this = 0LL;
    v2 = *((_DWORD *)this + 4) == 0;
    v20 = v1;
    if ( v2 )
    {
      v25 = 0x400000;
      bDeleteDCOBJ(&v20, &v25, &v26);
      v1 = v20;
    }
    if ( v1 )
    {
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v20);
      v3 = v20;
      v23 = 0LL;
      v24 = 0;
      v4 = (HDC)*v20;
      HANDLELOCK::vLockHandle(
        (HANDLELOCK *)&v23,
        (unsigned __int16)*v20 | ((unsigned int)*v20 >> 8) & 0xFF0000,
        0,
        v22,
        1);
      if ( v24 )
      {
        v5 = (*(_BYTE *)(v23 + 15) & 8) != 0 && !*((_DWORD *)v3 + 2) && *((_WORD *)v3 + 6) == 1;
        _InterlockedDecrement((volatile signed __int32 *)v3 + 3);
        v6 = gpHandleManager;
        v7 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v23 & 0xFFFFFF);
        v8 = *((_QWORD *)v6 + 2);
        v9 = v7;
        v10 = *(_DWORD *)(v8 + 2056);
        if ( v7 >= v10 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
          goto LABEL_27;
        if ( v7 >= v10 )
          v11 = ((v7 - v10) >> 16) + 1;
        else
          v11 = 0LL;
        v12 = *(_QWORD *)(v8 + 8 * v11 + 8);
        if ( (_DWORD)v11 )
          v9 = ((1 - (_DWORD)v11) << 16) - v10 + v7;
        if ( (unsigned int)v9 >= *(_DWORD *)(v12 + 20) )
LABEL_27:
          v13 = 0LL;
        else
          v13 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * (v9 >> 8)) + 16LL * (unsigned __int8)v9 + 8);
        v14 = GdiHandleManager::DecodeIndex(
                (GdiHandleEntryDirectory **)v6,
                (unsigned __int16)*v13 | (*v13 >> 8) & 0xFF0000u);
        v15 = *((_QWORD *)v6 + 2);
        v16 = v14;
        v17 = *(_DWORD *)(v15 + 2056);
        if ( v14 < v17 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
        {
          if ( v14 >= v17 )
            v18 = ((v14 - v17) >> 16) + 1;
          else
            v18 = 0LL;
          v19 = *(_QWORD *)(v15 + 8 * v18 + 8);
          if ( (_DWORD)v18 )
            v16 = ((1 - (_DWORD)v18) << 16) - v17 + v14;
          *(_DWORD *)(*(_QWORD *)v19 + 24LL * v16 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)v16 >> 8)) + 16LL * (unsigned __int8)v16,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
        if ( v5 )
          bDeleteDCInternalEx(v4, 0LL);
      }
    }
  }
}
