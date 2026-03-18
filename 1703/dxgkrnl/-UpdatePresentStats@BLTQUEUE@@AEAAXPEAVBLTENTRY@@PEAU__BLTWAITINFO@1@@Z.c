/*
 * XREFs of ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1C01B6AE0
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00A047C (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0006E80 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     Template_dddi @ 0x1C003BA5C (Template_dddi.c)
 *     Template_qiii @ 0x1C003BD18 (Template_qiii.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C01BE294 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

void __fastcall BLTQUEUE::UpdatePresentStats(
        BLTQUEUE *this,
        struct BLTENTRY *a2,
        struct BLTQUEUE::__BLTWAITINFO *a3,
        __int64 a4)
{
  DXGPUSHLOCK *v6; // rbx
  LARGE_INTEGER v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  LARGE_INTEGER v10; // rdi
  LONGLONG v11; // r9
  LONGLONG v12; // rax
  LONGLONG v13; // rdx
  bool v14; // zf
  __int64 v15; // r14
  int v16; // r15d
  __int64 v17; // r8
  struct DXGSWAPCHAIN **v18; // r12
  struct DXGSWAPCHAIN *v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-49h] BYREF
  struct BLTQUEUE::__BLTWAITINFO *v27; // [rsp+48h] [rbp-41h]
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v28; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v29[8]; // [rsp+78h] [rbp-11h] BYREF
  DXGPUSHLOCK *v30; // [rsp+80h] [rbp-9h]
  int v31; // [rsp+88h] [rbp-1h]
  _QWORD v32[2]; // [rsp+90h] [rbp+7h] BYREF

  v27 = a3;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29, (struct _KTHREAD **)this + 31, (__int64)a3, a4);
  v6 = v30;
  DXGPUSHLOCK::AcquireExclusive(v30);
  v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v8 = *((unsigned int *)this + 52);
  v9 = *((unsigned int *)this + 53);
  v10 = v7;
  v11 = v7.QuadPart * v8 / v9 / PerformanceFrequency.QuadPart;
  *((_QWORD *)this + 35) = v11;
  v12 = PerformanceFrequency.QuadPart * v9 * (unsigned int)v11 / v8;
  v13 = PerformanceFrequency.QuadPart * v9 * (unsigned int)v11 % v8;
  v14 = bTracingEnabled == 0;
  *((_QWORD *)this + 36) = v12;
  if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_qiii((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, v13, v8, 1, v11, *((_QWORD *)this + 34), v12);
  v15 = *((unsigned int *)a2 + 15);
  v16 = *((_DWORD *)this + 70);
  *((_QWORD *)v6 + 1) = 0LL;
  v31 = 0;
  ExReleasePushLockExclusiveEx(v6, 0LL);
  KeLeaveCriticalRegion();
  KeWaitForSingleObject((char *)this + 2568, Executive, 0, 0, 0LL);
  v18 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
  if ( v18 )
  {
    if ( (*((_DWORD *)a2 + 16) & 8) == 0 )
    {
      v32[0] = 0LL;
      v32[1] = 0LL;
      memset(&v28, 0, sizeof(v28));
      v19 = *v18;
      v28.bSetMetaData = 0;
      v28.bGlobalMetaData = 1;
      v28.bProducer = 1;
      v28.BufferSize = 16;
      v28.pBuffer = v32;
      if ( (int)SwapChainGetSetMetaDataInternal(v19, &v28, 0, 0) >= 0 && v28.DataCopied == 16 )
      {
        v21 = HIDWORD(v32[0]);
        if ( HIDWORD(v32[0]) )
        {
          *((_BYTE *)this + 192) = 1;
          if ( v10.QuadPart - *((_QWORD *)a2 + 67) > PerformanceFrequency.QuadPart / 10 )
          {
            v23 = WdLogNewEntry5_WdAssertion(v21, PerformanceFrequency.QuadPart / 10, v17, v20);
            *(_QWORD *)(v23 + 24) = v15;
            *(_QWORD *)(v23 + 32) = HIDWORD(v32[0]);
            WdLogEvent5_WdAssertion(v23);
          }
          else if ( (unsigned int)v21 < (unsigned int)v15
                 || (v22 = *((unsigned int *)a2 + 17), (_DWORD)v22) && v22 > *((_QWORD *)this + 35) )
          {
            LODWORD(v15) = *((_DWORD *)this + 40);
            v16 = *((_DWORD *)this + 41);
            *(_DWORD *)v27 |= 2u;
          }
        }
      }
    }
  }
  v14 = bTracingEnabled == 0;
  v24 = *((_QWORD *)this + 36);
  v25 = *((unsigned int *)this + 70);
  *((_QWORD *)this + 22) = v24;
  *((_DWORD *)this + 40) = v15;
  *((_DWORD *)this + 41) = v16;
  *((_DWORD *)this + 42) = v25;
  if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_dddi(v25, v24, v17, v15, v16, v25, v24);
  KeReleaseMutex((PRKMUTEX)((char *)this + 2568), 0);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
}
