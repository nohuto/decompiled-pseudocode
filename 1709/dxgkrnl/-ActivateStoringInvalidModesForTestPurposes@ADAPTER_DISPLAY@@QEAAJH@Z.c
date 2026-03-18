/*
 * XREFs of ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C01734D8
 * Callers:
 *     DxgkEscape @ 0x1C009EC60 (DxgkEscape.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes(ADAPTER_DISPLAY *this, int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rax
  SIZE_T v7; // rax
  PVOID v8; // rax
  __int64 v9; // rax
  unsigned int i; // ebx
  void *v11; // rcx
  void *v12; // rcx
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (ADAPTER_DISPLAY *)((char *)this + 136));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v5 = 0;
  if ( a2 )
  {
    if ( *((_QWORD *)this + 22) )
    {
      v6 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v6 + 24) = 7521LL;
      WdLogEvent5_WdError(v6);
      v5 = -1073740008;
    }
    else
    {
      v7 = 24LL * *((unsigned int *)this + 20);
      if ( !is_mul_ok(*((unsigned int *)this + 20), 0x18uLL) )
        v7 = -1LL;
      v8 = operator new[](v7, 0x4B677844u, PagedPool);
      *((_QWORD *)this + 22) = v8;
      if ( v8 )
      {
        memset(v8, 0, 24LL * *((unsigned int *)this + 20));
      }
      else
      {
        v9 = WdLogNewEntry5_WdLowResource(0LL);
        *(_QWORD *)(v9 + 24) = this;
        WdLogEvent5_WdLowResource(v9);
        v5 = -1073741801;
      }
    }
  }
  else if ( *((_QWORD *)this + 22) )
  {
    for ( i = 0; i < *((_DWORD *)this + 20); ++i )
    {
      v11 = *(void **)(*((_QWORD *)this + 22) + 24LL * i + 8);
      if ( v11 )
      {
        ExFreePoolWithTag(v11, 0);
        *(_QWORD *)(*((_QWORD *)this + 22) + 24LL * i + 8) = 0LL;
      }
    }
    v12 = (void *)*((_QWORD *)this + 22);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    *((_QWORD *)this + 22) = 0LL;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
  return v5;
}
