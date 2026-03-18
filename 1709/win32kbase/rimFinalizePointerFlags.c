/*
 * XREFs of rimFinalizePointerFlags @ 0x1C0111C78
 * Callers:
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C010FDC4 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     rimPenButtonsPolicyApply @ 0x1C0111FF0 (rimPenButtonsPolicyApply.c)
 *     RIMCmGetButtonContact @ 0x1C0115794 (RIMCmGetButtonContact.c)
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1C01157AC (RIMCmIsButtonContactActiveAndNotSuppressed.c)
 */

__int64 __fastcall rimFinalizePointerFlags(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // r9d
  int v4; // r10d
  int v5; // eax
  __int64 result; // rax
  __int64 v7; // r11
  int v8; // ecx

  v3 = a3[655];
  v4 = a3[601];
  if ( (v3 & 2) == 0 && a3[2] && (v4 & 0x2000000) != 0 )
  {
    a3[601] = v4 & 0x3000000;
  }
  else
  {
    if ( (a3[2] & 0x10) == 0 )
    {
      a3[601] = v4 | 0x4000;
      a3[8] |= 1u;
    }
    if ( (v4 & 4) != 0 && (v3 & 4) == 0 )
    {
      a3[601] |= 0x10000u;
    }
    else if ( (v4 & 4) == 0 && (v3 & 4) != 0 )
    {
      a3[601] |= 0x40000u;
    }
    else
    {
      a3[601] |= 0x20000u;
    }
    if ( (a3[8] & 8) != 0 && *(_QWORD *)(a1 + 608) == a2 )
      a3[601] |= 0x2000u;
  }
  v5 = a3[601];
  if ( (v5 & 0x1000000) == 0 )
    a3[601] = v5 & 0xFDFFFFFF;
  result = (unsigned int)a3[8];
  if ( (result & 4) == 0 )
  {
    if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
    {
      v8 = *(_DWORD *)(RIMCmGetButtonContact(v7) + 2404);
      if ( (v8 & 0x10) != 0 )
        a3[601] |= 0x10u;
      if ( (v8 & 0x20) != 0 )
        a3[601] |= 0x20u;
      if ( (v8 & 0x40) != 0 )
        a3[601] |= 0x40u;
    }
    result = (unsigned int)(*(_DWORD *)(v7 + 24) - 5);
    if ( (unsigned int)result <= 1 )
      result = rimPenButtonsPolicyApply(v7, a3);
  }
  a3[601] &= ~0x1000000u;
  return result;
}
