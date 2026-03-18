/*
 * XREFs of CmpDoSystemCacheWrite @ 0x14066A6BC
 * Callers:
 *     CmpFileWrite @ 0x1404D4800 (CmpFileWrite.c)
 * Callees:
 *     CmpSetIoPriorityThread @ 0x14003B93C (CmpSetIoPriorityThread.c)
 *     CmpSetPriorityThread @ 0x14003B948 (CmpSetPriorityThread.c)
 *     HvViewMapCopyToFileOffset @ 0x1401E0E98 (HvViewMapCopyToFileOffset.c)
 *     HvViewMapFlush @ 0x140675B48 (HvViewMapFlush.c)
 *     HvViewMapPinForFileOffset @ 0x140675D44 (HvViewMapPinForFileOffset.c)
 *     HvViewMapUnpinForFileOffset @ 0x140675F9C (HvViewMapUnpinForFileOffset.c)
 */

bool __fastcall CmpDoSystemCacheWrite(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4, char a5)
{
  __int64 v7; // rdx
  KPRIORITY v8; // eax
  unsigned int v9; // r14d
  __int64 v10; // rsi
  unsigned int v11; // r15d
  char *v12; // r13
  unsigned int v13; // eax
  unsigned int v14; // ebp
  int v15; // edi
  KPRIORITY Priority; // [rsp+24h] [rbp-44h]
  unsigned int v18; // [rsp+28h] [rbp-40h]
  unsigned int v19; // [rsp+2Ch] [rbp-3Ch]
  char v21; // [rsp+80h] [rbp+18h]
  int v23; // [rsp+90h] [rbp+28h]

  v7 = a1;
  v21 = 0;
  Priority = 0;
  if ( (a5 & 1) != 0 )
  {
    CmpSetIoPriorityThread();
    v8 = CmpSetPriorityThread(KeGetCurrentThread(), 4);
    v7 = a1;
    Priority = v8;
    v21 = 1;
  }
  v9 = 0;
  if ( a3 )
  {
    v10 = a2 + 8;
    do
    {
      v11 = *(_DWORD *)(v10 - 8) & 0xFFFFF000;
      v12 = *(char **)v10;
      v18 = *(_DWORD *)(v10 - 8);
      v13 = *(_DWORD *)(v10 + 8) + v18;
      v23 = *(_DWORD *)(v10 + 8);
      v19 = v13;
      v14 = ((v13 + 4095) & 0xFFFFF000) - v11;
      if ( *(_QWORD *)v10 )
      {
        v15 = HvViewMapPinForFileOffset(v7 + 200, v11, v14);
        if ( v15 < 0 )
          goto LABEL_14;
        v15 = HvViewMapCopyToFileOffset(a1 + 200, v18, v12, v23);
        if ( v15 < 0 )
          goto LABEL_14;
        v13 = v19;
      }
      *a4 = v13;
      v15 = HvViewMapFlush(a1 + 200, v11, v14);
      if ( v15 < 0 )
        goto LABEL_14;
      if ( v12 )
        HvViewMapUnpinForFileOffset(a1 + 200, v11, v14);
      v7 = a1;
      ++v9;
      v10 += 24LL;
    }
    while ( v9 < a3 );
  }
  v15 = 0;
LABEL_14:
  if ( v21 )
  {
    CmpSetIoPriorityThread();
    CmpSetPriorityThread(KeGetCurrentThread(), Priority);
  }
  return v15 >= 0;
}
