/*
 * XREFs of ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x1C01201B0
 * Callers:
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C01202E0 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 * Callees:
 *     ApiSetPointerInfoCopyOutHelperInternal @ 0x1C013C818 (ApiSetPointerInfoCopyOutHelperInternal.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameData(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned __int8 *a7)
{
  unsigned int v10; // ebx
  __int64 v11; // rcx
  unsigned int v12; // esi
  unsigned int v13; // ebp
  unsigned int v14; // r8d
  __int64 v15; // rdi
  unsigned int v17; // edx
  unsigned int v18; // eax
  __int64 v20; // [rsp+60h] [rbp+8h]
  unsigned int v21; // [rsp+80h] [rbp+28h]

  switch ( a4 )
  {
    case 1:
      v10 = 96;
      goto LABEL_9;
    case 2:
      goto LABEL_7;
    case 3:
      v10 = 120;
      goto LABEL_9;
    case 5:
LABEL_7:
      v10 = 144;
      goto LABEL_9;
  }
  v10 = 0;
LABEL_9:
  v11 = *((_QWORD *)a3 + 34);
  v12 = 0;
  v13 = 0;
  v14 = *((_DWORD *)a3 + 2);
  v15 = *((_QWORD *)a2 + 12) + 8LL;
  v17 = 1;
  v20 = v11;
  v21 = v14;
  do
  {
    if ( v13 >= *((_DWORD *)a2 + 12) )
      break;
    if ( *(_QWORD *)(v15 + 264) == v11 && *(_DWORD *)v15 == v14 )
    {
      ++v12;
      if ( a5 >= v10 )
      {
        v18 = ApiSetPointerInfoCopyOutHelperInternal(
                (int)v15 + 232,
                *(_QWORD *)(v15 + 220),
                *((_QWORD *)a2 + 14),
                a4,
                v10,
                (__int64)a7);
        v14 = v21;
        v17 = v18;
        if ( v18 )
        {
          a7 += v10;
          a5 -= v10;
        }
        v11 = v20;
      }
    }
    ++v13;
    v15 += 608LL;
  }
  while ( v17 );
  if ( v17 )
    *a6 = v12;
  return v17;
}
