/*
 * XREFs of ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C009AFE8
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C009AD60 (DxgkSetProcessSchedulingPriorityClass.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C016CA50 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C01936E4 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C0194244 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C01A2B00 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C01A2C40 (DxgkReleaseProcessVidPnSourceOwners.c)
 * Callees:
 *     ??_GDXGPROCESS@@AEAAPEAXI@Z @ 0x1C0006CDC (--_GDXGPROCESS@@AEAAPEAXI@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DXGPROCESSMUTEXBYHANDLE::Release(DXGPROCESSMUTEXBYHANDLE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rdi
  void *v17; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  DXGFASTMUTEX *v32; // [rsp+20h] [rbp-10h] BYREF
  char v33; // [rsp+28h] [rbp-8h]

  if ( !*((_BYTE *)this + 28) )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v26[3] = 275LL;
    v26[4] = 4LL;
    v26[5] = this;
    v26[6] = 0LL;
    v26[7] = 0LL;
    WdLogEvent5_WdCriticalError(v26);
  }
  v5 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 28) = 0;
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v5 + 80), a2, a3, a4);
  Global = DXGGLOBAL::GetGlobal();
  v33 = 0;
  v32 = (struct DXGGLOBAL *)((char *)Global + 200);
  if ( Global == (struct DXGGLOBAL *)-200LL )
  {
    v27 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v27 + 24) = 453LL;
    WdLogEvent5_WdAssertion(v27);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v32 + 1) == CurrentThread )
  {
    v28 = WdLogNewEntry5_WdAssertion(CurrentThread, v7, v9, v10);
    *(_QWORD *)(v28 + 24) = 460LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( v33 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v7, v9);
    v29[5] = &v32;
    v29[3] = 275LL;
    v29[4] = 4LL;
    v29[6] = 0LL;
    v29[7] = 0LL;
    WdLogEvent5_WdCriticalError(v29);
  }
  DXGFASTMUTEX::Acquire(v32);
  v16 = (__int64 *)*((_QWORD *)this + 2);
  v33 = 1;
  v17 = (void *)v16[6];
  if ( v16[3] <= 0 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v30 + 24) = 894LL;
    WdLogEvent5_WdAssertion(v30);
  }
  if ( v16[3]-- == 1 )
    DXGPROCESS::`scalar deleting destructor'((DXGPROCESS *)v16);
  *((_QWORD *)this + 2) = 0LL;
  if ( *((_BYTE *)this + 29) )
  {
    KeUnstackDetachProcess((PRKAPC_STATE)((char *)this + 32));
    *((_BYTE *)this + 29) = 0;
  }
  ObfDereferenceObject(v17);
  if ( !v33 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19, v21);
    v31[5] = &v32;
    v31[3] = 275LL;
    v31[4] = 4LL;
    v31[6] = 0LL;
    v31[7] = 0LL;
    WdLogEvent5_WdCriticalError(v31);
  }
  v33 = 0;
  DXGFASTMUTEX::Release((struct _KTHREAD **)v32, v19, v21, v22);
  if ( v33 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v32, v23, v24, v25);
}
