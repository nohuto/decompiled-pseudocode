/*
 * XREFs of SmProcessConfigRequest @ 0x1406506E8
 * Callers:
 *     SmSetStoreInformation @ 0x14048C880 (SmSetStoreInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     SmpSystemStoreCreate @ 0x140650800 (SmpSystemStoreCreate.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessConfigRequest(unsigned __int64 a1, int a2, KPROCESSOR_MODE a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  unsigned int v7; // eax
  unsigned __int64 v8; // rbx
  unsigned int v10; // eax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbx

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
  if ( (_BYTE)v6 != 4 )
    return (unsigned int)-1073741735;
  if ( (v6 & 0xFFFF00) != 0 )
    return (unsigned int)-1073741811;
  v7 = BYTE3(v6);
  if ( BYTE3(v6) >= 3u )
    return (unsigned int)-1073741811;
  if ( v7 )
  {
    v10 = v7 - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
        return v4;
      v11 = HIDWORD(v6);
      if ( (unsigned int)(v11 - 4) <= 0x1C && (((_DWORD)v11 - 1) & (unsigned int)v11) == 0 )
      {
        dword_1403CC3BC = v11;
        return v4;
      }
    }
    else
    {
      v12 = HIDWORD(v6);
      if ( (unsigned int)v12 <= 1 )
      {
        PspOutSwapSharedPages = v12;
        return v4;
      }
    }
    return (unsigned int)-1073741811;
  }
  v8 = HIDWORD(v6);
  if ( (unsigned int)v8 >= 0x100 || (((unsigned int)v8 >> 2) & 3) == 3 || (((unsigned int)v8 >> 4) & 3) == 3 )
    return (unsigned int)-1073741811;
  if ( ((((unsigned int)v8 >> 2) & 3) == 2 || (((unsigned int)v8 >> 4) & 3) == 2)
    && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a3) )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    dword_140466180 = v8 & 0xC0 | dword_140466180 & 0xFFFFFF00 | ((unsigned int)v8 >> 2) & 0xF | (16 * (v8 & 3));
    if ( (dword_140466180 & 3) != 0 )
      SmpSystemStoreCreate();
  }
  return v4;
}
