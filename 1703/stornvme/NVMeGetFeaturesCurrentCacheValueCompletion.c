/*
 * XREFs of NVMeGetFeaturesCurrentCacheValueCompletion @ 0x1C0007FE0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbScsiData @ 0x1C0006898 (GetSrbScsiData.c)
 */

__int64 __fastcall NVMeGetFeaturesCurrentCacheValueCompletion(__int64 a1, __int64 a2, _BYTE *a3)
{
  char v3; // cl
  __int64 v6; // rdi
  __int64 v7; // rbp
  _DWORD *v8; // rsi
  __int64 result; // rax
  int v10; // r9d
  unsigned int v11; // edx
  __int64 v12; // rcx

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
    v8 = (_DWORD *)(a2 + 60);
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 24);
    v8 = (_DWORD *)(a2 + 16);
  }
  result = GetSrbScsiData(a2, 0LL, 0LL, 0LL, 0LL);
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    if ( a3 )
    {
      if ( *(_BYTE *)result == 26 )
      {
        v11 = v10 + 4;
        v12 = (unsigned int)(v10 + 4);
      }
      else
      {
        v11 = v10 + 8;
        v12 = (unsigned int)(v10 + 8);
      }
      *(_BYTE *)(v12 + v7 + 2) ^= (*(_BYTE *)(v12 + v7 + 2) ^ (4 * *a3)) & 4;
      result = v11 + 20;
      if ( (unsigned int)*v8 < (unsigned __int64)v11 + 20 )
        result = v11 + 12;
      *v8 = result;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 4;
    }
  }
  *(_BYTE *)(v6 + 4245) |= (_BYTE)v10 + 8;
  return result;
}
