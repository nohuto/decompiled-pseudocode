/*
 * XREFs of ?GetPointerFrameData@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@KIPEAIPEAE@Z @ 0x1C01C60E0
 * Callers:
 *     ?GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z @ 0x1C01C61F4 (-GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z.c)
 * Callees:
 *     PointerInfoCopyOutHelperInternal @ 0x1C01CA1A0 (PointerInfoCopyOutHelperInternal.c)
 */

__int64 __fastcall GetPointerFrameData(
        const struct tagPOINTERINPUTFRAME *a1,
        const struct tagPOINTERINFONODE *a2,
        int a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int8 *a6)
{
  unsigned int v10; // ebx
  unsigned __int8 *v11; // rcx
  unsigned int v12; // esi
  unsigned int v13; // ebp
  int v14; // r8d
  __int64 v15; // rdi
  unsigned int v16; // edx
  unsigned int v17; // eax
  int v19; // [rsp+70h] [rbp+18h]
  unsigned __int8 *v20; // [rsp+88h] [rbp+30h]

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
  v11 = (unsigned __int8 *)*((_QWORD *)a2 + 10);
  v12 = 0;
  v13 = 0;
  v14 = *((_DWORD *)a2 + 2);
  v15 = *((_QWORD *)a1 + 11) + 8LL;
  v20 = v11;
  v16 = 1;
  v19 = v14;
  do
  {
    if ( v13 >= *((_DWORD *)a1 + 10) )
      break;
    if ( *(unsigned __int8 **)(v15 + 72) == v11 && *(_DWORD *)v15 == v14 )
    {
      ++v12;
      if ( a4 >= v10 )
      {
        v17 = PointerInfoCopyOutHelperInternal(
                (int)v15 + 40,
                *(_QWORD *)(v15 + 28),
                *((_QWORD *)a1 + 13),
                a3,
                v10,
                (__int64)a6);
        v14 = v19;
        v16 = v17;
        if ( v17 )
        {
          a6 += v10;
          a4 -= v10;
        }
        v11 = v20;
      }
    }
    ++v13;
    v15 += 216LL;
  }
  while ( v16 );
  if ( v16 )
    *a5 = v12;
  return v16;
}
