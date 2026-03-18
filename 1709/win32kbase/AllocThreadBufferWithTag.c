/*
 * XREFs of AllocThreadBufferWithTag @ 0x1C0043A90
 * Callers:
 *     CaptureDriverInfo2W @ 0x1C007D7C0 (CaptureDriverInfo2W.c)
 *     CaptureDEVMODEW @ 0x1C0094360 (CaptureDEVMODEW.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall AllocThreadBufferWithTag(unsigned int a1, unsigned int a2, char a3)
{
  __int64 v3; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  unsigned int v15; // ecx

  v3 = 0LL;
  if ( a1 < 0xFFFFEFDF )
  {
    if ( (a3 & 0x20) != 0 )
    {
      v15 = a1 + 32;
      if ( v15 > 0x400 && v15 + 4096 >= v15 )
        v15 = (v15 + 4095) & 0xFFFFF000;
      a1 = v15 - 32;
    }
    v5 = a1 + 32;
    if ( a1 != -32 && (int)IsWin32AllocPoolImplSupported() >= 0 )
    {
      v6 = Win32AllocPoolImpl(33LL, v5, a2);
      v7 = (_QWORD *)v6;
      if ( v6 )
      {
        v3 = v6 + 32;
        KeEnterCriticalRegion();
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), v8, v9, v10);
        v7[2] = v3;
        v7[3] = FreeThreadBufferWithTag;
        if ( ThreadWin32Thread )
        {
          v12 = *(_QWORD *)(ThreadWin32Thread + 88);
          v13 = (_QWORD *)(ThreadWin32Thread + 88);
          if ( *(_QWORD **)(v12 + 8) != v13 )
            __fastfail(3u);
          *v7 = v12;
          v7[1] = v13;
          *(_QWORD *)(v12 + 8) = v7;
          *v13 = v7;
        }
        else
        {
          v7[1] = v7;
          *v7 = v7;
        }
        KeLeaveCriticalRegion();
      }
    }
  }
  return v3;
}
