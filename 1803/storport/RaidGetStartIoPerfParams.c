/*
 * XREFs of RaidGetStartIoPerfParams @ 0x1C0017150
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0002880 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C002BFFC (WPP_SF_.c)
 */

__int64 __fastcall RaidGetStartIoPerfParams(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // rcx
  int v6; // eax
  unsigned __int16 v7; // r11
  __int64 v8; // rdx
  int v9; // ecx
  PDEVICE_OBJECT v11; // rcx
  __int64 v12; // rdx
  int v13; // edx

  if ( !a1 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v12 = 34LL;
    goto LABEL_22;
  }
  if ( !a2 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v12 = 35LL;
    goto LABEL_22;
  }
  if ( !a3 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v12 = 36LL;
    goto LABEL_22;
  }
  v3 = a3[1];
  if ( v3 < 0x10 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v12 = 37LL;
    goto LABEL_22;
  }
  v4 = **(_QWORD **)(a1 - 16);
  if ( !v4 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v12 = 38LL;
    goto LABEL_22;
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v5 = *(_QWORD *)(a2 + 96);
  else
    v5 = *(_QWORD *)(a2 + 48);
  if ( !v5 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v12 = 39LL;
LABEL_22:
    WPP_SF_(v11->AttachedDevice, v12, &WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids);
    return 3238002694LL;
  }
  v6 = *(_DWORD *)(v5 + 18);
  v7 = v6;
  if ( v3 >= 0x14 && (v7 = v6, *a3 == 2) )
    a3[4] = v6;
  else
    *a3 = 1;
  v8 = *(_QWORD *)(v5 + 24);
  if ( v8 )
    v9 = *(_DWORD *)(v8 + 20);
  else
    v9 = 0;
  a3[3] = v9;
  if ( (*(_BYTE *)(v4 + 4740) & 2) == 0
    || v7 >= *(_WORD *)(v4 + 4742)
    || (v13 = *(unsigned __int8 *)((v7 << 6) + (unsigned int)BYTE2(v6) + *(_QWORD *)(v4 + 4760)), a3[2] = v13,
                                                                                                  v13 == 255) )
  {
    a3[2] = 0;
  }
  return 0LL;
}
