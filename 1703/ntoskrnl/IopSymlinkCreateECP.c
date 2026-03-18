/*
 * XREFs of IopSymlinkCreateECP @ 0x14057C004
 * Callers:
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x1400511D0 (IopGetFileObjectExtension.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x14057C104 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkAllocateAndAddECP @ 0x14057C1B0 (IopSymlinkAllocateAndAddECP.c)
 */

__int64 __fastcall IopSymlinkCreateECP(PIRP Irp, __int64 a2, unsigned __int16 *a3, __int16 a4, _QWORD *a5)
{
  unsigned __int16 v6; // r8
  IRP *v8; // r11
  char v9; // bp
  __int64 v10; // rcx
  _QWORD *v11; // r14
  __int64 result; // rax
  _WORD *v13; // rdi
  __int64 FileObjectExtension; // rax
  __int64 v15; // rsi
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int16 v18; // [rsp+20h] [rbp-48h]
  __int16 v19; // [rsp+20h] [rbp-48h]
  __int16 v20; // [rsp+30h] [rbp-38h]
  __int16 v21; // [rsp+30h] [rbp-38h]
  __int16 v22; // [rsp+38h] [rbp-30h]
  __int16 v23; // [rsp+38h] [rbp-30h]
  __int16 v24; // [rsp+40h] [rbp-28h]
  __int16 v25; // [rsp+40h] [rbp-28h]
  PVOID EcpContext; // [rsp+78h] [rbp+10h] BYREF

  v6 = *a3;
  EcpContext = 0LL;
  v8 = Irp;
  v9 = 0;
  if ( v6 > 2u && *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * ((unsigned __int64)v6 >> 1) - 2) == 92 )
  {
    v9 = 1;
    *a3 = v6 - 2;
  }
  v10 = *(_QWORD *)(a2 + 64);
  v11 = a5;
  if ( !v10 || (FileObjectExtension = IopGetFileObjectExtension(v10, 5, 0LL), (v15 = FileObjectExtension) == 0) )
  {
    result = IopSymlinkAllocateAndAddECP(v8, &EcpContext);
    if ( (int)result < 0 )
      goto LABEL_8;
    v24 = 0;
    v22 = a4;
    v13 = EcpContext;
    v20 = 0;
    v18 = 0;
    IopSymlinkInitializeSymlinkInfo(
      EcpContext,
      (unsigned int)*a3 + 32,
      *((_QWORD *)a3 + 1),
      *a3,
      v18,
      0LL,
      v20,
      v22,
      v24,
      0LL);
    goto LABEL_7;
  }
  v16 = *(unsigned __int16 *)(FileObjectExtension + 16) + *a3 + 2;
  if ( v16 >= 0xFFFF )
  {
    result = 3221225734LL;
    goto LABEL_8;
  }
  result = IopSymlinkAllocateAndAddECP(v8, &EcpContext);
  if ( (int)result >= 0 )
  {
    v17 = v16 + 32;
    v13 = EcpContext;
    v25 = *(_WORD *)(v15 + 2);
    v23 = *(_WORD *)(v15 + 4);
    v21 = *(_WORD *)(v15 + 16);
    v19 = 0;
    IopSymlinkInitializeSymlinkInfo(
      EcpContext,
      v17,
      *((_QWORD *)a3 + 1),
      *a3,
      v19,
      *(_QWORD *)(v15 + 24),
      v21,
      v23,
      v25,
      0LL);
    *v13 = *(_WORD *)v15 + v13[8] - *(_WORD *)(v15 + 16);
LABEL_7:
    *v11 = v13;
    result = 0LL;
  }
LABEL_8:
  if ( v9 )
    *a3 += 2;
  if ( (int)result < 0 )
    *v11 = 0LL;
  return result;
}
