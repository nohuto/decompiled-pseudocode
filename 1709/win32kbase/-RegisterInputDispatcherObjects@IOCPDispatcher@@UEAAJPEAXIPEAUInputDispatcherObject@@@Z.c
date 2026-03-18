/*
 * XREFs of ?RegisterInputDispatcherObjects@IOCPDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1C003B570
 * Callers:
 *     <none>
 * Callees:
 *     ?CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1C003B294 (-CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@1@AEBUIOCPWCP_KeyContext@1@@Z @ 0x1C003B3B8 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@1@AEBUI.c)
 */

__int64 __fastcall IOCPDispatcher::RegisterInputDispatcherObjects(
        IOCPDispatcher *this,
        void *a2,
        unsigned int a3,
        struct InputDispatcherObject *a4)
{
  unsigned int v7; // edi
  unsigned int v8; // r15d
  __int64 *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rbp
  void *v13; // rax
  __int64 v14; // rax
  int v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+38h] [rbp-20h]

  if ( a3 + *((_DWORD *)this + 642) >= 0x40 )
    return 3221225485LL;
  v7 = 0;
  v16 = 1;
  v17 = 0LL;
  v8 = 0;
  if ( a3 )
  {
    v9 = (__int64 *)((char *)a4 + 8);
    while ( 1 )
    {
      v10 = *v9;
      v11 = v8 + *((_DWORD *)this + 642);
      v17 = v11;
      v12 = 5 * v11;
      v13 = IOCPDispatcher::SetupIOCPForDispatcherHandle((__int64)this, 0LL, v10, 1, (__int64)&v16);
      if ( !v13 )
        break;
      *((_QWORD *)this + v12 + 3) = v13;
      ++v8;
      *((_QWORD *)this + v12 + 2) = *(v9 - 1);
      *((_QWORD *)this + v12 + 1) = *v9;
      v14 = v9[1];
      v9 += 3;
      *((_QWORD *)this + v12 + 4) = v14;
      *((_QWORD *)this + v12 + 5) = a2;
      if ( v8 >= a3 )
        goto LABEL_6;
    }
    v7 = -1073741823;
    IOCPDispatcher::CleanupInputDispatcherObjects(this);
  }
  else
  {
LABEL_6:
    *((_DWORD *)this + 642) += a3;
  }
  return v7;
}
