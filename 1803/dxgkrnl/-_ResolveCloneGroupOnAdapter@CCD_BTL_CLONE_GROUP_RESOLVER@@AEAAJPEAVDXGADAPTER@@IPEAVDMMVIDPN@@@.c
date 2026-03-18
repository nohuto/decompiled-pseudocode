/*
 * XREFs of ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C00B066C
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_1_ @ 0x1C00ADE30 (_BtlPreAcquireSharedAccess_-CCD_BTL_CLONE_GROUP_RESOLVER--_ResolveAdaptersCallback_1_.c)
 * Callees:
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C00B296C (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z @ 0x1C00B2A10 (-QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00BBE40 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE4@Z @ 0x1C00D85B4 (-DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TEC.c)
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
  __int64 v9; // rcx
  __int64 v10; // rbx
  CCD_SET_STRING_ID *v11; // r10
  unsigned int PathSourceFromTarget; // r14d
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r12
  CCD_SET_STRING_ID *v17; // r13
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // r8d
  __int64 TargetIdFromCcdMonitorId; // r13
  char v22; // r8
  __int64 v23; // rdx
  bool v24; // zf
  bool v25; // cl
  __int64 v26; // rdx
  __int64 v27; // r8
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  unsigned int v36; // r10d
  unsigned int v37; // r9d
  unsigned int v38; // ecx
  CCD_SET_STRING_ID *v39; // rdx
  __int64 v40; // r8
  unsigned __int8 v41[4]; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v42; // [rsp+44h] [rbp-3Ch] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v43; // [rsp+48h] [rbp-38h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v44; // [rsp+4Ch] [rbp-34h] BYREF
  unsigned int v45; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v46; // [rsp+54h] [rbp-2Ch] BYREF
  unsigned int v47; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v48; // [rsp+5Ch] [rbp-24h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-20h] BYREF
  __int128 v50; // [rsp+70h] [rbp-10h]
  unsigned int v51; // [rsp+C0h] [rbp+40h] BYREF
  struct DMMVIDPN *v52; // [rsp+D8h] [rbp+58h]

  v52 = a4;
  v4 = a3;
  v5 = a4;
  v8 = CCD_SET_STRING_ID::QueryCloneInfo(*this, a3, &v46, &v48, &v51);
  v10 = v8;
  if ( v8 < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdAssertion(v9);
    v29[3] = v10;
    v29[4] = a2;
    v29[5] = v4;
    v29[6] = *this;
    v29[7] = v4;
    WdLogEvent5_WdAssertion(v29);
    return (unsigned int)v10;
  }
  v11 = *this;
  PathSourceFromTarget = -1;
  v13 = (unsigned int)v4;
  if ( (unsigned int)v4 >= *((unsigned __int16 *)*this + 16) )
  {
LABEL_33:
    if ( v5 )
      return 3221226021LL;
    PathSourceFromTarget = 0;
    v36 = *(_DWORD *)(*((_QWORD *)a2 + 307) + 80LL);
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
          v40 = 272LL * v38;
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
      v14 = CCD_SET_STRING_ID::QueryCloneInfo(v11, v13, &v47, 0LL, 0LL);
      v16 = v14;
      if ( v14 < 0 )
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdAssertion(v15);
        v35[3] = v16;
        v35[4] = a2;
        v35[5] = v4;
        v35[6] = *this;
        v35[7] = (unsigned int)v13;
        WdLogEvent5_WdAssertion(v35);
        return (unsigned int)v16;
      }
      if ( v47 != v46 )
        goto LABEL_17;
      v17 = *this;
      if ( (unsigned int)v13 >= *((unsigned __int16 *)*this + 16) )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdAssertion(v15);
        v32[3] = v17;
        v32[4] = *((unsigned __int16 *)v17 + 16);
        v32[6] = &v45;
        v32[5] = v13;
        WdLogEvent5_WdAssertion(v32);
        v34 = (_QWORD *)WdLogNewEntry5_WdAssertion(v33);
        v34[3] = -1073741811LL;
        v34[4] = a2;
        v34[5] = v4;
        v34[6] = *this;
        v34[7] = v13;
        WdLogEvent5_WdAssertion(v34);
        return 3221225485LL;
      }
      v45 = *(unsigned __int16 *)(*((_QWORD *)v17 + 3) + 8 * v13 + 4);
      if ( v45 )
      {
        v31 = (_QWORD *)WdLogNewEntry5_WdAssertion(v15);
        v31[3] = a2;
        v31[4] = v4;
        v31[5] = *this;
        v31[6] = v45;
        v31[7] = (unsigned int)v13;
        WdLogEvent5_WdAssertion(v31);
        return 3221225474LL;
      }
      v42 = -1;
      v41[0] = 0;
      LOBYTE(v51) = 0;
      v43 = D3DKMDT_VOT_UNINITIALIZED;
      v44 = D3DKMDT_VOT_UNINITIALIZED;
      v18 = CCD_SET_STRING_ID::QueryUnicodeMonitorId(v17, v13, &UnicodeString);
      TargetIdFromCcdMonitorId = v18;
      if ( v18 < 0 )
        goto LABEL_29;
      TargetIdFromCcdMonitorId = (int)DmmGetTargetIdFromCcdMonitorId(
                                        a2,
                                        &UnicodeString,
                                        v20,
                                        &v42,
                                        &v43,
                                        &v44,
                                        v41,
                                        (unsigned __int8 *)&v51);
      RtlFreeUnicodeString(&UnicodeString);
      v50 = 0uLL;
      UnicodeString = (struct _UNICODE_STRING)0LL;
      if ( (_DWORD)TargetIdFromCcdMonitorId == -1073741275 )
        break;
      if ( (int)TargetIdFromCcdMonitorId < 0 )
      {
LABEL_29:
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v19);
        v30[3] = TargetIdFromCcdMonitorId;
        v30[4] = a2;
        v30[5] = v4;
        v30[6] = *this;
        v30[7] = (unsigned int)v13;
        WdLogEvent5_WdError(v30);
        return (unsigned int)TargetIdFromCcdMonitorId;
      }
      v22 = v51;
      if ( (_DWORD)v13 != (_DWORD)v4 && (_BYTE)v51 )
        goto LABEL_24;
      v23 = 272LL * (unsigned int)v13;
      v24 = v41[0] == 0;
      *(_DWORD *)((char *)this[1] + v23 + 76) = v42;
      *(_DWORD *)((char *)this[1] + v23 + 136) = v43;
      *(_DWORD *)((char *)this[1] + v23 + 140) = v44;
      v25 = !v24 || v22;
      v5 = v52;
      *((_BYTE *)this[1] + v23 + 177) = v25;
      *(_DWORD *)((char *)this[1] + v23 + 232) = v48 | 0xFE520000;
      *(_QWORD *)((char *)this[1] + v23 + 48) |= 0xCC00000000000uLL;
      if ( v5 && PathSourceFromTarget == -1 )
        PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((struct DMMVIDPN *)((char *)v5 + 96), v42);
      v11 = *this;
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 >= *((unsigned __int16 *)*this + 16) )
        goto LABEL_17;
    }
    if ( (_DWORD)v13 == (_DWORD)v4 )
      return 3221226021LL;
LABEL_24:
    v5 = v52;
LABEL_17:
    if ( PathSourceFromTarget == -1 )
      goto LABEL_33;
  }
  if ( (unsigned int)v4 < (unsigned int)v13 )
  {
    v26 = 272 * v4;
    v27 = (unsigned int)(v13 - v4);
    do
    {
      v26 += 272LL;
      *(_QWORD *)((char *)this[1] + v26 - 208) = *(_QWORD *)((char *)a2 + 268);
      *(_DWORD *)((char *)this[1] + v26 - 200) = PathSourceFromTarget;
      *(_QWORD *)((char *)this[1] + v26 - 224) |= 0x300000000000uLL;
      --v27;
    }
    while ( v27 );
  }
  return 0LL;
}
