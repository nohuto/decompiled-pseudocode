/*
 * XREFs of ?SendCreateBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAI0@Z @ 0x1C01BD5B0
 * Callers:
 *     ?VailSendCreateBundleObject@DXGSESSIONDATA@@QEAAJKPEAI0@Z @ 0x1C01E7D48 (-VailSendCreateBundleObject@DXGSESSIONDATA@@QEAAJKPEAI0@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000A74C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C000A7A4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0016B00 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016B40 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016BA4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C009631C (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00E6124 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00E6170 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C00F8734 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 */

__int64 __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::SendCreateBundleObject(
        DXG_GUEST_REMOTEOBJECTCHANNEL *this,
        __int64 a2,
        char *a3,
        struct _EX_RUNDOWN_REF *a4)
{
  struct _EX_RUNDOWN_REF *v4; // r12
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGPROCESS *Current; // r13
  __int64 v11; // rax
  PERESOURCE *Global; // rax
  char v13; // si
  signed __int64 v14; // r15
  _QWORD *v15; // r12
  __int64 v16; // rax
  _DWORD *v17; // rdi
  unsigned int v18; // edx
  int v19; // r9d
  int EntryType; // eax
  bool v21; // zf
  _QWORD *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rsi
  char *v25; // r15
  signed __int64 v26; // rax
  signed __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rcx
  int v33; // eax
  _QWORD *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // r9
  int v37; // ecx
  struct _EX_RUNDOWN_REF *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  _QWORD *v52; // rax
  __int64 v54; // [rsp+30h] [rbp-D0h]
  _QWORD *v55; // [rsp+30h] [rbp-D0h]
  unsigned int v56; // [rsp+38h] [rbp-C8h] BYREF
  struct _EX_RUNDOWN_REF *v57; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v58[24]; // [rsp+48h] [rbp-B8h] BYREF
  signed __int64 v59; // [rsp+60h] [rbp-A0h]
  signed __int64 v60; // [rsp+68h] [rbp-98h]
  DXG_GUEST_REMOTEOBJECTCHANNEL *v61; // [rsp+70h] [rbp-90h]
  _BYTE v62[24]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v63[16]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v64[16]; // [rsp+D0h] [rbp-30h] BYREF
  signed __int64 v65; // [rsp+150h] [rbp+50h] BYREF
  __int64 v66; // [rsp+158h] [rbp+58h]
  _DWORD v67[3]; // [rsp+160h] [rbp+60h] BYREF
  int v68; // [rsp+16Ch] [rbp+6Ch]
  int v69; // [rsp+170h] [rbp+70h]
  _BYTE v70[68]; // [rsp+174h] [rbp+74h] BYREF

  v4 = a4;
  v57 = a4;
  v6 = (unsigned int)a2;
  v61 = this;
  Current = DXGPROCESS::GetCurrent((__int64)this, a2);
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v8);
    LODWORD(a3) = -1073741811;
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    return (unsigned int)a3;
  }
  if ( !v4 || !a3 || (unsigned int)(v6 - 1) > 0xF )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
    v52[4] = a3;
    LODWORD(a3) = -1073741811;
    v52[6] = -1073741811LL;
    v52[3] = v4;
    v52[5] = v6;
    WdLogEvent5_WdWarning(v52);
    return (unsigned int)a3;
  }
  LODWORD(v4->Count) = 0;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v8);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v62, Global);
  v13 = 0;
  memset(v63, 0, sizeof(v63));
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v58, (struct _KTHREAD **)Current);
  if ( (_DWORD)v6 )
  {
    v14 = a3 - (char *)v63;
    v15 = (_QWORD *)((char *)Current + 232);
    v16 = v6;
    v17 = v63;
    v54 = v6;
    while ( 1 )
    {
      v18 = (*(_DWORD *)((char *)v17 + v14) >> 6) & 0xFFFFFF;
      if ( v18 < *((_DWORD *)Current + 62) )
      {
        v19 = *(_DWORD *)(*v15 + 16LL * v18 + 8);
        if ( ((*(_DWORD *)((char *)v17 + v14) >> 25) & 0x60) == (*(_BYTE *)(*v15 + 16LL * v18 + 8) & 0x60)
          && (v19 & 0x2000) == 0
          && (v19 & 0x1F) != 0 )
        {
          EntryType = HMGRTABLE::GetEntryType((__int64)Current + 232, v18);
          v21 = EntryType == 11;
          *v17 = EntryType;
          v16 = v54;
          if ( v21 )
            v13 = 1;
          goto LABEL_17;
        }
        v16 = v54;
      }
      *v17 = 0;
LABEL_17:
      ++v17;
      v54 = --v16;
      if ( !v16 )
      {
        v4 = v57;
        break;
      }
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v58);
  v68 = 0;
  v69 = 0;
  v67[2] = 1;
  v67[0] = 1869901170;
  v67[1] = -1073741823;
  memset(v70, 0, sizeof(v70));
  v56 = 16;
  v65 = 0xC00000016F746D72uLL;
  v66 = 2LL;
  if ( v13 )
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v62);
  `vector constructor iterator'(
    (char *)v64,
    8LL,
    16LL,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v58, (struct _KTHREAD **)Current);
  v24 = 0LL;
  if ( !(_DWORD)v6 )
  {
LABEL_55:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v58);
    v69 = v6;
    v68 = *((_DWORD *)Current + 98);
    v45 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64, signed __int64 *, unsigned int *))(**((_QWORD **)v61 + 1)
                                                                                                 + 32LL))(
            *((_QWORD *)v61 + 1),
            v67,
            88LL,
            &v65,
            &v56);
    a3 = (char *)v45;
    if ( v45 < 0 )
    {
      v49 = WdLogNewEntry5_WdWarning(v47, v46, v48);
      *(_QWORD *)(v49 + 24) = a3;
      WdLogEvent5_WdWarning(v49);
      goto LABEL_64;
    }
    if ( v56 == 16 )
    {
      if ( (_DWORD)v66 == 2 )
      {
        LODWORD(a3) = HIDWORD(v65);
        if ( v65 >= 0 )
          LODWORD(v4->Count) = HIDWORD(v66);
        goto LABEL_64;
      }
      v50 = WdLogNewEntry5_WdWarning(v47, v46, v48);
      v51 = (int)v66;
    }
    else
    {
      v50 = WdLogNewEntry5_WdWarning(v47, v46, v48);
      v51 = v56;
    }
    *(_QWORD *)(v50 + 24) = v51;
    *(_QWORD *)(v50 + 32) = -1073741823LL;
    WdLogEvent5_WdWarning(v50);
    LODWORD(a3) = -1073741823;
    goto LABEL_64;
  }
  v25 = a3;
  v55 = v64;
  v26 = (char *)v63 - a3;
  v27 = &v70[4] - a3;
  v60 = (char *)v63 - a3;
  v59 = &v70[4] - a3;
  while ( 1 )
  {
    v28 = *(_DWORD *)&v25[v26];
    if ( v28 == 4 )
      break;
    if ( v28 != 11 )
    {
      v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v22, v23);
      v44 = *(unsigned int *)&a3[4 * v24];
      LODWORD(a3) = -1073741811;
      v41[3] = v44;
      v41[4] = (int)v63[v24];
      v41[5] = -1073741811LL;
      goto LABEL_54;
    }
    v29 = *(unsigned int *)v25;
    v30 = (*(_DWORD *)v25 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v30 >= *((_DWORD *)Current + 62)
      || (v23 = *((_QWORD *)Current + 29),
          v29 = ((unsigned int)v29 >> 25) & 0x60,
          v27 = *(unsigned int *)(v23 + 16 * v30 + 8),
          (_BYTE)v29 != (*(_BYTE *)(v23 + 16 * v30 + 8) & 0x60))
      || (v27 & 0x2000) != 0
      || (v27 & 0x1F) == 0
      || (v27 &= 0x1Fu, (_BYTE)v27 != 11)
      || (v31 = *(_QWORD *)(v23 + 16LL * (unsigned int)v30)) == 0 )
    {
      v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v29, v23);
      v43 = *(unsigned int *)&a3[4 * v24];
LABEL_50:
      v41[3] = v43;
      goto LABEL_53;
    }
    v32 = *(unsigned int *)(*(_QWORD *)(v31 + 32) + 172LL);
    if ( (v32 & 2) == 0 )
    {
      v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v29, v23);
      v42 = *(_QWORD *)(v31 + 32);
      goto LABEL_52;
    }
    v33 = *(_DWORD *)(v31 + 44);
    v34 = v55;
LABEL_44:
    v27 = v59;
    v22 = v34 + 1;
    v24 = (unsigned int)(v24 + 1);
    v55 = v22;
    *(_DWORD *)&v25[v59] = v33;
    v25 += 4;
    if ( (unsigned int)v24 >= (unsigned int)v6 )
      goto LABEL_55;
    v26 = v60;
  }
  v35 = (*(_DWORD *)v25 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v35 < *((_DWORD *)Current + 62)
    && (v36 = *((_QWORD *)Current + 29),
        v37 = *(_DWORD *)(v36 + 16 * v35 + 8),
        ((*(_DWORD *)v25 >> 25) & 0x60) == (*(_BYTE *)(v36 + 16 * v35 + 8) & 0x60))
    && (v37 & 0x2000) == 0
    && (v37 & 0x1F) == 4 )
  {
    v38 = *(struct _EX_RUNDOWN_REF **)(v36 + 16LL * (unsigned int)v35);
  }
  else
  {
    v38 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v57, v38);
  DXGRESOURCEREFERENCE::MoveAssign((struct DXGRESOURCE **)&v64[v24], (struct DXGRESOURCE **)&v57);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v57);
  v34 = v55;
  v39 = *v55;
  if ( *v55 )
  {
    if ( (*(_DWORD *)(v39 + 4) & 1) != 0 )
    {
      v40 = *(_QWORD *)(v39 + 56);
      if ( v40 )
      {
        if ( (*(_DWORD *)(v40 + 12) & 8) == 0 )
        {
          v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v55, v23);
          v43 = *(_QWORD *)(v64[v24] + 56LL);
          goto LABEL_50;
        }
        v33 = *(_DWORD *)(v39 + 20);
        goto LABEL_44;
      }
    }
  }
  v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v55, v23);
  v42 = *(unsigned int *)&a3[4 * v24];
LABEL_52:
  v41[3] = v42;
LABEL_53:
  LODWORD(a3) = -1073741811;
  v41[4] = -1073741811LL;
LABEL_54:
  WdLogEvent5_WdWarning(v41);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v58);
LABEL_64:
  `vector destructor iterator'(
    (char *)v64,
    8LL,
    16LL,
    (void (__fastcall *)(char *))DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE);
  if ( v62[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v62);
  return (unsigned int)a3;
}
