/*
 * XREFs of IcCheckIrqConflict @ 0x1C0091F80
 * Callers:
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C008E908 (ProcessorpFindAffinitizedIdtEntries.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     IcIsActiveBothPrimaryInterrupt @ 0x1C00925D8 (IcIsActiveBothPrimaryInterrupt.c)
 */

__int64 __fastcall IcCheckIrqConflict(unsigned int a1, int a2, unsigned __int8 a3, _BYTE *a4)
{
  __int64 v4; // r10
  __int64 *v6; // rdx
  unsigned int v9; // ebx
  int v10; // eax
  char v12; // si
  __int64 v13; // r8
  char v14; // si
  unsigned int v15; // r9d
  _DWORD *v16; // rax
  unsigned int v17; // r8d
  _DWORD *v18; // rax
  __int64 v19; // r8
  unsigned int v20; // r9d
  __int16 v21; // r11
  int v22; // eax
  int v23; // r9d
  char IsActiveBothPrimaryInterrupt; // al
  unsigned int v25; // r8d
  __int64 v26; // r10
  __int16 v27; // r11
  int v28; // r9d
  int v29; // r9d
  int v30; // eax

  v4 = IcListHead;
  v6 = &IcListHead;
  if ( &IcListHead != (__int64 *)IcListHead )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = *(_DWORD *)(v4 + 28);
      if ( v10 >= 0 && a1 >= *(_DWORD *)(v4 + 16) && a1 <= *(_DWORD *)(v4 + 20) )
        break;
      v4 = *(_QWORD *)v4;
      if ( &IcListHead == (__int64 *)v4 )
        goto LABEL_7;
    }
    v12 = (a3 >> 1) & ((v10 & 4) == 0);
    v13 = IcListHead;
    v14 = v12 & 1;
    while ( 1 )
    {
      if ( &IcListHead == (__int64 *)v13 )
        goto LABEL_19;
      if ( *(int *)(v13 + 28) >= 0 && v4 != v13 )
      {
        v15 = 0;
        if ( *(_DWORD *)(v13 + 20) - *(_DWORD *)(v13 + 16) != -1 )
          break;
      }
LABEL_17:
      v13 = *(_QWORD *)v13;
    }
    v16 = (_DWORD *)(v13 + 140);
    while ( !*(v16 - 26) || *v16 != a2 )
    {
      ++v15;
      v16 += 50;
      if ( v15 >= *(_DWORD *)(v13 + 20) - *(_DWORD *)(v13 + 16) + 1 )
        goto LABEL_17;
    }
    if ( v14 || (unsigned __int8)IcIsActiveBothPrimaryInterrupt(v13, v15) )
    {
      v23 = 10;
      goto LABEL_33;
    }
    v22 = *(_DWORD *)(200LL * v20 + v19 + 152);
    if ( !v22 && v21 || v22 == 1 && !v21 )
    {
      v23 = 11;
LABEL_33:
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v6,
        20,
        v23,
        (__int64)&WPP_15d851d117d939b56880e6ec3ae23c9a_Traceguids);
      goto LABEL_8;
    }
LABEL_19:
    v17 = 0;
    if ( *(_DWORD *)(v4 + 20) - *(_DWORD *)(v4 + 16) == -1 )
      goto LABEL_37;
    v18 = (_DWORD *)(v4 + 140);
    while ( !*(v18 - 26) || *v18 != a2 )
    {
      ++v17;
      v18 += 50;
      if ( v17 >= *(_DWORD *)(v4 + 20) - *(_DWORD *)(v4 + 16) + 1 )
        goto LABEL_37;
    }
    IsActiveBothPrimaryInterrupt = IcIsActiveBothPrimaryInterrupt(v4, v17);
    if ( a1 == v28 + v25 )
    {
      v29 = 12;
LABEL_36:
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v6,
        20,
        v29,
        (__int64)&WPP_15d851d117d939b56880e6ec3ae23c9a_Traceguids);
LABEL_37:
      *a4 = 0;
      return 0LL;
    }
    if ( v14 || IsActiveBothPrimaryInterrupt )
    {
      v23 = 13;
      goto LABEL_33;
    }
    v30 = *(_DWORD *)(200LL * v25 + v26 + 152);
    if ( v30 || !v27 )
    {
      if ( v30 == 1 )
      {
        if ( !v27 )
          goto LABEL_44;
      }
      else if ( !v27 && (*(_DWORD *)(v26 + 28) & 2) != 0 )
      {
        v29 = 15;
        goto LABEL_36;
      }
      if ( (v27 & 1) == 0 || (*(_BYTE *)(v26 + 28) & 1) == 0 )
      {
        v23 = 17;
        goto LABEL_33;
      }
      v29 = 16;
      goto LABEL_36;
    }
LABEL_44:
    v23 = 14;
    goto LABEL_33;
  }
LABEL_7:
  v9 = -1073741275;
LABEL_8:
  *a4 = 1;
  return v9;
}
