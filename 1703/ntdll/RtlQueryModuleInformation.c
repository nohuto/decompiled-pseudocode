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
  _BYTE *Heap; // rbx
  int SystemInformation; // eax
  unsigned int v10; // esi
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  _OWORD *v15; // rdx
  __int64 v16; // rcx
  _OWORD *v17; // rax
  __int128 v18; // xmm1
  _BYTE v19[304]; // [rsp+30h] [rbp-168h] BYREF

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
  Heap = v19;
  while ( 1 )
  {
    SystemInformation = ZwQuerySystemInformation();
    v10 = SystemInformation;
    if ( ((SystemInformation + 0x80000000) & 0x80000000) == 0 && SystemInformation != -1073741820 )
      break;
    if ( !a3 )
    {
      v10 = 0;
      v11 = 14510024 * a2;
LABEL_29:
      *a1 = v11;
      break;
    }
    if ( SystemInformation >= 0 )
    {
      v11 = a2 * *(_DWORD *)Heap;
      if ( *a1 >= v11 )
      {
        if ( *(_DWORD *)Heap )
        {
          do
          {
            if ( a2 == 8 )
            {
              *(_QWORD *)(a3 + 8LL * v3) = *(_QWORD *)&Heap[296 * v3 + 24];
            }
            else if ( a2 == 272 )
            {
              v12 = 296LL * v3;
              v13 = a3 + 272LL * v3;
              *(_QWORD *)v13 = *(_QWORD *)&Heap[v12 + 24];
              *(_DWORD *)(v13 + 8) = *(_DWORD *)&Heap[v12 + 32];
              *(_WORD *)(v13 + 12) = *(_WORD *)&Heap[v12 + 46];
              v14 = v12 + 48;
              v15 = (_OWORD *)(v13 + 14);
              v16 = 2LL;
              v17 = &Heap[v14];
              do
              {
                *v15 = *v17;
                v15[1] = v17[1];
                v15[2] = v17[2];
                v15[3] = v17[3];
                v15[4] = v17[4];
                v15[5] = v17[5];
                v15[6] = v17[6];
                v15 += 8;
                v18 = v17[7];
                v17 += 8;
                *(v15 - 1) = v18;
                --v16;
              }
              while ( v16 );
            }
            ++v3;
          }
          while ( v3 < *(_DWORD *)Heap );
        }
      }
      else
      {
        v10 = -1073741789;
      }
      goto LABEL_29;
    }
    if ( Heap != v19 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
    Heap = (_BYTE *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015B268 + 1572864, 0LL);
    if ( !Heap )
      return 3221225626LL;
  }
  if ( Heap != v19 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  return v10;
}
