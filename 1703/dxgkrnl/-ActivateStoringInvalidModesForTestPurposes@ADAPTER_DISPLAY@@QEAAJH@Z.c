/*
 * XREFs of ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C016FCB8
 * Callers:
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0001C48 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes(
        ADAPTER_DISPLAY *this,
        int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rax
  SIZE_T v10; // rax
  PVOID v11; // rax
  __int64 v12; // rax
  unsigned int i; // ebx
  void *v14; // rcx
  void *v15; // rcx
  _BYTE v17[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (ADAPTER_DISPLAY *)((char *)this + 136), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v8 = 0;
  if ( a2 )
  {
    if ( *((_QWORD *)this + 22) )
    {
      v9 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v9 + 24) = 6872LL;
      WdLogEvent5_WdError(v9);
      v8 = -1073740008;
    }
    else
    {
      v10 = 24LL * *((unsigned int *)this + 20);
      if ( !is_mul_ok(*((unsigned int *)this + 20), 0x18uLL) )
        v10 = -1LL;
      v11 = operator new[](v10, 0x4B677844u, PagedPool);
      *((_QWORD *)this + 22) = v11;
      if ( v11 )
      {
        memset(v11, 0, 24LL * *((unsigned int *)this + 20));
      }
      else
      {
        v12 = WdLogNewEntry5_WdLowResource(0LL);
        *(_QWORD *)(v12 + 24) = this;
        WdLogEvent5_WdLowResource(v12);
        v8 = -1073741801;
      }
    }
  }
  else if ( *((_QWORD *)this + 22) )
  {
    for ( i = 0; i < *((_DWORD *)this + 20); ++i )
    {
      v14 = *(void **)(*((_QWORD *)this + 22) + 24LL * i + 8);
      if ( v14 )
      {
        ExFreePoolWithTag(v14, 0);
        *(_QWORD *)(*((_QWORD *)this + 22) + 24LL * i + 8) = 0LL;
      }
    }
    v15 = (void *)*((_QWORD *)this + 22);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    *((_QWORD *)this + 22) = 0LL;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
  return v8;
}
