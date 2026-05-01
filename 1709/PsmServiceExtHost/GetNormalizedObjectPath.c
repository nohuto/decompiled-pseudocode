/*
 * XREFs of GetNormalizedObjectPath @ 0x18001D0D0
 * Callers:
 *     QueryTransientObjectSecurityDescriptor @ 0x18001CDF4 (QueryTransientObjectSecurityDescriptor.c)
 * Callees:
 *     AccessHlprFree @ 0x18001CF08 (AccessHlprFree.c)
 *     RtlStringCbCopyExW @ 0x18001CF28 (RtlStringCbCopyExW.c)
 *     RtlStringCbLengthW @ 0x18001D270 (RtlStringCbLengthW.c)
 *     RtlStringLengthWorkerW @ 0x18001D2D0 (RtlStringLengthWorkerW.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall GetNormalizedObjectPath(__int64 a1, __int64 a2, _QWORD *a3)
{
  _WORD *Heap; // rdi
  signed int v5; // ebx
  unsigned int v6; // r11d
  int v7; // eax
  unsigned __int64 v8; // r10
  SIZE_T v9; // r9
  unsigned int v10; // r11d
  __int64 v11; // rax
  SIZE_T v12; // rdx
  SIZE_T v13; // r8
  SIZE_T v14; // rcx
  SIZE_T v15; // rax
  __int64 v16; // r11
  unsigned int v17; // edx
  unsigned int v18; // ecx
  wchar_t v19; // r9
  unsigned int v21; // r8d
  int *v22; // r9
  __int64 v23; // r10
  __int16 v24; // ax
  SIZE_T Size; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-28h] BYREF
  __int64 v27; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-18h] BYREF
  int v29; // [rsp+50h] [rbp-10h] BYREF
  __int16 v30; // [rsp+54h] [rbp-Ch]

  v29 = 3473445;
  v27 = 0LL;
  Heap = 0LL;
  v30 = 67;
  v5 = RtlStringCbLengthW(L"%5C%5C.%5CWnf%5C", 0x7FFFFFFFLL, &Size);
  if ( v5 >= 0 )
  {
    v7 = RtlStringLengthWorkerW(L"CommitMemoryWNFEvents", v6, &v26);
    v8 = v26;
    v5 = v7;
    if ( v7 < 0 )
      v8 = 0LL;
    v26 = v8;
    if ( v7 >= 0 )
    {
      v9 = Size;
      v10 = 0;
      v11 = 0LL;
      while ( 1 )
      {
        v12 = v9 + 6;
        v13 = v9;
        v14 = v9;
        if ( aCommitmemorywn[v11] != 92 )
          v12 = v9 + 2;
        v15 = -1LL;
        if ( v12 >= v9 )
          v15 = v12;
        Size = v15;
        v9 = v15;
        v5 = v12 < v14 ? 0xC0000095 : 0;
        if ( v12 < v13 )
          break;
        v11 = ++v10;
        if ( v10 > v8 )
        {
          Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Size);
          if ( Heap )
          {
            v5 = RtlStringCbCopyExW(Heap, Size, L"%5C%5C.%5CWnf%5C", &v27, &v28);
            if ( v5 >= 0 )
            {
              v16 = v27;
              v17 = 0;
              v18 = 0;
              do
              {
                if ( v18 >= v28 )
                  break;
                v19 = aCommitmemorywn[v17];
                if ( v19 == 92 )
                {
                  v21 = 0;
                  v22 = &v29;
                  do
                  {
                    v23 = v18;
                    if ( v18 >= v28 )
                      break;
                    v24 = *(_WORD *)v22;
                    ++v18;
                    v22 = (int *)((char *)v22 + 2);
                    *(_WORD *)(v16 + 2 * v23) = v24;
                    ++v21;
                  }
                  while ( v21 < 3 );
                }
                else
                {
                  *(_WORD *)(v16 + 2LL * v18++) = v19;
                }
                ++v17;
              }
              while ( v17 <= v26 );
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
