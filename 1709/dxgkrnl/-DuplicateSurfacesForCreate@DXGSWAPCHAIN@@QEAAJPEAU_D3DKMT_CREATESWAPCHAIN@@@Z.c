/*
 * XREFs of ?DuplicateSurfacesForCreate@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C01D5390
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C01D7080 (DxgkCreateSwapChain.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0pqp @ 0x1C002CCB0 (McTemplateK0pqp.c)
 *     ?DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C01D5214 (-DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::DuplicateSurfacesForCreate(DXGSWAPCHAIN *this, struct _D3DKMT_CREATESWAPCHAIN *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // r15
  NTSTATUS v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  PVOID v10; // rbx
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 CurrentProcess; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rax
  PVOID *Object; // [rsp+20h] [rbp-30h]
  int v26; // [rsp+38h] [rbp-18h]
  _BYTE v27[16]; // [rsp+40h] [rbp-10h] BYREF
  HANDLE v28; // [rsp+80h] [rbp+30h] BYREF
  PVOID v29; // [rsp+90h] [rbp+40h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
  LODWORD(v4) = 0;
  v5 = 0LL;
  if ( *((_DWORD *)this + 10) )
  {
    while ( 1 )
    {
      v6 = (unsigned int)v5;
      v28 = a2->pNtSurfaceHandles[v5];
      v7 = ObReferenceObjectByHandle(v28, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &v29, 0LL);
      v4 = v7;
      if ( v7 < 0 )
        break;
      v10 = v29;
      if ( v29 )
      {
        v11 = *((_QWORD *)v29 + 2);
        if ( v11 )
        {
          v12 = (__int64 *)(v11 + 128);
          v13 = 0LL;
          v14 = *v12;
          if ( (__int64 *)*v12 != v12 )
            v13 = *(_QWORD *)(v14 - 40);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000) != 0 )
          {
            LODWORD(Object) = v5;
            McTemplateK0pqp(v13, v14, v9, this, Object, v13);
          }
        }
      }
      ObfDereferenceObject(v10);
      CurrentProcess = PsGetCurrentProcess(v16, v15);
      v20 = PsGetCurrentProcess(v19, v18);
      LOBYTE(v26) = 1;
      v21 = ObDuplicateObject(v20, v28, CurrentProcess, &v28, 0, 0, 6, v26);
      v4 = v21;
      if ( v21 < 0 )
        break;
      v22 = 56LL * (unsigned int)v5;
      v5 = (unsigned int)(v5 + 1);
      *(_QWORD *)(56 * v6 + (-(__int64)a2->bProducer & 0xFFFFFFFFFFFFFFF0uLL) + 48 + *((_QWORD *)this + 7)) = v28;
      *(_DWORD *)(v22 + *((_QWORD *)this + 7) + 4) = 0;
      *(_DWORD *)(v22 + *((_QWORD *)this + 7)) = 0;
      if ( (unsigned int)v5 >= *((_DWORD *)this + 10) )
        goto LABEL_13;
    }
    v23 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v23 + 24) = v28;
    *(_QWORD *)(v23 + 32) = v4;
    WdLogEvent5_WdError(v23);
LABEL_13:
    if ( (int)v4 < 0 )
      DXGSWAPCHAIN::DestroyLocalClient(this, (DXGSWAPCHAIN *)((char *)this + (a2->bProducer ? 128LL : 80LL)));
  }
  if ( v27[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
  return (unsigned int)v4;
}
