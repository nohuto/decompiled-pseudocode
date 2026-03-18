/*
 * XREFs of EtwTraceThread @ 0x14074619C
 * Callers:
 *     PspInsertThread @ 0x1404D54CC (PspInsertThread.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x140061EB0 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x140061EF0 (PsGetIoPriorityThread.c)
 *     EtwTraceSiloKernelEvent @ 0x1400AE16C (EtwTraceSiloKernelEvent.c)
 *     PsGetCurrentThreadTeb @ 0x1401247E0 (PsGetCurrentThreadTeb.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     EtwpPsProvTraceThread @ 0x14074711C (EtwpPsProvTraceThread.c)
 */

void __fastcall EtwTraceThread(__int64 a1, __int64 a2, char a3)
{
  unsigned int v6; // r14d
  __int64 v7; // r10
  _DWORD *CurrentThreadTeb; // r8
  unsigned __int64 v9; // r9
  __int16 v10; // dx
  int v11; // eax
  unsigned __int64 v12; // r8
  __int16 v13; // dx
  __int64 v14; // rax
  unsigned __int16 *v15; // rdx
  unsigned int v16; // eax
  unsigned __int16 v17; // [rsp+30h] [rbp-C8h]
  unsigned int v18; // [rsp+38h] [rbp-C0h]
  _DWORD v19[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A0h]
  __int64 v21; // [rsp+60h] [rbp-98h]
  __int64 v22; // [rsp+68h] [rbp-90h]
  __int64 v23; // [rsp+70h] [rbp-88h]
  __int64 v24; // [rsp+78h] [rbp-80h]
  __int64 v25; // [rsp+80h] [rbp-78h]
  __int64 v26; // [rsp+88h] [rbp-70h]
  int v27; // [rsp+90h] [rbp-68h]
  char v28; // [rsp+94h] [rbp-64h]
  char PagePriorityThread; // [rsp+95h] [rbp-63h]
  char IoPriorityThread; // [rsp+96h] [rbp-62h]
  char v31; // [rsp+97h] [rbp-61h]
  _QWORD v32[2]; // [rsp+A0h] [rbp-58h] BYREF
  void *v33; // [rsp+B0h] [rbp-48h]
  __int64 v34; // [rsp+B8h] [rbp-40h]
  void *v35; // [rsp+C0h] [rbp-38h]
  __int64 v36; // [rsp+C8h] [rbp-30h]

  v6 = 2;
  v18 = 5249283;
  if ( EtwpHostSiloState != -4464 && (*(_DWORD *)(EtwpHostSiloState + 4464) & 2) != 0 )
    EtwpPsProvTraceThread();
  v19[0] = *(_DWORD *)(a1 + 1592);
  v19[1] = *(_DWORD *)(a1 + 1600);
  v20 = *(_QWORD *)(a1 + 56);
  v21 = *(_QWORD *)(a1 + 48);
  v24 = *(_QWORD *)(a1 + 576);
  v25 = *(_QWORD *)(a1 + 1680);
  v22 = 0LL;
  v23 = 0LL;
  v26 = *(_QWORD *)(a1 + 240);
  v27 = 0;
  v28 = *(_BYTE *)(a1 + 563);
  PagePriorityThread = PsGetPagePriorityThread(a1);
  IoPriorityThread = PsGetIoPriorityThread(a1);
  v31 = 0;
  if ( a3 )
  {
    v17 = 1281;
    if ( a2 )
    {
      v22 = *(_QWORD *)(a2 + 16);
      v23 = *(_QWORD *)(a2 + 24);
    }
    CurrentThreadTeb = PsGetCurrentThreadTeb();
    if ( CurrentThreadTeb )
    {
      v9 = KeGetCurrentThread()->Process[1].ActiveProcessors.Bitmap[7];
      if ( v9 && ((v10 = *(_WORD *)(v9 + 8), v10 == 332) || v10 == 452) )
        v11 = CurrentThreadTeb[3032];
      else
        v11 = CurrentThreadTeb[1480];
      v27 = v11;
    }
  }
  else
  {
    v17 = 1282;
    v18 = 72358147;
    if ( v7 )
    {
      v12 = KeGetCurrentThread()->Process[1].ActiveProcessors.Bitmap[7];
      if ( v12 && ((v13 = *(_WORD *)(v12 + 8), v13 == 332) || v13 == 452) )
      {
        v27 = *(_DWORD *)(v7 + 12128);
        v22 = *(unsigned int *)(v7 + 8196);
        v14 = *(unsigned int *)(v7 + 8200);
      }
      else
      {
        v27 = *(_DWORD *)(v7 + 5920);
        v22 = *(_QWORD *)(v7 + 8);
        v14 = *(_QWORD *)(v7 + 16);
      }
      v23 = v14;
    }
  }
  v32[0] = v19;
  v32[1] = 72LL;
  v15 = *(unsigned __int16 **)(a1 + 2008);
  if ( v15 && *((_QWORD *)v15 + 1) )
  {
    v16 = 2048;
    if ( *v15 < 0x800u )
      v16 = *v15;
    v33 = (void *)*((_QWORD *)v15 + 1);
    v34 = v16;
    if ( !v16 || *(_WORD *)(*((_QWORD *)v15 + 1) + 2 * ((unsigned __int64)v16 >> 1) - 2) )
    {
      v35 = &EtwpNull;
      v36 = 2LL;
      v6 = 3;
    }
  }
  else
  {
    v33 = &EtwpNull;
    v34 = 2LL;
  }
  EtwTraceSiloKernelEvent(*(_QWORD *)(*(_QWORD *)(a1 + 544) + 1728LL), (__int64)v32, v6, 2u, v17, v18);
}
