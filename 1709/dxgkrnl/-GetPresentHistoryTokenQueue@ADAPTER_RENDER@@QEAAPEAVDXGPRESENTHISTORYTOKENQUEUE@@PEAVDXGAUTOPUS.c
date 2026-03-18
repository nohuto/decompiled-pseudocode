/*
 * XREFs of ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C0082CE4
 * Callers:
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C00B7D40 (DxgkGetPresentHistoryReadyEvent.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z @ 0x1C000DBEC (--_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ @ 0x1C00EB954 (--0DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ.c)
 *     ?Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ @ 0x1C00EB9B0 (-Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ.c)
 */

struct DXGPRESENTHISTORYTOKENQUEUE *__fastcall ADAPTER_RENDER::GetPresentHistoryTokenQueue(
        ADAPTER_RENDER *this,
        DXGPUSHLOCK **a2,
        int a3)
{
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v8; // rdi
  struct DXGPRESENTHISTORYTOKENQUEUE *result; // rax
  __int64 v10; // rsi
  DXGPRESENTHISTORYTOKENQUEUE *v11; // rax
  __int64 v12; // rcx
  DXGPRESENTHISTORYTOKENQUEUE *v13; // rdi
  int v14; // ebp
  SIZE_T v15; // rax
  char *v16; // rax
  __int64 v17; // rcx
  char *v18; // rsi
  const void *v19; // rdx
  void *v20; // rcx
  __int64 v21; // rax

  CurrentProcess = PsGetCurrentProcess();
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  v8 = ProcessSessionId;
  if ( ProcessSessionId >= *((_DWORD *)this + 186)
    || (result = *(struct DXGPRESENTHISTORYTOKENQUEUE **)(*((_QWORD *)this + 94) + 8LL * ProcessSessionId)) == 0LL )
  {
    if ( !a3 )
      return 0LL;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)a2);
    DXGPUSHLOCK::AcquireExclusive(a2[1]);
    *((_DWORD *)a2 + 4) = 2;
    if ( (unsigned int)v8 >= *((_DWORD *)this + 186) )
    {
      v14 = v8 + 4;
      v15 = 8LL * (unsigned int)(v8 + 4);
      if ( !is_mul_ok((unsigned int)(v8 + 4), 8uLL) )
        v15 = -1LL;
      v16 = (char *)operator new(v15, 0x4B677844u, PagedPool);
      v18 = v16;
      if ( !v16 )
      {
        v21 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v21 + 32) = v8;
LABEL_24:
        *(_QWORD *)(v21 + 24) = this;
        WdLogEvent5_WdError(v21);
        return 0LL;
      }
      v19 = (const void *)*((_QWORD *)this + 94);
      if ( v19 )
        memmove(v16, v19, 8LL * *((unsigned int *)this + 186));
      memset(&v18[8 * *((unsigned int *)this + 186)], 0, 8LL * (unsigned int)(v14 - *((_DWORD *)this + 186)));
      v20 = (void *)*((_QWORD *)this + 94);
      if ( v20 )
        ExFreePoolWithTag(v20, 0);
      *((_QWORD *)this + 94) = v18;
      *((_DWORD *)this + 186) = v14;
    }
    v10 = v8;
    if ( *(_QWORD *)(*((_QWORD *)this + 94) + 8 * v8) )
      return *(struct DXGPRESENTHISTORYTOKENQUEUE **)(*((_QWORD *)this + 94) + 8 * v10);
    v11 = (DXGPRESENTHISTORYTOKENQUEUE *)operator new(0x4850uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v11 )
      v13 = DXGPRESENTHISTORYTOKENQUEUE::DXGPRESENTHISTORYTOKENQUEUE(v11);
    else
      v13 = 0LL;
    if ( v13 )
    {
      if ( (int)DXGPRESENTHISTORYTOKENQUEUE::Initialize(v13) >= 0 )
      {
        *(_QWORD *)(*((_QWORD *)this + 94) + 8 * v10) = v13;
        return *(struct DXGPRESENTHISTORYTOKENQUEUE **)(*((_QWORD *)this + 94) + 8 * v10);
      }
      DXGPRESENTHISTORYTOKENQUEUE::`scalar deleting destructor'(v13);
      return 0LL;
    }
    v21 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v21 + 32) = v10;
    goto LABEL_24;
  }
  return result;
}
