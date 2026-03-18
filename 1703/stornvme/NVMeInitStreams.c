/*
 * XREFs of NVMeInitStreams @ 0x1C0006668
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0004640 (NVMeControllerInitPart2.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C000BE0C (IoctlStorageStreamsGetParameters.c)
 * Callees:
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C000F05C (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C000F224 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C000F300 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C000F4D8 (NVMeDirectiveStreamsAllocateResources.c)
 *     __security_check_cookie @ 0x1C0011E70 (__security_check_cookie.c)
 */

__int64 __fastcall NVMeInitStreams(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rcx
  unsigned int v7; // esi
  char v8; // cl
  __int16 v9; // cx
  unsigned __int16 v10; // r8
  unsigned __int16 v11; // dx
  __int16 v12; // cx
  __int16 v13; // ax
  unsigned __int16 v14; // [rsp+20h] [rbp-29h] BYREF
  unsigned __int16 v15; // [rsp+22h] [rbp-27h]
  int v16; // [rsp+30h] [rbp-19h]
  unsigned __int16 v17; // [rsp+34h] [rbp-15h]
  __int16 v18; // [rsp+36h] [rbp-13h]
  __int16 v19; // [rsp+38h] [rbp-11h]
  _BYTE v20[64]; // [rsp+40h] [rbp-9h] BYREF

  v4 = *(_QWORD *)(a1 + 1080);
  if ( (*(_BYTE *)(v4 + 256) & 0x20) == 0 )
    return 3238002695LL;
  if ( (*(_BYTE *)(a1 + 3240) & 7) == 3 )
    return *(_BYTE *)(a1 + 3241) != a2 ? 0xC1000003 : 0;
  if ( (unsigned int)a2 < *(_DWORD *)(a1 + 148) && (_mm_lfence(), (v6 = *(_QWORD *)(a1 + 8LL * a2 + 1184)) != 0) )
    v7 = *(_DWORD *)(v6 + 16);
  else
    v7 = 0;
  v8 = *(_BYTE *)(a1 + 3240);
  if ( (v8 & 4) != 0 )
  {
    a2 = *(_BYTE *)(a1 + 3241);
  }
  else if ( v7 > *(_DWORD *)(v4 + 516) || !*(_QWORD *)(a1 + 8LL * a2 + 1184) )
  {
    return 3238002694LL;
  }
  if ( (v8 & 1) != 0 )
    goto LABEL_20;
  result = NVMeDirectiveIdentifyReturnParameters(a1, 64LL, v20);
  if ( (_DWORD)result )
    return result;
  if ( (v20[0] & 2) == 0 )
    return 3238002695LL;
  result = NVMeDirectiveIdentifyEnableDirective(a1);
  if ( !(_DWORD)result )
  {
    result = NVMeDirectiveIdentifyReturnParameters(a1, 64LL, v20);
    if ( !(_DWORD)result )
    {
      if ( (v20[32] & 2) == 0 )
        return 3238002695LL;
      *(_BYTE *)(a1 + 3240) |= 1u;
LABEL_20:
      result = NVMeDirectiveStreamsReturnParameters(a1, v7, 32LL, &v14);
      if ( !(_DWORD)result )
      {
        v9 = v18;
        v10 = v14;
        v11 = v15;
        *(_DWORD *)(a1 + 3252) = v16;
        *(_DWORD *)(a1 + 3256) = v17;
        *(_WORD *)(a1 + 3246) = v19;
        *(_WORD *)(a1 + 3248) = v9 + v11;
        *(_BYTE *)(a1 + 3241) = a2;
        *(_WORD *)(a1 + 3242) = v10;
        *(_WORD *)(a1 + 3244) = v9;
        if ( !v10 )
          return 3238002695LL;
        if ( v10 > v11 )
          v10 = v11;
        if ( !v10 )
          return 3238002695LL;
        result = NVMeDirectiveStreamsAllocateResources(a1, v7);
        if ( !(_DWORD)result )
        {
          result = NVMeDirectiveStreamsReturnParameters(a1, v7, 32LL, &v14);
          if ( !(_DWORD)result )
          {
            v12 = v18;
            v13 = v18 + v15;
            *(_WORD *)(a1 + 3244) = v18;
            *(_WORD *)(a1 + 3248) = v13;
            if ( v12 )
            {
              *(_BYTE *)(a1 + 3240) = *(_BYTE *)(a1 + 3240) & 0xF9 | 2;
              return 0LL;
            }
            return 3238002695LL;
          }
        }
      }
    }
  }
  return result;
}
