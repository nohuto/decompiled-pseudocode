/*
 * XREFs of CmpDoSystemCacheWrite @ 0x140694D44
 * Callers:
 *     CmpFileWrite @ 0x1404E3CB0 (CmpFileWrite.c)
 * Callees:
 *     CmpSetIoPriorityThread @ 0x140130D3C (CmpSetIoPriorityThread.c)
 *     CmpSetPriorityThread @ 0x140130D50 (CmpSetPriorityThread.c)
 *     HvViewMapCopyToFileOffset @ 0x1401E4FCC (HvViewMapCopyToFileOffset.c)
 *     HvViewMapFlush @ 0x1406A0080 (HvViewMapFlush.c)
 *     HvViewMapPinForFileOffset @ 0x1406A027C (HvViewMapPinForFileOffset.c)
 *     HvViewMapUnpinForFileOffset @ 0x1406A04D4 (HvViewMapUnpinForFileOffset.c)
 */

bool __fastcall CmpDoSystemCacheWrite(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4, char a5)
{
  char v5; // r13
  __int64 v8; // rdx
  KPRIORITY v9; // eax
  unsigned int v10; // ebp
  __int64 v11; // rdi
  unsigned int v12; // r14d
  char *v13; // r12
  unsigned int v14; // eax
  unsigned int v15; // esi
  int v16; // ebx
  KPRIORITY v18; // [rsp+20h] [rbp-48h]
  unsigned int v19; // [rsp+24h] [rbp-44h]
  unsigned int v20; // [rsp+28h] [rbp-40h]
  unsigned int v22; // [rsp+80h] [rbp+18h]
  int v24; // [rsp+90h] [rbp+28h]

  v18 = 0;
  v5 = 0;
  v22 = 0;
  v8 = a1;
  if ( (a5 & 1) != 0 )
  {
    v22 = CmpSetIoPriorityThread((__int64)KeGetCurrentThread(), 0);
    v9 = CmpSetPriorityThread(KeGetCurrentThread(), 4);
    v8 = a1;
    v5 = 1;
    v18 = v9;
  }
  v10 = 0;
  if ( a3 )
  {
    v11 = a2 + 8;
    do
    {
      v12 = *(_DWORD *)(v11 - 8) & 0xFFFFF000;
      v13 = *(char **)v11;
      v19 = *(_DWORD *)(v11 - 8);
      v14 = *(_DWORD *)(v11 + 8) + v19;
      v24 = *(_DWORD *)(v11 + 8);
      v20 = v14;
      v15 = ((v14 + 4095) & 0xFFFFF000) - v12;
      if ( *(_QWORD *)v11 )
      {
        v16 = HvViewMapPinForFileOffset(v8 + 200, v12, v15);
        if ( v16 < 0 )
          goto LABEL_14;
        v16 = HvViewMapCopyToFileOffset(a1 + 200, v19, v13, v24);
        if ( v16 < 0 )
          goto LABEL_14;
        v14 = v20;
      }
      *a4 = v14;
      v16 = HvViewMapFlush(a1 + 200, v12, v15);
      if ( v16 < 0 )
        goto LABEL_14;
      if ( v13 )
        HvViewMapUnpinForFileOffset(a1 + 200, v12, v15);
      v8 = a1;
      ++v10;
      v11 += 24LL;
    }
    while ( v10 < a3 );
  }
  v16 = 0;
LABEL_14:
  if ( v5 )
  {
    CmpSetIoPriorityThread((__int64)KeGetCurrentThread(), v22);
    CmpSetPriorityThread(KeGetCurrentThread(), v18);
  }
  return v16 >= 0;
}
