/*
 * XREFs of ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C012157C
 * Callers:
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C01212B0 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     ?FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z @ 0x1C011E670 (-FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z.c)
 *     GetPointerInfoSize @ 0x1C01296AC (GetPointerInfoSize.c)
 *     ApiSetPointerInfoCopyOutHelperInternal @ 0x1C013D348 (ApiSetPointerInfoCopyOutHelperInternal.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerHistoryFrameData(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7)
{
  unsigned int v8; // r9d
  unsigned int v9; // r10d
  __int64 PointerInfoSize; // r14
  unsigned int v11; // r12d
  unsigned int v12; // ebx
  unsigned int v13; // edi
  unsigned int i; // r15d
  CTouchProcessor *v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rdx
  unsigned __int8 *v18; // rsi

  PointerInfoSize = (unsigned int)GetPointerInfoSize(a3);
  v11 = a5;
  v12 = 1;
  v13 = 0;
  for ( i = 0; v12 && i < v8; ++i )
  {
    a5 = v13 < *((_DWORD *)a2 + 12) ? v13 : 0;
    v15 = (CTouchProcessor *)(a6 + 4);
    if ( a6 + 4 >= (unsigned __int8 *)W32UserProbeAddress )
      v15 = W32UserProbeAddress;
    v16 = *((_QWORD *)a2 + 12);
    v13 = a5;
    v17 = v16 + 608LL * a5;
    if ( *(unsigned __int16 *)(v17 + 252) != *(_DWORD *)v15 )
    {
      if ( !(unsigned int)CTouchProcessor::FindPointerInFrame(v15, a2, *(_DWORD *)v15, &a5) )
        return 0;
      v13 = a5;
      v17 = v16 + 608LL * a5;
      v9 = a3;
    }
    if ( v11 >= (unsigned int)PointerInfoSize )
    {
      v18 = a7;
      v12 = ApiSetPointerInfoCopyOutHelperInternal(
              (int)v17 + 240,
              *(_QWORD *)(v17 + 228),
              *((_QWORD *)a2 + 14),
              v9,
              PointerInfoSize,
              (__int64)a7);
      if ( v12 )
      {
        a6 += PointerInfoSize;
        a7 = &v18[PointerInfoSize];
        v11 -= PointerInfoSize;
        ++v13;
      }
    }
    v8 = a4;
    v9 = a3;
  }
  return v12;
}
