/*
 * XREFs of RaidGetStartIoPerfParams @ 0x1C001C3B0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B3F0 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0030340 (WPP_SF_.c)
 */

__int64 __fastcall RaidGetStartIoPerfParams(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // ecx
  PDEVICE_OBJECT v10; // rcx
  __int64 v11; // rdx
  int v12; // ecx

  if ( !a1 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v11 = 34LL;
    goto LABEL_22;
  }
  if ( !a2 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v11 = 35LL;
    goto LABEL_22;
  }
  if ( !a3 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v11 = 36LL;
    goto LABEL_22;
  }
  a4 = (unsigned int)a3[1];
  if ( (unsigned int)a4 < 0x10 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v11 = 37LL;
    goto LABEL_22;
  }
  v4 = **(_QWORD **)(a1 - 16);
  if ( !v4 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v11 = 38LL;
    goto LABEL_22;
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v5 = *(_QWORD *)(a2 + 96);
  else
    v5 = *(_QWORD *)(a2 + 48);
  if ( !v5 )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return 3238002694LL;
    }
    v11 = 39LL;
LABEL_22:
    WPP_SF_(v10->AttachedDevice, v11, &WPP_43677b6b8a68310e2fabd5fd066069ea_Traceguids, a4);
    return 3238002694LL;
  }
  v6 = *(_DWORD *)(v5 + 18);
  if ( (unsigned int)a4 >= 0x14 && *a3 == 2 )
    a3[4] = v6;
  else
    *a3 = 1;
  v7 = *(_QWORD *)(v5 + 24);
  if ( v7 )
    v8 = *(_DWORD *)(v7 + 20);
  else
    v8 = 0;
  a3[3] = v8;
  if ( (*(_BYTE *)(v4 + 4740) & 2) == 0
    || (unsigned __int16)v6 >= *(_WORD *)(v4 + 4742)
    || (v12 = *(unsigned __int8 *)(((unsigned __int64)(unsigned __int16)v6 << 6) + BYTE2(v6) + *(_QWORD *)(v4 + 4760)),
        a3[2] = v12,
        v12 == 255) )
  {
    a3[2] = 0;
  }
  return 0LL;
}
