/*
 * XREFs of ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C01C8750
 * Callers:
 *     ?CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01C8438 (-CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01C84D8 (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C01D2D78 (-ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C01D2E40 (-ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETP.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C01C052C (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C01C0674 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 */

void __fastcall DXGDXGIKEYEDMUTEX::CloseLocalMutex(__int64 a1, int a2, __int64 a3)
{
  int v3; // esi
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+28h] [rbp-10h]

  v15 = 0LL;
  v3 = a3;
  v5 = a2;
  v14 = 11001;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 11001);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 11001);
  v7 = 3 * v5;
  v8 = *(unsigned int *)(a1 + 8 * v7 + 16);
  if ( v3 )
  {
    if ( (int)DXGKEYEDMUTEX::DestroyLocal(v8, v6) >= 0 )
      goto LABEL_10;
    v10 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v10 + 24) = 659LL;
  }
  else
  {
    if ( DXGKEYEDMUTEX::DestroyHandle(v8, v6) )
      goto LABEL_10;
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 654LL;
  }
  WdLogEvent5_WdAssertion(v10);
LABEL_10:
  *(_DWORD *)(a1 + 8 * v7 + 16) = 0;
  *(_QWORD *)(a1 + 8 * v7 + 24) = 0LL;
  *(_QWORD *)(a1 + 8 * v7 + 32) = 0LL;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v12, &EventProfilerExit, v13, v14);
}
