/*
 * XREFs of CreateOrGetRedirectionBitmap @ 0x1C0026184
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0016490 (zzzDwmStartRedirection.c)
 *     SetRedirectedWindow @ 0x1C0022830 (SetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C009DE40 (RecreateRedirectionBitmap.c)
 * Callees:
 *     DesktopFromDesktopWindow @ 0x1C00104FC (DesktopFromDesktopWindow.c)
 *     GreDereferenceObject @ 0x1C001C23C (GreDereferenceObject.c)
 *     GreSetRedirection @ 0x1C001C2E0 (GreSetRedirection.c)
 *     IsDesktopWindow @ 0x1C002250C (IsDesktopWindow.c)
 *     IsPWNDEligibleForGDIScaling @ 0x1C0060BC4 (IsPWNDEligibleForGDIScaling.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C007DB44 (GreCreateCompatibleBitmapInternal.c)
 *     GetWindowMonitorAdapterLuid @ 0x1C009C9F4 (GetWindowMonitorAdapterLuid.c)
 *     GreSetRedirectionBitmapOwner @ 0x1C00FF348 (GreSetRedirectionBitmapOwner.c)
 *     GreGetSpriteAttributes @ 0x1C0100DA0 (GreGetSpriteAttributes.c)
 *     GreReferenceObject @ 0x1C0105B20 (GreReferenceObject.c)
 */

__int64 __fastcall CreateOrGetRedirectionBitmap(__int64 a1, int a2, int a3, HSURF *a4)
{
  __int64 result; // rax
  char v6; // cl
  int v7; // esi
  int v8; // r13d
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  HSURF v15; // rbx
  __int16 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rbp
  __int64 v19; // r15
  unsigned int v20; // r14d
  unsigned __int8 Prop; // al
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r10
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int8 v27; // al
  __int64 v28; // r10
  unsigned __int8 v29; // r8
  struct _BLENDFUNCTION v30; // [rsp+40h] [rbp-38h] BYREF
  struct _LUID v31; // [rsp+48h] [rbp-30h] BYREF
  unsigned int v32; // [rsp+80h] [rbp+8h] BYREF

  result = 0LL;
  v6 = *(_BYTE *)(a1 + 66);
  v7 = 0;
  v8 = 0;
  v31 = 0LL;
  if ( (v6 & 0x20) != 0 )
  {
    *a4 = 0LL;
    return result;
  }
  v11 = *(_DWORD *)(a1 + 304);
  v12 = 0x4000000;
  if ( (v11 & 0x80000) != 0 )
    goto LABEL_6;
  if ( a3 )
  {
    *(_DWORD *)(a1 + 304) = v11 | 0x80000;
LABEL_6:
    v12 = 201326592;
  }
  if ( (v6 & 8) == 0
    || (LOBYTE(v13) = IsDesktopWindow(a1), v13)
    || (unsigned int)GreGetSpriteAttributes(*(HDEV *)(gpDispInfo + 32LL), *(HWND *)a1, &v30, &v32, 1) && (v32 & 1) != 0 )
  {
    v12 |= 0x1000000u;
  }
  if ( a2 || (LOBYTE(v14) = IsDesktopWindow(a1), !v14) )
  {
    LOWORD(v32) = 96;
    if ( (unsigned int)IsPWNDEligibleForGDIScaling(a1) )
    {
      v17 = *(unsigned __int16 *)(a1 + 372);
      if ( (_WORD)v17 != v16 )
        LOWORD(v32) = GreGetScaledLogPixels(v17);
    }
    if ( (v12 & 0x1000000) == 0 )
      GetWindowMonitorAdapterLuid(a1, &v31);
    v15 = (HSURF)GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 48LL), &v31, (__int64)&v32);
    v8 = 1;
  }
  else
  {
    v15 = *(HSURF *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) + 88LL);
  }
  if ( v15 )
  {
    v18 = *(_QWORD *)(a1 + 16);
    v19 = 0LL;
    v20 = 0;
    GetTopLevelWindow(a1);
    Prop = GetProp(a1, (unsigned __int16)atomDispAffinity, 1LL);
    if ( (Prop & (unsigned __int8)v23) != 0 )
    {
      v25 = *(_QWORD *)(v18 + 376);
      goto LABEL_24;
    }
    if ( !v24 || a1 == v24 || (v27 = GetProp(v24, v22, v23), (v27 & v29) == 0) )
    {
LABEL_25:
      if ( (*(_WORD *)(a1 + 82) & 0x3FFF) == 0x29D )
      {
        v26 = DesktopFromDesktopWindow(a1);
        if ( v26 )
          v19 = ***(_QWORD ***)(v26 + 8);
      }
      else
      {
        v19 = ***(_QWORD ***)(*(_QWORD *)(v18 + 408) + 8LL);
      }
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
      if ( v8 )
      {
        v7 = GreReferenceObject(v15);
        if ( v7 < 0 )
          goto LABEL_43;
      }
      if ( (unsigned int)GreMarkUndeletableBitmap(v15) )
      {
        if ( (unsigned int)GreSetRedirection((__int64)v15, 1LL)
          && (unsigned int)GreSetRedirectionBitmapOwner(v15, v19, v20) )
        {
LABEL_41:
          if ( v7 < 0 )
            GreDereferenceObject(v15, 0);
LABEL_43:
          GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
          if ( v7 < 0 )
          {
            GreDeleteObject(v15);
            v15 = 0LL;
          }
          goto LABEL_46;
        }
        GreMarkDeletableBitmap(v15);
      }
      v7 = -2143354871;
      goto LABEL_41;
    }
    v25 = *(_QWORD *)(v18 + 376);
    if ( *(_QWORD *)(*(_QWORD *)(v28 + 16) + 376LL) == v25 )
    {
LABEL_24:
      v20 = *(_DWORD *)(v25 + 56);
      goto LABEL_25;
    }
    GreDeleteObject(v15);
    v15 = 0LL;
    v7 = -1073741790;
  }
  else
  {
    v7 = -2143354872;
  }
LABEL_46:
  *a4 = v15;
  return (unsigned int)v7;
}
