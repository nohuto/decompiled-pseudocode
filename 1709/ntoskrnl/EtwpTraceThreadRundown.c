/*
 * XREFs of EtwpTraceThreadRundown @ 0x14027EF38
 * Callers:
 *     EtwpThreadRundownApc @ 0x14027EF00 (EtwpThreadRundownApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x14027F20C (EtwpTraceThreadRundownWithStack.c)
 *     EtwpThreadEnumCallback @ 0x14074EE20 (EtwpThreadEnumCallback.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x140061EB0 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x140061EF0 (PsGetIoPriorityThread.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     EtwpLogSystemEventUnsafe @ 0x14027C4F4 (EtwpLogSystemEventUnsafe.c)
 */

unsigned int *__fastcall EtwpTraceThreadRundown(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v3; // r15
  char v4; // r12
  unsigned int v5; // edi
  unsigned __int16 v6; // si
  __int64 v7; // rbx
  __int64 v8; // r11
  unsigned int v9; // r10d
  __int64 v10; // r11
  char v11; // cl
  __int64 v12; // rcx
  __int16 v13; // ax
  __int64 v14; // rax
  unsigned __int16 *v15; // rax
  void *v16; // rcx
  unsigned __int16 v17; // dx
  unsigned __int64 v18; // rax
  _DWORD v20[2]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-B0h]
  __int64 v22; // [rsp+70h] [rbp-A8h]
  __int64 v23; // [rsp+78h] [rbp-A0h]
  __int64 v24; // [rsp+80h] [rbp-98h]
  __int64 v25; // [rsp+88h] [rbp-90h]
  __int64 v26; // [rsp+90h] [rbp-88h]
  __int64 v27; // [rsp+98h] [rbp-80h]
  int v28; // [rsp+A0h] [rbp-78h]
  char v29; // [rsp+A4h] [rbp-74h]
  char PagePriorityThread; // [rsp+A5h] [rbp-73h]
  char IoPriorityThread; // [rsp+A6h] [rbp-72h]
  char v32; // [rsp+A7h] [rbp-71h]
  _QWORD v33[2]; // [rsp+B0h] [rbp-68h] BYREF
  void *v34; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v35; // [rsp+C8h] [rbp-50h]
  void *v36; // [rsp+D0h] [rbp-48h]
  __int64 v37; // [rsp+D8h] [rbp-40h]

  v2 = 2;
  v3 = *(_QWORD *)(a2 + 32);
  v4 = *(_BYTE *)(a2 + 105);
  v5 = *(_DWORD *)(a2 + 40);
  v6 = 1284 - (*(_BYTE *)(a2 + 104) != 0);
  if ( (struct _KTHREAD *)a1 != KeGetCurrentThread() )
    v5 &= 0xFFFFE7FF;
  v20[0] = *(_DWORD *)(a1 + 1592);
  v20[1] = *(_DWORD *)(a1 + 1600);
  v21 = *(_QWORD *)(a1 + 56);
  v22 = *(_QWORD *)(a1 + 48);
  v25 = *(_QWORD *)(a1 + 576);
  v26 = *(_QWORD *)(a1 + 1680);
  v7 = *(_QWORD *)(a1 + 240);
  v23 = 0LL;
  v24 = 0LL;
  v27 = v7;
  v28 = 0;
  v29 = *(_BYTE *)(a1 + 563);
  PagePriorityThread = PsGetPagePriorityThread(a1);
  IoPriorityThread = PsGetIoPriorityThread(v8);
  v32 = v9;
  if ( (*(_BYTE *)(v10 + 1752) & 8) != 0 )
  {
    v11 = v32;
    if ( *(_QWORD *)(v10 + 1544) != v10 + 1544 )
      v11 = v9 + 1;
    v32 = v11;
  }
  if ( v7 && v4 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(v10 + 544) + 1064LL);
    if ( v12 && ((v13 = *(_WORD *)(v12 + 8), v13 == 332) || v13 == 452) )
    {
      v28 = *(_DWORD *)(v7 + 12128);
      v23 = *(unsigned int *)(v7 + 8196);
      v14 = *(unsigned int *)(v7 + 8200);
    }
    else
    {
      v28 = *(_DWORD *)(v7 + 5920);
      v23 = *(_QWORD *)(v7 + 8);
      v14 = *(_QWORD *)(v7 + 16);
    }
    v24 = v14;
  }
  v33[0] = v20;
  v33[1] = 72LL;
  v15 = *(unsigned __int16 **)(v10 + 2008);
  if ( v15 && (v16 = (void *)*((_QWORD *)v15 + 1)) != 0LL )
  {
    v17 = *v15;
    v18 = 2048LL;
    if ( v17 < 0x800u )
      v18 = v17;
    v34 = v16;
    v35 = __PAIR64__(v9, v18);
    if ( !(_DWORD)v18 || *((_WORD *)v16 + (v18 >> 1) - 1) != (_WORD)v9 )
    {
      v36 = &EtwpNull;
      v37 = 2LL;
      v2 = 3;
    }
  }
  else
  {
    v34 = &EtwpNull;
    v35 = 2LL;
  }
  return EtwpLogSystemEventUnsafe(*(_QWORD *)(v3 + 2256), (__int64)v33, (_DWORD *)v10, *(_DWORD *)v3, v2, v6, v5);
}
