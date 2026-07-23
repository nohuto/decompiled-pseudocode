/*
 * XREFs of LdrpLangFallbackListFindNode @ 0x180052268
 * Callers:
 *     LdrpLangFallbackListAppendNode @ 0x180052170 (LdrpLangFallbackListAppendNode.c)
 * Callees:
 *     RtlpMuiRegGetStringIndexInPool @ 0x180052408 (RtlpMuiRegGetStringIndexInPool.c)
 *     RtlCultureNameToLCID @ 0x1800524A0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 */

__int64 __fastcall LdrpLangFallbackListFindNode(__int64 a1, __int64 a2, const WCHAR *a3, _WORD *a4)
{
  __int16 v8; // r8
  DWORD v9; // r14d
  __int64 v10; // rsi
  int StringIndexInPool; // eax
  int v12; // eax
  __int16 v13; // dx
  __int64 v14; // r10
  __int64 v15; // r9
  __int64 v16; // rcx
  bool v18; // zf
  __int64 v19; // rax
  _UNICODE_STRING String; // [rsp+20h] [rbp-38h] BYREF
  DWORD Lcid; // [rsp+60h] [rbp+8h] BYREF

  if ( a1 && a2 && a3 && a4 )
  {
    *a4 = -1;
    RtlInitUnicodeString(&String, a3);
    if ( !RtlCultureNameToLCID(&String, &Lcid) )
      return 3221225524LL;
    v8 = -1;
    v9 = ((Lcid - 4096) & 0xFFFFFBFF) != 0 ? Lcid : 0;
    if ( *a3 )
    {
      v10 = *(_QWORD *)(a1 + 32);
      StringIndexInPool = RtlpMuiRegGetStringIndexInPool(v10, a3, 0xFFFFLL);
      v8 = StringIndexInPool;
      if ( StringIndexInPool < 0 )
      {
        if ( v10 )
        {
          v19 = -1LL;
          do
            ++v19;
          while ( a3[v19] );
        }
        v8 = -1;
      }
      if ( v8 < 0 )
      {
LABEL_27:
        v8 = -1;
LABEL_11:
        v13 = 0;
        if ( *(_WORD *)(a2 + 4) )
        {
          v14 = *(_QWORD *)(a2 + 24);
          while ( 1 )
          {
            if ( *(_WORD *)(v14 + 6LL * v13) == 1 )
            {
              if ( !v9 )
                goto LABEL_21;
              v18 = *(__int16 *)(v14 + 6LL * v13 + 4) == v9;
              goto LABEL_20;
            }
            if ( *(_WORD *)(v14 + 6LL * v13) != 2 )
              break;
            v15 = *(__int16 *)(v14 + 6LL * v13 + 4);
            v16 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
            if ( v8 > 0 && v8 == *(_WORD *)(28 * v15 + v16 + 6) )
            {
LABEL_17:
              *a4 = v13;
              return 0LL;
            }
            if ( v9 )
            {
              v18 = v9 == *(unsigned __int16 *)(28 * v15 + v16 + 4);
LABEL_20:
              if ( v18 )
                goto LABEL_17;
            }
LABEL_21:
            if ( ++v13 >= (int)*(unsigned __int16 *)(a2 + 4) )
              return 3221225524LL;
          }
          if ( *(_WORD *)(v14 + 6LL * v13) != 3 || v8 == -1 )
            goto LABEL_21;
          v18 = *(_WORD *)(v14 + 6LL * v13 + 4) == (unsigned __int16)v8;
          goto LABEL_20;
        }
        return 3221225524LL;
      }
      v12 = 0;
    }
    else
    {
      v12 = -1073741811;
    }
    if ( v12 >= 0 )
      goto LABEL_11;
    goto LABEL_27;
  }
  return 3221225485LL;
}
