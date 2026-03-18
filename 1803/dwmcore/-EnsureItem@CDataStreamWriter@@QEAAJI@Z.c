/*
 * XREFs of ?EnsureItem@CDataStreamWriter@@QEAAJI@Z @ 0x180087D6C
 * Callers:
 *     ?GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x180085200 (-GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetDxClip@CChannel@@UEAAJII@Z @ 0x180085A60 (-WindowNodeSetDxClip@CChannel@@UEAAJII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x18008817C (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x180088410 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDataStreamWriter::EnsureItem(CDataStreamWriter *this, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r15d
  unsigned int v4; // r8d
  int v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // r14d
  __int64 (__fastcall ***v9)(__int64); // rdi
  __int64 (__fastcall **v10)(__int64); // r12
  unsigned int *(__fastcall *v11)(CDataStreamBlock *__hidden); // rax
  CDataStreamBlock *v12; // rcx
  unsigned int *WrittenSize; // rax
  unsigned int *v14; // r13
  int v15; // eax
  int v17; // ebx
  unsigned int v18; // eax
  int NewBlock; // eax
  unsigned int v20; // [rsp+20h] [rbp-28h]

  v2 = a2 + 4;
  v3 = -1;
  v4 = -1;
  if ( a2 + 4 >= a2 )
    v4 = a2 + 4;
  v6 = v2 < a2 ? 0x80070216 : 0;
  if ( v2 < a2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x157u);
    return (unsigned int)v6;
  }
  v7 = (v4 + 3) & 0xFFFFFFFC;
  v8 = v7;
  if ( v7 < v4 )
    v8 = v4;
  v6 = v7 < v4 ? 0x80070216 : 0;
  if ( v7 < v4 )
  {
    v20 = 367;
  }
  else
  {
    v9 = (__int64 (__fastcall ***)(__int64))*((_QWORD *)this + 2);
    if ( v9 )
    {
      v10 = *v9;
      v11 = (unsigned int *(__fastcall *)(CDataStreamBlock *__hidden))(*v9)[1];
      v12 = (CDataStreamBlock *)*((_QWORD *)this + 2);
      if ( v11 == CDataStreamBlock::GetWrittenSize )
      {
        WrittenSize = CDataStreamBlock::GetWrittenSize(v12);
      }
      else
      {
        WrittenSize = v11(v12);
        v9 = (__int64 (__fastcall ***)(__int64))*((_QWORD *)this + 2);
        v10 = *v9;
      }
      v14 = WrittenSize;
      v15 = (*v10)((__int64)v9);
      v9 = (__int64 (__fastcall ***)(__int64))*((_QWORD *)this + 2);
      if ( v9 )
      {
        if ( v15 - *v14 >= v8 )
          goto LABEL_12;
      }
    }
    v17 = 0x10000;
    if ( *((_DWORD *)this + 6) < 0x10000u )
      v17 = *((_DWORD *)this + 6);
    if ( v9 && !*(_DWORD *)(*v9)[1]((__int64)v9) )
    {
      operator delete(*((void **)this + 2));
      *((_QWORD *)this + 2) = 0LL;
    }
    v18 = v8 + v17;
    if ( v8 + v17 >= v8 )
      v3 = v8 + v17;
    v6 = v18 < v8 ? 0x80070216 : 0;
    if ( v18 >= v8 )
    {
      NewBlock = CDataStreamWriter::AllocateNewBlock(this, v3);
      v6 = NewBlock;
      if ( NewBlock < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, NewBlock, 0x1BBu);
      goto LABEL_12;
    }
    v20 = 441;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v20);
LABEL_12:
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x159u);
  return (unsigned int)v6;
}
