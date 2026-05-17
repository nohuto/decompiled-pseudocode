/*
 * XREFs of RtlCheckBootStatusIntegrity @ 0x1800E68B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     ZwReadFile @ 0x18009AB80 (ZwReadFile.c)
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
  File = ZwReadFile();
  if ( File >= 0 )
  {
    if ( v10 && v10 <= 0x800 )
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
      if ( Heap )
      {
        File = ZwReadFile();
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
