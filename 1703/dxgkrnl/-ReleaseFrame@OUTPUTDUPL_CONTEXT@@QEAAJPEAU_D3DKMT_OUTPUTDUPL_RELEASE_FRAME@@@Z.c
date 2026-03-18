/*
 * XREFs of ?ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C01B3A00
 * Callers:
 *     ?ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C01AECD4 (-ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     Template_pqqttq @ 0x1C003B25C (Template_pqqttq.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C00DDFBC (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01ABBAC (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C01AD388 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C01AD890 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01AE9FC (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ReleaseFrame(
        OUTPUTDUPL_CONTEXT *this,
        struct _D3DKMT_OUTPUTDUPL_RELEASE_FRAME *a2)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  OUTPUTDUPL_MGR *v9; // rcx
  int v10; // ecx
  UINT v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _DWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  OUTPUTDUPL_MGR *v26; // rcx
  __int64 v27; // rdx
  DXGDIAGNOSTICSWITHMUTEX **v28; // rcx
  unsigned int v29; // r8d
  __int64 v31; // [rsp+20h] [rbp-59h]
  __int64 v32; // [rsp+28h] [rbp-51h]
  union _LARGE_INTEGER v33[2]; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v34[16]; // [rsp+60h] [rbp-19h] BYREF

  LODWORD(v3) = 0;
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
  {
    memset(v34, 0, sizeof(v34));
    OUTPUTDUPL_MGR::InitializePacketHeader(v9, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v34);
    v10 = *((_DWORD *)this + 71);
    v34[13] = *((_DWORD *)this + 4);
    v6 = v34[14] & 0xFFFFFFF3 | (4 * (v10 & 1));
    v34[1] = 64;
    v34[14] = v6;
    v34[12] = 10;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 2 )
  {
    ++*((_DWORD *)this + 11);
    v11 = *((_DWORD *)this + 11) < *((_DWORD *)this + 10) ? *((_DWORD *)this + 11) : 0;
    *((_DWORD *)this + 11) = v11;
  }
  else
  {
    v11 = *((_DWORD *)this + 11);
  }
  a2->NextKeyMutexIdx = v11;
  v12 = *((_QWORD *)this + 33);
  *(_QWORD *)v12 = 0LL;
  *(_DWORD *)(v12 + 20) = 0;
  *(_DWORD *)(v12 + 40) = 0;
  if ( *(_DWORD *)(v12 + 16) != 1 )
  {
    *(_DWORD *)(v12 + 16) = 0;
    v13 = *(_QWORD *)(v12 + 8);
    *(_QWORD *)v13 = 0LL;
    *(_QWORD *)(v13 + 8) = 0LL;
    *(_DWORD *)(v13 + 16) = 0;
    *(_DWORD *)(v13 + 24) = 0;
    *(_DWORD *)(v13 + 44) = 0;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 1 && *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) == 1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v14 + 24) = 2288LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( *((_DWORD *)this + 71) )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) == 2 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
      *(_QWORD *)(v15 + 24) = 2298LL;
      WdLogEvent5_WdAssertion(v15);
    }
    v16 = *((_QWORD *)this + 34);
    v17 = (_QWORD *)*((_QWORD *)this + 33);
    *((_QWORD *)this + 34) = v17;
    *((_QWORD *)this + 33) = v16;
    if ( !*(_DWORD *)(v16 + 20) )
    {
      *(_QWORD *)v16 = *v17;
      *(_OWORD *)(*((_QWORD *)this + 33) + 24LL) = *(_OWORD *)(*((_QWORD *)this + 34) + 24LL);
    }
    v18 = (_DWORD *)*((_QWORD *)this + 33);
    *((_DWORD *)this + 71) = 0;
    if ( (v18[5] || v18[10]) && v18[4] != 1 )
    {
      v33[0].QuadPart = 0LL;
      v19 = DXGDXGIKEYEDMUTEX::AcquireCPU(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), v5, v7, v33, 0LL, 1);
      v3 = v19;
      if ( v19 == 258 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
        *(_QWORD *)(v24 + 24) = 2327LL;
        WdLogEvent5_WdAssertion(v24);
      }
      if ( (int)v3 < 0 )
      {
        v25 = WdLogNewEntry5_WdError(v21, v20);
        *(_QWORD *)(v25 + 24) = v3;
        WdLogEvent5_WdError(v25);
        return (unsigned int)v3;
      }
      DXGDXGIKEYEDMUTEX::Release(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), 1LL, 0LL, 1LL);
      if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
        v34[14] |= 8u;
    }
  }
  v26 = (OUTPUTDUPL_MGR *)*((_QWORD *)this + 37);
  *((_DWORD *)this + 77) = 0;
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(v26) )
  {
    v34[14] = ((unsigned __int8)v29 ^ (unsigned __int8)*(_DWORD *)(*((_QWORD *)this + 33) + 16LL)) & 3 ^ v29;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(v28, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v34, 1LL);
    v29 = v34[14];
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v32) = *(_DWORD *)(*((_QWORD *)this + 33) + 16LL);
    LODWORD(v31) = *((_DWORD *)this + 11);
    Template_pqqttq((v29 >> 3) & 1, v27, (v29 >> 2) & 1, this, v31, v32, (v29 >> 2) & 1, (v29 >> 3) & 1, v3);
  }
  return (unsigned int)v3;
}
