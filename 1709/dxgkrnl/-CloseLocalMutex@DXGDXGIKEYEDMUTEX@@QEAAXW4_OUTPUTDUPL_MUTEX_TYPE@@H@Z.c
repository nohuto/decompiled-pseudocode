/*
 * XREFs of ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C01C5CB0
 * Callers:
 *     ?CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01C59A8 (-CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01C5A48 (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C01CCB30 (-ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C01CCBF8 (-ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETP.c)
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C01BF438 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C01BF588 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 */

char __fastcall DXGDXGIKEYEDMUTEX::CloseLocalMutex(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // rdi
  bool v6; // zf
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax

  v3 = a3;
  v4 = (int)a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 11001);
  v6 = v3 == 0;
  v7 = a1 + 24 * v4;
  v8 = *(unsigned int *)(v7 + 16);
  if ( v6 )
  {
    LOBYTE(v9) = DXGKEYEDMUTEX::DestroyHandle(v8, a2);
    if ( !(_BYTE)v9 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v12 + 24) = 654LL;
LABEL_9:
      LOBYTE(v9) = WdLogEvent5_WdAssertion(v12);
    }
  }
  else
  {
    v9 = DXGKEYEDMUTEX::DestroyLocal(v8, a2);
    if ( v9 < 0 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v12 + 24) = 659LL;
      goto LABEL_9;
    }
  }
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 24) = 0LL;
  *(_QWORD *)(v7 + 32) = 0LL;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    LOBYTE(v9) = McTemplateK0q(v10, &EventProfilerExit, v11, 11001);
  return v9;
}
