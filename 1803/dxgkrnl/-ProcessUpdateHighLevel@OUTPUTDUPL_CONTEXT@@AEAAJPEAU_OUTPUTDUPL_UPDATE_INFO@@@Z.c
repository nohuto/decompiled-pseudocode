/*
 * XREFs of ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C01D300C
 * Callers:
 *     ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C01D2D78 (-ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C01D2E40 (-ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETP.c)
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C01D2F14 (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTO.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     McTemplateK0pqqqqqttttttttq @ 0x1C003651C (McTemplateK0pqqqqqttttttttq.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C00E2FD4 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01C8080 (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 *     ?HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z @ 0x1C01C9A50 (-HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C01C9FA8 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C01CA4AC (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01CB94C (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C01D355C (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessUpdateHighLevel(
        OUTPUTDUPL_CONTEXT *this,
        struct _OUTPUTDUPL_UPDATE_INFO *a2)
{
  int v2; // r12d
  _BOOL8 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  OUTPUTDUPL_MGR *v9; // rcx
  DXGDIAGNOSTICSWITHMUTEX **v10; // rcx
  OUTPUTDUPL_MGR *v11; // rcx
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  BOOL v16; // r15d
  int v17; // r14d
  int v18; // ebx
  int v19; // r13d
  unsigned int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // rax
  int updated; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  DXGDIAGNOSTICSWITHMUTEX **v33; // r10
  __int64 v34; // rax
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // rax
  int *v39; // [rsp+20h] [rbp-F0h]
  int *v40; // [rsp+28h] [rbp-E8h]
  unsigned int v41; // [rsp+68h] [rbp-A8h]
  int v42; // [rsp+90h] [rbp-80h] BYREF
  int v43; // [rsp+94h] [rbp-7Ch] BYREF
  union _LARGE_INTEGER v44; // [rsp+98h] [rbp-78h] BYREF
  _DWORD v45[20]; // [rsp+A0h] [rbp-70h] BYREF
  _DWORD v46[14]; // [rsp+F0h] [rbp-20h] BYREF

  v2 = 0;
  v5 = *(_DWORD *)a2 == 0;
  if ( v5 != (*((_QWORD *)a2 + 1) != 0LL) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 1380LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
  {
    memset(v46, 0, sizeof(v46));
    OUTPUTDUPL_MGR::InitializePacketHeader(v9, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v46);
    v10 = (DXGDIAGNOSTICSWITHMUTEX **)*((_QWORD *)this + 37);
    v46[13] = *((_DWORD *)this + 4);
    v46[1] = 56;
    v46[12] = 5;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(v10, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v46, 0);
    memset(v45, 0, sizeof(v45));
    OUTPUTDUPL_MGR::InitializePacketHeader(v11, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v45);
    v12 = *((_DWORD *)this + 77);
    v45[13] = *((_DWORD *)this + 4);
    v45[14] = *((_DWORD *)this + 73);
    v45[18] = *((_DWORD *)this + 71);
    v45[1] = 80;
    v45[12] = 6;
    v45[19] ^= (LOBYTE(v45[19]) ^ (unsigned __int8)(16 * v12)) & 0x10;
  }
  if ( !*(_DWORD *)a2
    && !*((_DWORD *)this + 77)
    && *((_DWORD *)this + 78)
    && (unsigned int)DXGDXGIKEYEDMUTEX::HasConsumerGPUWorkFinished(
                       *((DXGDXGIKEYEDMUTEX **)this + *((unsigned int *)this + 11) + 6),
                       *((struct DXGCONTEXT **)a2 + 1)) )
  {
    *((_DWORD *)this + 78) = 0;
  }
  v44.QuadPart = 0LL;
  v13 = DXGDXGIKEYEDMUTEX::AcquireCPU(
          *((_QWORD *)this + *((unsigned int *)this + 11) + 6),
          v7,
          v8,
          &v44,
          *((_QWORD *)a2 + 1),
          *((_DWORD *)a2 + 4));
  v15 = v13;
  if ( v13 < 0 )
  {
    v22 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v22 + 24) = v15;
    WdLogEvent5_WdError(v22);
    return (unsigned int)v15;
  }
  v16 = v13 != 258;
  v17 = 0;
  v18 = *((_DWORD *)this + 78) & 1 | (16 * (*((_DWORD *)this + 77) & 1));
  v43 = 0;
  v19 = 0;
  v20 = v16 | (16 * v18);
  v42 = 0;
  switch ( v20 )
  {
    case 0u:
      goto LABEL_24;
    case 1u:
      LODWORD(v15) = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
                       this,
                       a2,
                       *((struct DXGDXGIKEYEDMUTEX **)this + *((unsigned int *)this + 11) + 6),
                       *((struct _PRODUCER_INFO **)this + 33),
                       &v42,
                       &v43);
      v30 = *(_QWORD *)(*((_QWORD *)this + 33) + 8LL);
      v45[17] = *(_DWORD *)(v30 + 4);
      if ( *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) )
      {
        v31 = WdLogNewEntry5_WdAssertion(v30);
        *(_QWORD *)(v31 + 24) = 1509LL;
        WdLogEvent5_WdAssertion(v31);
      }
      v17 = v42;
      goto LABEL_28;
    case 0x10u:
      if ( *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 2 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v14);
        *(_QWORD *)(v27 + 24) = 1532LL;
        WdLogEvent5_WdAssertion(v27);
      }
      goto LABEL_24;
    case 0x11u:
      updated = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
                  this,
                  a2,
                  0LL,
                  *((struct _PRODUCER_INFO **)this + 33),
                  &v42,
                  &v43);
      v17 = v42;
      LODWORD(v15) = updated;
      if ( v42 && !*(_DWORD *)a2 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v24);
        *(_QWORD *)(v25 + 24) = 1522LL;
        WdLogEvent5_WdAssertion(v25);
      }
      v26 = *((_QWORD *)this + 33);
      goto LABEL_27;
  }
  if ( v20 > 0x10F )
  {
LABEL_24:
    v28 = *((_QWORD *)this + 33);
    if ( *(_DWORD *)(v28 + 16) == 1 )
    {
      v19 = 1;
      v29 = *(_QWORD *)(v28 + 8);
      *(_QWORD *)(v28 + 8) = *(_QWORD *)(*((_QWORD *)this + 34) + 8LL);
      *(_QWORD *)(*((_QWORD *)this + 34) + 8LL) = v29;
      *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) = 1;
      *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) = 0;
    }
    LODWORD(v15) = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
                     this,
                     a2,
                     0LL,
                     *((struct _PRODUCER_INFO **)this + 34),
                     0LL,
                     &v43);
    *((_DWORD *)this + 71) = 1;
    v26 = *((_QWORD *)this + 34);
LABEL_27:
    v45[17] = *(_DWORD *)(*(_QWORD *)(v26 + 8) + 4LL);
    goto LABEL_28;
  }
  v21 = WdLogNewEntry5_WdAssertion(v14);
  *(_QWORD *)(v21 + 24) = v20;
  WdLogEvent5_WdAssertion(v21);
  LODWORD(v15) = -1073741595;
LABEL_28:
  if ( v16 )
  {
    if ( !v17 || *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 1 )
    {
      v32 = *((_QWORD *)this + *((unsigned int *)this + 11) + 6);
      DXGDXGIKEYEDMUTEX::Release(v32, *(_QWORD *)(v32 + 136), 0LL, *((_DWORD *)a2 + 4));
    }
    else
    {
      DXGDXGIKEYEDMUTEX::Release(
        *((_QWORD *)this + *((unsigned int *)this + 11) + 6),
        1LL,
        *((_QWORD *)a2 + 1),
        *((_DWORD *)a2 + 4));
      v2 = 1;
    }
  }
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
  {
    v45[15] = v15;
    v45[16] = v16;
    v34 = *((_QWORD *)this + 33);
    v45[19] = v45[19] & 0xFFFFFE3F | ((v43 & 1 | (2 * (v17 & 1 | (2 * v19)))) << 6);
    v35 = *((_DWORD *)this + 78) & 1 | (16 * v2);
    v36 = v45[19] ^ (LOBYTE(v45[19]) ^ (unsigned __int8)*(_DWORD *)(v34 + 16)) & 3;
    v37 = *((_QWORD *)this + 34);
    v45[19] = v36;
    v45[19] = v36 & 0xFFFFFDD3 | (4 * (*(_DWORD *)(v37 + 16) & 3 | (8 * v35)));
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(v33, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v45, 1);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v41 = *((_DWORD *)this + 71);
    LODWORD(v40) = *(_DWORD *)a2;
    LODWORD(v39) = *((_DWORD *)this + 11);
    McTemplateK0pqqqqqttttttttq(
      *((_QWORD *)this + 34),
      *((_QWORD *)this + 33),
      v41,
      this,
      v39,
      v40,
      *(_DWORD *)(*((_QWORD *)this + 33) + 16LL),
      v41,
      *(_DWORD *)(*((_QWORD *)this + 34) + 16LL),
      v16,
      *((_DWORD *)this + 77),
      *((_DWORD *)this + 78),
      v17,
      v41,
      v19,
      v2,
      v43,
      v15);
  }
  return (unsigned int)v15;
}
