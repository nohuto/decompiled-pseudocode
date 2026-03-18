/*
 * XREFs of ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C00AFC34
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_1_ @ 0x1C00AF280 (_BtlPreAcquireSharedAccess_-CCD_BTL_CLONE_GROUP_RESOLVER--_ResolveAdaptersCallback_1_.c)
 * Callees:
 *     DmmGetTargetIdFromCcdMonitorId @ 0x1C00AF6C4 (DmmGetTargetIdFromCcdMonitorId.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C00B11C0 (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z @ 0x1C00B1260 (-QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00E0D48 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(
        CCD_SET_STRING_ID **this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        struct DMMVIDPN *a4)
{
  __int64 v4; // rsi
  struct DMMVIDPN *v5; // r13
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  CCD_SET_STRING_ID *v14; // r10
  unsigned int PathSourceFromTarget; // r14d
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 TargetIdFromCcdMonitorId; // r12
  CCD_SET_STRING_ID *v23; // r13
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // r8d
  char v29; // r8
  __int64 v30; // rdx
  bool v31; // zf
  bool v32; // cl
  __int64 v33; // rdx
  __int64 v34; // r8
  unsigned int v36; // r10d
  unsigned int v37; // r9d
  unsigned int v38; // ecx
  CCD_SET_STRING_ID *v39; // rdx
  __int64 v40; // r8
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  unsigned int v51[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v52; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v53; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v54; // [rsp+54h] [rbp-2Ch] BYREF
  unsigned int v55; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v56; // [rsp+5Ch] [rbp-24h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-20h] BYREF
  __int128 v58; // [rsp+70h] [rbp-10h]
  unsigned int v59; // [rsp+C0h] [rbp+40h] BYREF
  struct DMMVIDPN *v60; // [rsp+D8h] [rbp+58h]

  v60 = a4;
  v4 = a3;
  v5 = a4;
  v8 = CCD_SET_STRING_ID::QueryCloneInfo(*this, a3, &v54, &v56, &v59);
  v13 = v8;
  if ( v8 < 0 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    v41[3] = v13;
    v41[4] = a2;
    v41[5] = v4;
    v41[6] = *this;
    v41[7] = v4;
    WdLogEvent5_WdAssertion(v41);
    return (unsigned int)v13;
  }
  else
  {
    v14 = *this;
    PathSourceFromTarget = -1;
    v16 = (unsigned int)v4;
    if ( (unsigned int)v4 >= *((unsigned __int16 *)*this + 16) )
    {
LABEL_22:
      if ( v5 )
        return 3221226021LL;
      PathSourceFromTarget = 0;
      v36 = *(_DWORD *)(*((_QWORD *)a2 + 285) + 80LL);
      if ( !v36 )
        return 3221226021LL;
      v37 = *((unsigned __int16 *)*this + 16);
      while ( 1 )
      {
        v38 = 0;
        if ( *((_WORD *)*this + 16) )
        {
          v39 = this[1];
          do
          {
            v40 = 264LL * v38;
            if ( (*(_QWORD *)((_BYTE *)v39 + v40 + 48) & 0x200000000000LL) != 0
              && *(_DWORD *)((char *)v39 + v40 + 72) == PathSourceFromTarget
              && *(_DWORD *)((char *)v39 + v40 + 64) == *((_DWORD *)a2 + 67)
              && *(_DWORD *)((char *)v39 + v40 + 68) == *((_DWORD *)a2 + 68) )
            {
              break;
            }
            ++v38;
          }
          while ( v38 < v37 );
        }
        if ( v38 >= v37 )
          break;
        if ( ++PathSourceFromTarget >= v36 )
          return 3221226021LL;
      }
      if ( PathSourceFromTarget == -1 )
        return 3221226021LL;
    }
    else
    {
      while ( 1 )
      {
        v17 = CCD_SET_STRING_ID::QueryCloneInfo(v14, v16, &v55, 0LL, 0LL);
        TargetIdFromCcdMonitorId = v17;
        if ( v17 < 0 )
        {
          v50 = (_QWORD *)WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
          v50[3] = TargetIdFromCcdMonitorId;
          v50[4] = a2;
          v50[5] = v4;
          v50[6] = *this;
          v50[7] = (unsigned int)v16;
          WdLogEvent5_WdAssertion(v50);
          return (unsigned int)TargetIdFromCcdMonitorId;
        }
        if ( v55 != v54 )
          goto LABEL_17;
        v23 = *this;
        if ( (unsigned int)v16 >= *((unsigned __int16 *)*this + 16) )
        {
          v44 = (_QWORD *)WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
          v44[3] = v23;
          v44[4] = *((unsigned __int16 *)v23 + 16);
          v44[6] = &v53;
          v44[5] = v16;
          WdLogEvent5_WdAssertion(v44);
          v49 = (_QWORD *)WdLogNewEntry5_WdAssertion(v46, v45, v47, v48);
          v49[3] = -1073741811LL;
          v49[4] = a2;
          v49[5] = v4;
          v49[6] = *this;
          v49[7] = v16;
          WdLogEvent5_WdAssertion(v49);
          return 3221225485LL;
        }
        v24 = *(unsigned __int16 *)(*((_QWORD *)v23 + 3) + 8 * v16 + 4);
        v53 = v24;
        if ( (_DWORD)v24 )
        {
          v43 = (_QWORD *)WdLogNewEntry5_WdAssertion(v19, v24, v20, v21);
          v43[3] = a2;
          v43[4] = v4;
          v43[5] = *this;
          v43[6] = v53;
          v43[7] = (unsigned int)v16;
          WdLogEvent5_WdAssertion(v43);
          return 3221225474LL;
        }
        v51[1] = -1;
        LOBYTE(v51[0]) = 0;
        LOBYTE(v59) = 0;
        v52 = 0xFFFFFFFEFFFFFFFEuLL;
        v25 = CCD_SET_STRING_ID::QueryUnicodeMonitorId(v23, v16, &UnicodeString);
        TargetIdFromCcdMonitorId = v25;
        if ( v25 < 0 )
        {
LABEL_39:
          v42 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
          v42[3] = TargetIdFromCcdMonitorId;
          v42[4] = a2;
          v42[5] = v4;
          v42[6] = *this;
          v42[7] = (unsigned int)v16;
          WdLogEvent5_WdError(v42);
          return (unsigned int)TargetIdFromCcdMonitorId;
        }
        TargetIdFromCcdMonitorId = (int)DmmGetTargetIdFromCcdMonitorId(
                                          a2,
                                          (bool *)&UnicodeString,
                                          v28,
                                          &v51[1],
                                          (DXGADAPTER *)&v52,
                                          (_DWORD *)&v52 + 1,
                                          (bool *)v51,
                                          (bool *)&v59);
        RtlFreeUnicodeString(&UnicodeString);
        v58 = 0uLL;
        UnicodeString = (struct _UNICODE_STRING)0LL;
        if ( (_DWORD)TargetIdFromCcdMonitorId == -1073741275 )
          break;
        if ( (int)TargetIdFromCcdMonitorId < 0 )
          goto LABEL_39;
        v29 = v59;
        if ( (_DWORD)v16 != (_DWORD)v4 && (_BYTE)v59 )
          goto LABEL_34;
        v30 = 264LL * (unsigned int)v16;
        v31 = LOBYTE(v51[0]) == 0;
        *(_DWORD *)((char *)this[1] + v30 + 76) = v51[1];
        *(_QWORD *)((char *)this[1] + v30 + 136) = v52;
        v32 = !v31 || v29;
        v5 = v60;
        *((_BYTE *)this[1] + v30 + 177) = v32;
        *(_DWORD *)((char *)this[1] + v30 + 280) = v56 | 0xFE520000;
        *(_QWORD *)((char *)this[1] + v30 + 48) |= 0xCC00000000000uLL;
        if ( v5 && PathSourceFromTarget == -1 )
          PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((struct DMMVIDPN *)((char *)v5 + 96), v51[1]);
        v14 = *this;
        v16 = (unsigned int)(v16 + 1);
        if ( (unsigned int)v16 >= *((unsigned __int16 *)*this + 16) )
          goto LABEL_17;
      }
      if ( (_DWORD)v16 == (_DWORD)v4 )
        return 3221226021LL;
LABEL_34:
      v5 = v60;
LABEL_17:
      if ( PathSourceFromTarget == -1 )
        goto LABEL_22;
    }
    if ( (unsigned int)v4 < (unsigned int)v16 )
    {
      v33 = 264 * v4;
      v34 = (unsigned int)(v16 - v4);
      do
      {
        v33 += 264LL;
        *(_QWORD *)((char *)this[1] + v33 - 200) = *(_QWORD *)((char *)a2 + 268);
        *(_DWORD *)((char *)this[1] + v33 - 192) = PathSourceFromTarget;
        *(_QWORD *)((char *)this[1] + v33 - 216) |= 0x300000000000uLL;
        --v34;
      }
      while ( v34 );
    }
    return 0LL;
  }
}
