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
  struct _PEB *v4; // r8
  _NT_PRODUCT_TYPE OSPlatformId; // eax
  wchar_t *Buffer; // r8
  _WORD *v7; // rcx
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int16 v10; // dx
  bool v11; // cf
  char *v12; // rbx
  _DWORD *v13; // rax
  __int64 v14; // r14
  __int64 v15; // rbp
  unsigned int v16; // r9d
  __int64 v17; // rdi
  unsigned int v18; // ecx
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  unsigned int v22; // eax
  unsigned int v24; // esi
  _DWORD *v25; // rcx
  __int64 v26; // rdi
  _NT_PRODUCT_TYPE NtProductType[76]; // [rsp+20h] [rbp-178h] BYREF

  memset(&NtProductType[4], 0, 0x11CuLL);
  v4 = NtCurrentPeb();
  NtProductType[5] = (_NT_PRODUCT_TYPE)v4->OSMajorVersion;
  NtProductType[6] = (_NT_PRODUCT_TYPE)v4->OSMinorVersion;
  NtProductType[7] = v4->OSBuildNumber;
  OSPlatformId = v4->OSPlatformId;
  Buffer = v4->CSDVersion.Buffer;
  NtProductType[8] = OSPlatformId;
  if ( Buffer && *Buffer )
    RtlStringCbCopyW(&NtProductType[9], 256LL, Buffer);
  if ( ((NtProductType[4] - 284) & 0xFFFFFFF7) == 0 )
    RtlGetNtProductType(NtProductType);
  v7 = &unk_180113456;
  v8 = -1LL;
  v9 = 0LL;
  while ( 1 )
  {
    v10 = *(v7 - 1);
    v11 = LOWORD(NtProductType[5]) < v10;
    if ( LOWORD(NtProductType[5]) <= v10 )
    {
      if ( LOWORD(NtProductType[5]) != v10 )
        goto LABEL_39;
      if ( LOWORD(NtProductType[6]) < *v7 )
        break;
    }
    v8 = v9;
LABEL_9:
    ++v9;
    v7 += 16;
    if ( v9 >= 5 )
      goto LABEL_10;
  }
  v11 = LOWORD(NtProductType[5]) < v10;
LABEL_39:
  if ( !v11 && (LOWORD(NtProductType[5]) != v10 || LOWORD(NtProductType[6]) >= *v7) )
    goto LABEL_9;
LABEL_10:
  if ( v8 == -1 )
    v12 = (char *)&SbSupportedOsList;
  else
    v12 = (char *)&SbSupportedOsList + 32 * v8;
  v13 = *(_DWORD **)(a2 + 24);
  v14 = 0LL;
  if ( !*v13 )
    return 1LL;
  while ( 1 )
  {
    v15 = *(_QWORD *)&v13[2 * v14 + 2];
    if ( v15 )
    {
      v16 = *(_DWORD *)(v15 + 68);
      v17 = 0LL;
      if ( v16 )
      {
        while ( 2 )
        {
          v18 = 0;
          v19 = 8 * v17;
          do
          {
            v20 = *(_QWORD *)(v15 + 16 * (v19 + v18) + 120) - *(_QWORD *)(v12 + 4);
            if ( !v20 )
              v20 = *(_QWORD *)(v15 + 16 * (v19 + v18) + 128) - *(_QWORD *)(v12 + 12);
            if ( !v20 )
            {
              v21 = (unsigned __int64)(unsigned int)v17 << 7;
              if ( !*(_QWORD *)(v21 + v15 + 80) && *(_DWORD *)(v21 + v15 + 88) == 2 )
                *(_QWORD *)(v21 + v15 + 80) = SbpResolveBasedOnName(*(_QWORD *)(v21 + v15 + 72));
              *(_QWORD *)(a1 + 8 * v14 + 16) = v21 + v15 + 72;
              goto LABEL_24;
            }
            ++v18;
          }
          while ( v18 < 4 );
          v17 = (unsigned int)(v17 + 1);
          if ( (unsigned int)v17 < v16 )
            continue;
          break;
        }
      }
LABEL_24:
      v22 = *(_DWORD *)(v15 + 68);
      if ( (unsigned int)v17 >= v22 )
      {
        v24 = 0;
        if ( v22 )
        {
          v25 = (_DWORD *)(v15 + 104);
          while ( !*v25 )
          {
            ++v24;
            v25 += 32;
            if ( v24 >= v22 )
              goto LABEL_32;
          }
          v26 = v15 + ((unsigned __int64)v24 << 7);
          if ( !*(_QWORD *)(v26 + 80) && *(_DWORD *)(v26 + 88) == 2 )
            *(_QWORD *)(v26 + 80) = SbpResolveBasedOnName(*(_QWORD *)(v26 + 72));
          *(_QWORD *)(a1 + 8 * v14 + 16) = v26 + 72;
        }
LABEL_32:
        if ( v24 >= *(_DWORD *)(v15 + 68) )
          return 0LL;
      }
    }
    v13 = *(_DWORD **)(a2 + 24);
    v14 = (unsigned int)(v14 + 1);
    if ( (unsigned int)v14 >= *v13 )
      return 1LL;
  }
}
