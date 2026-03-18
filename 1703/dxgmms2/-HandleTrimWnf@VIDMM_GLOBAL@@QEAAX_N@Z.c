/*
 * XREFs of ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0056740
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0071420 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002144 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C0012984 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C004EA80 (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C00555A0 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?SendTrimWnf@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@UD3DDDI_TRIMRESIDENCYSET_FLAGS@@_K@Z @ 0x1C00566A4 (-SendTrimWnf@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@UD3DDDI_TRIMRESIDENCYSET_FLAGS@@_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::HandleTrimWnf(VIDMM_GLOBAL *this, char a2)
{
  struct _KTHREAD *v2; // rbx
  __int64 v3; // rdi
  unsigned int v4; // eax
  VIDMM_GLOBAL *v5; // r14
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // r10
  _QWORD *v9; // rcx
  __int64 v10; // r9
  unsigned __int64 v11; // r8
  signed __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  char v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v20; // r15
  char v21; // r12
  __int64 v22; // rcx
  __int64 v23; // r8
  char v24; // r10
  __int64 v25; // rax
  __int64 v26; // rax
  char *v27; // rcx
  char *v28; // rax
  unsigned __int8 v29; // r8
  struct _KTHREAD **v30; // r13
  DXGPROCESS *v31; // rcx
  char IsHighPriorityProcess; // al
  struct _KTHREAD *v33; // rcx
  bool v34; // cc
  unsigned __int64 v35; // r9
  struct D3DDDI_TRIMRESIDENCYSET_FLAGS v36; // r15d
  __int64 v37; // rax
  int v38; // r9d
  _BYTE v39[104]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v41; // [rsp+A0h] [rbp+8h]
  char **v42; // [rsp+A0h] [rbp+8h]
  unsigned __int64 v44; // [rsp+B0h] [rbp+18h] BYREF

  v2 = (struct _KTHREAD *)*((_QWORD *)this + 576);
  v3 = -1LL;
  v4 = *((_DWORD *)this + 1604);
  v5 = this;
  v6 = -1LL;
  if ( v4 )
  {
    v7 = v4;
    v8 = *((_QWORD *)this + 5150) + 248LL;
    LODWORD(v44) = dword_1C003C364;
    while ( 1 )
    {
      v9 = (_QWORD *)v8;
      v10 = 2LL;
      do
      {
        v11 = *(v9 - 27);
        if ( !v11 )
          goto LABEL_12;
        v12 = 100 - 100LL * *v9 / v11;
        if ( v12 <= (unsigned int)dword_1C003C354 )
        {
          if ( v12 <= (unsigned int)dword_1C003C358 )
          {
            v13 = (unsigned int)dword_1C003C368;
            v14 = (unsigned int)dword_1C003C364;
            goto LABEL_8;
          }
          v13 = (unsigned int)dword_1C003C368
              + (v12 - (unsigned int)dword_1C003C358)
              * (unsigned int)(dword_1C003C364 - dword_1C003C368)
              / (unsigned int)(dword_1C003C354 - dword_1C003C358);
        }
        else
        {
          v13 = (unsigned int)dword_1C003C35C;
        }
        v14 = (unsigned int)dword_1C003C360;
LABEL_8:
        if ( v3 >= v13 )
          v3 = v13;
        if ( v6 >= v14 )
          v6 = v14;
LABEL_12:
        ++v9;
        --v10;
      }
      while ( v10 );
      v8 += 280LL;
      if ( !--v7 )
      {
        v5 = this;
        break;
      }
    }
  }
  v15 = *((_QWORD *)v5 + 5187);
  if ( v15 && v3 > (__int64)v2 - v15 )
  {
    v16 = (__int64)v2 - v15 - v3;
    v17 = 0;
  }
  else
  {
    *((_QWORD *)v5 + 5187) = v2;
    v16 = -v3;
    v17 = 1;
  }
  v18 = *((_QWORD *)v5 + 5188);
  if ( v18 && v6 > (__int64)v2 - v18 )
  {
    v19 = (__int64)v2 - v18 - v6;
    if ( v16 <= v19 )
      v16 = (__int64)v2 - v18 - v6;
    v20 = 0;
  }
  else
  {
    *((_QWORD *)v5 + 5188) = v2;
    v19 = -v6;
    if ( v16 <= -v6 )
      v16 = -v6;
    v20 = 1;
  }
  v21 = 0;
  v41 = v16;
  if ( v5 != (VIDMM_GLOBAL *)-40968LL && *((struct _KTHREAD **)v5 + 5122) == KeGetCurrentThread() )
  {
    v37 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v37 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v37);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v5 + 40968, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v38 = *((_DWORD *)v5 + 10246);
      if ( v38 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v22, &EventBlockThread, v23, v38);
    }
    ExAcquirePushLockSharedEx((char *)v5 + 40968, 0LL);
  }
  if ( v17 )
  {
    v25 = *((_QWORD *)v5 + 575);
    if ( *((_QWORD *)v5 + 5189) == v25 )
    {
      ++*((_DWORD *)v5 + 10382);
    }
    else
    {
      *((_DWORD *)v5 + 10382) = 0;
      *((_QWORD *)v5 + 5189) = v25;
    }
    if ( !v20 )
      goto LABEL_41;
  }
  else if ( !v20 )
  {
    goto LABEL_29;
  }
  v26 = *((_QWORD *)v5 + 575);
  if ( *((_QWORD *)v5 + 5190) == v26 )
  {
    ++*((_DWORD *)v5 + 10383);
  }
  else
  {
    *((_DWORD *)v5 + 10383) = 0;
    *((_QWORD *)v5 + 5190) = v26;
  }
LABEL_41:
  if ( *((_DWORD *)v5 + 10382) > 1u && *((_DWORD *)v5 + 10383) > 1u )
    goto LABEL_30;
  v21 = 1;
LABEL_29:
  VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)v5, v41, 5);
  if ( v21 )
  {
    v24 = a2;
LABEL_44:
    v27 = (char *)v5 + 41008;
    v28 = (char *)*((_QWORD *)v5 + 5126);
    v42 = (char **)v28;
    if ( v28 == (char *)v5 + 41008 )
      goto LABEL_31;
    while ( 1 )
    {
      v29 = 0;
      v30 = (struct _KTHREAD **)(v28 - 24);
      if ( !v21 )
        goto LABEL_55;
      v31 = (DXGPROCESS *)*((_QWORD *)v30[5] + 4);
      if ( v31 && (*((_BYTE *)v31 + 240) && !*((_BYTE *)v31 + 273) || *((_BYTE *)v31 + 272)) )
      {
        IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(v31);
        v33 = v30[59];
        if ( IsHighPriorityProcess )
        {
          if ( !v33 )
          {
LABEL_53:
            v29 = 1;
            v30[59] = v2;
            goto LABEL_54;
          }
          v34 = v6 <= v2 - v33;
        }
        else
        {
          if ( !v33 )
            goto LABEL_53;
          v34 = v3 <= v2 - v33;
        }
        if ( v34 )
          goto LABEL_53;
      }
LABEL_54:
      v27 = (char *)v5 + 41008;
LABEL_55:
      v35 = 0LL;
      v36.0 = (struct D3DDDI_TRIMRESIDENCYSET_FLAGS::$0BC72FD4B990B613421A1F64C323019C::$3F3131289ECAE89F0D7ECD777680E73A)v29;
      v44 = 0LL;
      if ( v24 )
      {
        DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v39, v30 + 41);
        VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim(v30, &v44, 0, 1);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v39);
        v35 = v44;
        v27 = (char *)v5 + 41008;
        v24 = a2;
        if ( v44 )
          v36.0 = (struct D3DDDI_TRIMRESIDENCYSET_FLAGS::$0BC72FD4B990B613421A1F64C323019C::$3F3131289ECAE89F0D7ECD777680E73A)(v36.Value | 4);
      }
      if ( v36.0 )
      {
        VIDMM_GLOBAL::SendTrimWnf(v5, v30[5], v36, v35);
        v24 = a2;
        v27 = (char *)v5 + 41008;
      }
      v28 = *v42;
      v42 = (char **)v28;
      if ( v28 == v27 )
        goto LABEL_31;
    }
  }
LABEL_30:
  v24 = a2;
  if ( a2 )
    goto LABEL_44;
LABEL_31:
  ExReleasePushLockSharedEx((char *)v5 + 40968, 0LL);
  KeLeaveCriticalRegion();
}
