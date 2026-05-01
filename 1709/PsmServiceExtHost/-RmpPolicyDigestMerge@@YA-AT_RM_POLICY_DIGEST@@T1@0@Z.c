/*
 * XREFs of ?RmpPolicyDigestMerge@@YA?AT_RM_POLICY_DIGEST@@T1@0@Z @ 0x1800148C0
 * Callers:
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180014730 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RmpPolicyDigestMerge(__int16 a1, __int16 a2)
{
  __int16 v2; // r10
  __int16 v3; // r9
  __int16 v4; // r8
  __int16 v5; // ax
  __int16 v6; // ax
  __int16 v7; // r8
  __int16 v8; // r9
  __int16 v9; // ax
  __int16 v10; // r9
  __int16 v11; // r8
  __int16 v12; // ax
  __int16 v13; // r8

  v2 = 0;
  if ( (a1 & 1) != 0 || (a2 & 1) != 0 )
  {
    v3 = 1;
    v4 = 5;
  }
  else
  {
    v3 = 0;
    v4 = 4;
  }
  if ( (a1 & 2) != 0 && (a2 & 2) != 0 )
    v5 = 2;
  else
    v5 = 0;
  if ( (a1 & 4) == 0 || (a2 & 4) == 0 )
    v4 = v3;
  v6 = v4 | v5;
  if ( (a1 & 8) != 0 || (a2 & 8) != 0 )
  {
    v7 = 8;
    v8 = 24;
  }
  else
  {
    v7 = 0;
    v8 = 16;
  }
  if ( (a1 & 0x10) != 0 || (a2 & 0x10) != 0 )
    v9 = v8 | v6;
  else
    v9 = v7 | v6;
  if ( (a1 & 0x20) != 0 && (a2 & 0x20) != 0 )
  {
    v10 = 32;
    v11 = 96;
  }
  else
  {
    v10 = 0;
    v11 = 64;
  }
  if ( (a1 & 0x40) == 0 || (a2 & 0x40) == 0 )
    v11 = v10;
  v12 = v11 | v9;
  if ( (a1 & 0x80u) != 0 || (a2 & 0x80u) != 0 )
  {
    v2 = 128;
    v13 = 384;
  }
  else
  {
    v13 = 256;
  }
  if ( (a1 & 0x100) != 0 || (a2 & 0x100) != 0 )
    return v13 | v12;
  else
    return v2 | v12;
}
