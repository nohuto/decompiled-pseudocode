/*
 * XREFs of IoctlStorageStreamsReleaseId @ 0x1C000CD78
 * Callers:
 *     IoctlToNVMe @ 0x1C000D04C (IoctlToNVMe.c)
 * Callees:
 *     NVMeDirectiveStreamsReleaseId @ 0x1C0010240 (NVMeDirectiveStreamsReleaseId.c)
 */

__int64 __fastcall IoctlStorageStreamsReleaseId(__int64 a1, __int64 a2)
{
  char v3; // dl
  _DWORD *v4; // rdi
  __int64 v5; // rax
  unsigned __int8 v6; // dl
  unsigned int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 result; // rax

  v3 = *(_BYTE *)(a2 + 2);
  if ( v3 == 40 )
  {
    v4 = *(_DWORD **)(a2 + 64);
    v5 = 60LL;
  }
  else
  {
    v4 = *(_DWORD **)(a2 + 24);
    v5 = 16LL;
  }
  if ( *(_DWORD *)(a2 + v5) < 0x28u )
  {
    *(_BYTE *)(a2 + 3) = 21;
LABEL_25:
    result = 3238002694LL;
    goto LABEL_26;
  }
  if ( v4[8] < 0xCu || v4[7] != 1 )
    goto LABEL_24;
  if ( v3 == 40 )
    v6 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v6 = *(_BYTE *)(a2 + 7);
  if ( v6 == 255 )
  {
    *(_BYTE *)(a2 + 3) = 32;
    goto LABEL_25;
  }
  if ( (*(_BYTE *)(a1 + 3288) & 3) != 3 || *(unsigned __int8 *)(a1 + 3289) != v6 )
  {
    *(_BYTE *)(a2 + 3) = 6;
    result = 3238002695LL;
    goto LABEL_26;
  }
  v7 = v4[9];
  if ( !v7 || *(unsigned __int16 *)(a1 + 3290) < v7 || v7 > 0xFFFF )
  {
LABEL_24:
    *(_BYTE *)(a2 + 3) = 6;
    goto LABEL_25;
  }
  if ( (unsigned int)v6 < *(_DWORD *)(a1 + 156) && (v8 = *(_QWORD *)(a1 + 8LL * v6 + 1224)) != 0 )
    v9 = *(unsigned int *)(v8 + 16);
  else
    v9 = 0LL;
  result = NVMeDirectiveStreamsReleaseId(a1, v9);
  *(_BYTE *)(a2 + 3) = (_DWORD)result != 0 ? 4 : 1;
LABEL_26:
  v4[6] = 0;
  return result;
}
