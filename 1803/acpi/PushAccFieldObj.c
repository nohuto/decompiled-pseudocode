/*
 * XREFs of PushAccFieldObj @ 0x1C004CFE0
 * Callers:
 *     AccFieldUnit @ 0x1C004C040 (AccFieldUnit.c)
 *     AccessFieldData @ 0x1C004C4E0 (AccessFieldData.c)
 *     PreserveWriteObj @ 0x1C004CF30 (PreserveWriteObj.c)
 *     ReadField @ 0x1C004D4C0 (ReadField.c)
 *     ReadFieldObj @ 0x1C004D690 (ReadFieldObj.c)
 *     WriteFieldLoop @ 0x1C004DF60 (WriteFieldLoop.c)
 *     WriteFieldObj @ 0x1C004E010 (WriteFieldObj.c)
 * Callees:
 *     PushFrame @ 0x1C0003314 (PushFrame.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 */

__int64 __fastcall PushAccFieldObj(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // rdi
  __int64 v9; // r8
  unsigned int v10; // esi
  __int64 v11; // r9
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  __int64 v18; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  v9 = 128LL;
  if ( a4[5] )
    v9 = (unsigned int)(a4[7] + 128);
  v10 = PushFrame(a1, 1330004801, v9, a2, &v18);
  if ( !v10 )
  {
    v11 = v18;
    v12 = 1;
    v13 = a5;
    v14 = a5 + a6;
    *(_QWORD *)(v18 + 32) = a3;
    *(_QWORD *)(v11 + 40) = v13;
    *(_QWORD *)(v11 + 48) = v14;
    v15 = (a4[3] & 0xF) - 1;
    if ( v15 <= 3 )
      v12 = 1 << v15;
    *(_DWORD *)(v11 + 56) = v12;
    *(_DWORD *)(v11 + 60) = (8 * v12 + a4[2] + a4[1] - 1) / (unsigned int)(8 * v12);
    v16 = 8 * *(_DWORD *)(v11 + 56);
    if ( v16 < 0x40 )
      v6 = 1LL << v16;
    *(_QWORD *)(v11 + 64) = v6 - 1;
    *(_DWORD *)(v11 + 72) = 8 * *(_DWORD *)(v11 + 56) - a4[1];
    *(_DWORD *)(v11 + 76) = a4[1];
    memmove((void *)(v11 + 96), a4, (unsigned int)(a4[7] + 32));
  }
  return v10;
}
