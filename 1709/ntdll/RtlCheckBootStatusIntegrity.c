/*
 * XREFs of RtlCheckBootStatusIntegrity @ 0x1800EA6F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     NtReadFile @ 0x1800A0180 (NtReadFile.c)
 */

__int64 __fastcall RtlCheckBootStatusIntegrity(__int64 a1, bool *a2)
{
  char v3; // bp
  int File; // edi
  unsigned __int64 Heap; // rsi
  __int64 v6; // rax
  _BYTE *v7; // rcx
  __int64 v9; // [rsp+58h] [rbp-20h]
  unsigned int v10; // [rsp+90h] [rbp+18h]

  v3 = 0;
  File = NtReadFile();
  if ( File >= 0 )
  {
    if ( v10 && v10 <= 0x800 )
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
      if ( Heap )
      {
        File = NtReadFile();
        if ( File >= 0 )
        {
          v6 = v10;
          if ( v9 == v10 )
          {
            if ( v10 )
            {
              v7 = (_BYTE *)Heap;
              do
              {
                v3 += *v7++;
                --v6;
              }
              while ( v6 );
            }
            *a2 = v3 == 0;
          }
          else
          {
            *a2 = 0;
          }
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
  return (unsigned int)File;
}
