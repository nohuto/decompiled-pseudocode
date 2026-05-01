/*
 * XREFs of GetNormalizedObjectPath @ 0x18002AFF4
 * Callers:
 *     QueryTransientObjectSecurityDescriptor @ 0x18002AD14 (QueryTransientObjectSecurityDescriptor.c)
 * Callees:
 *     AccessHlprFree @ 0x18002AE28 (AccessHlprFree.c)
 *     RtlStringCbCopyExW @ 0x18002AE48 (RtlStringCbCopyExW.c)
 *     RtlStringCbLengthW @ 0x18002B190 (RtlStringCbLengthW.c)
 *     RtlStringLengthWorkerW @ 0x18002B1E8 (RtlStringLengthWorkerW.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall GetNormalizedObjectPath(__int64 a1, __int64 a2, _QWORD *a3)
{
  _WORD *Heap; // rdi
  signed int v5; // ebx
  int v6; // eax
  unsigned __int64 v7; // rdx
  SIZE_T v8; // r9
  unsigned int v9; // r8d
  __int64 v10; // rax
  bool v11; // zf
  SIZE_T v12; // rcx
  SIZE_T v13; // rax
  __int64 v14; // r11
  unsigned int v15; // edx
  unsigned int v16; // ecx
  wchar_t v17; // r9
  unsigned int v19; // r8d
  int *v20; // r9
  __int64 v21; // r10
  __int16 v22; // ax
  SIZE_T Size; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-28h] BYREF
  __int64 v25; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-18h] BYREF
  int v27; // [rsp+50h] [rbp-10h] BYREF
  __int16 v28; // [rsp+54h] [rbp-Ch]

  v27 = 3473445;
  v25 = 0LL;
  Heap = 0LL;
  v28 = 67;
  v5 = RtlStringCbLengthW(L"%5C%5C.%5CWnf%5C", 0x7FFFFFFFLL, &Size);
  if ( v5 >= 0 )
  {
    v6 = RtlStringLengthWorkerW(L"CommitMemoryWNFEvents", 0x7FFFFFFFLL, &v24);
    v7 = v24;
    v5 = v6;
    if ( v6 < 0 )
      v7 = 0LL;
    v24 = v7;
    if ( v6 >= 0 )
    {
      v8 = Size;
      v9 = 0;
      v10 = 0LL;
      while ( 1 )
      {
        v11 = aCommitmemorywn[v10] == 92;
        v12 = v8;
        v13 = v8 + 6;
        if ( !v11 )
          v13 = v8 + 2;
        v8 = -1LL;
        if ( v13 >= v12 )
          v8 = v13;
        v5 = v13 < v12 ? 0xC0000095 : 0;
        Size = v8;
        if ( v13 < v12 )
          break;
        v10 = ++v9;
        if ( v9 > v7 )
        {
          Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Size);
          if ( Heap )
          {
            v5 = RtlStringCbCopyExW(Heap, Size, L"%5C%5C.%5CWnf%5C", &v25, &v26);
            if ( v5 >= 0 )
            {
              v14 = v25;
              v15 = 0;
              v16 = 0;
              do
              {
                if ( v16 >= v26 )
                  break;
                v17 = aCommitmemorywn[v15];
                if ( v17 == 92 )
                {
                  v19 = 0;
                  v20 = &v27;
                  do
                  {
                    v21 = v16;
                    if ( v16 >= v26 )
                      break;
                    v22 = *(_WORD *)v20;
                    ++v16;
                    v20 = (int *)((char *)v20 + 2);
                    *(_WORD *)(v14 + 2 * v21) = v22;
                    ++v19;
                  }
                  while ( v19 < 3 );
                }
                else
                {
                  *(_WORD *)(v14 + 2LL * v16++) = v17;
                }
                ++v15;
              }
              while ( v15 <= v24 );
              *a3 = Heap;
              Heap = 0LL;
            }
          }
          else
          {
            v5 = -1073741801;
          }
          break;
        }
      }
    }
  }
  AccessHlprFree(Heap);
  return (unsigned int)v5;
}
