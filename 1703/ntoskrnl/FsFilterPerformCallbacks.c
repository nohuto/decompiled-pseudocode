/*
 * XREFs of FsFilterPerformCallbacks @ 0x1400965E0
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x1400153C0 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140022B88 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404C6C34 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404C6E70 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFile @ 0x140510170 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140510380 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlQueryOpen @ 0x140685364 (FsRtlQueryOpen.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsFilterPerformCallbacks(__int64 a1, char a2, char a3, _DWORD *a4)
{
  __int64 v4; // rdi
  __int64 v9; // rbp
  __int64 (__fastcall *v10)(__int64, _QWORD *); // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // ecx
  unsigned __int16 v14; // ax
  _QWORD *v15; // rbx
  _QWORD *v16; // rdx
  __int64 result; // rax
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx

  v4 = *(_QWORD *)(a1 + 8);
  *a4 = 2;
  if ( !v4 )
    return 0LL;
  while ( 1 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 48LL);
    *(_QWORD *)(a1 + 8) = v4;
    v10 = 0LL;
    v11 = 0LL;
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 48LL) + 48LL);
    if ( !v12 )
    {
LABEL_34:
      v4 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 48LL);
      if ( !v9 )
        *a4 &= ~2u;
      goto LABEL_30;
    }
    v13 = *(unsigned __int8 *)(a1 + 4);
    if ( v13 == 254 )
    {
      if ( *(_DWORD *)v12 >= 0x20u && *(_QWORD *)(v12 + 24) )
        v10 = *(__int64 (__fastcall **)(__int64, _QWORD *))(v12 + 24);
      if ( *(_DWORD *)v12 >= 0x28u && *(_QWORD *)(v12 + 32) )
        v11 = *(_QWORD *)(v12 + 32);
    }
    else if ( v13 == 255 )
    {
      if ( *(_DWORD *)v12 >= 0x10u && *(_QWORD *)(v12 + 8) )
        v10 = *(__int64 (__fastcall **)(__int64, _QWORD *))(v12 + 8);
      if ( *(_DWORD *)v12 >= 0x18u && *(_QWORD *)(v12 + 16) )
        v11 = *(_QWORD *)(v12 + 16);
    }
    else
    {
      v18 = v13 - 249;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              if ( v21 != 1 )
                goto LABEL_34;
              if ( *(_DWORD *)v12 >= 0x50u && *(_QWORD *)(v12 + 72) )
                v10 = *(__int64 (__fastcall **)(__int64, _QWORD *))(v12 + 72);
              if ( *(_DWORD *)v12 >= 0x58u && *(_QWORD *)(v12 + 80) )
                v11 = *(_QWORD *)(v12 + 80);
            }
            else
            {
              if ( *(_DWORD *)v12 >= 0x60u && *(_QWORD *)(v12 + 88) )
                v10 = *(__int64 (__fastcall **)(__int64, _QWORD *))(v12 + 88);
              if ( *(_DWORD *)v12 >= 0x68u && *(_QWORD *)(v12 + 96) )
                v11 = *(_QWORD *)(v12 + 96);
            }
          }
          else
          {
            if ( *(_DWORD *)v12 >= 0x30u && *(_QWORD *)(v12 + 40) )
              v10 = *(__int64 (__fastcall **)(__int64, _QWORD *))(v12 + 40);
            if ( *(_DWORD *)v12 >= 0x38u && *(_QWORD *)(v12 + 48) )
              v11 = *(_QWORD *)(v12 + 48);
          }
        }
        else
        {
          if ( *(_DWORD *)v12 >= 0x40u && *(_QWORD *)(v12 + 56) )
            v10 = *(__int64 (__fastcall **)(__int64, _QWORD *))(v12 + 56);
          if ( *(_DWORD *)v12 >= 0x48u && *(_QWORD *)(v12 + 64) )
            v11 = *(_QWORD *)(v12 + 64);
        }
      }
      else
      {
        if ( *(_DWORD *)v12 >= 0x70u && *(_QWORD *)(v12 + 104) )
          v10 = *(__int64 (__fastcall **)(__int64, _QWORD *))(v12 + 104);
        if ( *(_DWORD *)v12 >= 0x78u && *(_QWORD *)(v12 + 112) )
          v11 = *(_QWORD *)(v12 + 112);
      }
    }
    if ( v10 )
    {
      if ( !v11 )
      {
        v15 = 0LL;
        goto LABEL_22;
      }
    }
    else if ( !v11 )
    {
      goto LABEL_34;
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
    v15[3] = v11;
LABEL_22:
    if ( v10 )
    {
      if ( v15 )
        v16 = v15 + 2;
      else
        v16 = 0LL;
      result = v10(a1, v16);
      if ( (int)result < 0 )
      {
        if ( a2 || !v9 )
        {
          if ( a3 )
          {
            if ( !v9 )
              *a4 |= 1u;
          }
          else if ( !v9 )
          {
            KeBugCheckEx(0x22u, (int)result, v9 != 0, 0x38CuLL, 0LL);
          }
LABEL_38:
          if ( v15 )
            --*(_WORD *)(a1 + 74);
          return result;
        }
      }
      else if ( (_DWORD)result )
      {
        goto LABEL_38;
      }
    }
    if ( v4 == *(_QWORD *)(a1 + 8) )
    {
      if ( !v9 )
      {
        if ( v15 )
          --*(_WORD *)(a1 + 74);
      }
      v4 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 48LL);
    }
    else
    {
      *(_DWORD *)(a1 + 64) |= 4u;
      v4 = *(_QWORD *)(a1 + 8);
    }
LABEL_30:
    if ( !v4 )
      return 0LL;
  }
  if ( !a2 )
    KeBugCheckEx(0x22u, 0LL, 0LL, 0LL, 0LL);
  return 3221225626LL;
}
