/*
 * XREFs of ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1C01B4128
 * Callers:
 *     ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x1C01B4890 (-IndirectBlt@BLTENTRY@@QEAAJXZ.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C01B4A54 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0006E80 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C003B698 (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     Template_did @ 0x1C003BAF4 (Template_did.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C01BE294 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

__int64 __fastcall BLTQUEUE::CompletePresentIndirectInternal(
        BLTQUEUE *this,
        struct BLTENTRY *a2,
        union _LARGE_INTEGER *a3)
{
  struct DXGSWAPCHAIN **v3; // rsi
  struct DXGSWAPCHAIN *v7; // rcx
  int SetMetaDataInternal; // esi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  LONGLONG QuadPart; // rax
  struct DXGSWAPCHAIN **v15; // rcx
  struct DXGSWAPCHAIN *v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  struct DXGPROCESS *Current; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  LONGLONG v33; // [rsp+30h] [rbp-49h] BYREF
  _D3DKMT_GETSETSWAPCHAINMETADATA v34; // [rsp+38h] [rbp-41h] BYREF
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v35; // [rsp+60h] [rbp-19h] BYREF
  __int64 v36; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v37; // [rsp+90h] [rbp+17h]
  __int64 v38; // [rsp+98h] [rbp+1Fh]
  int v39; // [rsp+A0h] [rbp+27h]

  v3 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
  if ( v3 )
  {
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0LL;
    v39 = 0;
    memset(&v34, 0, sizeof(v34));
    v7 = *v3;
    v34.pBuffer = &v36;
    *(_QWORD *)&v34.bProducer = 1LL;
    v34.bSetMetaData = 0;
    v34.BufferSize = 28;
    SetMetaDataInternal = SwapChainGetSetMetaDataInternal(v7, &v34, 0, 0);
    if ( SetMetaDataInternal == -2147483643 )
      SetMetaDataInternal = 0;
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v34, (struct _KTHREAD **)this + 31, v9, v10);
    DXGPUSHLOCK::AcquireShared(*(DXGPUSHLOCK **)&v34.bSetMetaData);
    v13 = HIDWORD(v36);
    if ( SetMetaDataInternal >= 0 && (v36 & 2) != 0 && (v11 = *((_QWORD *)this + 35), HIDWORD(v36) > v11) )
    {
      QuadPart = *((_QWORD *)this + 36) + *((_QWORD *)this + 37) * (HIDWORD(v36) - v11);
    }
    else if ( a3 )
    {
      QuadPart = a3->QuadPart;
    }
    else
    {
      QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
      v13 = HIDWORD(v36);
    }
    v33 = QuadPart;
    if ( SetMetaDataInternal < 0 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_did(v11, (unsigned int)Microsoft_Windows_DxgKrnlEnableBits, v12, v37, QuadPart, 0);
    }
    else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      Template_did((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, v13, v12, v37, QuadPart, v13);
    }
    v34.bGlobalMetaData = 0;
    ExReleasePushLockSharedEx(*(_QWORD *)&v34.bSetMetaData, 0LL);
    KeLeaveCriticalRegion();
    *((_DWORD *)a2 + 17) = HIDWORD(v36);
    memset(&v35, 0, sizeof(v35));
    v15 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
    v35.bProducer = 1;
    v35.bSetMetaData = 1;
    v35.pBuffer = &v33;
    v16 = *v15;
    v35.BufferSize = 8;
    v17 = SwapChainGetSetMetaDataInternal(v16, &v35, 0x14u, 0);
    v22 = v17;
    if ( v17 < 0 )
    {
      v23 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
      *(_QWORD *)(v23 + 24) = v22;
      WdLogEvent5_WdWarning(v23);
    }
    ObfReferenceObject(*((PVOID *)this + 320));
    Current = DXGPROCESS::GetCurrent(v24);
    v26 = DXGWORKQUEUE::QueueWork(
            (PLIST_ENTRY)(*((_QWORD *)Current + 8) + 88LL),
            (struct _LIST_ENTRY *)lambda_16712371fc597dbb63c062fbcd9d104b_::_lambda_invoker_cdecl_,
            *((struct _LIST_ENTRY **)this + 320));
    v29 = v26;
    if ( v26 < 0 )
    {
      v30 = WdLogNewEntry5_WdError(v28, v27);
      *(_QWORD *)(v30 + 24) = v29;
      WdLogEvent5_WdError(v30);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)&v34);
  }
  else
  {
    v31 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v31 + 24) = 1378LL;
    WdLogEvent5_WdError(v31);
    LODWORD(v29) = -1073741823;
  }
  return (unsigned int)v29;
}
