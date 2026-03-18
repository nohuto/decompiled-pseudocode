/*
 * XREFs of ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1C01D44F4
 * Callers:
 *     ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x1C01D4DC0 (-IndirectBlt@BLTENTRY@@QEAAJXZ.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C01D4F84 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0015320 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C0036C3C (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     McTemplateK0did @ 0x1C00370BC (McTemplateK0did.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C01DFD0C (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

__int64 __fastcall BLTQUEUE::CompletePresentIndirectInternal(
        BLTQUEUE *this,
        struct BLTENTRY *a2,
        union _LARGE_INTEGER *a3)
{
  struct DXGSWAPCHAIN **v3; // rsi
  struct DXGSWAPCHAIN *v7; // rcx
  int SetMetaDataInternal; // esi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  LONGLONG QuadPart; // rax
  struct DXGSWAPCHAIN **v13; // rcx
  struct DXGSWAPCHAIN *v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct DXGPROCESS *Current; // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  LONGLONG v30; // [rsp+30h] [rbp-49h] BYREF
  _D3DKMT_GETSETSWAPCHAINMETADATA v31; // [rsp+38h] [rbp-41h] BYREF
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v32; // [rsp+60h] [rbp-19h] BYREF
  __int64 v33; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v34; // [rsp+90h] [rbp+17h]
  __int64 v35; // [rsp+98h] [rbp+1Fh]
  int v36; // [rsp+A0h] [rbp+27h]

  v3 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
  if ( v3 )
  {
    v33 = 0LL;
    v34 = 0LL;
    v35 = 0LL;
    v36 = 0;
    memset(&v31, 0, sizeof(v31));
    v7 = *v3;
    v31.pBuffer = &v33;
    *(_QWORD *)&v31.bProducer = 1LL;
    v31.bSetMetaData = 0;
    v31.BufferSize = 28;
    SetMetaDataInternal = SwapChainGetSetMetaDataInternal(v7, &v31, 0, 0);
    if ( SetMetaDataInternal == -2147483643 )
      SetMetaDataInternal = 0;
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v31, (struct _KTHREAD **)this + 31, 0);
    DXGPUSHLOCK::AcquireShared(*(DXGPUSHLOCK **)&v31.bSetMetaData);
    v11 = HIDWORD(v33);
    if ( SetMetaDataInternal >= 0 && (v33 & 2) != 0 && (v9 = *((_QWORD *)this + 35), HIDWORD(v33) > v9) )
    {
      QuadPart = *((_QWORD *)this + 36) + *((_QWORD *)this + 37) * (HIDWORD(v33) - v9);
    }
    else if ( a3 )
    {
      QuadPart = a3->QuadPart;
    }
    else
    {
      QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
      v11 = HIDWORD(v33);
    }
    v30 = QuadPart;
    if ( SetMetaDataInternal < 0 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0did(v9, (unsigned int)Microsoft_Windows_DxgKrnlEnableBits, v10, v34, QuadPart, 0);
    }
    else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0did((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, v11, v10, v34, QuadPart, v11);
    }
    v31.bGlobalMetaData = 0;
    ExReleasePushLockSharedEx(*(_QWORD *)&v31.bSetMetaData, 0LL);
    KeLeaveCriticalRegion();
    *((_DWORD *)a2 + 17) = HIDWORD(v33);
    memset(&v32, 0, sizeof(v32));
    v13 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
    v32.bProducer = 1;
    v32.bSetMetaData = 1;
    v32.pBuffer = &v30;
    v14 = *v13;
    v32.BufferSize = 8;
    v15 = SwapChainGetSetMetaDataInternal(v14, &v32, 0x14u, 0);
    v19 = v15;
    if ( v15 < 0 )
    {
      v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
      *(_QWORD *)(v20 + 24) = v19;
      WdLogEvent5_WdWarning(v20);
    }
    ObfReferenceObject(*((PVOID *)this + 320));
    Current = DXGPROCESS::GetCurrent(v22, v21);
    v24 = DXGWORKQUEUE::QueueWork(
            (PLIST_ENTRY)(*((_QWORD *)Current + 9) + 88LL),
            (struct _LIST_ENTRY *)lambda_16712371fc597dbb63c062fbcd9d104b_::_lambda_invoker_cdecl_,
            *((struct _LIST_ENTRY **)this + 320));
    v26 = v24;
    if ( v24 < 0 )
    {
      v27 = WdLogNewEntry5_WdError(v25);
      *(_QWORD *)(v27 + 24) = v26;
      WdLogEvent5_WdError(v27);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v31);
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v28 + 24) = 1378LL;
    WdLogEvent5_WdError(v28);
    LODWORD(v26) = -1073741823;
  }
  return (unsigned int)v26;
}
