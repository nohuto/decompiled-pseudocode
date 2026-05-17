/*
 * XREFs of LdrRemoveLoadAsDataTable @ 0x180073DE0
 * Callers:
 *     LdrAddLoadAsDataTable @ 0x180072E40 (LdrAddLoadAsDataTable.c)
 *     LdrResRelease @ 0x180088510 (LdrResRelease.c)
 *     sub_1800DDDE4 @ 0x1800DDDE4 (sub_1800DDDE4.c)
 * Callees:
 *     RtlReAllocateHeap @ 0x180013CC0 (RtlReAllocateHeap.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18001F8B0 @ 0x18001F8B0 (sub_18001F8B0.c)
 *     RtlReleaseActivationContext @ 0x180024580 (RtlReleaseActivationContext.c)
 *     _wcsicmp @ 0x18008CAD0 (_wcsicmp.c)
 */

__int64 __fastcall LdrRemoveLoadAsDataTable(wchar_t *String2, wchar_t **a2, _QWORD *a3, int a4)
{
  wchar_t *v7; // rdi
  unsigned int v8; // ebx
  unsigned int v9; // r8d
  __int64 v10; // rdx
  bool v11; // zf
  unsigned int v12; // esi
  __int64 v13; // r14
  volatile signed __int32 *v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // esi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r15
  const wchar_t *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 Heap; // rax
  unsigned int v25; // [rsp+24h] [rbp-34h]

  if ( String2 )
  {
    v7 = 0LL;
    v8 = -1073741511;
    sub_18001F8B0();
    RtlEnterCriticalSection((__int64)&unk_18015B260);
    v9 = dword_18015B290;
    if ( dword_18015B290 )
    {
      if ( (a4 & 0xE00) == 0 )
      {
        v10 = qword_18015B288;
        goto LABEL_5;
      }
      if ( a2 )
      {
        *a2 = 0LL;
        v16 = v9;
        v10 = qword_18015B288;
        while ( v16 )
        {
          if ( (a4 & 0x800) != 0 )
          {
            v17 = 48LL * (v16 - 1);
            if ( *(wchar_t **)(v17 + v10 + 24) == String2 )
            {
              v7 = *(wchar_t **)(v17 + v10);
              break;
            }
          }
          else if ( (a4 & 0x400) != 0
                 && (v18 = v16 - 1, v19 = 6 * v18, (v20 = *(const wchar_t **)(v10 + 48 * v18 + 8)) != 0LL) )
          {
            if ( !wcsicmp(v20, String2) )
            {
              v10 = qword_18015B288;
              v7 = *(wchar_t **)(qword_18015B288 + 8 * v19);
              v9 = dword_18015B290;
              break;
            }
            v9 = dword_18015B290;
            v10 = qword_18015B288;
          }
          else if ( (a4 & 0x200) != 0 )
          {
            v21 = 48LL * (v16 - 1);
            if ( *(wchar_t **)(v21 + v10) == String2 )
            {
              v7 = *(wchar_t **)(v21 + v10);
              break;
            }
          }
          --v16;
        }
        if ( v7 )
          *a2 = v7;
        if ( (a4 & 0x200000) != 0 )
        {
          if ( v7 && a3 )
          {
            *a3 = *(_QWORD *)(v10 + 48LL * (v16 - 1) + 16);
            if ( (a4 & 0x40000) != 0 )
              ++*(_DWORD *)(v10 + 48LL * (v16 - 1) + 32);
            v8 = 0;
          }
        }
        else
        {
          v11 = v7 == 0LL;
          if ( !v7 )
          {
LABEL_6:
            if ( v11 )
              v7 = String2;
            v12 = v9;
            v25 = v9;
            while ( v12 )
            {
              v13 = v12 - 1;
              if ( *(wchar_t **)(v10 + 48 * v13) == v7 )
              {
                if ( *(_QWORD *)(v10 + 48 * v13 + 8) )
                {
                  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(_QWORD *)(v10 + 48 * v13 + 8));
                  v10 = qword_18015B288;
                  *(_QWORD *)(qword_18015B288 + 48 * v13 + 8) = 0LL;
                  v12 = v25;
                  v9 = dword_18015B290;
                }
                v14 = *(volatile signed __int32 **)(v10 + 48 * v13 + 40);
                if ( (unsigned __int64)v14 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
                {
                  RtlReleaseActivationContext(v14);
                  v10 = qword_18015B288;
                  *(_QWORD *)(qword_18015B288 + 48 * v13 + 40) = 0LL;
                  v9 = dword_18015B290;
                }
                if ( v12 != v9 )
                {
                  *(_OWORD *)(v10 + 48 * v13) = *(_OWORD *)(v10 + 48LL * (v9 - 1));
                  *(_OWORD *)(v10 + 48 * v13 + 16) = *(_OWORD *)(v10 + 48LL * (v9 - 1) + 16);
                  *(_OWORD *)(v10 + 48 * v13 + 32) = *(_OWORD *)(v10 + 48LL * (v9 - 1) + 32);
                }
                dword_18015B290 = --v9;
                v15 = (unsigned int)(dword_18015B248 - 32);
                if ( v9 < (unsigned int)v15 )
                {
                  Heap = RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, qword_18015B288, 48 * v15);
                  v10 = Heap;
                  if ( !Heap )
                  {
                    v8 = -1073741801;
                    goto LABEL_50;
                  }
                  qword_18015B288 = Heap;
                  dword_18015B248 -= 32;
                  v9 = dword_18015B290;
                }
                v8 = 0;
              }
              v12 = v13;
              v25 = v13;
            }
            goto LABEL_50;
          }
          v22 = 48LL * (v16 - 1);
          if ( (int)--*(_DWORD *)(v22 + v10 + 32) <= 0 )
          {
LABEL_5:
            v11 = v7 == 0LL;
            goto LABEL_6;
          }
          v8 = -1073740024;
        }
      }
      else
      {
        v8 = -1073741811;
      }
    }
LABEL_50:
    RtlLeaveCriticalSection((__int64)&unk_18015B260);
    return v8;
  }
  return 3221225485LL;
}
