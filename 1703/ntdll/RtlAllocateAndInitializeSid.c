/*
 * XREFs of RtlAllocateAndInitializeSid @ 0x180075A60
 * Callers:
 *     RtlCheckSandboxedToken @ 0x1800756E0 (RtlCheckSandboxedToken.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
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
  __int64 Heap; // rax

  if ( a2 > 8u )
    return 3221225592LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015B268 + 1310720, 4LL * a2 + 8);
  if ( Heap )
  {
    *(_BYTE *)(Heap + 1) = a2;
    *(_BYTE *)Heap = 1;
    *(_DWORD *)(Heap + 2) = *(_DWORD *)a1;
    *(_WORD *)(Heap + 6) = *(_WORD *)(a1 + 4);
    if ( a2 != 1 )
    {
      if ( a2 != 2 )
      {
        if ( a2 != 3 )
        {
          if ( a2 != 4 )
          {
            if ( a2 != 5 )
            {
              if ( a2 != 6 )
              {
                if ( a2 != 7 )
                {
                  if ( a2 != 8 )
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
