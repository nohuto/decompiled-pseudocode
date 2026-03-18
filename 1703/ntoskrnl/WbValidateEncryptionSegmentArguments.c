/*
 * XREFs of WbValidateEncryptionSegmentArguments @ 0x140549CAC
 * Callers:
 *     WbGetInitializedEncryptionSegment @ 0x140549988 (WbGetInitializedEncryptionSegment.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     WbAlloc @ 0x14053BF78 (WbAlloc.c)
 */

__int64 __fastcall WbValidateEncryptionSegmentArguments(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  _OWORD *v7; // r10
  int v8; // ebx
  unsigned __int64 v9; // rax
  _OWORD *v10; // rax
  PVOID P[4]; // [rsp+28h] [rbp-20h] BYREF

  v7 = 0LL;
  P[0] = 0LL;
  if ( a2 < 0x10 )
  {
    v8 = -1073741811;
  }
  else
  {
    v8 = WbAlloc(0xF4uLL, P);
    if ( v8 < 0 )
    {
      v7 = P[0];
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 8);
      if ( v9 + 244 > 0x7FFFFFFF0000LL || v9 + 244 < v9 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v7 = P[0];
      v10 = *(_OWORD **)(a1 + 8);
      *(_OWORD *)P[0] = *v10;
      v7[1] = v10[1];
      v7[2] = v10[2];
      v7[3] = v10[3];
      v7[4] = v10[4];
      v7[5] = v10[5];
      v7[6] = v10[6];
      v7[7] = v10[7];
      v10 += 8;
      v7[8] = *v10;
      v7[9] = v10[1];
      v7[10] = v10[2];
      v7[11] = v10[3];
      v7[12] = v10[4];
      v7[13] = v10[5];
      v7[14] = v10[6];
      *((_DWORD *)v7 + 60) = *((_DWORD *)v10 + 28);
      if ( (*((_DWORD *)v7 + 9) & 0xF) != 0 )
      {
        v8 = -1073741811;
      }
      else
      {
        *(_DWORD *)(a4 + 8) = *((_DWORD *)v7 + 16);
        *(_QWORD *)a4 = *(_QWORD *)(a1 + 8) - (*((_DWORD *)v7 + 10) & 0xFFFFFFF);
        if ( a3 )
        {
          *a3 = v7;
          v7 = 0LL;
        }
      }
    }
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0x42524157u);
  return (unsigned int)v8;
}
