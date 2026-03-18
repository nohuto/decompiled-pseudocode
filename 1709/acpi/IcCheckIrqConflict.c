/*
 * XREFs of IcCheckIrqConflict @ 0x1C0093C50
 * Callers:
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C0088610 (ProcessorpFindAffinitizedIdtEntries.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000EA0C (WPP_RECORDER_SF_.c)
 *     IcIsActiveBothPrimaryInterrupt @ 0x1C00A8B98 (IcIsActiveBothPrimaryInterrupt.c)
 */

__int64 __fastcall IcCheckIrqConflict(unsigned int a1, int a2, unsigned __int8 a3, _BYTE *a4)
{
  __int64 v4; // r10
  int v5; // r11d
  __int64 *v6; // rdx
  __int16 v7; // bp
  int v10; // eax
  __int64 v11; // r9
  char v12; // si
  unsigned int v13; // r8d
  _DWORD *v14; // rax
  unsigned int v15; // r8d
  _DWORD *v16; // rax
  unsigned int v18; // r8d
  __int64 v19; // r9
  int v20; // eax
  int v21; // r9d
  char IsActiveBothPrimaryInterrupt; // al
  unsigned int v23; // r8d
  int v24; // r9d
  __int64 v25; // r10
  int v26; // eax

  v4 = IcListHead;
  v5 = a2;
  v6 = &IcListHead;
  v7 = a3 & 1;
  if ( &IcListHead != (__int64 *)IcListHead )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v4 + 28);
      if ( v10 >= 0 && a1 >= *(_DWORD *)(v4 + 16) && a1 <= *(_DWORD *)(v4 + 20) )
        break;
      v4 = *(_QWORD *)v4;
      if ( &IcListHead == (__int64 *)v4 )
        goto LABEL_22;
    }
    v11 = IcListHead;
    v12 = (a3 >> 1) & ((v10 & 4) == 0);
    if ( &IcListHead != (__int64 *)IcListHead )
    {
      while ( 1 )
      {
        if ( v4 != v11 && *(int *)(v11 + 28) >= 0 )
        {
          v13 = 0;
          if ( *(_DWORD *)(v11 + 20) - *(_DWORD *)(v11 + 16) != -1 )
            break;
        }
LABEL_12:
        v11 = *(_QWORD *)v11;
        if ( &IcListHead == (__int64 *)v11 )
          goto LABEL_13;
      }
      v14 = (_DWORD *)(v11 + 140);
      while ( !*(v14 - 26) || *v14 != v5 )
      {
        ++v13;
        v14 += 50;
        if ( v13 >= *(_DWORD *)(v11 + 20) - *(_DWORD *)(v11 + 16) + 1 )
          goto LABEL_12;
      }
      if ( v12 || (unsigned __int8)IcIsActiveBothPrimaryInterrupt(v11, v13) )
      {
        v21 = 10;
        goto LABEL_32;
      }
      v20 = *(_DWORD *)(200LL * v18 + v19 + 152);
      if ( !v20 )
      {
        if ( !v7 )
          goto LABEL_13;
        goto LABEL_31;
      }
      if ( v20 == 1 && !v7 )
      {
LABEL_31:
        v21 = 11;
LABEL_32:
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v6,
          20,
          v21,
          (__int64)&WPP_dc5b25ca356c3ef948471439515c7f80_Traceguids);
        *a4 = 1;
        return 0LL;
      }
    }
LABEL_13:
    v15 = 0;
    if ( *(_DWORD *)(v4 + 20) - *(_DWORD *)(v4 + 16) == -1 )
      goto LABEL_17;
    v16 = (_DWORD *)(v4 + 140);
    while ( !*(v16 - 26) || *v16 != v5 )
    {
      ++v15;
      v16 += 50;
      if ( v15 >= *(_DWORD *)(v4 + 20) - *(_DWORD *)(v4 + 16) + 1 )
        goto LABEL_17;
    }
    IsActiveBothPrimaryInterrupt = IcIsActiveBothPrimaryInterrupt(v4, v15);
    if ( a1 == v24 + v23 )
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
    if ( v12 || IsActiveBothPrimaryInterrupt )
    {
      v21 = 13;
      goto LABEL_32;
    }
    v26 = *(_DWORD *)(200LL * v23 + v25 + 152);
    if ( v26 )
    {
      if ( v26 == 1 )
      {
        if ( !v7 )
        {
LABEL_43:
          v21 = 14;
          goto LABEL_32;
        }
        goto LABEL_47;
      }
      if ( v7 )
      {
LABEL_47:
        if ( (v7 & 1) == 0 || (*(_BYTE *)(v25 + 28) & 1) == 0 )
        {
          v21 = 17;
          goto LABEL_32;
        }
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v6,
          20,
          16,
          (__int64)&WPP_dc5b25ca356c3ef948471439515c7f80_Traceguids);
LABEL_17:
        *a4 = 0;
        return 0LL;
      }
    }
    else if ( v7 )
    {
      goto LABEL_43;
    }
    if ( (*(_DWORD *)(v25 + 28) & 2) != 0 )
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
    goto LABEL_47;
  }
LABEL_22:
  *a4 = 1;
  return 3221226021LL;
}
