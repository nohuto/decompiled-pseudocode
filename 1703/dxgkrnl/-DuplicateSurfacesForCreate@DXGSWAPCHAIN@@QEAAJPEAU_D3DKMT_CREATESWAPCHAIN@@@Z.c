/*
 * XREFs of ?DuplicateSurfacesForCreate@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C01BCCEC
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C01BE8F0 (DxgkCreateSwapChain.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     Template_pqp @ 0x1C003C82C (Template_pqp.c)
 *     ?DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C01BCB60 (-DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::DuplicateSurfacesForCreate(
        DXGSWAPCHAIN *this,
        struct _D3DKMT_CREATESWAPCHAIN *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // r15
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  PVOID v16; // rbx
  __int64 v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 CurrentProcess; // rbx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  PVOID *Object; // [rsp+20h] [rbp-30h]
  int v29; // [rsp+38h] [rbp-18h]
  _BYTE v30[16]; // [rsp+40h] [rbp-10h] BYREF
  HANDLE v31; // [rsp+80h] [rbp+30h] BYREF
  PVOID v32; // [rsp+90h] [rbp+40h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, this, a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  LODWORD(v9) = 0;
  v10 = 0LL;
  if ( *((_DWORD *)this + 10) )
  {
    while ( 1 )
    {
      v11 = (unsigned int)v10;
      v31 = a2->pNtSurfaceHandles[v10];
      v12 = ObReferenceObjectByHandle(v31, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &v32, 0LL);
      v9 = v12;
      if ( v12 < 0 )
        break;
      v16 = v32;
      if ( v32 )
      {
        v17 = *((_QWORD *)v32 + 2);
        if ( v17 )
        {
          v18 = (__int64 *)(v17 + 128);
          v19 = 0LL;
          v20 = *v18;
          if ( (__int64 *)*v18 != v18 )
            v19 = *(_QWORD *)(v20 - 40);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
          {
            LODWORD(Object) = v10;
            Template_pqp(v19, v20, v15, this, Object, v19);
          }
        }
      }
      ObfDereferenceObject(v16);
      CurrentProcess = PsGetCurrentProcess(v21);
      v24 = PsGetCurrentProcess(v23);
      LOBYTE(v29) = 1;
      v25 = ObDuplicateObject(v24, v31, CurrentProcess, &v31, 0, 0, 6, v29);
      v9 = v25;
      if ( v25 < 0 )
        break;
      v6 = *((_QWORD *)this + 6);
      v8 = 56LL * (unsigned int)v10;
      v10 = (unsigned int)(v10 + 1);
      v7 = 56 * v11 + (-(__int64)a2->bProducer & 0xFFFFFFFFFFFFFFF0uLL) + 48;
      *(_QWORD *)(v7 + v6) = v31;
      *(_DWORD *)(v8 + *((_QWORD *)this + 6) + 4) = 0;
      *(_DWORD *)(v8 + *((_QWORD *)this + 6)) = 0;
      if ( (unsigned int)v10 >= *((_DWORD *)this + 10) )
        goto LABEL_13;
    }
    v26 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v26 + 24) = v31;
    *(_QWORD *)(v26 + 32) = v9;
    WdLogEvent5_WdError(v26);
LABEL_13:
    if ( (int)v9 < 0 )
      DXGSWAPCHAIN::DestroyLocalClient(this, (DXGSWAPCHAIN *)((char *)this + (a2->bProducer ? 0x38 : 0) + 72));
  }
  if ( v30[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30, v6, v7, v8);
  return (unsigned int)v9;
}
