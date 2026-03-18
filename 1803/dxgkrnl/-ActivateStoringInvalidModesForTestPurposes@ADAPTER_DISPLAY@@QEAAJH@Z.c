/*
 * XREFs of ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C0150AD8
 * Callers:
 *     DxgkEscape @ 0x1C00A66B0 (DxgkEscape.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes(ADAPTER_DISPLAY *this, int a2)
{
  void **v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // ebx
  SIZE_T v7; // rax
  PVOID v8; // rax
  __int64 v9; // rax
  __int64 i; // rbx
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (ADAPTER_DISPLAY *)((char *)this + 136), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v4 = (void **)*((_QWORD *)this + 22);
  if ( a2 )
  {
    if ( v4 )
    {
      v5 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v5 + 24) = 7538LL;
      WdLogEvent5_WdError(v5);
      v6 = -1073740008;
      goto LABEL_16;
    }
    v7 = 24LL * *((unsigned int *)this + 20);
    if ( !is_mul_ok(*((unsigned int *)this + 20), 0x18uLL) )
      v7 = -1LL;
    v8 = operator new[](v7, 0x4B677844u, PagedPool);
    *((_QWORD *)this + 22) = v8;
    if ( !v8 )
    {
      v9 = WdLogNewEntry5_WdLowResource(0LL);
      *(_QWORD *)(v9 + 24) = this;
      WdLogEvent5_WdLowResource(v9);
      v6 = -1073741801;
      goto LABEL_16;
    }
    memset(v8, 0, 24LL * *((unsigned int *)this + 20));
  }
  else if ( v4 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 20); i = (unsigned int)(i + 1) )
    {
      v4 = (void **)*((_QWORD *)this + 22);
      if ( v4[3 * i + 1] )
      {
        operator delete[](v4[3 * i + 1]);
        *(_QWORD *)(*((_QWORD *)this + 22) + 24 * i + 8) = 0LL;
        v4 = (void **)*((_QWORD *)this + 22);
      }
    }
    operator delete[](v4);
    *((_QWORD *)this + 22) = 0LL;
  }
  v6 = 0;
LABEL_16:
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  return v6;
}
