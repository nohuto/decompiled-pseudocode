/*
 * XREFs of rimObsPopInputMessage @ 0x1C0115CBC
 * Callers:
 *     rimObsObserveNextInput @ 0x1C0115C04 (rimObsObserveNextInput.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     rimObsCalculateObserverMessageSize @ 0x1C0115594 (rimObsCalculateObserverMessageSize.c)
 *     rimObsCopyMessage @ 0x1C01157C0 (rimObsCopyMessage.c)
 */

__int64 __fastcall rimObsPopInputMessage(__int64 a1, __int64 a2, void **a3)
{
  int v3; // ebx
  char v5; // r15
  unsigned int v7; // ebx
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _DWORD v16[12]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *(_DWORD *)(a1 + 156);
  v5 = a2;
  if ( v3 )
  {
    memset(v16, 0, sizeof(v16));
    v16[0] = 1;
    v16[2] = 2;
    LOBYTE(v14) = v5;
    v16[3] = v3;
    v11 = rimObsCopyMessage((__int64)v16, v14, a3);
    *(_DWORD *)(a1 + 156) = 0;
    return v11;
  }
  v7 = *(_DWORD *)(a1 + 152) == 0 ? 0x8000001A : 0;
  if ( *(_DWORD *)(a1 + 152) )
  {
    v8 = *(_QWORD *)(a1 + 136);
    v9 = rimObsCopyMessage(v8 + 16, a2, a3);
    v7 = v9;
    if ( v9 == -1073741789 )
    {
      memset(v16, 0, sizeof(v16));
      v16[2] = 0;
      v16[0] = 1;
      v16[3] = rimObsCalculateObserverMessageSize((_DWORD *)(v8 + 16));
      LOBYTE(v10) = v5;
      return (unsigned int)rimObsCopyMessage((__int64)v16, v10, a3);
    }
    if ( v9 >= 0 )
    {
      v12 = *(_QWORD *)v8;
      v13 = *(_QWORD **)(v8 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 || *v13 != v8 )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      Win32FreePool(v8);
      --*(_DWORD *)(a1 + 152);
    }
  }
  return v7;
}
