/*
 * XREFs of ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C00CF604
 * Callers:
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C00A0820 (DxgkGetPresentHistoryReadyEvent.c)
 * Callees:
 *     ??_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z @ 0x1C0001978 (--_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??0DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ @ 0x1C0092AB0 (--0DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ.c)
 *     ?Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ @ 0x1C0092B0C (-Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
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
  int v10; // ebp
  unsigned __int64 v11; // rax
  char *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  char *v15; // rsi
  const void *v16; // rdx
  void *v17; // rcx
  __int64 v18; // rsi
  DXGPRESENTHISTORYTOKENQUEUE *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  union _SLIST_HEADER *v22; // rdi
  __int64 v23; // rax

  CurrentProcess = PsGetCurrentProcess(this);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  v8 = ProcessSessionId;
  if ( ProcessSessionId >= *((_DWORD *)this + 162)
    || (result = *(struct DXGPRESENTHISTORYTOKENQUEUE **)(*((_QWORD *)this + 82) + 8LL * ProcessSessionId)) == 0LL )
  {
    if ( !a3 )
      return 0LL;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)a2);
    DXGPUSHLOCK::AcquireExclusive(a2[1]);
    *((_DWORD *)a2 + 4) = 2;
    if ( (unsigned int)v8 >= *((_DWORD *)this + 162) )
    {
      v10 = v8 + 4;
      v11 = 8LL * (unsigned int)(v8 + 4);
      if ( !is_mul_ok((unsigned int)(v8 + 4), 8uLL) )
        v11 = -1LL;
      v12 = (char *)operator new(v11, 0x4B677844u, PagedPool);
      v15 = v12;
      if ( !v12 )
      {
        v23 = WdLogNewEntry5_WdError(v14, v13);
        *(_QWORD *)(v23 + 32) = v8;
LABEL_25:
        *(_QWORD *)(v23 + 24) = this;
        WdLogEvent5_WdError(v23);
        return 0LL;
      }
      v16 = (const void *)*((_QWORD *)this + 82);
      if ( v16 )
        memmove(v12, v16, 8LL * *((unsigned int *)this + 162));
      memset(&v15[8 * *((unsigned int *)this + 162)], 0, 8LL * (unsigned int)(v10 - *((_DWORD *)this + 162)));
      v17 = (void *)*((_QWORD *)this + 82);
      if ( v17 )
        ExFreePoolWithTag(v17, 0);
      *((_QWORD *)this + 82) = v15;
      *((_DWORD *)this + 162) = v10;
    }
    v18 = v8;
    if ( *(_QWORD *)(*((_QWORD *)this + 82) + 8 * v8) )
      return *(struct DXGPRESENTHISTORYTOKENQUEUE **)(*((_QWORD *)this + 82) + 8 * v18);
    v19 = (DXGPRESENTHISTORYTOKENQUEUE *)operator new(0x4850uLL, 0x4B677844u, (enum _POOL_TYPE)512);
    if ( v19 )
      v22 = (union _SLIST_HEADER *)DXGPRESENTHISTORYTOKENQUEUE::DXGPRESENTHISTORYTOKENQUEUE(v19);
    else
      v22 = 0LL;
    if ( v22 )
    {
      if ( DXGPRESENTHISTORYTOKENQUEUE::Initialize(v22) >= 0 )
      {
        *(_QWORD *)(*((_QWORD *)this + 82) + 8 * v18) = v22;
        return *(struct DXGPRESENTHISTORYTOKENQUEUE **)(*((_QWORD *)this + 82) + 8 * v18);
      }
      DXGPRESENTHISTORYTOKENQUEUE::`scalar deleting destructor'((DXGPRESENTHISTORYTOKENQUEUE *)v22);
      return 0LL;
    }
    v23 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v23 + 32) = v18;
    goto LABEL_25;
  }
  return result;
}
