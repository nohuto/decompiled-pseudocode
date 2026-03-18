/*
 * XREFs of SmProcessConfigRequest @ 0x1407383A8
 * Callers:
 *     SmSetStoreInformation @ 0x140571F70 (SmSetStoreInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     SmpSystemStoreCreate @ 0x140739E04 (SmpSystemStoreCreate.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessConfigRequest(unsigned __int64 a1, int a2, KPROCESSOR_MODE a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx

  if ( a2 != 8 )
    return (unsigned int)-1073741306;
  v4 = 0;
  if ( a3 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v5 = a1;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *(_BYTE *)(v5 + 7) = *(_BYTE *)(v5 + 7);
  }
  v6 = *(_QWORD *)a1;
  if ( (_BYTE)v6 != 3 )
    return (unsigned int)-1073741735;
  if ( (v6 & 0xFFFF00) != 0 )
    return (unsigned int)-1073741811;
  v7 = BYTE3(v6);
  if ( BYTE3(v6) >= 3u )
    return (unsigned int)-1073741811;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        return v4;
      v9 = HIDWORD(v6);
      if ( (unsigned int)(v9 - 4) <= 0x1C && (((_DWORD)v9 - 1) & (unsigned int)v9) == 0 )
      {
        dword_14038913C = v9;
        return v4;
      }
    }
    else
    {
      v10 = HIDWORD(v6);
      if ( (unsigned int)v10 <= 1 )
      {
        PspOutSwapSharedPages = v10;
        return v4;
      }
    }
    return (unsigned int)-1073741811;
  }
  v11 = HIDWORD(v6);
  if ( (unsigned int)v11 >= 0x80 || (((unsigned int)v11 >> 2) & 3) == 3 || (((unsigned int)v11 >> 4) & 3) == 3 )
    return (unsigned int)-1073741811;
  if ( ((((unsigned int)v11 >> 2) & 3) == 2 || (((unsigned int)v11 >> 4) & 3) == 2)
    && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a3) )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    dword_14041B170 = v11 & 0x40 | dword_14041B170 & 0xFFFFFF80 | ((unsigned int)v11 >> 2) & 0xF | (16 * (v11 & 3));
    if ( (dword_14041B170 & 3) != 0 )
      SmpSystemStoreCreate();
  }
  return v4;
}
