/*
 * XREFs of ?OnTouchSessionBegin@EdgeGestureTarget@@AEAAJAEBUTouchInfo@@@Z @ 0x18002D880
 * Callers:
 *     ?OnTouchInfo@EdgeGestureTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x18002D700 (-OnTouchInfo@EdgeGestureTarget@@UEAAJPEAUTouchInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?SplashHitTest@EdgeGestureComponent@@AEAA_NKKPEAI@Z @ 0x18002AAC0 (-SplashHitTest@EdgeGestureComponent@@AEAA_NKKPEAI@Z.c)
 *     ?GetCandidate@Edges@@QEAA_NPEAXPEBUD2D_VECTOR_2F@@PEAPEAX@Z @ 0x18002B4E8 (-GetCandidate@Edges@@QEAA_NPEAXPEBUD2D_VECTOR_2F@@PEAPEAX@Z.c)
 *     ?GetOrientationBias@EdgeGestureTarget@@AEBA?AW4OrientationBias@@XZ @ 0x18002DB0C (-GetOrientationBias@EdgeGestureTarget@@AEBA-AW4OrientationBias@@XZ.c)
 *     ?GestureRecognizerReadConfigValue@@YAJW4GestureRecognizerConfigSetting@@PEAUGestureRecognizerConfigValue@@@Z @ 0x18004475C (-GestureRecognizerReadConfigValue@@YAJW4GestureRecognizerConfigSetting@@PEAUGestureRecognizerCon.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgeGestureTarget::OnTouchSessionBegin(EdgeGestureTarget *this, const struct TouchInfo *a2)
{
  int v4; // esi
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // r9d
  __int64 v8; // rcx
  int **v9; // rdx
  unsigned int v10; // r8d
  unsigned int v11; // edx
  unsigned int v12; // edx
  int v13; // ecx
  int v14; // r11d
  _DWORD *v15; // r9
  unsigned int v16; // edx
  unsigned int v17; // r10d
  int v18; // r8d
  int v19; // edx
  int v20; // ecx
  int OrientationBias; // eax
  __int64 v22; // rdx
  int v23; // eax
  int v24; // r9d
  unsigned int v25; // eax
  unsigned int v27; // [rsp+50h] [rbp+8h] BYREF
  __int16 v28; // [rsp+54h] [rbp+Ch]

  v4 = 0;
  v5 = 0;
  if ( !*((_WORD *)this + 24) )
  {
    v6 = GestureRecognizerReadConfigValue(3LL, &v27);
    v5 = v6;
    if ( v6 >= 0 )
    {
      *((_WORD *)this + 24) = v28;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 667, v6);
    }
  }
  if ( (v5 & 0x80000000) != 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 516;
LABEL_9:
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v7, v5);
      return v5;
    }
    return v5;
  }
  v8 = *((_QWORD *)this + 8);
  *((_DWORD *)this + 10) = 1;
  if ( *(_QWORD *)(v8 + 200) )
  {
    v9 = *(int ***)(v8 + 200);
    if ( !v9 || !Edges::GetCandidate((Edges *)(v8 + 288), v9, 0LL, 0LL) )
      return v5;
  }
  else
  {
    *((_DWORD *)this + 11) = 0;
    v10 = *(_DWORD *)(v8 + 64);
    v11 = *(_DWORD *)(v8 + 60);
    v27 = 0;
    if ( EdgeGestureComponent::SplashHitTest((EdgeGestureComponent *)v8, v11, v10, &v27) && (v27 & 0x400) != 0 )
    {
      v12 = (v27 >> 14) & 1 | 2;
      if ( (v27 & 0x2000) == 0 )
        v12 = (v27 >> 14) & 1;
      v13 = v12 | 4;
      if ( (v27 & 0x1000) == 0 )
        v13 = v12;
      v14 = v13 | 8;
      if ( (v27 & 0x800) == 0 )
        v14 = v13;
      v4 = v14;
      if ( v14 )
      {
        v15 = (_DWORD *)*((_QWORD *)this + 8);
        v16 = v15[15];
        v17 = v15[16];
        v18 = (v16 < v15[13] ? 4 : 0) | 8;
        if ( v16 < v15[8] - v15[14] )
          v18 = v16 < v15[13] ? 4 : 0;
        v19 = v18 | 1;
        if ( v17 >= v15[11] )
          v19 = v18;
        v20 = v19 | 2;
        if ( v17 < v15[9] - v15[12] )
          v20 = v19;
        if ( (v20 & v14) == 0 )
          return v5;
      }
    }
  }
  *((_DWORD *)this + 10) = 0;
  OrientationBias = EdgeGestureTarget::GetOrientationBias(this);
  if ( OrientationBias == 1 )
  {
    v22 = 288LL;
  }
  else
  {
    v22 = 304LL;
    if ( OrientationBias == 2 )
      v22 = 272LL;
  }
  v23 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 48LL))(*((_QWORD *)this + 12), v22);
  v5 = v23;
  if ( v23 >= 0 )
  {
    v25 = EdgeGestureTarget::GetOrientationBias(this);
    v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 12) + 56LL))(*((_QWORD *)this + 12), v25);
    v5 = v23;
    if ( v23 >= 0 )
    {
      v5 = 0;
      goto LABEL_42;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v24 = 689;
      goto LABEL_37;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v24 = 685;
LABEL_37:
    McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v24, v23);
  }
LABEL_42:
  if ( (v5 & 0x80000000) != 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v5;
    v7 = 608;
    goto LABEL_9;
  }
  if ( !*(_QWORD *)(*((_QWORD *)this + 8) + 200LL) )
    *((_DWORD *)this + 11) = v4;
  *((_DWORD *)this + 13) = a2->TimeStamp + *((unsigned __int16 *)this + 24);
  return v5;
}
