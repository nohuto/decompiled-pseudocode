/*
 * XREFs of SepRemoveDisabledGroupsAndPrivileges @ 0x140547274
 * Callers:
 *     SepFilterToken @ 0x140542044 (SepFilterToken.c)
 * Callees:
 *     SepTokenPrivilegeCount @ 0x1400A0920 (SepTokenPrivilegeCount.c)
 *     RtlIsElevatedRid @ 0x1404C2450 (RtlIsElevatedRid.c)
 *     SepSidInSidAndAttributes @ 0x140547488 (SepSidInSidAndAttributes.c)
 */

char __fastcall SepRemoveDisabledGroupsAndPrivileges(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v6; // esi
  char v7; // r13
  char v8; // r15
  unsigned int v9; // edi
  __int64 v10; // r10
  __int64 v13; // r9
  char v14; // si
  __int64 v15; // r14
  int v16; // r11d
  __int64 v18; // rbp
  int v19; // r10d
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v24; // r8
  unsigned int v25; // [rsp+70h] [rbp+18h]

  v25 = a3;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = a4;
  if ( *(_DWORD *)(a1 + 124) )
  {
    do
    {
      v13 = *(_QWORD *)(a1 + 152);
      v14 = 0;
      v15 = 16LL * v9;
      if ( (*(_DWORD *)(v15 + v13 + 8) & 0x30) == 0 )
        v14 = SepSidInSidAndAttributes(v10, (unsigned int)a3, a3, *(_QWORD *)(v15 + v13));
      if ( v14 )
        goto LABEL_17;
      if ( (a2 & 4) != 0 && RtlIsElevatedRid((PSID_AND_ATTRIBUTES)(v15 + *(_QWORD *)(a1 + 152))) )
      {
        v7 = 1;
        v14 = 1;
      }
      if ( v14 )
      {
LABEL_17:
        v18 = 2LL * v9;
        v8 = 1;
        *(_DWORD *)(*(_QWORD *)(a1 + 152) + 8 * v18 + 8) &= 0xFFFFFFF0;
        *(_DWORD *)(*(_QWORD *)(a1 + 152) + 8 * v18 + 8) |= 0x10u;
        *(_DWORD *)(a1 + 200) |= 0x800u;
        if ( v9 == *(_DWORD *)(a1 + 144) )
          *(_DWORD *)(a1 + 144) = 0;
      }
      v10 = a4;
      ++v9;
      a3 = v25;
    }
    while ( v9 < *(_DWORD *)(a1 + 124) );
    v6 = 0;
  }
  v16 = *(_DWORD *)(a1 + 200) & 0x800;
  if ( !v16 )
    v6 = SepTokenPrivilegeCount(a1);
  if ( (a2 & 1) != 0 )
  {
    v8 = 1;
    *(_QWORD *)(a1 + 72) &= 0x800000uLL;
    *(_QWORD *)(a1 + 80) &= 0x800000uLL;
    *(_QWORD *)(a1 + 64) &= 0x800000uLL;
  }
  else
  {
    if ( (a2 & 4) != 0 )
    {
      v8 = 1;
      v20 = 0x602880000LL;
      if ( !v7 )
        v20 = 0xFFFFFFEEDFE9F97BuLL;
      v21 = v20 & *(_QWORD *)(a1 + 72);
      v22 = v20 & *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 80) &= v20;
      *(_QWORD *)(a1 + 64) = v22;
      *(_QWORD *)(a1 + 72) = v21;
    }
    if ( a5 )
    {
      v24 = a5;
      do
      {
        if ( (unsigned int)(*a6 - 2) <= 0x22 )
        {
          *(_QWORD *)(a1 + 72) &= ~(1LL << *a6);
          *(_QWORD *)(a1 + 64) &= ~(1LL << *a6);
        }
        a6 += 3;
        --v24;
      }
      while ( v24 );
    }
  }
  if ( !v16 && (unsigned int)SepTokenPrivilegeCount(a1) < v6 )
    *(_DWORD *)(a1 + 200) = v19 | 0x800;
  return v8;
}
