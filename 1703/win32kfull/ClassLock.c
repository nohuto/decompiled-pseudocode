/*
 * XREFs of ClassLock @ 0x1C00EB620
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     xxxSetClassData @ 0x1C0116768 (xxxSetClassData.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01C2E24 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C020DA24 (xxxRecreateSmallIcons.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClassLock(__int64 a1, _QWORD *a2)
{
  int v2; // eax
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax
  int v10; // edx

  v2 = *(_DWORD *)(a1 + 88);
  if ( v2 >= 131068 )
    return 0LL;
  v5 = v2 + 1;
  *(_DWORD *)(a1 + 88) = v5;
  v6 = *(_QWORD *)(a1 + 64);
  if ( a1 != v6 )
  {
    v10 = *(_DWORD *)(v6 + 88);
    if ( v10 < 131068 )
    {
      *(_DWORD *)(v6 + 88) = v10 + 1;
      goto LABEL_3;
    }
    *(_DWORD *)(a1 + 88) = v5 - 1;
    return 0LL;
  }
LABEL_3:
  v7 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v7 = *ThreadWin32Thread;
  *a2 = *(_QWORD *)(v7 + 16);
  *(_QWORD *)(v7 + 16) = a2;
  a2[2] = ClassUnlockWorker;
  result = 1LL;
  a2[1] = a1;
  return result;
}
