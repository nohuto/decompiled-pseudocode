/*
 * XREFs of SepRemoveDisabledGroupsAndPrivileges @ 0x14045AA90
 * Callers:
 *     SepFilterToken @ 0x14045B120 (SepFilterToken.c)
 * Callees:
 *     SepTokenPrivilegeCount @ 0x140014400 (SepTokenPrivilegeCount.c)
 *     SepSidInSidAndAttributes @ 0x14045AC68 (SepSidInSidAndAttributes.c)
 *     RtlIsElevatedRid @ 0x140486B30 (RtlIsElevatedRid.c)
 */

char __fastcall SepRemoveDisabledGroupsAndPrivileges(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  char v6; // r15
  char v7; // bp
  unsigned int v8; // esi
  unsigned int v10; // r13d
  __int64 v13; // r9
  __int64 v14; // rdi
  int v15; // edi
  unsigned int v16; // esi
  __int64 v19; // r8
  int v20; // r11d
  unsigned __int64 v21; // rax

  v6 = 0;
  v7 = 0;
  v8 = 0;
  v10 = a3;
  if ( *(_DWORD *)(a1 + 124) )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(a1 + 152);
      v14 = 16LL * v8;
      if ( (*(_DWORD *)(v13 + v14 + 8) & 0x30) == 0
        && (unsigned __int8)SepSidInSidAndAttributes(a4, v10, a3, *(_QWORD *)(v13 + 16LL * v8)) )
      {
        goto LABEL_12;
      }
      if ( (a2 & 4) != 0 && RtlIsElevatedRid((PSID_AND_ATTRIBUTES)(v14 + *(_QWORD *)(a1 + 152))) )
        break;
LABEL_5:
      if ( ++v8 >= *(_DWORD *)(a1 + 124) )
        goto LABEL_6;
    }
    v6 = 1;
LABEL_12:
    v7 = 1;
    *(_DWORD *)(*(_QWORD *)(a1 + 152) + v14 + 8) &= 0xFFFFFFF0;
    *(_DWORD *)(*(_QWORD *)(a1 + 152) + v14 + 8) |= 0x10u;
    *(_DWORD *)(a1 + 200) |= 0x800u;
    if ( v8 == *(_DWORD *)(a1 + 144) )
      *(_DWORD *)(a1 + 144) = 0;
    goto LABEL_5;
  }
LABEL_6:
  v15 = *(_DWORD *)(a1 + 200) & 0x800;
  if ( v15 )
    v16 = 0;
  else
    v16 = SepTokenPrivilegeCount(a1);
  if ( (a2 & 1) != 0 )
  {
    v7 = 1;
    *(_QWORD *)(a1 + 72) &= 0x800000uLL;
    *(_QWORD *)(a1 + 80) &= 0x800000uLL;
    *(_QWORD *)(a1 + 64) &= 0x800000uLL;
  }
  else
  {
    if ( (a2 & 4) != 0 )
    {
      v7 = 1;
      v21 = 0x602880000LL;
      if ( !v6 )
        v21 = 0xFFFFFFEEDFE9F97BuLL;
      *(_QWORD *)(a1 + 72) &= v21;
      *(_QWORD *)(a1 + 80) &= v21;
      *(_QWORD *)(a1 + 64) &= v21;
    }
    if ( a5 )
    {
      v19 = a5;
      do
      {
        if ( (unsigned int)(*a6 - 2) <= 0x22 )
        {
          *(_QWORD *)(a1 + 72) &= ~(1LL << *a6);
          *(_QWORD *)(a1 + 64) &= ~(1LL << *a6);
        }
        a6 += 3;
        --v19;
      }
      while ( v19 );
    }
  }
  if ( !v15 && (unsigned int)SepTokenPrivilegeCount(a1) < v16 )
    *(_DWORD *)(a1 + 200) = v20 | 0x800;
  return v7;
}
