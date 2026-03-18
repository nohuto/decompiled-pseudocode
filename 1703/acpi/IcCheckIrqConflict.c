/*
 * XREFs of IcCheckIrqConflict @ 0x1C00884E0
 * Callers:
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C0085C80 (ProcessorpFindAffinitizedIdtEntries.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008934 (WPP_RECORDER_SF_.c)
 *     IcIsActiveBothPrimaryInterrupt @ 0x1C00A610C (IcIsActiveBothPrimaryInterrupt.c)
 */

__int64 __fastcall IcCheckIrqConflict(unsigned int a1, int a2, unsigned __int8 a3, _BYTE *a4)
{
  __int64 v4; // r10
  __int64 *v6; // rdx
  __int16 v7; // r14
  __int64 v10; // r11
  char v11; // bp
  unsigned int v12; // r8d
  _DWORD *v13; // rax
  unsigned int v14; // r8d
  _DWORD *v15; // rax
  unsigned int v17; // r8d
  __int64 v18; // r10
  int v19; // eax
  int v20; // r9d
  char IsActiveBothPrimaryInterrupt; // al
  unsigned int v22; // r8d
  int v23; // r9d
  __int64 v24; // r11
  int v25; // eax

  v4 = IcListHead;
  v6 = &IcListHead;
  v7 = a3 & 1;
  v10 = IcListHead;
  if ( &IcListHead != (__int64 *)IcListHead )
  {
    while ( *(int *)(v10 + 28) < 0 || a1 < *(_DWORD *)(v10 + 16) || a1 > *(_DWORD *)(v10 + 20) )
    {
      v10 = *(_QWORD *)v10;
      if ( &IcListHead == (__int64 *)v10 )
        goto LABEL_22;
    }
    v11 = (a3 >> 1) & ((*(_BYTE *)(v10 + 28) & 4) == 0);
    if ( &IcListHead != (__int64 *)IcListHead )
    {
      while ( 1 )
      {
        if ( v10 != v4 && *(int *)(v4 + 28) >= 0 )
        {
          v12 = 0;
          if ( *(_DWORD *)(v4 + 20) - *(_DWORD *)(v4 + 16) != -1 )
            break;
        }
LABEL_12:
        v4 = *(_QWORD *)v4;
        if ( &IcListHead == (__int64 *)v4 )
          goto LABEL_13;
      }
      v13 = (_DWORD *)(v4 + 140);
      while ( !*(v13 - 26) || *v13 != a2 )
      {
        ++v12;
        v13 += 50;
        if ( v12 >= *(_DWORD *)(v4 + 20) - *(_DWORD *)(v4 + 16) + 1 )
          goto LABEL_12;
      }
      if ( v11 || (unsigned __int8)IcIsActiveBothPrimaryInterrupt(v4, v12) )
      {
        v20 = 10;
        goto LABEL_31;
      }
      v19 = *(_DWORD *)(200LL * v17 + v18 + 152);
      if ( !v19 && v7 || v19 == 1 && !v7 )
      {
        v20 = 11;
LABEL_31:
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v6,
          20,
          v20,
          (__int64)&WPP_dc5b25ca356c3ef948471439515c7f80_Traceguids);
        *a4 = 1;
        return 0LL;
      }
    }
LABEL_13:
    v14 = 0;
    if ( *(_DWORD *)(v10 + 20) - *(_DWORD *)(v10 + 16) != -1 )
    {
      v15 = (_DWORD *)(v10 + 140);
      while ( !*(v15 - 26) || *v15 != a2 )
      {
        ++v14;
        v15 += 50;
        if ( v14 >= *(_DWORD *)(v10 + 20) - *(_DWORD *)(v10 + 16) + 1 )
          goto LABEL_17;
      }
      IsActiveBothPrimaryInterrupt = IcIsActiveBothPrimaryInterrupt(v10, v14);
      if ( a1 == v23 + v22 )
      {
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v6,
          20,
          12,
          (__int64)&WPP_dc5b25ca356c3ef948471439515c7f80_Traceguids);
        *a4 = 0;
        return 0LL;
      }
      if ( v11 || IsActiveBothPrimaryInterrupt )
      {
        v20 = 13;
        goto LABEL_31;
      }
      v25 = *(_DWORD *)(200LL * v22 + v24 + 152);
      if ( !v25 && v7 )
        goto LABEL_41;
      if ( v25 == 1 )
      {
        if ( !v7 )
        {
LABEL_41:
          v20 = 14;
          goto LABEL_31;
        }
      }
      else if ( !v7 && (*(_DWORD *)(v24 + 28) & 2) != 0 )
      {
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v6,
          20,
          15,
          (__int64)&WPP_dc5b25ca356c3ef948471439515c7f80_Traceguids);
        *a4 = 0;
        return 0LL;
      }
      if ( (v7 & 1) == 0 || (*(_BYTE *)(v24 + 28) & 1) == 0 )
      {
        v20 = 17;
        goto LABEL_31;
      }
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v6,
        20,
        16,
        (__int64)&WPP_dc5b25ca356c3ef948471439515c7f80_Traceguids);
    }
LABEL_17:
    *a4 = 0;
    return 0LL;
  }
LABEL_22:
  *a4 = 1;
  return 3221226021LL;
}
