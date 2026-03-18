/*
 * XREFs of IoctlStorageStreamsReleaseId @ 0x1C000C938
 * Callers:
 *     IoctlToNVMe @ 0x1C000CC18 (IoctlToNVMe.c)
 * Callees:
 *     NVMeDirectiveStreamsReleaseId @ 0x1C000FD60 (NVMeDirectiveStreamsReleaseId.c)
 */

__int64 __fastcall IoctlStorageStreamsReleaseId(__int64 a1, __int64 a2)
{
  char v4; // cl
  _DWORD *v5; // rdi
  _DWORD *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 result; // rax

  v4 = *(_BYTE *)(a2 + 2);
  if ( v4 == 40 )
  {
    v5 = *(_DWORD **)(a2 + 64);
    v6 = (_DWORD *)(a2 + 60);
  }
  else
  {
    v5 = *(_DWORD **)(a2 + 24);
    v6 = (_DWORD *)(a2 + 16);
  }
  if ( *v6 < 0x28u )
  {
    *(_BYTE *)(a2 + 3) = 21;
LABEL_26:
    result = 3238002694LL;
    goto LABEL_27;
  }
  if ( v5[8] < 0xCu || v5[7] != 1 )
  {
    *(_BYTE *)(a2 + 3) = 6;
    goto LABEL_26;
  }
  if ( v4 == 40 )
    v7 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v7 = *(unsigned __int8 *)(a2 + 7);
  if ( (unsigned int)v7 >= 0xFF )
  {
    *(_BYTE *)(a2 + 3) = 32;
    goto LABEL_26;
  }
  if ( (*(_BYTE *)(a1 + 3240) & 3) == 3 && *(unsigned __int8 *)(a1 + 3241) == (_DWORD)v7 )
  {
    v8 = v5[9];
    if ( !v8 || *(unsigned __int16 *)(a1 + 3242) < v8 || v8 > 0xFFFF )
    {
      *(_BYTE *)(a2 + 3) = 6;
      goto LABEL_26;
    }
    if ( (unsigned int)v7 < *(_DWORD *)(a1 + 148) && (v9 = *(_QWORD *)(a1 + 8 * v7 + 1184)) != 0 )
      v10 = *(unsigned int *)(v9 + 16);
    else
      v10 = 0LL;
    result = NVMeDirectiveStreamsReleaseId(a1, v10, *((unsigned __int16 *)v5 + 18));
    *(_BYTE *)(a2 + 3) = (_DWORD)result != 0 ? 4 : 1;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 6;
    result = 3238002695LL;
  }
LABEL_27:
  v5[6] = 0;
  return result;
}
