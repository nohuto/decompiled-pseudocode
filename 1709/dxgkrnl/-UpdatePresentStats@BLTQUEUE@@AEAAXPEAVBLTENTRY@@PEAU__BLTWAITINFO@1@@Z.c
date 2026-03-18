/*
 * XREFs of ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1C007EC3C
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C007EDD8 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     McTemplateK0dddi @ 0x1C002BDB4 (McTemplateK0dddi.c)
 *     McTemplateK0qiii @ 0x1C002C064 (McTemplateK0qiii.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C01D6A04 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

void __fastcall BLTQUEUE::UpdatePresentStats(BLTQUEUE *this, struct BLTENTRY *a2, struct BLTQUEUE::__BLTWAITINFO *a3)
{
  DXGPUSHLOCK *v3; // rbx
  LARGE_INTEGER v7; // rax
  __int64 v8; // r8
  LARGE_INTEGER v9; // rdi
  __int64 v10; // rcx
  LONGLONG v11; // r9
  LONGLONG v12; // rax
  LONGLONG v13; // rdx
  bool v14; // zf
  __int64 v15; // r14
  int v16; // r12d
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  struct DXGSWAPCHAIN *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-49h] BYREF
  struct DXGSWAPCHAIN **v26; // [rsp+48h] [rbp-41h]
  _D3DKMT_GETSETSWAPCHAINMETADATA v27; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v28[8]; // [rsp+78h] [rbp-11h] BYREF
  char *v29; // [rsp+80h] [rbp-9h]
  int v30; // [rsp+88h] [rbp-1h]
  _QWORD v31[2]; // [rsp+90h] [rbp+7h] BYREF

  v3 = (BLTQUEUE *)((char *)this + 248);
  v29 = (char *)this + 248;
  if ( this != (BLTQUEUE *)-248LL && *((struct _KTHREAD **)this + 32) == KeGetCurrentThread() )
  {
    v20 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v20 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v20);
  }
  DXGPUSHLOCK::AcquireExclusive(v3);
  v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v8 = *((unsigned int *)this + 52);
  v9 = v7;
  v10 = *((unsigned int *)this + 53);
  v11 = v7.QuadPart * v8 / v10 / PerformanceFrequency.QuadPart;
  *((_QWORD *)this + 35) = v11;
  v12 = PerformanceFrequency.QuadPart * v10 * (unsigned int)v11 / v8;
  v13 = PerformanceFrequency.QuadPart * v10 * (unsigned int)v11 % v8;
  v14 = bTracingEnabled == 0;
  *((_QWORD *)this + 36) = v12;
  if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0qiii((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, v13, v8, 1, v11, *((_QWORD *)this + 34), v12);
  v15 = *((unsigned int *)a2 + 15);
  v16 = *((_DWORD *)this + 70);
  *((_QWORD *)v3 + 1) = 0LL;
  v30 = 0;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  KeWaitForSingleObject((char *)this + 2568, Executive, 0, 0, 0LL);
  v26 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
  if ( v26 )
  {
    if ( (*((_DWORD *)a2 + 16) & 8) == 0 )
    {
      v31[0] = 0LL;
      v31[1] = 0LL;
      memset(&v27, 0, sizeof(v27));
      v27.bSetMetaData = 0;
      v27.bGlobalMetaData = 1;
      v27.bProducer = 1;
      v21 = *v26;
      v27.BufferSize = 16;
      v27.pBuffer = v31;
      if ( (int)SwapChainGetSetMetaDataInternal(v21, &v27, 0, 0) >= 0 && v27.DataCopied == 16 )
      {
        v22 = HIDWORD(v31[0]);
        if ( HIDWORD(v31[0]) )
        {
          *((_BYTE *)this + 192) = 1;
          if ( v9.QuadPart - *((_QWORD *)a2 + 67) > PerformanceFrequency.QuadPart / 10 )
          {
            v24 = WdLogNewEntry5_WdAssertion(v22);
            *(_QWORD *)(v24 + 24) = v15;
            *(_QWORD *)(v24 + 32) = HIDWORD(v31[0]);
            WdLogEvent5_WdAssertion(v24);
          }
          else if ( (unsigned int)v22 < (unsigned int)v15
                 || (v23 = *((unsigned int *)a2 + 17), (_DWORD)v23) && v23 > *((_QWORD *)this + 35) )
          {
            LODWORD(v15) = *((_DWORD *)this + 40);
            v16 = *((_DWORD *)this + 41);
            *(_DWORD *)a3 |= 2u;
          }
        }
      }
    }
  }
  v14 = bTracingEnabled == 0;
  v18 = *((_QWORD *)this + 36);
  v19 = *((unsigned int *)this + 70);
  *((_QWORD *)this + 22) = v18;
  *((_DWORD *)this + 40) = v15;
  *((_DWORD *)this + 41) = v16;
  *((_DWORD *)this + 42) = v19;
  if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0dddi(v19, v18, v17, v15, v16, v19, v18);
  KeReleaseMutex((PRKMUTEX)((char *)this + 2568), 0);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
}
