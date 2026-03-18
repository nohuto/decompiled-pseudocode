/*
 * XREFs of PushAccFieldObj @ 0x1C0018A78
 * Callers:
 *     WriteFieldObj @ 0x1C00168F0 (WriteFieldObj.c)
 *     ReadFieldObj @ 0x1C0016D90 (ReadFieldObj.c)
 *     AccFieldUnit @ 0x1C001FA10 (AccFieldUnit.c)
 *     PreserveWriteObj @ 0x1C005FBF0 (PreserveWriteObj.c)
 * Callees:
 *     PushFrame @ 0x1C0018B78 (PushFrame.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 */

__int64 __fastcall PushAccFieldObj(int a1, int a2, __int64 a3, _DWORD *a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // rdi
  int v9; // r8d
  unsigned int v10; // esi
  __int64 v11; // r9
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  __int64 v18; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  v9 = 128;
  if ( a4[5] )
    v9 = a4[7] + 128;
  v10 = PushFrame(a1, 1330004801, v9, a2, (__int64)&v18);
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
