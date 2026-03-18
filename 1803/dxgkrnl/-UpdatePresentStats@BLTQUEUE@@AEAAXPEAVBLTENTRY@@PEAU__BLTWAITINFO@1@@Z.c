/*
 * XREFs of ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1C01D76D8
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00D9478 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0015320 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     McTemplateK0dddi @ 0x1C003701C (McTemplateK0dddi.c)
 *     McTemplateK0qiii @ 0x1C00372CC (McTemplateK0qiii.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C01DFD0C (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

void __fastcall BLTQUEUE::UpdatePresentStats(BLTQUEUE *this, struct BLTENTRY *a2, struct BLTQUEUE::__BLTWAITINFO *a3)
{
  DXGPUSHLOCK *v5; // rbx
  LARGE_INTEGER v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  LARGE_INTEGER v9; // rdi
  LONGLONG v10; // r9
  int v11; // r15d
  LONGLONG v12; // rax
  LONGLONG v13; // rdx
  bool v14; // zf
  __int64 v15; // r14
  __int64 v16; // r8
  struct DXGSWAPCHAIN **v17; // r12
  struct DXGSWAPCHAIN *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-49h] BYREF
  struct BLTQUEUE::__BLTWAITINFO *v25; // [rsp+48h] [rbp-41h]
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v26; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v27[8]; // [rsp+78h] [rbp-11h] BYREF
  DXGPUSHLOCK *v28; // [rsp+80h] [rbp-9h]
  int v29; // [rsp+88h] [rbp-1h]
  _QWORD v30[2]; // [rsp+90h] [rbp+7h] BYREF

  v25 = a3;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27, (struct _KTHREAD **)this + 31, 0);
  v5 = v28;
  DXGPUSHLOCK::AcquireExclusive(v28);
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v7 = *((unsigned int *)this + 52);
  v8 = *((unsigned int *)this + 53);
  v9 = v6;
  v10 = v6.QuadPart * v7 / v8 / PerformanceFrequency.QuadPart;
  *((_QWORD *)this + 35) = v10;
  v11 = v10;
  v12 = PerformanceFrequency.QuadPart * v8 * (unsigned int)v10 / v7;
  v13 = PerformanceFrequency.QuadPart * v8 * (unsigned int)v10 % v7;
  v14 = bTracingEnabled == 0;
  *((_QWORD *)this + 36) = v12;
  if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0qiii((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, v13, v7, 1, v10, *((_QWORD *)this + 34), v12);
    v11 = *((_DWORD *)this + 70);
  }
  v15 = *((unsigned int *)a2 + 15);
  *((_QWORD *)v5 + 1) = 0LL;
  v29 = 0;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
  KeWaitForSingleObject((char *)this + 2568, Executive, 0, 0, 0LL);
  v17 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
  if ( v17 )
  {
    if ( (*((_DWORD *)a2 + 16) & 8) == 0 )
    {
      v30[0] = 0LL;
      v30[1] = 0LL;
      memset(&v26, 0, sizeof(v26));
      v18 = *v17;
      v26.bSetMetaData = 0;
      v26.bGlobalMetaData = 1;
      v26.bProducer = 1;
      v26.BufferSize = 16;
      v26.pBuffer = v30;
      if ( (int)SwapChainGetSetMetaDataInternal(v18, &v26, 0, 0) >= 0 && v26.DataCopied == 16 )
      {
        v19 = HIDWORD(v30[0]);
        if ( HIDWORD(v30[0]) )
        {
          *((_BYTE *)this + 192) = 1;
          if ( v9.QuadPart - *((_QWORD *)a2 + 67) > PerformanceFrequency.QuadPart / 10 )
          {
            v21 = WdLogNewEntry5_WdAssertion(v19);
            *(_QWORD *)(v21 + 24) = v15;
            *(_QWORD *)(v21 + 32) = HIDWORD(v30[0]);
            WdLogEvent5_WdAssertion(v21);
          }
          else if ( (unsigned int)v19 < (unsigned int)v15
                 || (v20 = *((unsigned int *)a2 + 17), (_DWORD)v20) && v20 > *((_QWORD *)this + 35) )
          {
            LODWORD(v15) = *((_DWORD *)this + 40);
            v11 = *((_DWORD *)this + 41);
            *(_DWORD *)v25 |= 2u;
          }
        }
      }
    }
  }
  v14 = bTracingEnabled == 0;
  v22 = *((_QWORD *)this + 36);
  v23 = *((unsigned int *)this + 70);
  *((_QWORD *)this + 22) = v22;
  *((_DWORD *)this + 40) = v15;
  *((_DWORD *)this + 41) = v11;
  *((_DWORD *)this + 42) = v23;
  if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0dddi(v23, v22, v16, v15, v11, v23, v22);
  KeReleaseMutex((PRKMUTEX)((char *)this + 2568), 0);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
}
