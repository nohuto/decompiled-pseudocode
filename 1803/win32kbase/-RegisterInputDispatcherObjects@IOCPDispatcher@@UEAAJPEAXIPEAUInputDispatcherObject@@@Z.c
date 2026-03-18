/*
 * XREFs of ?RegisterInputDispatcherObjects@IOCPDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1C0124320
 * Callers:
 *     <none>
 * Callees:
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C003A258 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 */

__int64 __fastcall IOCPDispatcher::RegisterInputDispatcherObjects(
        IOCPDispatcher *this,
        void *a2,
        unsigned int a3,
        struct InputDispatcherObject *a4)
{
  int v6; // ecx
  unsigned int v9; // r14d
  __int64 *v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned int v13; // [rsp+20h] [rbp-28h]

  v6 = *((_DWORD *)this + 642);
  if ( v6 + a3 >= 0x40 )
    return 3221225485LL;
  v9 = 0;
  if ( a3 )
  {
    v10 = (__int64 *)((char *)a4 + 8);
    do
    {
      v13 = v9 + *((_DWORD *)this + 642);
      v11 = 5LL * v13;
      *((_QWORD *)this + v11 + 3) = IOCPDispatcher::SetupIOCPForDispatcherHandle((__int64)this, 0LL, *v10, 1, v13);
      ++v9;
      *((_QWORD *)this + v11 + 2) = *(v10 - 1);
      v12 = *v10;
      v10 += 3;
      *((_QWORD *)this + v11 + 1) = v12;
      *((_QWORD *)this + v11 + 4) = *(v10 - 2);
      *((_QWORD *)this + v11 + 5) = a2;
    }
    while ( v9 < a3 );
    v6 = *((_DWORD *)this + 642);
  }
  *((_DWORD *)this + 642) = v6 + a3;
  return 0LL;
}
