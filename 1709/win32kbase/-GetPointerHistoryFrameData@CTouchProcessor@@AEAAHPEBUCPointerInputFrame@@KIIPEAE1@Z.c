/*
 * XREFs of ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C0120690
 * Callers:
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C01202E0 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ?FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z @ 0x1C011D438 (-FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z.c)
 *     ApiSetPointerInfoCopyOutHelperInternal @ 0x1C013C818 (ApiSetPointerInfoCopyOutHelperInternal.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerHistoryFrameData(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7)
{
  unsigned int v7; // r10d
  int v8; // r9d
  unsigned int v10; // ebx
  unsigned int v11; // r12d
  unsigned int v12; // edi
  unsigned int v13; // esi
  unsigned int i; // r14d
  int *v15; // rdx
  int v16; // r8d
  __int64 v17; // r15
  __int64 v18; // rdx
  unsigned __int8 *v19; // r15

  v7 = a4;
  v8 = a3;
  switch ( a3 )
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
  v11 = a5;
  v12 = 1;
  v13 = 0;
  for ( i = 0; v12 && i < v7; ++i )
  {
    a5 = v13 < *((_DWORD *)a2 + 12) ? v13 : 0;
    v15 = (int *)(a6 + 4);
    if ( (unsigned __int64)(a6 + 4) >= MmUserProbeAddress )
      v15 = (int *)MmUserProbeAddress;
    v16 = *v15;
    v17 = *((_QWORD *)a2 + 12);
    v13 = a5;
    v18 = v17 + 608LL * a5;
    if ( *(unsigned __int16 *)(v18 + 252) != v16 )
    {
      if ( !(unsigned int)CTouchProcessor::FindPointerInFrame((CTouchProcessor *)MmUserProbeAddress, a2, v16, &a5) )
        return 0;
      v13 = a5;
      v18 = v17 + 608LL * a5;
      v8 = a3;
    }
    if ( v11 >= v10 )
    {
      v19 = a7;
      v12 = ApiSetPointerInfoCopyOutHelperInternal(
              (int)v18 + 240,
              *(_QWORD *)(v18 + 228),
              *((_QWORD *)a2 + 14),
              v8,
              v10,
              (__int64)a7);
      if ( v12 )
      {
        a6 += v10;
        a7 = &v19[v10];
        v11 -= v10;
        ++v13;
      }
    }
    v8 = a3;
    v7 = a4;
  }
  return v12;
}
