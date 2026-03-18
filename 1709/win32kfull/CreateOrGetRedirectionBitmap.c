/*
 * XREFs of CreateOrGetRedirectionBitmap @ 0x1C008F848
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C00443AC (zzzDwmStartRedirection.c)
 *     SetRedirectedWindow @ 0x1C008FCF8 (SetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C00E6938 (RecreateRedirectionBitmap.c)
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0023138 (GreCreateCompatibleBitmapInternal.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     IsPWNDEligibleForGDIScaling @ 0x1C009269C (IsPWNDEligibleForGDIScaling.c)
 *     IsDesktopWindow @ 0x1C0092C4C (IsDesktopWindow.c)
 *     DesktopFromDesktopWindow @ 0x1C00D882C (DesktopFromDesktopWindow.c)
 *     GreDereferenceObject @ 0x1C00E3F0C (GreDereferenceObject.c)
 *     GreSetRedirection @ 0x1C00E3FAC (GreSetRedirection.c)
 *     GetWindowMonitorAdapterLuid @ 0x1C00E75E4 (GetWindowMonitorAdapterLuid.c)
 *     GreGetDxSharedSurface @ 0x1C00E7634 (GreGetDxSharedSurface.c)
 *     GreSetRedirectionBitmapOwner @ 0x1C010A7F8 (GreSetRedirectionBitmapOwner.c)
 *     GreGetSpriteAttributes @ 0x1C010CC80 (GreGetSpriteAttributes.c)
 *     GreReferenceObject @ 0x1C010FDB4 (GreReferenceObject.c)
 */

__int64 __fastcall CreateOrGetRedirectionBitmap(__int64 a1, int a2, int a3, __int64 *a4)
{
  int v6; // esi
  char v7; // cl
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // r15d
  unsigned int v12; // r14d
  __int64 v13; // rbx
  __int16 v14; // r8
  __int64 v15; // rcx
  bool v16; // zf
  __int64 v17; // r14
  __int64 v18; // r12
  unsigned int v19; // r15d
  __int16 v20; // r13
  unsigned __int8 Prop; // al
  int v22; // r8d
  __int64 v23; // r11
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int8 v26; // al
  __int64 v27; // r11
  unsigned __int8 v28; // r8
  unsigned int v29[2]; // [rsp+40h] [rbp-30h] BYREF
  struct _BLENDFUNCTION v30[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v31; // [rsp+58h] [rbp-18h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+40h] BYREF
  __int64 *v33; // [rsp+C8h] [rbp+58h]

  v33 = a4;
  LODWORD(v32) = 0;
  v31 = 0LL;
  v6 = 0;
  v7 = *(_BYTE *)(a1 + 66);
  if ( (v7 & 0x20) != 0 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  v9 = *(_DWORD *)(a1 + 304);
  v10 = 0x4000000;
  if ( (v9 & 0x80000) != 0 )
    goto LABEL_6;
  if ( a3 )
  {
    *(_DWORD *)(a1 + 304) = v9 | 0x80000;
LABEL_6:
    v10 = 201326592;
  }
  v11 = 1;
  if ( (v7 & 8) == 0
    || (unsigned int)IsDesktopWindow(a1)
    || (unsigned int)GreGetSpriteAttributes(*(HDEV *)(gpDispInfo + 32LL), *(HWND *)a1, v30, v29, 1) && (v29[0] & 1) != 0 )
  {
    v10 |= 0x1000000u;
  }
  v12 = 1;
  if ( *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128) > 1 )
    v12 = *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128);
  if ( *(_DWORD *)(a1 + 140) - *(_DWORD *)(a1 + 132) > 1 )
    v11 = *(_DWORD *)(a1 + 140) - *(_DWORD *)(a1 + 132);
  if ( a2 || !(unsigned int)IsDesktopWindow(a1) )
  {
    LOWORD(v32) = 96;
    if ( (unsigned int)IsPWNDEligibleForGDIScaling(a1) )
    {
      v15 = *(unsigned __int16 *)(a1 + 372);
      if ( (_WORD)v15 != v14 )
        LOWORD(v32) = GreGetScaledLogPixels(v15);
    }
    if ( (v10 & 0x1000000) == 0 )
    {
      v16 = (*(_DWORD *)(a1 + 304) & 0x80000) == 0;
      v29[0] = 0;
      if ( v16 || (int)GreGetDxSharedSurface(*(HWND *)a1, (__int64)v29, (__int64)v30) < 0 )
        GetWindowMonitorAdapterLuid(a1, &v31);
    }
    v13 = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 48LL), v12, v11, v10, &v31, (unsigned __int16 *)&v32);
    LODWORD(v32) = 1;
  }
  else
  {
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) + 88LL);
  }
  if ( v13 )
  {
    v17 = *(_QWORD *)(a1 + 16);
    v18 = 0LL;
    v19 = 0;
    GetTopLevelWindow(a1);
    v20 = atomDispAffinity;
    Prop = GetProp(a1, atomDispAffinity, 1);
    if ( (Prop & (unsigned __int8)v22) != 0 )
    {
      v24 = *(_QWORD *)(v17 + 400);
      goto LABEL_30;
    }
    if ( !v23 || a1 == v23 || (v26 = GetProp(v23, v20, v22), (v26 & v28) == 0) )
    {
LABEL_31:
      if ( (*(_WORD *)(a1 + 82) & 0x3FFF) == 0x29D )
      {
        v25 = DesktopFromDesktopWindow(a1);
        if ( v25 )
          v18 = ***(_QWORD ***)(v25 + 8);
      }
      else
      {
        v18 = ***(_QWORD ***)(*(_QWORD *)(v17 + 432) + 8LL);
      }
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
      if ( (_DWORD)v32 )
      {
        v6 = GreReferenceObject(v13);
        if ( v6 < 0 )
          goto LABEL_49;
      }
      if ( (unsigned int)GreMarkUndeletableBitmap(v13) )
      {
        if ( (unsigned int)GreSetRedirection(v13, 1LL) && (unsigned int)GreSetRedirectionBitmapOwner(v13, v18, v19) )
        {
LABEL_47:
          if ( v6 < 0 )
            GreDereferenceObject(v13, 0LL);
LABEL_49:
          GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
          if ( v6 < 0 )
          {
            GreDeleteObject(v13);
            v13 = 0LL;
          }
          goto LABEL_52;
        }
        GreMarkDeletableBitmap(v13);
      }
      v6 = -2143354871;
      goto LABEL_47;
    }
    v24 = *(_QWORD *)(v17 + 400);
    if ( *(_QWORD *)(*(_QWORD *)(v27 + 16) + 400LL) == v24 )
    {
LABEL_30:
      v19 = *(_DWORD *)(v24 + 56);
      goto LABEL_31;
    }
    GreDeleteObject(v13);
    v13 = 0LL;
    v6 = -1073741790;
  }
  else
  {
    v6 = -2143354872;
  }
LABEL_52:
  *v33 = v13;
  return (unsigned int)v6;
}
