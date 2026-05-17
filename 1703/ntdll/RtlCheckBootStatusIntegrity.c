/*
 * XREFs of RtlCheckBootStatusIntegrity @ 0x18008DE40
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     ZwReadFile @ 0x1800A53C0 (ZwReadFile.c)
 */

__int64 __fastcall RtlCheckBootStatusIntegrity(__int64 a1, char *a2)
{
  char v2; // bl
  char v5; // r14
  int v6; // esi
  unsigned __int64 Heap; // rbp
  __int64 v8; // rax
  _BYTE *v9; // rcx
  _BYTE v11[8]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v12; // [rsp+58h] [rbp-30h]
  unsigned int v13; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+20h] BYREF

  v2 = 0;
  v14 = 0LL;
  v5 = 0;
  v6 = ZwReadFile(a1, 0LL, 0LL, 0LL, v11, &v13, 4, &v14, 0LL);
  if ( v6 >= 0 )
  {
    if ( v13 && v13 <= 0x800 )
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
      if ( Heap )
      {
        v6 = ZwReadFile(a1, 0LL, 0LL, 0LL, v11, Heap, v13, &v14, 0LL);
        if ( v6 >= 0 )
        {
          v8 = v13;
          if ( v12 == v13 )
          {
            if ( !v13 )
              goto LABEL_11;
            v9 = (_BYTE *)Heap;
            do
            {
              v5 += *v9++;
              --v8;
            }
            while ( v8 );
            if ( !v5 )
LABEL_11:
              v2 = 1;
          }
          *a2 = v2;
        }
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      *a2 = 0;
    }
  }
  return (unsigned int)v6;
}
