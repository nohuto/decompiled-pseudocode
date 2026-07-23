/*
 * XREFs of SmDecompressBuffer @ 0x14012D2C4
 * Callers:
 *     PfSnGetPrefetchInstructions @ 0x140565894 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     RtlDecompressBufferEx @ 0x14005C470 (RtlDecompressBufferEx.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x14012D430 (RtlGetCompressionWorkSpaceSize.c)
 *     RtlComputeCrc32 @ 0x140134030 (RtlComputeCrc32.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 */

__int64 __fastcall SmDecompressBuffer(
        PUCHAR Buffer,
        unsigned int a2,
        _QWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        __int64 (__fastcall **a6)(_QWORD))
{
  NTSTATUS CompressionWorkSpaceSize; // ebx
  void *WorkSpace; // r15
  unsigned int v10; // ecx
  ULONG CompressedBufferSize; // ebp
  UCHAR *v12; // r14
  size_t v13; // rdi
  __int64 v14; // r12
  void *v15; // rsi
  unsigned __int8 v16; // al
  USHORT v17; // r13
  PUCHAR v19; // rbx
  ULONG v20; // eax
  ULONG v21; // eax
  ULONG CompressBufferWorkSpaceSize[22]; // [rsp+40h] [rbp-58h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+A0h] [rbp+8h] BYREF
  ULONG FinalUncompressedSize; // [rsp+A8h] [rbp+10h] BYREF
  _QWORD *v25; // [rsp+B0h] [rbp+18h]
  _DWORD *v26; // [rsp+B8h] [rbp+20h]

  v26 = a4;
  v25 = a3;
  CompressionWorkSpaceSize = 0;
  WorkSpace = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741246;
  v10 = *(_DWORD *)Buffer;
  CompressedBufferSize = a2 - 8;
  if ( (v10 & 0xFFFFFF) != 0x4D414D )
    return (unsigned int)-1073741672;
  if ( v10 >= 0x80000000 )
  {
    if ( CompressedBufferSize >= 4 )
    {
      v19 = Buffer + 8;
      FinalUncompressedSize = 0;
      v12 = Buffer + 12;
      CompressedBufferSize = a2 - 12;
      v20 = RtlComputeCrc32(0, Buffer, 8u);
      v21 = RtlComputeCrc32(v20, (PUCHAR)&FinalUncompressedSize, 4u);
      if ( RtlComputeCrc32(v21, v12, CompressedBufferSize) == *(_DWORD *)v19 )
      {
        CompressionWorkSpaceSize = 0;
        goto LABEL_5;
      }
    }
    return (unsigned int)-1073741246;
  }
  v12 = Buffer + 8;
LABEL_5:
  v13 = *((unsigned int *)Buffer + 1);
  if ( a5 && (unsigned int)v13 > *a5 )
    return (unsigned int)-1073739516;
  v14 = (__int64)a6;
  v15 = (void *)(*a6)((unsigned int)v13);
  if ( !v15 )
    return (unsigned int)-1073741670;
  v16 = Buffer[3] & 0x7F;
  v17 = v16;
  if ( !v16 )
  {
    if ( CompressedBufferSize == (_DWORD)v13 )
    {
      memmove(v15, v12, v13);
      FinalUncompressedSize = v13;
      goto LABEL_15;
    }
LABEL_21:
    CompressionWorkSpaceSize = -1073741246;
    goto LABEL_16;
  }
  CompressionWorkSpaceSize = RtlGetCompressionWorkSpaceSize(
                               v16,
                               CompressBufferWorkSpaceSize,
                               &CompressFragmentWorkSpaceSize);
  if ( CompressionWorkSpaceSize >= 0 )
  {
    if ( CompressFragmentWorkSpaceSize )
    {
      WorkSpace = (void *)(*(__int64 (**)(void))v14)();
      if ( !WorkSpace )
      {
        CompressionWorkSpaceSize = -1073741670;
        goto LABEL_16;
      }
    }
    CompressionWorkSpaceSize = RtlDecompressBufferEx(
                                 v17,
                                 (PUCHAR)v15,
                                 v13,
                                 v12,
                                 CompressedBufferSize,
                                 &FinalUncompressedSize,
                                 WorkSpace);
    if ( CompressionWorkSpaceSize >= 0 )
    {
      if ( (_DWORD)v13 == FinalUncompressedSize )
      {
        CompressionWorkSpaceSize = 0;
LABEL_15:
        *v25 = v15;
        v15 = 0LL;
        *v26 = v13;
        goto LABEL_16;
      }
      goto LABEL_21;
    }
  }
LABEL_16:
  if ( v15 )
    (*(void (__fastcall **)(void *))(v14 + 8))(v15);
  if ( WorkSpace )
    (*(void (__fastcall **)(void *))(v14 + 8))(WorkSpace);
  return (unsigned int)CompressionWorkSpaceSize;
}
