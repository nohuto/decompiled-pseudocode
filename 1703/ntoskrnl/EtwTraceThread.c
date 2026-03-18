/*
 * XREFs of EtwTraceThread @ 0x1404B07F4
 * Callers:
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 *     PspInsertThread @ 0x1405408E4 (PspInsertThread.c)
 * Callees:
 *     PsGetCurrentThreadTeb @ 0x14006B910 (PsGetCurrentThreadTeb.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     PsGetPagePriorityThread @ 0x1400FBE90 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x1400FCA20 (PsGetIoPriorityThread.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwpPsProvTraceThread @ 0x140594F9C (EtwpPsProvTraceThread.c)
 */

void *__fastcall EtwTraceThread(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r15
  int v6; // r14d
  __int64 v7; // r8
  _DWORD *CurrentThreadTeb; // r8
  unsigned __int64 v9; // rdx
  int v10; // eax
  __int16 v11; // r9
  __int16 v12; // r9
  unsigned __int16 *v13; // rdx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int16 v17; // r9
  __int16 v18; // r9
  unsigned int v19; // eax
  __int16 v20; // [rsp+30h] [rbp-C8h]
  int v21; // [rsp+38h] [rbp-C0h]
  _DWORD v22[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A0h]
  __int64 v24; // [rsp+60h] [rbp-98h]
  __int64 v25; // [rsp+68h] [rbp-90h]
  __int64 v26; // [rsp+70h] [rbp-88h]
  __int64 v27; // [rsp+78h] [rbp-80h]
  __int64 v28; // [rsp+80h] [rbp-78h]
  __int64 v29; // [rsp+88h] [rbp-70h]
  int v30; // [rsp+90h] [rbp-68h]
  char v31; // [rsp+94h] [rbp-64h]
  char PagePriorityThread; // [rsp+95h] [rbp-63h]
  char IoPriorityThread; // [rsp+96h] [rbp-62h]
  char v34; // [rsp+97h] [rbp-61h]
  _QWORD v35[2]; // [rsp+A0h] [rbp-58h] BYREF
  void *v36; // [rsp+B0h] [rbp-48h]
  __int64 v37; // [rsp+B8h] [rbp-40h]
  void *v38; // [rsp+C0h] [rbp-38h]
  __int64 v39; // [rsp+C8h] [rbp-30h]

  v3 = a3;
  v6 = 2;
  v21 = 5249283;
  if ( (dword_140345000 & 2) != 0 )
    EtwpPsProvTraceThread(a1, a2, a3);
  v22[0] = *(_DWORD *)(a1 + 1592);
  v22[1] = *(_DWORD *)(a1 + 1600);
  v23 = *(_QWORD *)(a1 + 56);
  v24 = *(_QWORD *)(a1 + 48);
  v27 = *(_QWORD *)(a1 + 576);
  v28 = *(_QWORD *)(a1 + 1680);
  v25 = 0LL;
  v26 = 0LL;
  v29 = *(_QWORD *)(a1 + 240);
  v30 = 0;
  v31 = *(_BYTE *)(a1 + 563);
  PagePriorityThread = PsGetPagePriorityThread(a1);
  IoPriorityThread = PsGetIoPriorityThread(a1);
  v34 = 0;
  if ( v3 )
  {
    v20 = 1281;
    if ( a2 )
    {
      v25 = *(_QWORD *)(a2 + 16);
      v26 = *(_QWORD *)(a2 + 24);
    }
    CurrentThreadTeb = PsGetCurrentThreadTeb();
    if ( CurrentThreadTeb )
    {
      v9 = KeGetCurrentThread()->Process[1].ActiveProcessors.Bitmap[7];
      if ( v9
        && ((v11 = *(_WORD *)(v9 + 8), v11 == 332) || v11 == 452)
        && ((v12 = *(_WORD *)(v9 + 8), v12 == 332) || v12 == 452) )
      {
        v10 = CurrentThreadTeb[3032];
      }
      else
      {
        v10 = CurrentThreadTeb[1480];
      }
      v30 = v10;
    }
  }
  else
  {
    v20 = 1282;
    v21 = 72358147;
    if ( v7 )
    {
      v15 = KeGetCurrentThread()->Process[1].ActiveProcessors.Bitmap[7];
      if ( v15
        && ((v17 = *(_WORD *)(v15 + 8), v17 == 332) || v17 == 452)
        && ((v18 = *(_WORD *)(v15 + 8), v18 == 332) || v18 == 452) )
      {
        v30 = *(_DWORD *)(v7 + 12128);
        v25 = *(unsigned int *)(v7 + 8196);
        v16 = *(unsigned int *)(v7 + 8200);
      }
      else
      {
        v30 = *(_DWORD *)(v7 + 5920);
        v25 = *(_QWORD *)(v7 + 8);
        v16 = *(_QWORD *)(v7 + 16);
      }
      v26 = v16;
    }
  }
  v35[0] = v22;
  v35[1] = 72LL;
  v13 = *(unsigned __int16 **)(a1 + 2000);
  if ( v13 && *((_QWORD *)v13 + 1) )
  {
    v19 = 2048;
    if ( *v13 < 0x800u )
      v19 = *v13;
    v36 = (void *)*((_QWORD *)v13 + 1);
    v37 = v19;
    if ( !v19 || *(_WORD *)(*((_QWORD *)v13 + 1) + 2 * ((unsigned __int64)v19 >> 1) - 2) )
    {
      v38 = &EtwpNull;
      v39 = 2LL;
      v6 = 3;
    }
  }
  else
  {
    v36 = &EtwpNull;
    v37 = 2LL;
  }
  return EtwTraceKernelEvent((int)v35, v6, 2u, v20, v21);
}
