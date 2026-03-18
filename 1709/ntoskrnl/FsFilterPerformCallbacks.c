/*
 * XREFs of FsFilterPerformCallbacks @ 0x140067200
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x1400EF610 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x1400EFF28 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlReleaseFile @ 0x14049C430 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14049C600 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404E736C (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404E75A8 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlQueryOpen @ 0x1406B0754 (FsRtlQueryOpen.c)
 * Callees:
 *     FsFilterGetCallbacks @ 0x140067370 (FsFilterGetCallbacks.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsFilterPerformCallbacks(__int64 a1, char a2, char a3, _DWORD *a4)
{
  __int64 v4; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int16 v11; // r11
  __int64 (__fastcall *v12)(__int64, _QWORD *); // r8
  __int64 v13; // rcx
  unsigned __int16 v14; // ax
  _QWORD *v15; // rsi
  _QWORD *v16; // rdx
  __int64 result; // rax
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 (__fastcall *v19)(__int64, _QWORD *); // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  *a4 = 2;
  if ( !v4 )
    return 0LL;
  while ( 1 )
  {
    v9 = *(unsigned __int8 *)(a1 + 4);
    v10 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 48LL);
    *(_QWORD *)(a1 + 8) = v4;
    FsFilterGetCallbacks(v9, v4, &v19, &v18);
    v12 = v19;
    v13 = v18;
    if ( v19 )
    {
      if ( !v18 )
      {
        v15 = 0LL;
        goto LABEL_7;
      }
    }
    else if ( !v18 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 48LL);
      if ( !v10 )
        *a4 &= ~2u;
      goto LABEL_16;
    }
    v14 = *(_WORD *)(a1 + 74);
    if ( v14 >= *(_WORD *)(a1 + 72) )
      break;
    v15 = (_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL * v14);
    *(_WORD *)(a1 + 74) = v14 + 1;
    if ( !v15 )
      break;
    *v15 = v4;
    v15[1] = *(_QWORD *)(a1 + 16);
    v15[2] = 0LL;
    v15[3] = v13;
LABEL_7:
    if ( v12 )
    {
      if ( v15 )
        v16 = v15 + 2;
      else
        v16 = 0LL;
      result = v12(a1, v16);
      if ( (int)result < 0 )
      {
        if ( a2 || !v10 )
        {
          if ( a3 )
          {
            if ( !v10 )
              *a4 |= 1u;
          }
          else if ( !v10 )
          {
            KeBugCheckEx(0x22u, (int)result, 0LL, 0x38CuLL, 0LL);
          }
LABEL_24:
          if ( v15 )
            --*(_WORD *)(a1 + 74);
          return result;
        }
      }
      else if ( (_DWORD)result )
      {
        goto LABEL_24;
      }
      v11 = -1;
    }
    if ( v4 == *(_QWORD *)(a1 + 8) )
    {
      if ( !v10 )
      {
        if ( v15 )
          *(_WORD *)(a1 + 74) += v11;
      }
      v4 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 48LL);
    }
    else
    {
      *(_DWORD *)(a1 + 64) |= 4u;
      v4 = *(_QWORD *)(a1 + 8);
    }
LABEL_16:
    if ( !v4 )
      return 0LL;
  }
  if ( !a2 )
    KeBugCheckEx(0x22u, 0LL, 0LL, 0LL, 0LL);
  return 3221225626LL;
}
