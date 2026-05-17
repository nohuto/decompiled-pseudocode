/*
 * XREFs of RtlAllocateAndInitializeSid @ 0x18005BC40
 * Callers:
 *     RtlCheckSandboxedToken @ 0x18005B8C0 (RtlCheckSandboxedToken.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlAllocateAndInitializeSid(
        __int64 a1,
        unsigned __int8 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 *a11)
{
  int v15; // ebx
  __int64 Heap; // rax
  int v17; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx

  if ( a2 > 8u )
    return 3221225592LL;
  v15 = a2;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, 4 * (unsigned int)a2 + 8);
  if ( Heap )
  {
    *(_BYTE *)(Heap + 1) = a2;
    *(_BYTE *)Heap = 1;
    *(_DWORD *)(Heap + 2) = *(_DWORD *)a1;
    *(_WORD *)(Heap + 6) = *(_WORD *)(a1 + 4);
    v17 = v15 - 1;
    if ( v17 )
    {
      v19 = v17 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( v22 )
            {
              v23 = v22 - 1;
              if ( v23 )
              {
                v24 = v23 - 1;
                if ( v24 )
                {
                  if ( v24 != 1 )
                    goto LABEL_5;
                  *(_DWORD *)(Heap + 36) = a10;
                }
                *(_DWORD *)(Heap + 32) = a9;
              }
              *(_DWORD *)(Heap + 28) = a8;
            }
            *(_DWORD *)(Heap + 24) = a7;
          }
          *(_DWORD *)(Heap + 20) = a6;
        }
        *(_DWORD *)(Heap + 16) = a5;
      }
      *(_DWORD *)(Heap + 12) = a4;
    }
    *(_DWORD *)(Heap + 8) = a3;
LABEL_5:
    *a11 = Heap;
    return 0LL;
  }
  return 3221225495LL;
}
