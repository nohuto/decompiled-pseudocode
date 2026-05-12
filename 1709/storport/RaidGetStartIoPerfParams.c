/*
 * XREFs of RaidGetStartIoPerfParams @ 0x1C001CD70
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CB50 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003096C (WPP_SF_.c)
 */

__int64 __fastcall RaidGetStartIoPerfParams(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // ecx
  int v10; // edx
  PDEVICE_OBJECT v11; // rcx
  __int64 v12; // rdx

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
    goto LABEL_24;
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
    goto LABEL_24;
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
    goto LABEL_24;
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
    goto LABEL_24;
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
    goto LABEL_24;
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
LABEL_24:
    WPP_SF_(v11->AttachedDevice, v12, &WPP_d17971f34b7c3fdc440c591ea55cafdf_Traceguids);
    return 3238002694LL;
  }
  v6 = *(_DWORD *)(v5 + 18);
  if ( v3 >= 0x14 && *a3 == 2 )
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
    || (v10 = *(unsigned __int8 *)(((unsigned __int16)v6 << 6) + (unsigned int)BYTE2(v6) + *(_QWORD *)(v4 + 4760)),
        a3[2] = v10,
        v10 == 255) )
  {
    a3[2] = 0;
  }
  return 0LL;
}
