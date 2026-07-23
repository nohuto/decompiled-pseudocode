/*
 * XREFs of sub_180039480 @ 0x180039480
 * Callers:
 *     SbSelectProcedure @ 0x180039270 (SbSelectProcedure.c)
 * Callees:
 *     RtlGetVersion @ 0x1800396A0 (RtlGetVersion.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_180106674 @ 0x180106674 (sub_180106674.c)
 */

__int64 __fastcall sub_180039480(__int64 a1, __int64 a2)
{
  _WORD *v4; // rcx
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int16 v7; // dx
  bool v8; // cf
  char *v9; // rbx
  _DWORD *v10; // rax
  __int64 v11; // r14
  __int64 v12; // rbp
  unsigned int v13; // r9d
  __int64 v14; // rdi
  unsigned int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  unsigned int v19; // eax
  unsigned int v21; // esi
  _DWORD *v22; // rcx
  __int64 v23; // rdi
  _OSVERSIONINFOEXW VersionInformation; // [rsp+20h] [rbp-168h] BYREF

  memset(&VersionInformation, 0, sizeof(VersionInformation));
  if ( RtlGetVersion(&VersionInformation) < 0 )
    return 0LL;
  v4 = &unk_180110286;
  v5 = -1LL;
  v6 = 0LL;
  while ( 1 )
  {
    v7 = *(v4 - 1);
    v8 = LOWORD(VersionInformation.dwMajorVersion) < v7;
    if ( LOWORD(VersionInformation.dwMajorVersion) <= v7 )
    {
      if ( LOWORD(VersionInformation.dwMajorVersion) != v7 )
        goto LABEL_37;
      if ( LOWORD(VersionInformation.dwMinorVersion) < *v4 )
        break;
    }
    v5 = v6;
LABEL_5:
    ++v6;
    v4 += 16;
    if ( v6 >= 5 )
      goto LABEL_6;
  }
  v8 = LOWORD(VersionInformation.dwMajorVersion) < v7;
LABEL_37:
  if ( !v8 && (LOWORD(VersionInformation.dwMajorVersion) != v7 || LOWORD(VersionInformation.dwMinorVersion) >= *v4) )
    goto LABEL_5;
LABEL_6:
  if ( v5 == -1 )
    v9 = (char *)&unk_180110270;
  else
    v9 = (char *)&unk_180110270 + 32 * v5;
  v10 = *(_DWORD **)(a2 + 24);
  v11 = 0LL;
  if ( !*v10 )
    return 1LL;
  while ( 1 )
  {
    v12 = *(_QWORD *)&v10[2 * v11 + 2];
    if ( v12 )
    {
      v13 = *(_DWORD *)(v12 + 68);
      v14 = 0LL;
      if ( v13 )
      {
        while ( 2 )
        {
          v15 = 0;
          v16 = 8 * v14;
          do
          {
            v17 = *(_QWORD *)(v12 + 16 * (v16 + v15) + 120) - *(_QWORD *)(v9 + 4);
            if ( !v17 )
              v17 = *(_QWORD *)(v12 + 16 * (v16 + v15) + 128) - *(_QWORD *)(v9 + 12);
            if ( !v17 )
            {
              v18 = (unsigned __int64)(unsigned int)v14 << 7;
              if ( !*(_QWORD *)(v18 + v12 + 80) && *(_DWORD *)(v18 + v12 + 88) == 2 )
                *(_QWORD *)(v18 + v12 + 80) = sub_180106674(*(_QWORD *)(v18 + v12 + 72));
              *(_QWORD *)(a1 + 8 * v11 + 16) = v18 + v12 + 72;
              goto LABEL_20;
            }
            ++v15;
          }
          while ( v15 < 4 );
          v14 = (unsigned int)(v14 + 1);
          if ( (unsigned int)v14 < v13 )
            continue;
          break;
        }
      }
LABEL_20:
      v19 = *(_DWORD *)(v12 + 68);
      if ( (unsigned int)v14 >= v19 )
      {
        v21 = 0;
        if ( v19 )
        {
          v22 = (_DWORD *)(v12 + 104);
          while ( !*v22 )
          {
            ++v21;
            v22 += 32;
            if ( v21 >= v19 )
              goto LABEL_29;
          }
          v23 = v12 + ((unsigned __int64)v21 << 7);
          if ( !*(_QWORD *)(v23 + 80) && *(_DWORD *)(v23 + 88) == 2 )
            *(_QWORD *)(v23 + 80) = sub_180106674(*(_QWORD *)(v23 + 72));
          *(_QWORD *)(a1 + 8 * v11 + 16) = v23 + 72;
        }
LABEL_29:
        if ( v21 >= *(_DWORD *)(v12 + 68) )
          return 0LL;
      }
    }
    v10 = *(_DWORD **)(a2 + 24);
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= *v10 )
      return 1LL;
  }
}
