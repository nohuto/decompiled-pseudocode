/*
 * XREFs of KxContextToKframes @ 0x140025510
 * Callers:
 *     KiInitializeContextThread @ 0x140025AA8 (KiInitializeContextThread.c)
 *     KeContextToKframes @ 0x1401813C0 (KeContextToKframes.c)
 * Callees:
 *     RtlXRestore @ 0x14000B3B0 (RtlXRestore.c)
 *     KiCopyXStateArea @ 0x140207800 (KiCopyXStateArea.c)
 */

__int64 __fastcall KxContextToKframes(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  unsigned __int8 v5; // r15
  int v10; // eax
  int v11; // eax
  __int16 v12; // cx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  struct _KTHREAD *CurrentThread; // rcx
  bool v20; // zf
  __int64 result; // rax
  __int64 v22; // r8
  _QWORD *SparePtr; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rcx

  v5 = 0;
  if ( (a4 & 0x100001) == 0x100001 )
  {
    v10 = *(_DWORD *)(a3 + 68);
    if ( a5 )
      v11 = v10 & 0x210DD5 | 0x200;
    else
      v11 = v10 & 0x210FD5;
    *(_DWORD *)(a1 + 376) = v11;
    *(_QWORD *)(a1 + 360) = *(_QWORD *)(a3 + 248);
    *(_QWORD *)(a1 + 384) = *(_QWORD *)(a3 + 152);
    if ( a5 == 1 )
    {
      *(_WORD *)(a1 + 392) = 43;
      if ( *(_WORD *)(a3 + 56) == 51 )
        *(_WORD *)(a1 + 368) = 51;
      else
        *(_WORD *)(a1 + 368) = 35;
    }
    else
    {
      *(_WORD *)(a1 + 368) = 16;
      *(_WORD *)(a1 + 392) = 24;
    }
    v12 = *(_WORD *)(a1 + 368);
    v13 = *(_QWORD *)(a1 + 360);
    if ( a5 == 1 )
    {
      if ( ((v12 - 35) & 0xFFF7) != 0 )
        v13 = v13 << 16 >> 16;
      else
        v13 = (unsigned int)v13;
    }
    *(_QWORD *)(a1 + 360) = v13;
  }
  if ( (a4 & 0x100002) == 0x100002 )
  {
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a3 + 120);
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(a3 + 128);
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(a3 + 136);
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(a3 + 184);
    *(_QWORD *)(a1 + 80) = *(_QWORD *)(a3 + 192);
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a3 + 200);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(a3 + 208);
    *(_QWORD *)(a1 + 344) = *(_QWORD *)(a3 + 160);
    *(_QWORD *)(a2 + 256) = *(_QWORD *)(a3 + 144);
    *(_QWORD *)(a2 + 272) = *(_QWORD *)(a3 + 168);
    *(_QWORD *)(a2 + 264) = *(_QWORD *)(a3 + 176);
    *(_QWORD *)(a2 + 280) = *(_QWORD *)(a3 + 216);
    *(_QWORD *)(a2 + 288) = *(_QWORD *)(a3 + 224);
    *(_QWORD *)(a2 + 296) = *(_QWORD *)(a3 + 232);
    *(_QWORD *)(a2 + 304) = *(_QWORD *)(a3 + 240);
  }
  if ( (a4 & 0x100040) == 0x100040 && a5 == 1 )
  {
    v22 = *(int *)(a3 + 1248) + a3 + 720;
    SparePtr = KeGetCurrentThread()->WaitBlock[1].SparePtr;
    if ( !SparePtr )
      goto LABEL_45;
    v24 = (_QWORD *)*SparePtr;
    if ( *SparePtr )
    {
      do
      {
        SparePtr = v24;
        v24 = (_QWORD *)*v24;
      }
      while ( v24 );
    }
    v25 = SparePtr[5];
    if ( v25 )
      KiCopyXStateArea(v25, MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFFFFFFFFFCuLL, v22);
    else
LABEL_45:
      RtlXRestore(v22, MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFFFFFFFFFCuLL);
  }
  if ( (a4 & 0x100008) == 0x100008 )
  {
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(a3 + 416);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(a3 + 432);
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(a3 + 448);
    *(_OWORD *)(a1 + 160) = *(_OWORD *)(a3 + 464);
    *(_OWORD *)(a1 + 176) = *(_OWORD *)(a3 + 480);
    *(_OWORD *)(a1 + 192) = *(_OWORD *)(a3 + 496);
    *(_OWORD *)(a2 + 48) = *(_OWORD *)(a3 + 512);
    *(_OWORD *)(a2 + 64) = *(_OWORD *)(a3 + 528);
    *(_OWORD *)(a2 + 80) = *(_OWORD *)(a3 + 544);
    *(_OWORD *)(a2 + 96) = *(_OWORD *)(a3 + 560);
    *(_OWORD *)(a2 + 112) = *(_OWORD *)(a3 + 576);
    *(_OWORD *)(a2 + 128) = *(_OWORD *)(a3 + 592);
    *(_OWORD *)(a2 + 144) = *(_OWORD *)(a3 + 608);
    *(_OWORD *)(a2 + 160) = *(_OWORD *)(a3 + 624);
    *(_OWORD *)(a2 + 176) = *(_OWORD *)(a3 + 640);
    *(_OWORD *)(a2 + 192) = *(_OWORD *)(a3 + 656);
    *(_DWORD *)(a1 + 44) = KiMxCsrMask & *(_DWORD *)(a3 + 52);
    if ( a5 == 1 )
    {
      v5 = 1;
      *(_DWORD *)(a3 + 280) = _mm_getcsr();
      *(_WORD *)(a3 + 256) &= 0x1F3Fu;
    }
  }
  if ( (a4 & 0x100010) != 0x100010 )
    return v5;
  v14 = *(_QWORD *)(a3 + 72);
  if ( a5 && v14 > 0x7FFFFFFEFFFFLL )
    v14 = 0LL;
  *(_QWORD *)(a1 + 216) = v14;
  v15 = *(_QWORD *)(a3 + 80);
  if ( a5 && v15 > 0x7FFFFFFEFFFFLL )
    v15 = 0LL;
  *(_QWORD *)(a1 + 224) = v15;
  v16 = *(_QWORD *)(a3 + 88);
  if ( a5 && v16 > 0x7FFFFFFEFFFFLL )
    v16 = 0LL;
  *(_QWORD *)(a1 + 232) = v16;
  v17 = *(_QWORD *)(a3 + 96);
  if ( a5 && v17 > 0x7FFFFFFEFFFFLL )
    v17 = 0LL;
  *(_QWORD *)(a1 + 240) = v17;
  *(_QWORD *)(a1 + 248) = 0LL;
  v18 = *(_DWORD *)(a3 + 112) & 0xFFFF0355;
  *(_QWORD *)(a1 + 256) = v18;
  if ( !a5 )
    return v5;
  CurrentThread = KeGetCurrentThread();
  v20 = (v18 & 0x355) == 0;
  result = v5;
  if ( v20 )
    _interlockedbittestandreset(&CurrentThread->Header.Lock, 0x18u);
  else
    _interlockedbittestandset(&CurrentThread->Header.Lock, 0x18u);
  return result;
}
