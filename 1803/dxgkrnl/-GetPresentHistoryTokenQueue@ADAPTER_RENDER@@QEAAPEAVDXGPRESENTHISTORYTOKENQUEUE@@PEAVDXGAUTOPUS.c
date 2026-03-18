/*
 * XREFs of ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C00A5968
 * Callers:
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C00DC300 (DxgkGetPresentHistoryReadyEvent.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z @ 0x1C0028BC8 (--_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z.c)
 *     ??0DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ @ 0x1C01B5C08 (--0DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ.c)
 *     ?Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ @ 0x1C01B5D38 (-Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ.c)
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
  SIZE_T v11; // rax
  char *v12; // rax
  __int64 v13; // rcx
  char *v14; // rsi
  __int64 v15; // rax
  const void *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rsi
  DXGPRESENTHISTORYTOKENQUEUE *v19; // rax
  __int64 v20; // rcx
  DXGPRESENTHISTORYTOKENQUEUE *v21; // rdi

  CurrentProcess = PsGetCurrentProcess();
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  v8 = ProcessSessionId;
  if ( ProcessSessionId >= *((_DWORD *)this + 190)
    || (result = *(struct DXGPRESENTHISTORYTOKENQUEUE **)(*((_QWORD *)this + 96) + 8LL * ProcessSessionId)) == 0LL )
  {
    if ( a3 )
    {
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)a2);
      DXGPUSHLOCK::AcquireExclusive(a2[1]);
      *((_DWORD *)a2 + 4) = 2;
      if ( (unsigned int)v8 >= *((_DWORD *)this + 190) )
      {
        v10 = v8 + 4;
        v11 = 8LL * (unsigned int)(v8 + 4);
        if ( !is_mul_ok((unsigned int)(v8 + 4), 8uLL) )
          v11 = -1LL;
        v12 = (char *)operator new[](v11, 0x4B677844u, PagedPool);
        v14 = v12;
        if ( !v12 )
        {
          v15 = WdLogNewEntry5_WdError(v13);
          *(_QWORD *)(v15 + 32) = v8;
LABEL_12:
          *(_QWORD *)(v15 + 24) = this;
          WdLogEvent5_WdError(v15);
          return 0LL;
        }
        v16 = (const void *)*((_QWORD *)this + 96);
        if ( v16 )
          memmove(v12, v16, 8LL * *((unsigned int *)this + 190));
        memset(&v14[8 * *((unsigned int *)this + 190)], 0, 8LL * (unsigned int)(v10 - *((_DWORD *)this + 190)));
        operator delete[](*((void **)this + 96));
        *((_QWORD *)this + 96) = v14;
        *((_DWORD *)this + 190) = v10;
      }
      v17 = *((_QWORD *)this + 96);
      v18 = v8;
      if ( *(_QWORD *)(v17 + 8 * v8) )
        return *(struct DXGPRESENTHISTORYTOKENQUEUE **)(v17 + 8 * v18);
      v19 = (DXGPRESENTHISTORYTOKENQUEUE *)operator new[](0x4850uLL, 0x4B677844u, (POOL_TYPE)512);
      if ( v19 )
        v21 = DXGPRESENTHISTORYTOKENQUEUE::DXGPRESENTHISTORYTOKENQUEUE(v19);
      else
        v21 = 0LL;
      if ( !v21 )
      {
        v15 = WdLogNewEntry5_WdError(v20);
        *(_QWORD *)(v15 + 32) = v18;
        goto LABEL_12;
      }
      if ( (int)DXGPRESENTHISTORYTOKENQUEUE::Initialize(v21) >= 0 )
      {
        *(_QWORD *)(*((_QWORD *)this + 96) + 8 * v18) = v21;
        v17 = *((_QWORD *)this + 96);
        return *(struct DXGPRESENTHISTORYTOKENQUEUE **)(v17 + 8 * v18);
      }
      DXGPRESENTHISTORYTOKENQUEUE::`scalar deleting destructor'(v21);
    }
    return 0LL;
  }
  return result;
}
