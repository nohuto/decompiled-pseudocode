/*
 * XREFs of NVMeGetFeaturesCurrentCacheValueCompletion @ 0x1C0008880
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbScsiData @ 0x1C0006F54 (GetSrbScsiData.c)
 */

__int64 __fastcall NVMeGetFeaturesCurrentCacheValueCompletion(__int64 a1, __int64 a2, _BYTE *a3)
{
  char v3; // cl
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 result; // rax
  int v10; // r8d
  unsigned int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // r8

  v3 = *(_BYTE *)(a2 + 2);
  if ( v3 == 40 )
    v6 = *(_QWORD *)(a2 + 104);
  else
    v6 = *(_QWORD *)(a2 + 56);
  if ( (v6 & 0xFFF) != 0 )
    v6 = v6 - (v6 & 0xFFF) + 4096;
  if ( v3 == 40 )
  {
    v7 = *(_QWORD *)(a2 + 64);
    v8 = 60LL;
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 24);
    v8 = 16LL;
  }
  result = GetSrbScsiData(a2, 0LL, 0LL, 0LL, 0LL);
  v11 = v10 + 8;
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    if ( a3 )
    {
      v12 = (unsigned int)(v10 + 6);
      if ( *(_BYTE *)result != 26 )
        v12 = (unsigned int)(v10 + 10);
      v13 = (unsigned int)(v10 + 4);
      if ( *(_BYTE *)result != 26 )
        v13 = v11;
      *(_BYTE *)(v12 + v7) ^= (*(_BYTE *)(v12 + v7) ^ (4 * *a3)) & 4;
      result = (unsigned int)(v13 + 20);
      if ( *(unsigned int *)(a2 + v8) < (unsigned __int64)(v13 + 20) )
        result = (unsigned int)(v13 + 12);
      *(_DWORD *)(a2 + v8) = result;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 4;
    }
  }
  *(_BYTE *)(v6 + 4253) |= v11;
  return result;
}
