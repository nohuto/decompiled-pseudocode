/*
 * XREFs of ?EnsureItem@CDataStreamWriter@@QEAAJI@Z @ 0x18000F490
 * Callers:
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x18000FD9C (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 *     ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z @ 0x1800100E8 (-ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z.c)
 * Callees:
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x18000FA64 (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x18000FD50 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDataStreamWriter::EnsureItem(CDataStreamWriter *this, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebp
  unsigned int v5; // ecx
  int v6; // ebx
  __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned int v9; // r14d
  CDataStreamBlock *v10; // rcx
  __int64 (*v11)(void); // rax
  unsigned int *WrittenSize; // rax
  __int64 v13; // rcx
  int v15; // ebx
  unsigned int v16; // eax
  int NewBlock; // eax
  unsigned int v18; // [rsp+20h] [rbp-18h]

  v2 = a2 + 4;
  v3 = -1;
  v5 = -1;
  if ( a2 + 4 >= a2 )
    v5 = a2 + 4;
  v6 = v2 < a2 ? 0x80070216 : 0;
  if ( v2 < a2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x157u);
    return (unsigned int)v6;
  }
  v7 = 0LL;
  v8 = (v5 + 3) & 0xFFFFFFFC;
  v9 = v8;
  if ( v8 < v5 )
    v9 = v5;
  v6 = v8 < v5 ? 0x80070216 : 0;
  if ( v8 < v5 )
  {
    v18 = 367;
  }
  else
  {
    v10 = (CDataStreamBlock *)*((_QWORD *)this + 2);
    if ( v10 )
    {
      v11 = *(__int64 (**)(void))(*(_QWORD *)v10 + 8LL);
      if ( (char *)v11 == (char *)CDataStreamBlock::GetWrittenSize )
        WrittenSize = CDataStreamBlock::GetWrittenSize(v10);
      else
        WrittenSize = (unsigned int *)v11();
      v7 = (***((unsigned int (__fastcall ****)(_QWORD))this + 2))(*((_QWORD *)this + 2)) - *WrittenSize;
    }
    v13 = *((_QWORD *)this + 2);
    if ( v13 && (unsigned int)v7 >= v9 )
      goto LABEL_13;
    v15 = 0x10000;
    if ( *((_DWORD *)this + 6) < 0x10000u )
      v15 = *((_DWORD *)this + 6);
    if ( v13 && !*(_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 8LL))(v13, v7) )
    {
      WPF::ProcessHeapImpl::Free(*((void **)this + 2));
      *((_QWORD *)this + 2) = 0LL;
    }
    v16 = v9 + v15;
    if ( v9 + v15 >= v9 )
      v3 = v9 + v15;
    v6 = v16 < v9 ? 0x80070216 : 0;
    if ( v16 >= v9 )
    {
      NewBlock = CDataStreamWriter::AllocateNewBlock(this, v3);
      v6 = NewBlock;
      if ( NewBlock < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, NewBlock, 0x1BBu);
      goto LABEL_13;
    }
    v18 = 441;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v18);
LABEL_13:
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x159u);
  return (unsigned int)v6;
}
