/*
 * XREFs of NVMeInitStreams @ 0x1C0006CF8
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0004908 (NVMeControllerInitPart2.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C000C9A8 (IoctlStorageStreamsGetParameters.c)
 * Callees:
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C000FCFC (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C000FEBC (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C000FF98 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C0010158 (NVMeDirectiveStreamsAllocateResources.c)
 *     __security_check_cookie @ 0x1C0013F20 (__security_check_cookie.c)
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
  __int64 v14; // [rsp+30h] [rbp-39h] BYREF
  __int64 v15; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int16 v16; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int16 v17; // [rsp+42h] [rbp-27h]
  int v18; // [rsp+50h] [rbp-19h]
  unsigned __int16 v19; // [rsp+54h] [rbp-15h]
  __int16 v20; // [rsp+56h] [rbp-13h]
  __int16 v21; // [rsp+58h] [rbp-11h]
  _BYTE v22[64]; // [rsp+60h] [rbp-9h] BYREF

  v4 = *(_QWORD *)(a1 + 1112);
  if ( (*(_BYTE *)(v4 + 256) & 0x20) == 0 )
    return 3238002695LL;
  if ( (*(_BYTE *)(a1 + 3288) & 7) == 3 )
    return *(_BYTE *)(a1 + 3289) != a2 ? 0xC1000003 : 0;
  if ( (unsigned int)a2 < *(_DWORD *)(a1 + 156) && (_mm_lfence(), (v6 = *(_QWORD *)(a1 + 8LL * a2 + 1224)) != 0) )
    v7 = *(_DWORD *)(v6 + 16);
  else
    v7 = 0;
  v8 = *(_BYTE *)(a1 + 3288);
  if ( (v8 & 4) != 0 )
  {
    a2 = *(_BYTE *)(a1 + 3289);
  }
  else if ( v7 > *(_DWORD *)(v4 + 516) || !*(_QWORD *)(a1 + 8LL * a2 + 1224) )
  {
    return 3238002694LL;
  }
  if ( (v8 & 1) != 0 )
    goto LABEL_20;
  v14 = 0LL;
  result = NVMeDirectiveIdentifyReturnParameters(a1, v7, 64LL, v22, &v14);
  if ( (_DWORD)result )
    return result;
  if ( (v22[0] & 2) == 0 )
    return 3238002695LL;
  result = NVMeDirectiveIdentifyEnableDirective(a1);
  if ( !(_DWORD)result )
  {
    v15 = 0LL;
    result = NVMeDirectiveIdentifyReturnParameters(a1, v7, 64LL, v22, &v15);
    if ( !(_DWORD)result )
    {
      if ( (v22[32] & 2) == 0 )
        return 3238002695LL;
      *(_BYTE *)(a1 + 3288) |= 1u;
LABEL_20:
      result = NVMeDirectiveStreamsReturnParameters(a1, v7, 32LL, &v16);
      if ( !(_DWORD)result )
      {
        v9 = v20;
        v10 = v16;
        v11 = v17;
        *(_DWORD *)(a1 + 3300) = v18;
        *(_DWORD *)(a1 + 3304) = v19;
        *(_WORD *)(a1 + 3294) = v21;
        *(_WORD *)(a1 + 3296) = v9 + v11;
        *(_BYTE *)(a1 + 3289) = a2;
        *(_WORD *)(a1 + 3290) = v10;
        *(_WORD *)(a1 + 3292) = v9;
        if ( !v10 )
          return 3238002695LL;
        if ( v10 > v11 )
          v10 = v11;
        if ( !v10 )
          return 3238002695LL;
        result = NVMeDirectiveStreamsAllocateResources(a1, v7);
        if ( !(_DWORD)result )
        {
          result = NVMeDirectiveStreamsReturnParameters(a1, v7, 32LL, &v16);
          if ( !(_DWORD)result )
          {
            v12 = v20;
            v13 = v20 + v17;
            *(_WORD *)(a1 + 3292) = v20;
            *(_WORD *)(a1 + 3296) = v13;
            if ( v12 )
            {
              *(_BYTE *)(a1 + 3288) = *(_BYTE *)(a1 + 3288) & 0xF9 | 2;
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
