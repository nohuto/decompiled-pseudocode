/*
 * XREFs of CmMoveKey @ 0x14068C890
 * Callers:
 *     NtCompactKeys @ 0x1406876C0 (NtCompactKeys.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpMarkKeyDirty @ 0x1404735A4 (CmpMarkKeyDirty.c)
 *     CmpFreeKeyByCell @ 0x140475940 (CmpFreeKeyByCell.c)
 *     CmpCleanUpSubKeyInfo @ 0x140476784 (CmpCleanUpSubKeyInfo.c)
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpRebuildKcbCache @ 0x1405695C4 (CmpRebuildKcbCache.c)
 *     CmpDuplicateKey @ 0x14068E640 (CmpDuplicateKey.c)
 *     CmpFreeIndexByCell @ 0x14069A758 (CmpFreeIndexByCell.c)
 *     CmpUpdateParentForEachSon @ 0x14069BC20 (CmpUpdateParentForEachSon.c)
 */

__int64 __fastcall CmMoveKey(__int64 a1)
{
  ULONG_PTR v2; // r14
  __int64 v3; // rsi
  _WORD *v4; // r15
  ULONG_PTR v6; // rdi
  unsigned int v7; // r14d
  __int64 v8; // r12
  int v9; // ebx
  __int64 v10; // rdx
  _WORD *v11; // rbx
  _DWORD *v12; // rdx
  unsigned int v13; // ebx
  _WORD *v14; // rax
  __int64 v15; // r8
  _WORD *v16; // r13
  __int64 v17; // rsi
  __int16 v18; // ax
  unsigned int v19; // ecx
  unsigned int v20; // r15d
  _WORD *v21; // rax
  unsigned int v22; // ebx
  unsigned int v23; // ecx
  _DWORD *v24; // rax
  char v25; // al
  _DWORD *v26; // rax
  char v27; // al
  _DWORD *v28; // rsi
  unsigned int v29; // ebx
  unsigned int v30; // ecx
  _DWORD *v31; // rax
  _DWORD *v32; // rax
  __int64 v33; // rax
  unsigned int v34; // r12d
  __int64 v35; // rsi
  __int64 v36; // rdx
  _WORD *v37; // r14
  ULONG_PTR v38; // rbx
  ULONG_PTR v39; // rdx
  __int64 v40; // [rsp+20h] [rbp-48h]
  _DWORD v41[2]; // [rsp+28h] [rbp-40h] BYREF
  _DWORD v42[2]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v43[2]; // [rsp+38h] [rbp-30h] BYREF
  _DWORD v44[2]; // [rsp+40h] [rbp-28h] BYREF
  _DWORD v45[2]; // [rsp+48h] [rbp-20h] BYREF
  _DWORD v46[2]; // [rsp+50h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp-10h]
  unsigned int v48; // [rsp+B0h] [rbp+48h]
  _DWORD *v49; // [rsp+C0h] [rbp+58h]
  _WORD *v50; // [rsp+C8h] [rbp+60h]

  v45[1] = 0;
  v45[0] = -1;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0LL;
  v42[0] = -1;
  v4 = 0LL;
  v46[0] = -1;
  v44[0] = -1;
  v41[0] = -1;
  v43[0] = -1;
  BugCheckParameter3 = v2;
  v42[1] = 0;
  v46[1] = 0;
  v44[1] = 0;
  v41[1] = 0;
  v43[1] = 0;
  v49 = 0LL;
  v50 = 0LL;
  if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    return (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
  v6 = *(_QWORD *)(v2 + 24);
  v7 = *(_DWORD *)(v2 + 32);
  if ( (v7 & 0x80000000) != 0 )
    return 0LL;
  if ( v7 == *(_DWORD *)(*(_QWORD *)(v6 + 64) + 36LL) )
    return 3221225485LL;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v6 + 8))(v6, v7, v45);
  if ( v8 )
  {
    if ( !CmpMarkKeyDirty(v6, v7, 1) )
    {
LABEL_10:
      v9 = -1073741443;
LABEL_92:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v45);
      return (unsigned int)v9;
    }
    if ( (*(_BYTE *)(v8 + 2) & 0x10) != 0 )
    {
      v9 = -1073741811;
      goto LABEL_92;
    }
    v10 = *(unsigned int *)(v8 + 28);
    if ( (_DWORD)v10 != -1 )
    {
      v11 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(v6 + 8))(v6, v10, v41);
      if ( !v11 )
      {
LABEL_15:
        v9 = -1073741670;
        goto LABEL_92;
      }
      if ( !HvpMarkCellDirty(v6, *(unsigned int *)(v8 + 28), 0) )
      {
LABEL_17:
        v9 = -1073741443;
        v12 = v41;
LABEL_91:
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v12);
        goto LABEL_92;
      }
      if ( *v11 == 26994 && v11[1] )
      {
        do
        {
          if ( !HvpMarkCellDirty(v6, *(unsigned int *)&v11[2 * v3 + 2], 0) )
            goto LABEL_17;
          v3 = (unsigned int)(v3 + 1);
        }
        while ( (unsigned int)v3 < (unsigned __int16)v11[1] );
        v3 = 0LL;
      }
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v41);
    }
    v13 = *(_DWORD *)(v8 + 16);
    v40 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v6 + 8))(v6, v13, v42);
    if ( !v40 )
      goto LABEL_15;
    if ( !HvpMarkCellDirty(v6, v13, 0) )
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v42);
      goto LABEL_10;
    }
    v14 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v6 + 8))(
                     v6,
                     *(unsigned int *)(v40 + 28),
                     v44);
    v15 = 0LL;
    v16 = v14;
    if ( !v14 )
    {
LABEL_28:
      v9 = -1073741670;
LABEL_29:
      v17 = v40;
      goto LABEL_85;
    }
    v18 = *v14;
    if ( v18 == 26994 )
    {
      v19 = 0;
      v48 = 0;
      if ( v16[1] )
      {
        while ( 1 )
        {
          v20 = *(_DWORD *)&v16[2 * v19 + 2];
          v21 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v6 + 8))(v6, v20, v43);
          v15 = 0LL;
          v50 = v21;
          if ( !v21 )
          {
            v4 = 0LL;
            goto LABEL_28;
          }
          v22 = 0;
          v23 = (unsigned __int16)v21[1];
          if ( ((*v21 - 26220) & 0xFDFF) != 0 )
          {
            if ( v21[1] )
            {
              v24 = v21 + 2;
              while ( *v24 != v7 )
              {
                ++v22;
                ++v24;
                if ( v22 >= v23 )
                  goto LABEL_45;
              }
              v25 = HvpMarkCellDirty(v6, v20, 0);
              v4 = v50;
              if ( !v25 )
                goto LABEL_53;
              v3 = (__int64)&v50[2 * v22 + 2];
LABEL_48:
              v49 = (_DWORD *)v3;
              goto LABEL_50;
            }
          }
          else if ( v21[1] )
          {
            v26 = v21 + 2;
            while ( *v26 != v7 )
            {
              ++v22;
              v26 += 2;
              if ( v22 >= v23 )
              {
LABEL_45:
                v4 = v50;
                goto LABEL_50;
              }
            }
            v27 = HvpMarkCellDirty(v6, v20, 0);
            v4 = v50;
            if ( !v27 )
            {
LABEL_53:
              v9 = -1073741443;
              goto LABEL_29;
            }
            v3 = (__int64)&v50[4 * v22 + 2];
            goto LABEL_48;
          }
          v4 = v21;
LABEL_50:
          if ( !v3 )
          {
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64))(v6 + 16))(v6, v43, v15);
            v19 = v48 + 1;
            v50 = 0LL;
            v4 = 0LL;
            v48 = v19;
            if ( v19 < (unsigned __int16)v16[1] )
              continue;
          }
          v28 = v49;
          goto LABEL_73;
        }
      }
      v28 = 0LL;
      goto LABEL_73;
    }
    v29 = 0;
    v30 = (unsigned __int16)v16[1];
    if ( ((v18 - 26220) & 0xFDFF) != 0 )
    {
      if ( v16[1] )
      {
        v31 = v16 + 2;
        while ( *v31 != v7 )
        {
          ++v29;
          ++v31;
          if ( v29 >= v30 )
            goto LABEL_67;
        }
        v17 = v40;
        if ( HvpMarkCellDirty(v6, *(unsigned int *)(v40 + 28), 0) )
        {
          v28 = &v16[2 * v29 + 2];
LABEL_73:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64))(v6 + 16))(v6, v42, v15);
          v16 = 0LL;
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v44);
          v9 = CmpDuplicateKey(v6);
          if ( v9 < 0 )
          {
LABEL_87:
            if ( v4 )
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v43);
            if ( !v16 )
              goto LABEL_92;
            v12 = v44;
            goto LABEL_91;
          }
          if ( (unsigned __int8)CmpUpdateParentForEachSon(v6) )
          {
            v38 = BugCheckParameter3;
            *v28 = -1;
            CmpCleanUpSubKeyInfo(*(_QWORD *)(v38 + 64));
            *(_DWORD *)(v38 + 32) = -1;
            CmpRebuildKcbCache(v38);
            v39 = *(unsigned int *)(v8 + 28);
            if ( (_DWORD)v39 != -1 )
              CmpFreeIndexByCell(v6, v39);
            *(_QWORD *)(v8 + 20) = 0LL;
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v45);
            CmpFreeKeyByCell(v6, v7, 0);
            return 0LL;
          }
          v9 = -1073741670;
          v33 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(v6 + 8))(v6, 0xFFFFFFFFLL, v46);
          v34 = 0;
          v35 = v33;
          if ( v33 )
          {
            v36 = *(unsigned int *)(v33 + 28);
            if ( (_DWORD)v36 != -1 )
            {
              v37 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(v6 + 8))(v6, v36, v41);
              if ( v37 )
              {
                if ( *v37 == 26994 && v37[1] )
                {
                  do
                    HvFreeCell(v6, *(unsigned int *)&v37[2 * v34++ + 2]);
                  while ( v34 < (unsigned __int16)v37[1] );
                }
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v41);
              }
              HvFreeCell(v6, *(unsigned int *)(v35 + 28));
            }
            *(_QWORD *)(v35 + 20) = 0LL;
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v46);
          }
          CmpFreeKeyByCell(v6, 0xFFFFFFFF, 0);
          v4 = v50;
          v17 = 0LL;
LABEL_85:
          if ( v17 )
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64))(v6 + 16))(v6, v42, v15);
          goto LABEL_87;
        }
        goto LABEL_69;
      }
    }
    else if ( v16[1] )
    {
      v32 = v16 + 2;
      while ( *v32 != v7 )
      {
        ++v29;
        v32 += 2;
        if ( v29 >= v30 )
        {
LABEL_67:
          v28 = 0LL;
          goto LABEL_73;
        }
      }
      v17 = v40;
      if ( HvpMarkCellDirty(v6, *(unsigned int *)(v40 + 28), 0) )
      {
        v28 = &v16[4 * v29 + 2];
        goto LABEL_73;
      }
LABEL_69:
      v9 = -1073741443;
      goto LABEL_85;
    }
    v28 = 0LL;
    goto LABEL_73;
  }
  return (unsigned int)-1073741670;
}
