/*
 * XREFs of ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C004E190
 * Callers:
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0051BC0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     HmgAlloc @ 0x1C0054040 (HmgAlloc.c)
 *     GreCreateRectRgnIndirect @ 0x1C0054BB0 (GreCreateRectRgnIndirect.c)
 *     HmgCreate @ 0x1C006F330 (HmgCreate.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     ?AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z @ 0x1C004E82C (-AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C004E8A0 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z @ 0x1C0087078 (-_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

char __fastcall GdiHandleManager::AcquireEntryIndex(GdiHandleManager *this, unsigned int *a2)
{
  GdiHandleManager *v2; // rbx
  __int64 v4; // r14
  __int64 v5; // r9
  __int64 v6; // r15
  __int64 v7; // rdi
  char v8; // r10
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r11
  unsigned int v12; // r8d
  unsigned int v13; // edx
  GdiHandleEntryTable *v14; // r14
  _QWORD *v16; // rbp
  unsigned __int64 v17; // r12
  _QWORD *v18; // rcx
  unsigned int v19; // edi
  GdiHandleEntryTable *v20; // rbp
  GdiHandleEntryTable *v21; // rcx
  void *v22; // rax
  signed __int32 v23[18]; // [rsp+0h] [rbp-48h] BYREF
  GdiHandleManager *v24; // [rsp+50h] [rbp+8h] BYREF

  v24 = this;
  v2 = gpHandleManager;
  while ( *((_DWORD *)v2 + 1) < *((_DWORD *)v2 + 2) )
  {
    v4 = *((_QWORD *)v2 + 2);
    v5 = 0LL;
    if ( *(_BYTE *)v4 )
      return 0;
    v6 = *(_QWORD *)(v4 + 8);
    LODWORD(v24) = 0;
    if ( *(_DWORD *)(v6 + 16) < *(_DWORD *)(v6 + 8) )
    {
      v7 = *(unsigned int *)(v6 + 12);
      if ( (_DWORD)v7 != -1 )
      {
        *(_DWORD *)(v6 + 12) = *(_DWORD *)(*(_QWORD *)v6 + 24 * v7);
        goto LABEL_6;
      }
      LODWORD(v7) = *(_DWORD *)(v6 + 20);
      v16 = *(_QWORD **)(v6 + 24);
      v17 = 8 * ((unsigned __int64)(unsigned int)v7 >> 8);
      if ( *(_QWORD *)(v17 + *v16) )
        goto LABEL_23;
      *(_QWORD *)(v17 + *v16) = Win32AllocPool(4096LL, 0x636C6547u);
      if ( *(_QWORD *)(v17 + *v16) )
      {
        v5 = 0LL;
LABEL_23:
        v18 = (_QWORD *)(*(_QWORD *)(v17 + *v16) + 16LL * (unsigned __int8)v7);
        *v18 = 0LL;
        v18[1] = 0LL;
        _InterlockedOr(v23, 0);
        ++*(_DWORD *)(v6 + 20);
LABEL_6:
        ++*(_DWORD *)(v6 + 16);
        goto LABEL_7;
      }
    }
    v19 = 1;
    if ( *(_WORD *)(v4 + 2) <= 1u )
    {
LABEL_30:
      if ( *(_WORD *)(v4 + 2) == 256 )
      {
        *(_BYTE *)v4 = 1;
        return 0;
      }
      *(_QWORD *)(v4 + 8LL * *(unsigned __int16 *)(v4 + 2) + 8) = GdiHandleEntryTable::_Create(0x10000u, 1);
      v21 = *(GdiHandleEntryTable **)(v4 + 8LL * *(unsigned __int16 *)(v4 + 2) + 8);
      if ( !v21 )
        return 0;
      GdiHandleEntryTable::AcquireEntryIndex(v21, (unsigned int *)&v24);
      v19 = *(unsigned __int16 *)(v4 + 2);
      *(_WORD *)(v4 + 2) = v19 + 1;
    }
    else
    {
      while ( 1 )
      {
        v20 = *(GdiHandleEntryTable **)(v4 + 8LL * v19 + 8);
        if ( GdiHandleEntryTable::AcquireEntryIndex(v20, (unsigned int *)&v24) )
          break;
        if ( *((_DWORD *)v20 + 4) != *((_DWORD *)v20 + 2) )
          return 0;
        if ( ++v19 >= *(unsigned __int16 *)(v4 + 2) )
          goto LABEL_30;
      }
    }
    LODWORD(v7) = (_DWORD)v24 + *(_DWORD *)(v4 + 2056) + ((v19 + 0xFFFF) << 16);
    v5 = 0LL;
LABEL_7:
    ++*((_DWORD *)v2 + 1);
    v8 = 0;
    v9 = *((_DWORD *)v2 + 1);
    if ( v9 > *(_DWORD *)v2 )
    {
      *(_DWORD *)v2 = v9;
      v8 = 1;
      gcMaxHmgr = v9;
    }
    v10 = *((_QWORD *)v2 + 2);
    v11 = (unsigned __int16)v7;
    v12 = *(_DWORD *)(v10 + 2056);
    if ( (unsigned __int16)v7 < v12 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16) )
    {
      if ( (unsigned __int16)v7 >= v12 )
        v13 = (((unsigned __int16)v7 - v12) >> 16) + 1;
      else
        v13 = 0;
      v14 = *(GdiHandleEntryTable **)(v10 + 8LL * v13 + 8);
      if ( v13 )
        v11 = ((1 - v13) << 16) - v12 + (unsigned __int16)v7;
      if ( (unsigned int)v11 < *((_DWORD *)v14 + 5) || GdiHandleEntryTable::GetEntryObject(v14, v11) )
        v5 = *(_QWORD *)v14 + 24 * v11;
    }
    if ( (unsigned int)v7 < 0x10000 )
    {
      if ( v8 || *(_DWORD *)v2 > 0x10000u )
        *(_BYTE *)(v5 + 13) = 0;
      else
        LODWORD(v7) = ((unsigned __int8)++*(_BYTE *)(v5 + 13) << 16) + v7;
LABEL_20:
      *a2 = v7;
      return 1;
    }
    if ( *(unsigned __int8 *)(v5 + 13) != WORD1(v7) )
      goto LABEL_20;
    if ( *((_QWORD *)v2 + 3) )
      goto LABEL_41;
    v22 = (void *)Win32AllocPool(0x40000LL, 0x636D6847u);
    *((_QWORD *)v2 + 3) = v22;
    if ( v22 )
    {
      memset(v22, 0, 0x40000uLL);
LABEL_41:
      *(_DWORD *)(*((_QWORD *)v2 + 3) + 4LL * (unsigned __int16)v7) = v7;
    }
  }
  return 0;
}
