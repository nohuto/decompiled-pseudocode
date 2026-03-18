/*
 * XREFs of SmDecompressBuffer @ 0x14007AD58
 * Callers:
 *     PfSnGetPrefetchInstructions @ 0x140527FA4 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     RtlDecompressBufferEx @ 0x14007AEC0 (RtlDecompressBufferEx.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x14007B8A0 (RtlGetCompressionWorkSpaceSize.c)
 *     RtlComputeCrc32 @ 0x140147C40 (RtlComputeCrc32.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
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
  __int64 v8; // r15
  int v10; // ecx
  ULONG v11; // ebp
  UCHAR *v12; // r14
  size_t v13; // rdi
  __int64 v14; // r12
  void *v15; // rsi
  unsigned __int8 v16; // al
  unsigned __int16 v17; // r13
  PUCHAR v19; // rbx
  ULONG v20; // eax
  ULONG v21; // eax
  ULONG CompressBufferWorkSpaceSize[22]; // [rsp+40h] [rbp-58h] BYREF
  ULONG CompressFragmentWorkSpaceSize; // [rsp+A0h] [rbp+8h] BYREF
  int Buffera; // [rsp+A8h] [rbp+10h] BYREF
  _QWORD *v25; // [rsp+B0h] [rbp+18h]
  _DWORD *v26; // [rsp+B8h] [rbp+20h]

  v26 = a4;
  v25 = a3;
  CompressionWorkSpaceSize = 0;
  v8 = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741246;
  v10 = *(_DWORD *)Buffer;
  v11 = a2 - 8;
  if ( (v10 & 0xFFFFFF) != 0x4D414D )
    return (unsigned int)-1073741672;
  if ( v10 < 0 )
  {
    if ( v11 >= 4 )
    {
      v19 = Buffer + 8;
      Buffera = 0;
      v12 = Buffer + 12;
      v11 = a2 - 12;
      v20 = RtlComputeCrc32(0, Buffer, 8u);
      v21 = RtlComputeCrc32(v20, (PUCHAR)&Buffera, 4u);
      if ( RtlComputeCrc32(v21, v12, v11) == *(_DWORD *)v19 )
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
    if ( v11 == (_DWORD)v13 )
    {
      memmove(v15, v12, v13);
      Buffera = v13;
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
      v8 = (*(__int64 (**)(void))v14)();
      if ( !v8 )
      {
        CompressionWorkSpaceSize = -1073741670;
        goto LABEL_16;
      }
    }
    CompressionWorkSpaceSize = RtlDecompressBufferEx(v17, (_DWORD)v15, v13, (_DWORD)v12, v11, (__int64)&Buffera, v8);
    if ( CompressionWorkSpaceSize >= 0 )
    {
      if ( (_DWORD)v13 == Buffera )
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
  if ( v8 )
    (*(void (__fastcall **)(__int64))(v14 + 8))(v8);
  return (unsigned int)CompressionWorkSpaceSize;
}
