/*
 * XREFs of NVMeFirmwareDownloadCompletion @ 0x1C000A1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeFirmwareDownloadCompletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // dl
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 result; // rax
  __int64 v11; // r8
  int v12; // eax

  v6 = *(_BYTE *)(a2 + 2);
  if ( v6 == 40 )
    v8 = *(_QWORD *)(a2 + 104);
  else
    v8 = *(_QWORD *)(a2 + 56);
  if ( (v8 & 0xFFF) != 0 )
    v8 = v8 - (v8 & 0xFFF) + 4096;
  if ( v6 == 40 )
    v9 = *(_QWORD *)(a2 + 64);
  else
    v9 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(v9 + 20) = *(_BYTE *)(a2 + 3) != 1;
  result = *(unsigned int *)(a1 + 52);
  if ( (result & 8) != 0 || (v11 = *(_QWORD *)(v8 + 4208)) == 0 )
  {
    *(_DWORD *)(v8 + 4208) = 0;
  }
  else
  {
    result = StorPortExtendedFunction(1LL, a1, v11, a4);
    *(_QWORD *)(v8 + 4208) = 0LL;
  }
  *(_BYTE *)(v8 + 4245) |= 8u;
  if ( *(_BYTE *)(a2 + 3) != 1 )
  {
    v12 = *(unsigned __int16 *)(a3 + 14) >> 1;
    if ( (unsigned __int8)v12 == 6 )
    {
      *(_DWORD *)(v9 + 20) = 6;
    }
    else if ( (unsigned __int8)v12 == 7 )
    {
      *(_DWORD *)(v9 + 20) = 7;
    }
    else
    {
      *(_DWORD *)(v9 + 20) = 16;
    }
    return StorPortExtendedFunction(60LL, a1, 0LL, 1LL);
  }
  return result;
}
