/*
 * XREFs of ?GetPointerHistoryFrameData@@YAHPEBUtagPOINTERINPUTFRAME@@KIIPEAE1@Z @ 0x1C01C63BC
 * Callers:
 *     ?GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z @ 0x1C01C61F4 (-GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?FindPointerInFrame@@YAHPEBUtagPOINTERINPUTFRAME@@IPEAK@Z @ 0x1C01C5678 (-FindPointerInFrame@@YAHPEBUtagPOINTERINPUTFRAME@@IPEAK@Z.c)
 *     PointerInfoCopyOutHelperInternal @ 0x1C01CA1A0 (PointerInfoCopyOutHelperInternal.c)
 */

__int64 __fastcall GetPointerHistoryFrameData(
        const struct tagPOINTERINPUTFRAME *a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6)
{
  int v7; // r9d
  unsigned int v9; // ebx
  unsigned int v10; // edi
  unsigned int v11; // esi
  unsigned int i; // r14d
  int *v13; // rdx
  int v14; // ecx
  __int64 v15; // r15
  __int64 v16; // rdx
  unsigned __int8 *v17; // r15
  unsigned int v20; // [rsp+A0h] [rbp+18h]
  unsigned int v21; // [rsp+A8h] [rbp+20h] BYREF

  v20 = a3;
  v7 = a2;
  switch ( a2 )
  {
    case 1:
      v9 = 96;
      goto LABEL_9;
    case 2:
      goto LABEL_7;
    case 3:
      v9 = 120;
      goto LABEL_9;
    case 5:
LABEL_7:
      v9 = 144;
      goto LABEL_9;
  }
  v9 = 0;
LABEL_9:
  v10 = 1;
  v11 = 0;
  for ( i = 0; v10 && i < a3; ++i )
  {
    v21 = v11 < *((_DWORD *)a1 + 10) ? v11 : 0;
    v13 = (int *)(a5 + 4);
    if ( (unsigned __int64)(a5 + 4) >= W32UserProbeAddress )
      v13 = (int *)W32UserProbeAddress;
    v14 = *v13;
    v15 = *((_QWORD *)a1 + 11);
    v11 = v21;
    v16 = v15 + 216LL * v21;
    if ( *(unsigned __int16 *)(v16 + 60) != v14 )
    {
      if ( !(unsigned int)FindPointerInFrame(a1, v14, &v21) )
        return 0;
      v11 = v21;
      v16 = v15 + 216LL * v21;
      v7 = a2;
    }
    if ( a4 >= v9 )
    {
      v17 = a6;
      v10 = PointerInfoCopyOutHelperInternal(
              (int)v16 + 48,
              *(_QWORD *)(v16 + 36),
              *((_QWORD *)a1 + 13),
              v7,
              v9,
              (__int64)a6);
      if ( v10 )
      {
        a5 += v9;
        a6 = &v17[v9];
        a4 -= v9;
        ++v11;
      }
    }
    v7 = a2;
    a3 = v20;
  }
  return v10;
}
