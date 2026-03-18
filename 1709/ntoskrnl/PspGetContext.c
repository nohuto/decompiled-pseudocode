/*
 * XREFs of PspGetContext @ 0x140514840
 * Callers:
 *     PspGetSetContextInternal @ 0x140514300 (PspGetSetContextInternal.c)
 * Callees:
 *     KeCopyLastBranchInformation @ 0x1400D9C64 (KeCopyLastBranchInformation.c)
 *     RtlXSave @ 0x14012EAA8 (RtlXSave.c)
 *     KiCopyXStateArea @ 0x140207800 (KiCopyXStateArea.c)
 */

int __fastcall PspGetContext(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // rdi
  int result; // eax
  __int64 v8; // rax
  char v9; // cl
  __int64 v10; // r9
  _QWORD *SparePtr; // rcx
  _QWORD *v12; // rax

  v3 = *(_DWORD *)(a3 + 48);
  v4 = a3;
  if ( (v3 & 0x100001) == 0x100001 )
  {
    *(_QWORD *)(a3 + 248) = *(_QWORD *)(a1 + 360);
    *(_WORD *)(a3 + 56) = *(_WORD *)(a1 + 368);
    *(_WORD *)(a3 + 66) = *(_WORD *)(a1 + 392);
    *(_QWORD *)(a3 + 152) = *(_QWORD *)(a1 + 384);
    *(_DWORD *)(a3 + 68) = *(_DWORD *)(a1 + 376);
  }
  if ( (v3 & 0x100004) == 0x100004 )
  {
    *(_DWORD *)(a3 + 58) = 2818091;
    *(_DWORD *)(a3 + 62) = 2818131;
  }
  if ( (v3 & 0x100002) == 0x100002 )
  {
    *(_QWORD *)(a3 + 120) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a3 + 128) = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a3 + 136) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a3 + 184) = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a3 + 192) = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a3 + 200) = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a3 + 208) = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a3 + 144) = **(_QWORD **)(a2 + 152);
    *(_QWORD *)(a3 + 160) = **(_QWORD **)(a2 + 168);
    *(_QWORD *)(a3 + 168) = **(_QWORD **)(a2 + 176);
    *(_QWORD *)(a3 + 176) = **(_QWORD **)(a2 + 184);
    *(_QWORD *)(a3 + 216) = **(_QWORD **)(a2 + 224);
    *(_QWORD *)(a3 + 224) = **(_QWORD **)(a2 + 232);
    *(_QWORD *)(a3 + 232) = **(_QWORD **)(a2 + 240);
    *(_QWORD *)(a3 + 240) = **(_QWORD **)(a2 + 248);
  }
  if ( (v3 & 0x100040) == 0x100040 )
  {
    if ( (*(_BYTE *)(a1 + 368) & 1) != 0 )
    {
      v10 = *(int *)(a3 + 1248);
      SparePtr = KeGetCurrentThread()->WaitBlock[1].SparePtr;
      if ( !SparePtr )
        goto LABEL_21;
      v12 = (_QWORD *)*SparePtr;
      if ( *SparePtr )
      {
        do
        {
          SparePtr = v12;
          v12 = (_QWORD *)*v12;
        }
        while ( v12 );
      }
      a3 = SparePtr[5];
      if ( a3 )
        KiCopyXStateArea(v4 + v10 + 720, MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFCuLL, a3);
      else
LABEL_21:
        RtlXSave((_DWORD *)(v4 + v10 + 720), MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFCuLL, a3);
    }
    *(_DWORD *)(v4 + 52) = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(v4 + 280) = *(_DWORD *)(a1 + 44);
  }
  if ( (v3 & 0x100008) == 0x100008 )
  {
    *(_OWORD *)(v4 + 416) = *(_OWORD *)(a1 + 112);
    *(_OWORD *)(v4 + 432) = *(_OWORD *)(a1 + 128);
    *(_OWORD *)(v4 + 448) = *(_OWORD *)(a1 + 144);
    *(_OWORD *)(v4 + 464) = *(_OWORD *)(a1 + 160);
    *(_OWORD *)(v4 + 480) = *(_OWORD *)(a1 + 176);
    *(_OWORD *)(v4 + 496) = *(_OWORD *)(a1 + 192);
    *(_OWORD *)(v4 + 512) = *(_OWORD *)*(_QWORD *)(a2 + 48);
    *(_OWORD *)(v4 + 528) = *(_OWORD *)*(_QWORD *)(a2 + 56);
    *(_OWORD *)(v4 + 544) = *(_OWORD *)*(_QWORD *)(a2 + 64);
    *(_OWORD *)(v4 + 560) = *(_OWORD *)*(_QWORD *)(a2 + 72);
    *(_OWORD *)(v4 + 576) = *(_OWORD *)*(_QWORD *)(a2 + 80);
    *(_OWORD *)(v4 + 592) = *(_OWORD *)*(_QWORD *)(a2 + 88);
    *(_OWORD *)(v4 + 608) = *(_OWORD *)*(_QWORD *)(a2 + 96);
    *(_OWORD *)(v4 + 624) = *(_OWORD *)*(_QWORD *)(a2 + 104);
    *(_OWORD *)(v4 + 640) = *(_OWORD *)*(_QWORD *)(a2 + 112);
    *(_OWORD *)(v4 + 656) = *(_OWORD *)*(_QWORD *)(a2 + 120);
    *(_DWORD *)(v4 + 52) = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(v4 + 280) = *(_DWORD *)(a1 + 44);
  }
  result = v3 & 0x100010;
  if ( (v3 & 0x100010) == 0x100010 )
  {
    if ( (*(_DWORD *)(a1 + 256) & 0x355LL) != 0 )
    {
      *(_QWORD *)(v4 + 72) = *(_QWORD *)(a1 + 216);
      *(_QWORD *)(v4 + 80) = *(_QWORD *)(a1 + 224);
      *(_QWORD *)(v4 + 88) = *(_QWORD *)(a1 + 232);
      *(_QWORD *)(v4 + 96) = *(_QWORD *)(a1 + 240);
      *(_QWORD *)(v4 + 104) = *(_QWORD *)(a1 + 248);
      v8 = *(_QWORD *)(a1 + 256);
    }
    else
    {
      v8 = 0LL;
      *(_QWORD *)(v4 + 72) = 0LL;
      *(_QWORD *)(v4 + 80) = 0LL;
      *(_QWORD *)(v4 + 88) = 0LL;
      *(_QWORD *)(v4 + 96) = 0LL;
      *(_QWORD *)(v4 + 104) = 0LL;
    }
    *(_QWORD *)(v4 + 112) = v8;
    result = KeCopyLastBranchInformation(v4, a1);
  }
  if ( (v3 & 0x40000000) != 0 )
  {
    result = *(_DWORD *)(v4 + 48) & 0x67FFFFFF | 0x80000000;
    *(_DWORD *)(v4 + 48) = result;
    v9 = *(_BYTE *)(a1 + 43);
    if ( v9 == 1 )
    {
      result |= 0x8000000u;
      *(_DWORD *)(v4 + 48) = result;
    }
    else if ( v9 == 2 )
    {
      result |= 0x10000000u;
      *(_DWORD *)(v4 + 48) = result;
    }
  }
  return result;
}
