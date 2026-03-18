/*
 * XREFs of ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C01B300C
 * Callers:
 *     ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C01B2D78 (-ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C01B2E40 (-ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETP.c)
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C01B2F14 (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTO.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     Template_pqqqqqttttttttq @ 0x1C003B0DC (Template_pqqqqqttttttttq.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C00DDFBC (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01ABBAC (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 *     ?HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z @ 0x1C01AD1CC (-HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C01AD388 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C01AD890 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01AE9FC (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C01B3560 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessUpdateHighLevel(
        OUTPUTDUPL_CONTEXT *this,
        struct _OUTPUTDUPL_UPDATE_INFO *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // r12d
  _BOOL8 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  OUTPUTDUPL_MGR *v12; // rcx
  DXGDIAGNOSTICSWITHMUTEX **v13; // rcx
  OUTPUTDUPL_MGR *v14; // rcx
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  BOOL v22; // r15d
  int v23; // r14d
  int v24; // ebx
  int v25; // r13d
  unsigned int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // rax
  int updated; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  DXGDIAGNOSTICSWITHMUTEX **v45; // r10
  __int64 v46; // rax
  int v47; // r8d
  int v48; // r9d
  __int64 v49; // rax
  int *v51; // [rsp+20h] [rbp-F0h]
  int *v52; // [rsp+28h] [rbp-E8h]
  unsigned int v53; // [rsp+68h] [rbp-A8h]
  int v54; // [rsp+90h] [rbp-80h] BYREF
  int v55; // [rsp+94h] [rbp-7Ch] BYREF
  union _LARGE_INTEGER v56; // [rsp+98h] [rbp-78h] BYREF
  _DWORD v57[20]; // [rsp+A0h] [rbp-70h] BYREF
  _DWORD v58[14]; // [rsp+F0h] [rbp-20h] BYREF

  v4 = 0;
  v7 = *(_DWORD *)a2 == 0;
  if ( v7 != (*((_QWORD *)a2 + 1) != 0LL) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 1375LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
  {
    memset(v58, 0, sizeof(v58));
    OUTPUTDUPL_MGR::InitializePacketHeader(v12, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v58);
    v13 = (DXGDIAGNOSTICSWITHMUTEX **)*((_QWORD *)this + 37);
    v58[13] = *((_DWORD *)this + 4);
    v58[1] = 56;
    v58[12] = 5;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(v13, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v58, 0LL);
    memset(v57, 0, sizeof(v57));
    OUTPUTDUPL_MGR::InitializePacketHeader(v14, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v57);
    v15 = *((_DWORD *)this + 77);
    v57[13] = *((_DWORD *)this + 4);
    v57[14] = *((_DWORD *)this + 73);
    v57[18] = *((_DWORD *)this + 71);
    v57[1] = 80;
    v57[12] = 6;
    v57[19] ^= (LOBYTE(v57[19]) ^ (unsigned __int8)(16 * v15)) & 0x10;
  }
  if ( !*(_DWORD *)a2
    && !*((_DWORD *)this + 77)
    && *((_DWORD *)this + 78)
    && (unsigned int)DXGDXGIKEYEDMUTEX::HasConsumerGPUWorkFinished(
                       *((DXGDXGIKEYEDMUTEX **)this + *((unsigned int *)this + 11) + 6),
                       *((struct DXGCONTEXT **)a2 + 1),
                       v10,
                       v11) )
  {
    *((_DWORD *)this + 78) = 0;
  }
  v56.QuadPart = 0LL;
  v16 = DXGDXGIKEYEDMUTEX::AcquireCPU(
          *((_QWORD *)this + *((unsigned int *)this + 11) + 6),
          v9,
          v10,
          &v56,
          *((_QWORD *)a2 + 1),
          *((_DWORD *)a2 + 4));
  v21 = v16;
  if ( v16 < 0 )
  {
    v28 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v28 + 24) = v21;
    WdLogEvent5_WdError(v28);
    return (unsigned int)v21;
  }
  v22 = v16 != 258;
  v23 = 0;
  v24 = *((_DWORD *)this + 78) & 1 | (16 * (*((_DWORD *)this + 77) & 1));
  v55 = 0;
  v25 = 0;
  v26 = v22 | (16 * v24);
  v54 = 0;
  switch ( v26 )
  {
    case 0u:
      goto LABEL_24;
    case 1u:
      LODWORD(v21) = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
                       this,
                       a2,
                       *((struct DXGDXGIKEYEDMUTEX **)this + *((unsigned int *)this + 11) + 6),
                       *((struct _PRODUCER_INFO **)this + 33),
                       &v54,
                       &v55);
      v42 = *(_QWORD *)(*((_QWORD *)this + 33) + 8LL);
      v57[17] = *(_DWORD *)(v42 + 4);
      if ( *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) )
      {
        v43 = WdLogNewEntry5_WdAssertion(v42, v39, v40, v41);
        *(_QWORD *)(v43 + 24) = 1504LL;
        WdLogEvent5_WdAssertion(v43);
      }
      v23 = v54;
      goto LABEL_28;
    case 0x10u:
      if ( *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 2 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
        *(_QWORD *)(v36 + 24) = 1527LL;
        WdLogEvent5_WdAssertion(v36);
      }
      goto LABEL_24;
    case 0x11u:
      updated = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
                  this,
                  a2,
                  0LL,
                  *((struct _PRODUCER_INFO **)this + 33),
                  &v54,
                  &v55);
      v23 = v54;
      LODWORD(v21) = updated;
      if ( v54 && !*(_DWORD *)a2 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v31, v30, v32, v33);
        *(_QWORD *)(v34 + 24) = 1517LL;
        WdLogEvent5_WdAssertion(v34);
      }
      v35 = *((_QWORD *)this + 33);
      goto LABEL_27;
  }
  if ( v26 > 0x10F )
  {
LABEL_24:
    v37 = *((_QWORD *)this + 33);
    if ( *(_DWORD *)(v37 + 16) == 1 )
    {
      v25 = 1;
      v38 = *(_QWORD *)(v37 + 8);
      *(_QWORD *)(v37 + 8) = *(_QWORD *)(*((_QWORD *)this + 34) + 8LL);
      *(_QWORD *)(*((_QWORD *)this + 34) + 8LL) = v38;
      *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) = 1;
      *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) = 0;
    }
    LODWORD(v21) = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
                     this,
                     a2,
                     0LL,
                     *((struct _PRODUCER_INFO **)this + 34),
                     0LL,
                     &v55);
    *((_DWORD *)this + 71) = 1;
    v35 = *((_QWORD *)this + 34);
LABEL_27:
    v57[17] = *(_DWORD *)(*(_QWORD *)(v35 + 8) + 4LL);
    goto LABEL_28;
  }
  v27 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
  *(_QWORD *)(v27 + 24) = v26;
  WdLogEvent5_WdAssertion(v27);
  LODWORD(v21) = -1073741595;
LABEL_28:
  if ( v22 )
  {
    if ( !v23 || *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 1 )
    {
      v44 = *((_QWORD *)this + *((unsigned int *)this + 11) + 6);
      DXGDXGIKEYEDMUTEX::Release(v44, *(_QWORD *)(v44 + 144), 0LL, *((unsigned int *)a2 + 4));
    }
    else
    {
      DXGDXGIKEYEDMUTEX::Release(
        *((_QWORD *)this + *((unsigned int *)this + 11) + 6),
        1LL,
        *((_QWORD *)a2 + 1),
        *((unsigned int *)a2 + 4));
      v4 = 1;
    }
  }
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
  {
    v57[15] = v21;
    v57[16] = v22;
    v46 = *((_QWORD *)this + 33);
    v57[19] = v57[19] & 0xFFFFFE3F | ((v55 & 1 | (2 * (v23 & 1 | (2 * v25)))) << 6);
    v47 = *((_DWORD *)this + 78) & 1 | (16 * v4);
    v48 = (LOBYTE(v57[19]) ^ (unsigned __int8)*(_DWORD *)(v46 + 16)) & 3 ^ v57[19];
    v49 = *((_QWORD *)this + 34);
    v57[19] = v48;
    v57[19] = v48 & 0xFFFFFDD3 | (4 * (*(_DWORD *)(v49 + 16) & 3 | (8 * v47)));
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(v45, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v57, 1LL);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v53 = *((_DWORD *)this + 71);
    LODWORD(v52) = *(_DWORD *)a2;
    LODWORD(v51) = *((_DWORD *)this + 11);
    Template_pqqqqqttttttttq(
      *((_QWORD *)this + 34),
      *((_QWORD *)this + 33),
      v53,
      this,
      v51,
      v52,
      *(_DWORD *)(*((_QWORD *)this + 33) + 16LL),
      v53,
      *(_DWORD *)(*((_QWORD *)this + 34) + 16LL),
      v22,
      *((_DWORD *)this + 77),
      *((_DWORD *)this + 78),
      v23,
      v53,
      v25,
      v4,
      v55,
      v21);
  }
  return (unsigned int)v21;
}
