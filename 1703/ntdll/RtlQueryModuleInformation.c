/*
 * XREFs of RtlQueryModuleInformation @ 0x1800E2540
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQuerySystemInformation @ 0x1800A59C0 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall RtlQueryModuleInformation(unsigned int *a1, int a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 result; // rax
  unsigned int *Heap; // rbx
  ULONG i; // r8d
  NTSTATUS v10; // eax
  unsigned int v11; // esi
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  _OWORD *v16; // rdx
  __int64 v17; // rcx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  ULONG ReturnLength[4]; // [rsp+20h] [rbp-178h] BYREF
  _BYTE SystemInformation[304]; // [rsp+30h] [rbp-168h] BYREF

  v3 = 0;
  if ( a2 != 8 )
  {
    if ( a2 != 272 )
      return 3221225712LL;
    result = (a3 & 7) != 0 ? 0xC00000F1 : 0;
LABEL_7:
    if ( (int)result < 0 )
      return result;
    goto LABEL_8;
  }
  if ( (a3 & 7) != 0 )
  {
    result = 3221225713LL;
    goto LABEL_7;
  }
LABEL_8:
  Heap = (unsigned int *)SystemInformation;
  for ( i = 304; ; i = ReturnLength[0] )
  {
    ReturnLength[0] = 0;
    v10 = ZwQuerySystemInformation(SystemModuleInformation, Heap, i, ReturnLength);
    v11 = v10;
    if ( ((v10 + 0x80000000) & 0x80000000) == 0 && v10 != -1073741820 )
      break;
    if ( !a3 )
    {
      v11 = 0;
      v12 = a2 * ((ReturnLength[0] - 8) / 0x128);
LABEL_30:
      *a1 = v12;
      break;
    }
    if ( v10 >= 0 )
    {
      v12 = a2 * *Heap;
      if ( *a1 >= v12 )
      {
        if ( *Heap )
        {
          do
          {
            if ( a2 == 8 )
            {
              *(_QWORD *)(a3 + 8LL * v3) = *(_QWORD *)&Heap[74 * v3 + 6];
            }
            else if ( a2 == 272 )
            {
              v13 = 74LL * v3;
              v14 = a3 + 272LL * v3;
              *(_QWORD *)v14 = *(_QWORD *)&Heap[v13 + 6];
              *(_DWORD *)(v14 + 8) = Heap[v13 + 8];
              *(_WORD *)(v14 + 12) = HIWORD(Heap[v13 + 11]);
              v15 = v13 * 4 + 48;
              v16 = (_OWORD *)(v14 + 14);
              v17 = 2LL;
              v18 = (_OWORD *)((char *)Heap + v15);
              do
              {
                *v16 = *v18;
                v16[1] = v18[1];
                v16[2] = v18[2];
                v16[3] = v18[3];
                v16[4] = v18[4];
                v16[5] = v18[5];
                v16[6] = v18[6];
                v16 += 8;
                v19 = v18[7];
                v18 += 8;
                *(v16 - 1) = v19;
                --v17;
              }
              while ( v17 );
            }
            ++v3;
          }
          while ( v3 < *Heap );
        }
      }
      else
      {
        v11 = -1073741789;
      }
      goto LABEL_30;
    }
    if ( Heap != (unsigned int *)SystemInformation )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, dword_18015B268 + 1572864, ReturnLength[0]);
    if ( !Heap )
      return 3221225626LL;
  }
  if ( Heap != (unsigned int *)SystemInformation )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v11;
}
