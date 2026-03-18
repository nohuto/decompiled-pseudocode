/*
 * XREFs of ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C01DF34C
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C01E0B00 (DxgkCreateSwapChain.c)
 *     DxgkOpenSwapChain @ 0x1C01E1490 (DxgkOpenSwapChain.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C01DE3BC (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSwapchainLocal(
        DXGSWAPCHAIN *this,
        __int64 a2,
        struct DXGDEVICE *a3,
        void *a4,
        int a5,
        int a6)
{
  int v8; // r12d
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  char *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  NTSTATUS v26; // eax
  struct _KEVENT *v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v33[24]; // [rsp+38h] [rbp-30h] BYREF

  v8 = a2;
  v10 = 0;
  if ( !DXGPROCESS::GetCurrent((__int64)this, a2) )
  {
    v14 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v14 + 24) = PsGetCurrentProcess(v16, v15);
    WdLogEvent5_WdWarning(v14);
    return 3221225485LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v33, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
  if ( *((_DWORD *)this + 10) )
  {
    v21 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v21 + 24) = this;
    WdLogEvent5_WdWarning(v21);
    v10 = -1073741738;
  }
  else
  {
    v22 = (char *)this + (a6 != 0 ? 136LL : 88LL);
    if ( *((_QWORD *)v22 + 2) )
    {
      v23 = WdLogNewEntry5_WdWarning(v19, v18, v20);
      *(_QWORD *)(v23 + 24) = this;
      *(_QWORD *)(v23 + 32) = a6;
      WdLogEvent5_WdWarning(v23);
      v10 = -1073740008;
    }
    else
    {
      *((_QWORD *)v22 + 2) = PsGetCurrentProcess(v19, v18);
      *(_DWORD *)v22 = v8;
      v24 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL);
      if ( *(_QWORD *)(v24 + 268) == *((_QWORD *)this + 24) )
      {
        *((_DWORD *)v22 + 6) = a5;
        if ( a4 )
        {
          if ( a5 )
          {
            v25 = WdLogNewEntry5_WdError(v24);
            *(_QWORD *)(v25 + 24) = 1986LL;
            WdLogEvent5_WdError(v25);
            v10 = -1073741822;
          }
          else
          {
            v26 = ObReferenceObjectByHandle(a4, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
            v27 = (struct _KEVENT *)Object;
            v10 = v26;
            *((_QWORD *)v22 + 4) = Object;
            if ( v26 >= 0 )
            {
              if ( !a6 )
                KeSetEvent(v27, 2, 0);
            }
            else
            {
              v28 = WdLogNewEntry5_WdError(v27);
              *(_QWORD *)(v28 + 24) = a4;
              *(_QWORD *)(v28 + 32) = PsGetCurrentProcess(v30, v29);
              WdLogEvent5_WdError(v28);
            }
            if ( v10 >= 0 )
              goto LABEL_18;
          }
          DXGSWAPCHAIN::DestroySwapchainLocalClient(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v22);
        }
      }
      else
      {
        v31 = WdLogNewEntry5_WdError(v24);
        *(_QWORD *)(v31 + 24) = this;
        WdLogEvent5_WdError(v31);
        v10 = -1073741811;
      }
    }
  }
LABEL_18:
  if ( v33[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
  return (unsigned int)v10;
}
