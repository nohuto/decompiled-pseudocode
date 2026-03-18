/*
 * XREFs of ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00593A0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0077550 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001820 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C0013A34 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013B00 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C0050CDC (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C0058020 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?SendTrimWnf@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@UD3DDDI_TRIMRESIDENCYSET_FLAGS@@_K@Z @ 0x1C0059300 (-SendTrimWnf@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@UD3DDDI_TRIMRESIDENCYSET_FLAGS@@_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::HandleTrimWnf(VIDMM_GLOBAL *this, char a2)
{
  __int64 v2; // rbx
  __int64 v4; // rbp
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r10
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  _BYTE *v11; // r9
  _QWORD *v12; // r11
  _QWORD *v13; // rax
  _QWORD *j; // r10
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  _QWORD **v22; // rax
  _QWORD *v23; // rcx
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // rax
  char v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rcx
  char v30; // r14
  char v31; // r15
  __int64 v32; // rcx
  __int64 v33; // r8
  char v34; // r10
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  VIDMM_GLOBAL *v43; // rcx
  VIDMM_GLOBAL *v44; // rax
  unsigned __int8 v45; // r8
  char *v46; // r14
  DXGPROCESS *v47; // rcx
  char IsHighPriorityProcess; // al
  __int64 v49; // rcx
  bool v50; // cc
  unsigned __int64 v51; // r9
  struct D3DDDI_TRIMRESIDENCYSET_FLAGS v52; // r12d
  int v53; // r9d
  _QWORD *i; // rax
  __int64 v55; // rax
  __int64 v56; // [rsp+28h] [rbp-70h]
  _BYTE v57[96]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v58; // [rsp+A0h] [rbp+8h]
  __int64 v59; // [rsp+A0h] [rbp+8h]
  VIDMM_GLOBAL **v60; // [rsp+A0h] [rbp+8h]
  unsigned __int64 v62; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v63; // [rsp+B8h] [rbp+20h]

  v2 = *((_QWORD *)this + 576);
  v4 = -1LL;
  v5 = -1LL;
  ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  v6 = *((unsigned int *)this + 1604);
  if ( (_DWORD)v6 )
  {
    v7 = *((_QWORD *)this + 5021);
    v8 = 0LL;
    v56 = v7;
    v9 = 0LL;
    v62 = 0LL;
    v58 = 0LL;
    v63 = v6;
    do
    {
      v10 = 2LL;
      v11 = (_BYTE *)(v8 + v7 + 504);
      v12 = (_QWORD *)(v8 + v7 + 648);
      do
      {
        if ( (*v11 & 1) == 0 )
        {
          v35 = *(v12 - 13);
          if ( !v35 )
            goto LABEL_21;
          v36 = 100LL * *v12;
          if ( v35 == 917943091 )
            v37 = v36 / 0x36B6B333;
          else
            v37 = v36 / v35;
          v38 = 100 - v37;
          if ( (__int64)(100 - v37) > (unsigned int)dword_1C004038C )
          {
            v39 = (unsigned int)dword_1C0040394;
            goto LABEL_45;
          }
          if ( v38 > (unsigned int)dword_1C0040390 )
          {
            v39 = (unsigned int)dword_1C00403A0
                + (v38 - (unsigned int)dword_1C0040390)
                * (unsigned int)(dword_1C004039C - dword_1C00403A0)
                / (unsigned int)(dword_1C004038C - dword_1C0040390);
LABEL_45:
            v40 = (unsigned int)dword_1C0040398;
          }
          else
          {
            v39 = (unsigned int)dword_1C00403A0;
            v40 = (unsigned int)dword_1C004039C;
          }
          if ( v4 >= v39 )
            v4 = v39;
          v9 = v58;
          if ( v5 >= v40 )
            v5 = v40;
          goto LABEL_21;
        }
        v13 = VIDMM_PARTITION::_PartitionTree;
        j = 0LL;
        if ( VIDMM_PARTITION::_PartitionTree )
        {
          do
          {
            j = v13;
            v13 = (_QWORD *)*v13;
          }
          while ( v13 );
        }
        if ( j )
        {
          while ( 1 )
          {
            v15 = *(_QWORD *)(j[4] + 368LL * *(unsigned int *)(*((_QWORD *)this + 3) + 200LL) + 24);
            v16 = *(_QWORD *)(v15 + v9 + 8);
            if ( v16 )
              break;
LABEL_18:
            v22 = (_QWORD **)j[1];
            v23 = j;
            if ( v22 )
            {
              j = (_QWORD *)j[1];
              for ( i = *v22; i; i = (_QWORD *)*i )
                j = i;
            }
            else
            {
              for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
              {
                if ( (_QWORD *)*j == v23 )
                  break;
                v23 = j;
              }
            }
            if ( !j )
              goto LABEL_21;
          }
          v17 = 100LL * *(_QWORD *)(v15 + v9 + 112);
          if ( v16 == 0x1E4AE7D99LL )
            v18 = v17 / 0x1E4AE7D99LL;
          else
            v18 = v17 / v16;
          v19 = 100 - v18;
          if ( (__int64)(100 - v18) > (unsigned int)dword_1C004038C )
          {
            v20 = (unsigned int)dword_1C0040394;
            goto LABEL_13;
          }
          if ( v19 > (unsigned int)dword_1C0040390 )
          {
            v20 = (unsigned int)dword_1C00403A0
                + (v19 - (unsigned int)dword_1C0040390)
                * (unsigned int)(dword_1C004039C - dword_1C00403A0)
                / (unsigned int)(dword_1C004038C - dword_1C0040390);
            v9 = v58;
LABEL_13:
            v21 = (unsigned int)dword_1C0040398;
          }
          else
          {
            v20 = (unsigned int)dword_1C00403A0;
            v21 = (unsigned int)dword_1C004039C;
          }
          if ( v4 >= v20 )
            v4 = v20;
          if ( v5 >= v21 )
            v5 = v21;
          goto LABEL_18;
        }
LABEL_21:
        v11 += 24;
        v12 += 41;
        --v10;
      }
      while ( v10 );
      v9 += 328LL;
      v7 = v56;
      v8 = v62 + 1552;
      v24 = v63-- == 1;
      v62 += 1552LL;
      v58 = v9;
    }
    while ( !v24 );
  }
  ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  v25 = *((_QWORD *)this + 5150);
  if ( v25 && v4 > v2 - v25 )
  {
    v26 = v2 - v25 - v4;
    v27 = 0;
  }
  else
  {
    *((_QWORD *)this + 5150) = v2;
    v26 = -v4;
    v27 = 1;
  }
  v28 = *((_QWORD *)this + 5151);
  if ( v28 && v5 > v2 - v28 )
  {
    v29 = v2 - v28 - v5;
    if ( v26 <= v29 )
      v26 = v2 - v28 - v5;
    v30 = 0;
  }
  else
  {
    *((_QWORD *)this + 5151) = v2;
    v29 = -v5;
    if ( v26 <= -v5 )
      v26 = -v5;
    v30 = 1;
  }
  v31 = 0;
  v59 = v26;
  if ( this != (VIDMM_GLOBAL *)-40968LL && *((struct _KTHREAD **)this + 5122) == KeGetCurrentThread() )
  {
    v55 = WdLogNewEntry5_WdAssertion(v29, v28);
    *(_QWORD *)(v55 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v55);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)this + 40968, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v53 = *((_DWORD *)this + 10246);
      if ( v53 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v32, (__int64)&EventBlockThread, v33, v53);
    }
    ExAcquirePushLockSharedEx((char *)this + 40968, 0LL);
  }
  if ( v27 )
  {
    v41 = *((_QWORD *)this + 575);
    if ( *((_QWORD *)this + 5152) == v41 )
    {
      ++*((_DWORD *)this + 10308);
    }
    else
    {
      *((_DWORD *)this + 10308) = 0;
      *((_QWORD *)this + 5152) = v41;
    }
    if ( !v30 )
      goto LABEL_59;
  }
  else if ( !v30 )
  {
    goto LABEL_37;
  }
  v42 = *((_QWORD *)this + 575);
  if ( *((_QWORD *)this + 5153) == v42 )
  {
    ++*((_DWORD *)this + 10309);
  }
  else
  {
    *((_DWORD *)this + 10309) = 0;
    *((_QWORD *)this + 5153) = v42;
  }
LABEL_59:
  if ( *((_DWORD *)this + 10308) > 1u && *((_DWORD *)this + 10309) > 1u )
    goto LABEL_38;
  v31 = 1;
LABEL_37:
  VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v59, 5);
  if ( v31 )
  {
    v34 = a2;
LABEL_62:
    v43 = (VIDMM_GLOBAL *)((char *)this + 41008);
    v44 = (VIDMM_GLOBAL *)*((_QWORD *)this + 5126);
    v60 = (VIDMM_GLOBAL **)v44;
    if ( v44 == (VIDMM_GLOBAL *)((char *)this + 41008) )
      goto LABEL_39;
    while ( 1 )
    {
      v45 = 0;
      v46 = (char *)v44 - 24;
      if ( !v31 )
        goto LABEL_73;
      v47 = *(DXGPROCESS **)(*((_QWORD *)v46 + 5) + 32LL);
      if ( v47 && (*((_BYTE *)v47 + 272) && !*((_BYTE *)v47 + 305) || *((_BYTE *)v47 + 304)) )
      {
        IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(v47);
        v49 = *((_QWORD *)v46 + 63);
        if ( IsHighPriorityProcess )
        {
          if ( !v49 )
          {
LABEL_71:
            v45 = 1;
            *((_QWORD *)v46 + 63) = v2;
            goto LABEL_72;
          }
          v50 = v5 <= v2 - v49;
        }
        else
        {
          if ( !v49 )
            goto LABEL_71;
          v50 = v4 <= v2 - v49;
        }
        if ( v50 )
          goto LABEL_71;
      }
LABEL_72:
      v43 = (VIDMM_GLOBAL *)((char *)this + 41008);
LABEL_73:
      v51 = 0LL;
      v52.0 = (struct D3DDDI_TRIMRESIDENCYSET_FLAGS::$0BC72FD4B990B613421A1F64C323019C::$3F3131289ECAE89F0D7ECD777680E73A)v45;
      v62 = 0LL;
      if ( v34 )
      {
        DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v57, (struct _KTHREAD **)v46 + 45);
        VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim((struct VIDMM_GLOBAL **)v46, &v62, 0, 1);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v57);
        v51 = v62;
        v43 = (VIDMM_GLOBAL *)((char *)this + 41008);
        v34 = a2;
        if ( v62 )
          v52.0 = (struct D3DDDI_TRIMRESIDENCYSET_FLAGS::$0BC72FD4B990B613421A1F64C323019C::$3F3131289ECAE89F0D7ECD777680E73A)(v52.Value | 4);
      }
      if ( v52.0 )
      {
        VIDMM_GLOBAL::SendTrimWnf(this, *((struct VIDMM_PROCESS **)v46 + 5), v52, v51);
        v34 = a2;
        v43 = (VIDMM_GLOBAL *)((char *)this + 41008);
      }
      v44 = *v60;
      v60 = (VIDMM_GLOBAL **)v44;
      if ( v44 == v43 )
        goto LABEL_39;
    }
  }
LABEL_38:
  v34 = a2;
  if ( a2 )
    goto LABEL_62;
LABEL_39:
  ExReleasePushLockSharedEx((char *)this + 40968, 0LL);
  KeLeaveCriticalRegion();
}
