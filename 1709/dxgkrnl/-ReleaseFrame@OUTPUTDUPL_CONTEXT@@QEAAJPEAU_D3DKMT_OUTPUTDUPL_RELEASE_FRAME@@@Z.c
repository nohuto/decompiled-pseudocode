/*
 * XREFs of ?ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C01CD7B8
 * Callers:
 *     ?ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C01C8A80 (-ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     McTemplateK0pqqttq @ 0x1C002B6F0 (McTemplateK0pqqttq.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C00908F4 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01C55FC (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C01C6E80 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C01C7388 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01C87B8 (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ReleaseFrame(
        OUTPUTDUPL_CONTEXT *this,
        struct _D3DKMT_OUTPUTDUPL_RELEASE_FRAME *a2)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  OUTPUTDUPL_MGR *v8; // rcx
  int v9; // ecx
  UINT v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _DWORD *v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  OUTPUTDUPL_MGR *v22; // rcx
  __int64 v23; // rdx
  DXGDIAGNOSTICSWITHMUTEX **v24; // rcx
  unsigned int v25; // r8d
  __int64 v27; // [rsp+20h] [rbp-59h]
  __int64 v28; // [rsp+28h] [rbp-51h]
  union _LARGE_INTEGER v29[2]; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v30[16]; // [rsp+60h] [rbp-19h] BYREF

  LODWORD(v3) = 0;
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
  {
    memset(v30, 0, sizeof(v30));
    OUTPUTDUPL_MGR::InitializePacketHeader(v8, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v30);
    v9 = *((_DWORD *)this + 71);
    v30[13] = *((_DWORD *)this + 4);
    v6 = v30[14] & 0xFFFFFFF3 | (4 * (v9 & 1));
    v30[1] = 64;
    v30[14] = v6;
    v30[12] = 10;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 2 )
  {
    ++*((_DWORD *)this + 11);
    v10 = *((_DWORD *)this + 11) < *((_DWORD *)this + 10) ? *((_DWORD *)this + 11) : 0;
    *((_DWORD *)this + 11) = v10;
  }
  else
  {
    v10 = *((_DWORD *)this + 11);
  }
  a2->NextKeyMutexIdx = v10;
  v11 = *((_QWORD *)this + 33);
  *(_QWORD *)v11 = 0LL;
  *(_DWORD *)(v11 + 20) = 0;
  *(_DWORD *)(v11 + 40) = 0;
  if ( *(_DWORD *)(v11 + 16) != 1 )
  {
    *(_DWORD *)(v11 + 16) = 0;
    v12 = *(_QWORD *)(v11 + 8);
    *(_QWORD *)v12 = 0LL;
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_DWORD *)(v12 + 16) = 0;
    *(_DWORD *)(v12 + 24) = 0;
    *(_DWORD *)(v12 + 44) = 0;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 1 && *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) == 1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v13 + 24) = 2293LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( *((_DWORD *)this + 71) )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) == 2 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v14 + 24) = 2303LL;
      WdLogEvent5_WdAssertion(v14);
    }
    v15 = *((_QWORD *)this + 34);
    v16 = (_QWORD *)*((_QWORD *)this + 33);
    *((_QWORD *)this + 34) = v16;
    *((_QWORD *)this + 33) = v15;
    if ( !*(_DWORD *)(v15 + 20) )
    {
      *(_QWORD *)v15 = *v16;
      *(_OWORD *)(*((_QWORD *)this + 33) + 24LL) = *(_OWORD *)(*((_QWORD *)this + 34) + 24LL);
    }
    v17 = (_DWORD *)*((_QWORD *)this + 33);
    *((_DWORD *)this + 71) = 0;
    if ( (v17[5] || v17[10]) && v17[4] != 1 )
    {
      v29[0].QuadPart = 0LL;
      v18 = DXGDXGIKEYEDMUTEX::AcquireCPU(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), v5, v7, v29, 0LL, 1);
      v3 = v18;
      if ( v18 == 258 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v19);
        *(_QWORD *)(v20 + 24) = 2332LL;
        WdLogEvent5_WdAssertion(v20);
      }
      if ( (int)v3 < 0 )
      {
        v21 = WdLogNewEntry5_WdError(v19);
        *(_QWORD *)(v21 + 24) = v3;
        WdLogEvent5_WdError(v21);
        return (unsigned int)v3;
      }
      DXGDXGIKEYEDMUTEX::Release(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), 1LL, 0LL, 1);
      if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
        v30[14] |= 8u;
    }
  }
  v22 = (OUTPUTDUPL_MGR *)*((_QWORD *)this + 37);
  *((_DWORD *)this + 77) = 0;
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(v22) )
  {
    v30[14] = ((unsigned __int8)v25 ^ (unsigned __int8)*(_DWORD *)(*((_QWORD *)this + 33) + 16LL)) & 3 ^ v25;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(v24, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v30, 1);
    v25 = v30[14];
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v28) = *(_DWORD *)(*((_QWORD *)this + 33) + 16LL);
    LODWORD(v27) = *((_DWORD *)this + 11);
    McTemplateK0pqqttq((v25 >> 3) & 1, v23, (v25 >> 2) & 1, this, v27, v28, (v25 >> 2) & 1, (v25 >> 3) & 1, v3);
  }
  return (unsigned int)v3;
}
