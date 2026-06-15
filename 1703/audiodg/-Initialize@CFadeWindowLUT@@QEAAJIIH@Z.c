/*
 * XREFs of ?Initialize@CFadeWindowLUT@@QEAAJIIH@Z @ 0x1400570D4
 * Callers:
 *     ??$ApplyVolumeRampDown_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAEIIIP6AM0@ZP6AX0M@Z@Z @ 0x140056AF8 (--$ApplyVolumeRampDown_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAEIIIP6AM0@ZP6AX0M@Z@Z.c)
 *     ??$ApplyVolumeRampUp_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAEIIIP6AM0@ZP6AX0M@Z@Z @ 0x140056C74 (--$ApplyVolumeRampUp_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAEIIIP6AM0@ZP6AX0M@Z@Z.c)
 * Callees:
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140016C70 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140019388 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140019BD8 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     powf @ 0x14001DC32 (powf.c)
 *     ?SetStep@CFadeWindowLUT@@QEAAXIH@Z @ 0x140057328 (-SetStep@CFadeWindowLUT@@QEAAXIH@Z.c)
 */

__int64 __fastcall CFadeWindowLUT::Initialize(CFadeWindowLUT *this, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v4; // ebx
  void *v8; // rcx
  __int64 v9; // rax
  void *v10; // rcx
  __int64 v11; // rax
  void *v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  void *v15; // rcx
  __int64 v16; // rax
  void *v17; // rcx
  __int64 v18; // rax
  void *v19; // rcx
  __int64 v20; // rax
  _DWORD *v21; // rax
  __int64 v22; // rbp
  __int64 v23; // r14
  float v24; // xmm0_4
  float v25; // xmm1_4
  void *v26; // rax
  void *v27; // rax

  v4 = 0;
  if ( *((_DWORD *)this + 9) )
  {
    return (unsigned int)-2005073919;
  }
  else
  {
    v8 = (void *)AERTGetDLLRTHeap();
    if ( is_mul_ok(4uLL, 0x11uLL) )
      v9 = AERTAllocate(0x44uLL, v8);
    else
      v9 = 0LL;
    *(_QWORD *)this = v9;
    if ( !v9 )
      goto LABEL_30;
    v10 = (void *)AERTGetDLLRTHeap();
    v11 = is_mul_ok(4uLL, 0x11uLL) ? AERTAllocate(0x44uLL, v10) : 0LL;
    *((_QWORD *)this + 1) = v11;
    if ( !v11 )
      goto LABEL_30;
    v12 = (void *)AERTGetDLLRTHeap();
    LODWORD(v13) = 1;
    v14 = is_mul_ok(4uLL, 1uLL) ? AERTAllocate(4uLL, v12) : 0LL;
    *((_QWORD *)this + 5) = v14;
    if ( !v14 )
      goto LABEL_30;
    v15 = (void *)AERTGetDLLRTHeap();
    v16 = is_mul_ok(4uLL, 1uLL) ? AERTAllocate(4uLL, v15) : 0LL;
    *((_QWORD *)this + 6) = v16;
    if ( v16
      && ((v17 = (void *)AERTGetDLLRTHeap(), is_mul_ok(4uLL, 1uLL)) ? (v18 = AERTAllocate(4uLL, v17)) : (v18 = 0LL),
          (*((_QWORD *)this + 2) = v18) != 0LL
       && ((v19 = (void *)AERTGetDLLRTHeap(), is_mul_ok(4uLL, 1uLL)) ? (v20 = AERTAllocate(4uLL, v19)) : (v20 = 0LL),
           (*((_QWORD *)this + 3) = v20) != 0LL)) )
    {
      v21 = *(_DWORD **)this;
      v22 = 4LL;
      *((_DWORD *)this + 8) = 16;
      v23 = 0LL;
      *v21 = 1065353216;
      do
      {
        v24 = powf(1.0 - (float)((float)(int)v13 * 0.0625), 1.75);
        v13 = (unsigned int)(v13 + 1);
        *(float *)(*(_QWORD *)this + v22) = v24;
        v25 = *(float *)(v23 + *(_QWORD *)this) - *(float *)(*(_QWORD *)this + v22);
        v22 += 4LL;
        *(float *)(v23 + *((_QWORD *)this + 1)) = v25;
        v23 += 4LL;
      }
      while ( (unsigned int)v13 < 0x11 );
      *(_DWORD *)(*((_QWORD *)this + 1) + 4 * v13) = 0;
      **((_DWORD **)this + 5) = 0;
      **((_DWORD **)this + 6) = 0;
      **((_DWORD **)this + 2) = 0;
      **((_DWORD **)this + 3) = 0;
      *((_DWORD *)this + 9) = 1;
      CFadeWindowLUT::SetStep(this, a3, a4);
    }
    else
    {
LABEL_30:
      v26 = (void *)AERTGetDLLRTHeap();
      AERTFree(*(void **)this, v26);
      *(_QWORD *)this = 0LL;
      v27 = (void *)AERTGetDLLRTHeap();
      AERTFree(*((void **)this + 1), v27);
      *((_QWORD *)this + 1) = 0LL;
      return (unsigned int)-2147024882;
    }
  }
  return v4;
}
