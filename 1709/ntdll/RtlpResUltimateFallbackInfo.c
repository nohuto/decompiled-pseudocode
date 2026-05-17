/*
 * XREFs of RtlpResUltimateFallbackInfo @ 0x18001F734
 * Callers:
 *     LdrResFallbackLangList @ 0x18001FCD4 (LdrResFallbackLangList.c)
 * Callees:
 *     LdrResGetRCConfig @ 0x18001F860 (LdrResGetRCConfig.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E0D64 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall RtlpResUltimateFallbackInfo(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4, int a5)
{
  int v7; // r15d
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v13; // r9d
  __int64 result; // rax
  __int64 v15; // rdx
  _DWORD *v16; // rcx
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // [rsp+30h] [rbp-38h] BYREF
  const wchar_t *v23; // [rsp+38h] [rbp-30h]
  int v24; // [rsp+40h] [rbp-28h] BYREF
  const wchar_t *v25; // [rsp+48h] [rbp-20h]
  _DWORD *v26; // [rsp+70h] [rbp+8h] BYREF

  v26 = 0LL;
  v22 = 4456514;
  v23 = L"RtlpResUltimateFallbackInfo Enter";
  v24 = 4325440;
  v25 = L"RtlpResUltimateFallbackInfo Exit";
  v7 = a2;
  v10 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2) )
    v11 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v11 = 2147353477LL;
  v12 = 2147353476LL;
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v11, v9) )
      v21 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v21 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v22, *(unsigned __int8 *)v21);
  }
  if ( !a1 || !a3 || !a4 )
    return 3221225485LL;
  v13 = a5;
  *a4 = 0;
  *a3 = 0LL;
  result = LdrResGetRCConfig(a1, v7, (unsigned int)&v26, v13, 1);
  if ( (int)result >= 0 )
  {
    v16 = v26;
    if ( (unsigned __int64)v26 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && v26[31] && v26[32] && (v17 = v26[6]) != 0 )
    {
      *a4 = v17;
      *a3 = (char *)v16 + (unsigned int)v16[31];
      v18 = 0;
    }
    else
    {
      v18 = -1073741823;
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v16, v15) )
      v10 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v10 & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v20, v19) )
        v12 = (__int64)NtCurrentPeb()->SharedData + 554;
      LdrpTraceLoadMUIDll(&v24, *(unsigned __int8 *)v12);
    }
    return v18;
  }
  return result;
}
