/*
 * XREFs of SbpUpdateCacheWithCurrentImpl @ 0x1800215B0
 * Callers:
 *     SbSelectProcedure @ 0x180021390 (SbSelectProcedure.c)
 * Callees:
 *     RtlGetNtProductType @ 0x180007D50 (RtlGetNtProductType.c)
 *     RtlStringCbCopyW @ 0x1800528E4 (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     SbpResolveBasedOnName @ 0x18010B774 (SbpResolveBasedOnName.c)
 */

__int64 __fastcall SbpUpdateCacheWithCurrentImpl(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  struct _PEB *v5; // r8
  unsigned int OSPlatformId; // eax
  wchar_t *Buffer; // r8
  _WORD *v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int16 v11; // dx
  bool v12; // cf
  char *v13; // rbx
  _DWORD *v14; // rax
  __int64 v15; // r14
  __int64 v16; // rbp
  unsigned int v17; // r9d
  __int64 v18; // rdi
  unsigned int v19; // ecx
  __int64 v20; // r8
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  unsigned int v23; // eax
  unsigned int v25; // esi
  _DWORD *v26; // rcx
  __int64 v27; // rdi
  _DWORD v28[76]; // [rsp+20h] [rbp-178h] BYREF

  memset(&v28[4], 0, 0x11CuLL);
  v5 = NtCurrentPeb();
  v28[5] = v5->OSMajorVersion;
  v28[6] = v5->OSMinorVersion;
  v28[7] = v5->OSBuildNumber;
  OSPlatformId = v5->OSPlatformId;
  Buffer = v5->CSDVersion.Buffer;
  v28[8] = OSPlatformId;
  if ( Buffer && *Buffer )
    RtlStringCbCopyW(&v28[9], 256LL, Buffer);
  if ( ((v28[4] - 284) & 0xFFFFFFF7) == 0 )
    RtlGetNtProductType(v28, v4);
  v8 = &unk_180113456;
  v9 = -1LL;
  v10 = 0LL;
  while ( 1 )
  {
    v11 = *(v8 - 1);
    v12 = LOWORD(v28[5]) < v11;
    if ( LOWORD(v28[5]) <= v11 )
    {
      if ( LOWORD(v28[5]) != v11 )
        goto LABEL_39;
      if ( LOWORD(v28[6]) < *v8 )
        break;
    }
    v9 = v10;
LABEL_9:
    ++v10;
    v8 += 16;
    if ( v10 >= 5 )
      goto LABEL_10;
  }
  v12 = LOWORD(v28[5]) < v11;
LABEL_39:
  if ( !v12 && (LOWORD(v28[5]) != v11 || LOWORD(v28[6]) >= *v8) )
    goto LABEL_9;
LABEL_10:
  if ( v9 == -1 )
    v13 = (char *)&SbSupportedOsList;
  else
    v13 = (char *)&SbSupportedOsList + 32 * v9;
  v14 = *(_DWORD **)(a2 + 24);
  v15 = 0LL;
  if ( !*v14 )
    return 1LL;
  while ( 1 )
  {
    v16 = *(_QWORD *)&v14[2 * v15 + 2];
    if ( v16 )
    {
      v17 = *(_DWORD *)(v16 + 68);
      v18 = 0LL;
      if ( v17 )
      {
        while ( 2 )
        {
          v19 = 0;
          v20 = 8 * v18;
          do
          {
            v21 = *(_QWORD *)(v16 + 16 * (v20 + v19) + 120) - *(_QWORD *)(v13 + 4);
            if ( !v21 )
              v21 = *(_QWORD *)(v16 + 16 * (v20 + v19) + 128) - *(_QWORD *)(v13 + 12);
            if ( !v21 )
            {
              v22 = (unsigned __int64)(unsigned int)v18 << 7;
              if ( !*(_QWORD *)(v22 + v16 + 80) && *(_DWORD *)(v22 + v16 + 88) == 2 )
                *(_QWORD *)(v22 + v16 + 80) = SbpResolveBasedOnName(*(_QWORD *)(v22 + v16 + 72));
              *(_QWORD *)(a1 + 8 * v15 + 16) = v22 + v16 + 72;
              goto LABEL_24;
            }
            ++v19;
          }
          while ( v19 < 4 );
          v18 = (unsigned int)(v18 + 1);
          if ( (unsigned int)v18 < v17 )
            continue;
          break;
        }
      }
LABEL_24:
      v23 = *(_DWORD *)(v16 + 68);
      if ( (unsigned int)v18 >= v23 )
      {
        v25 = 0;
        if ( v23 )
        {
          v26 = (_DWORD *)(v16 + 104);
          while ( !*v26 )
          {
            ++v25;
            v26 += 32;
            if ( v25 >= v23 )
              goto LABEL_32;
          }
          v27 = v16 + ((unsigned __int64)v25 << 7);
          if ( !*(_QWORD *)(v27 + 80) && *(_DWORD *)(v27 + 88) == 2 )
            *(_QWORD *)(v27 + 80) = SbpResolveBasedOnName(*(_QWORD *)(v27 + 72));
          *(_QWORD *)(a1 + 8 * v15 + 16) = v27 + 72;
        }
LABEL_32:
        if ( v25 >= *(_DWORD *)(v16 + 68) )
          return 0LL;
      }
    }
    v14 = *(_DWORD **)(a2 + 24);
    v15 = (unsigned int)(v15 + 1);
    if ( (unsigned int)v15 >= *v14 )
      return 1LL;
  }
}
