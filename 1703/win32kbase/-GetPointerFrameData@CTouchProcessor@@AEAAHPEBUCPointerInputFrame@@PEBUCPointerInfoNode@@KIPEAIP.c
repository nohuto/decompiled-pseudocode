/*
 * XREFs of ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x1C01211B4
 * Callers:
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C01212B0 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 * Callees:
 *     GetPointerInfoSize @ 0x1C01296AC (GetPointerInfoSize.c)
 *     ApiSetPointerInfoCopyOutHelperInternal @ 0x1C013D348 (ApiSetPointerInfoCopyOutHelperInternal.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameData(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned __int8 *a7)
{
  unsigned int PointerInfoSize; // eax
  unsigned int v10; // r9d
  __int64 v11; // rdx
  unsigned int v12; // edi
  unsigned int v14; // ebp
  __int64 v15; // r8
  __int64 v16; // r12
  unsigned int v17; // r10d
  __int64 v18; // rsi
  __int64 v19; // rbx
  unsigned int v20; // eax
  unsigned int v21; // eax
  bool v22; // zf
  unsigned int v25; // [rsp+80h] [rbp+28h]

  PointerInfoSize = GetPointerInfoSize(a4);
  v12 = 0;
  v14 = 0;
  v16 = *(_QWORD *)(v15 + 272);
  v17 = 1;
  v18 = PointerInfoSize;
  v19 = *(_QWORD *)(v11 + 96) + 8LL;
  v20 = *(_DWORD *)(v15 + 8);
  v25 = v20;
  do
  {
    if ( v14 >= *((_DWORD *)a2 + 12) )
      break;
    if ( *(_QWORD *)(v19 + 264) == v16 && *(_DWORD *)v19 == v20 )
    {
      ++v12;
      if ( a5 >= (unsigned int)v18 )
      {
        v21 = ApiSetPointerInfoCopyOutHelperInternal(
                (int)v19 + 232,
                *(_QWORD *)(v19 + 220),
                *((_QWORD *)a2 + 14),
                v10,
                v18,
                (__int64)a7);
        v10 = a4;
        v17 = v21;
        v22 = v21 == 0;
        v20 = v25;
        if ( !v22 )
        {
          a7 += v18;
          a5 -= v18;
        }
      }
    }
    ++v14;
    v19 += 608LL;
  }
  while ( v17 );
  if ( v17 )
    *a6 = v12;
  return v17;
}
