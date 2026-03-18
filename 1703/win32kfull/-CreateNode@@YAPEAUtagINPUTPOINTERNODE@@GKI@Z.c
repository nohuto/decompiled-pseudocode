/*
 * XREFs of ?CreateNode@@YAPEAUtagINPUTPOINTERNODE@@GKI@Z @ 0x1C01E9A38
 * Callers:
 *     ?UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@KPEAPEAUtagWND@@PEAKPEAGPEAI@Z @ 0x1C01EA5C0 (-UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@KPEAPEAUtagWND@@PEAKPEA.c)
 * Callees:
 *     ?SetNewValidState@@YAHIPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01EA2D4 (-SetNewValidState@@YAHIPEAUtagINPUTPOINTERNODE@@@Z.c)
 */

struct tagINPUTPOINTERNODE *__fastcall CreateNode(__int16 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int16 v7; // cx
  unsigned int v8; // eax
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx

  if ( a2 < 2 || a2 > 3 && a2 != 5 )
    return 0LL;
  v6 = Win32AllocPoolZInit(160LL, 1885958997LL);
  if ( !v6 )
    return 0LL;
  v7 = word_1C0338868++;
  if ( (unsigned __int16)word_1C0338868 < 2u )
    word_1C0338868 = 2;
  *(_WORD *)(v6 + 32) = v7;
  *(_WORD *)(v6 + 34) = a1;
  *(_DWORD *)(v6 + 40) = a2;
  *(_QWORD *)(v6 + 120) = v6 + 112;
  *(_QWORD *)(v6 + 112) = v6 + 112;
  *(_QWORD *)(v6 + 104) = v6 + 96;
  *(_QWORD *)(v6 + 96) = v6 + 96;
  *(_QWORD *)(v6 + 144) = v6 + 136;
  *(_QWORD *)(v6 + 136) = v6 + 136;
  v8 = *(_DWORD *)(v6 + 152) & 0xFFFFF4BF;
  *(_WORD *)(v6 + 128) = 0;
  *(_DWORD *)(v6 + 36) = 0;
  *(_DWORD *)(v6 + 152) = v8 | 0x480;
  if ( !(unsigned int)SetNewValidState(a3, (struct tagINPUTPOINTERNODE *)v6) )
  {
    Win32FreePool(v6);
    return 0LL;
  }
  v10 = qword_1C0330350;
  if ( *(__int64 **)(qword_1C0330350 + 8) != &qword_1C0330350 )
    __fastfail(3u);
  *(_QWORD *)v6 = qword_1C0330350;
  *(_QWORD *)(v6 + 8) = &qword_1C0330350;
  *(_QWORD *)(v10 + 8) = v6;
  v11 = (_QWORD *)(v6 + 16);
  v12 = qword_1C0330360;
  qword_1C0330350 = v6;
  if ( *(__int64 **)(qword_1C0330360 + 8) != &qword_1C0330360 )
    __fastfail(3u);
  *v11 = qword_1C0330360;
  *(_QWORD *)(v6 + 24) = &qword_1C0330360;
  *(_QWORD *)(v12 + 8) = v11;
  qword_1C0330360 = v6 + 16;
  return (struct tagINPUTPOINTERNODE *)v6;
}
