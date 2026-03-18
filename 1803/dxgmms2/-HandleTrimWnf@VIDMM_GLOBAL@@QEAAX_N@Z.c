/*
 * XREFs of ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C005DDF0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C007F920 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C0003A14 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0005484 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005510 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C005DBA8 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?SendTrimWnf@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@UD3DDDI_TRIMRESIDENCYSET_FLAGS@@_K@Z @ 0x1C005DD5C (-SendTrimWnf@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@UD3DDDI_TRIMRESIDENCYSET_FLAGS@@_K@Z.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C006D208 (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 */

void __fastcall VIDMM_GLOBAL::HandleTrimWnf(VIDMM_GLOBAL *this, char a2)
{
  struct VIDMM_PROCESS *v2; // rbx
  __int64 v4; // rbp
  __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r9
  _BYTE *v10; // r10
  _QWORD *v11; // rax
  _QWORD *i; // r11
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  signed __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  _QWORD **v18; // rax
  _QWORD *v19; // rcx
  bool v20; // zf
  __int64 v21; // rcx
  char v22; // r12
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  char v26; // di
  char v27; // r15
  __int64 v28; // rcx
  __int64 v29; // r8
  char v30; // r10
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // edx
  unsigned int v39; // eax
  VIDMM_GLOBAL *v40; // rax
  unsigned __int8 v41; // r8
  struct VIDMM_PROCESS **v42; // r12
  DXGPROCESS *v43; // rcx
  char IsHighPriorityProcess; // al
  struct VIDMM_PROCESS *v45; // rcx
  bool v46; // cc
  unsigned __int64 v47; // r9
  struct D3DDDI_TRIMRESIDENCYSET_FLAGS v48; // edi
  struct D3DDDI_TRIMRESIDENCYSET_FLAGS::$0BC72FD4B990B613421A1F64C323019C::$3F3131289ECAE89F0D7ECD777680E73A v49; // ecx
  int v50; // r9d
  _QWORD *v51; // rcx
  __int64 v52; // rax
  struct VIDMM_PROCESS *v53; // [rsp+20h] [rbp-68h]
  _BYTE v54[96]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v55; // [rsp+90h] [rbp+8h]
  __int64 v56; // [rsp+90h] [rbp+8h]
  VIDMM_GLOBAL *v57; // [rsp+90h] [rbp+8h]
  unsigned __int64 v59; // [rsp+A0h] [rbp+18h] BYREF
  struct VIDMM_PROCESS *v60; // [rsp+A8h] [rbp+20h]

  v2 = (struct VIDMM_PROCESS *)*((_QWORD *)this + 576);
  v4 = -1LL;
  v53 = v2;
  v60 = v2;
  v5 = -1LL;
  ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  if ( *((_DWORD *)this + 1748) )
  {
    v6 = *((_QWORD *)this + 5090);
    v7 = 0LL;
    v8 = 0LL;
    v59 = *((unsigned int *)this + 1748);
    v55 = 0LL;
    while ( 1 )
    {
      v9 = 0LL;
      v10 = (_BYTE *)(v7 + v6 + 512);
      do
      {
        if ( (*v10 & 1) == 0 )
        {
          v31 = *(_QWORD *)(v7 + v9 + v6 + 552);
          if ( !v31 )
            goto LABEL_19;
          v32 = 100LL * *(_QWORD *)(v7 + v9 + v6 + 656);
          if ( v31 == 917943091 )
            v33 = v32 / 0x36B6B333;
          else
            v33 = v32 / v31;
          v34 = 100 - v33;
          if ( (__int64)(100 - v33) > (unsigned int)dword_1C004738C )
          {
            v35 = (unsigned int)dword_1C0047394;
            goto LABEL_45;
          }
          v8 = v55;
          if ( v34 > (unsigned int)dword_1C0047390 )
          {
            v35 = (unsigned int)dword_1C00473A0
                + (v34 - (unsigned int)dword_1C0047390)
                * (unsigned int)(dword_1C004739C - dword_1C00473A0)
                / (unsigned int)(dword_1C004738C - dword_1C0047390);
LABEL_45:
            v36 = (unsigned int)dword_1C0047398;
          }
          else
          {
            v35 = (unsigned int)dword_1C00473A0;
            v36 = (unsigned int)dword_1C004739C;
          }
          if ( v4 >= v35 )
            v4 = v35;
          if ( v5 >= v36 )
            v5 = v36;
          goto LABEL_19;
        }
        v11 = VIDMM_PARTITION::_PartitionTree;
        i = 0LL;
        if ( VIDMM_PARTITION::_PartitionTree )
        {
          do
          {
            i = v11;
            v11 = (_QWORD *)*v11;
          }
          while ( v11 );
        }
        if ( i )
        {
          while ( 1 )
          {
            v13 = *(_QWORD *)(i[4] + 368LL * *(unsigned int *)(*((_QWORD *)this + 3) + 200LL) + 24);
            v14 = *(_QWORD *)(v8 + v13 + 8);
            if ( v14 )
              break;
LABEL_16:
            v18 = (_QWORD **)i[1];
            v19 = i;
            if ( v18 )
            {
              v51 = *v18;
              for ( i = (_QWORD *)i[1]; v51; v51 = (_QWORD *)*v51 )
                i = v51;
            }
            else
            {
              for ( i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL); i; i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL) )
              {
                if ( (_QWORD *)*i == v19 )
                  break;
                v19 = i;
              }
            }
            if ( !i )
              goto LABEL_19;
          }
          v15 = 100 - 100LL * *(_QWORD *)(v8 + v13 + 112) / v14;
          if ( v15 > (unsigned int)dword_1C004738C )
          {
            v16 = (unsigned int)dword_1C0047394;
            goto LABEL_11;
          }
          if ( v15 > (unsigned int)dword_1C0047390 )
          {
            v8 = v55;
            v16 = (unsigned int)dword_1C00473A0
                + (v15 - (unsigned int)dword_1C0047390)
                * (unsigned int)(dword_1C004739C - dword_1C00473A0)
                / (unsigned int)(dword_1C004738C - dword_1C0047390);
LABEL_11:
            v17 = (unsigned int)dword_1C0047398;
          }
          else
          {
            v16 = (unsigned int)dword_1C00473A0;
            v17 = (unsigned int)dword_1C004739C;
            v8 = v55;
          }
          if ( v4 >= v16 )
            v4 = v16;
          if ( v5 >= v17 )
            v5 = v17;
          goto LABEL_16;
        }
LABEL_19:
        v10 += 24;
        v9 += 328LL;
      }
      while ( v9 < 656 );
      v8 += 328LL;
      v7 += 1560LL;
      v20 = v59-- == 1;
      v55 = v8;
      if ( v20 )
      {
        v2 = v53;
        break;
      }
    }
  }
  ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  v21 = *((_QWORD *)this + 5222);
  if ( v21 && v4 > (__int64)v2 - v21 )
  {
    v22 = 0;
    v23 = (__int64)v2 - v21 - v4;
  }
  else
  {
    *((_QWORD *)this + 5222) = v2;
    v23 = -v4;
    v22 = 1;
  }
  v24 = *((_QWORD *)this + 5223);
  if ( v24 && v5 > (__int64)v2 - v24 )
  {
    v25 = (__int64)v2 - v24 - v5;
    if ( v23 <= v25 )
      v23 = (__int64)v2 - v24 - v5;
    v26 = 0;
  }
  else
  {
    *((_QWORD *)this + 5223) = v2;
    v25 = -v5;
    if ( v23 <= -v5 )
      v23 = -v5;
    v26 = 1;
  }
  v27 = 0;
  v56 = v23;
  if ( this != (VIDMM_GLOBAL *)-41544LL )
  {
    if ( *((struct _KTHREAD **)this + 5194) == KeGetCurrentThread() )
    {
      v52 = WdLogNewEntry5_WdAssertion(v25, v24);
      *(_QWORD *)(v52 + 24) = 1306LL;
      WdLogEvent5_WdAssertion(v52);
    }
    v2 = v60;
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)this + 41544, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v50 = *((_DWORD *)this + 10390);
      if ( v50 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v28, (__int64)&EventBlockThread, v29, v50);
    }
    ExAcquirePushLockSharedEx((char *)this + 41544, 0LL);
  }
  if ( v22 )
  {
    v37 = *((_QWORD *)this + 575);
    if ( *((_QWORD *)this + 5224) == v37 )
    {
      v38 = *((_DWORD *)this + 10452) + 1;
      *((_DWORD *)this + 10452) = v38;
      v39 = v38;
    }
    else
    {
      v38 = 0;
      *((_DWORD *)this + 10452) = 0;
      v39 = 0;
      *((_QWORD *)this + 5224) = v37;
    }
    if ( !v26 )
      goto LABEL_59;
  }
  else
  {
    if ( !v26 )
      goto LABEL_37;
    v37 = *((_QWORD *)this + 575);
    v38 = *((_DWORD *)this + 10452);
  }
  v39 = v38;
  if ( *((_QWORD *)this + 5225) == v37 )
  {
    ++*((_DWORD *)this + 10453);
  }
  else
  {
    *((_DWORD *)this + 10453) = 0;
    *((_QWORD *)this + 5225) = v37;
  }
LABEL_59:
  if ( v39 > 1 && *((_DWORD *)this + 10453) > 1u )
    goto LABEL_38;
  v27 = 1;
LABEL_37:
  VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v56, 5);
  if ( v27 )
  {
    v30 = a2;
LABEL_62:
    v40 = (VIDMM_GLOBAL *)*((_QWORD *)this + 5198);
    v57 = v40;
    if ( v40 == (VIDMM_GLOBAL *)((char *)this + 41584) )
      goto LABEL_39;
    while ( 1 )
    {
      v41 = 0;
      v42 = (struct VIDMM_PROCESS **)((char *)v40 - 24);
      if ( v27 )
        break;
LABEL_73:
      v47 = 0LL;
      v48.0 = (struct D3DDDI_TRIMRESIDENCYSET_FLAGS::$0BC72FD4B990B613421A1F64C323019C::$3F3131289ECAE89F0D7ECD777680E73A)v41;
      v59 = 0LL;
      if ( v30 )
      {
        DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
          (DXGAUTOPUSHLOCKSHARED *)v54,
          (struct DXGPUSHLOCK *const)(v42 + 45));
        VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim((VIDMM_PROCESS_ADAPTER_INFO *)v42, &v59, 0, 1);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v54);
        v47 = v59;
        v40 = v57;
        v30 = a2;
      }
      v49 = v48.0;
      if ( v47 )
      {
        v48.0 = (struct D3DDDI_TRIMRESIDENCYSET_FLAGS::$0BC72FD4B990B613421A1F64C323019C::$3F3131289ECAE89F0D7ECD777680E73A)(v48.Value | 4);
        v49 = v48.0;
      }
      if ( v49 )
      {
        VIDMM_GLOBAL::SendTrimWnf(this, v42[5], v48, v47);
        v40 = v57;
        v30 = a2;
      }
      v40 = *(VIDMM_GLOBAL **)v40;
      v57 = v40;
      if ( v40 == (VIDMM_GLOBAL *)((char *)this + 41584) )
        goto LABEL_39;
    }
    v43 = (DXGPROCESS *)*((_QWORD *)v42[5] + 4);
    if ( v43 && (*((_BYTE *)v43 + 289) && !*((_BYTE *)v43 + 321) || *((_BYTE *)v43 + 320)) )
    {
      IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(v43);
      v45 = v42[63];
      if ( IsHighPriorityProcess )
      {
        if ( !v45 )
          goto LABEL_71;
        v46 = v5 <= v2 - v45;
      }
      else
      {
        if ( !v45 )
        {
LABEL_71:
          v41 = 1;
          v42[63] = v2;
          goto LABEL_72;
        }
        v46 = v4 <= v2 - v45;
      }
      if ( v46 )
        goto LABEL_71;
    }
LABEL_72:
    v40 = v57;
    goto LABEL_73;
  }
LABEL_38:
  v30 = a2;
  if ( a2 )
    goto LABEL_62;
LABEL_39:
  ExReleasePushLockSharedEx((char *)this + 41544, 0LL);
  KeLeaveCriticalRegion();
}
