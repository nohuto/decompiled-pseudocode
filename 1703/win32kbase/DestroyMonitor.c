/*
 * XREFs of DestroyMonitor @ 0x1C0078C20
 * Callers:
 *     ?UpdateUserScreen@@YAJH@Z @ 0x1C0070960 (-UpdateUserScreen@@YAJH@Z.c)
 *     CleanupGDI @ 0x1C00787E8 (CleanupGDI.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     HMFreeObject @ 0x1C0040150 (HMFreeObject.c)
 *     GreDeleteObject @ 0x1C0041C00 (GreDeleteObject.c)
 *     ??4?$SharedPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1C0070934 (--4-$SharedPointerFieldpMonitorPrimary@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@P.c)
 *     HMMarkObjectDestroy @ 0x1C007A370 (HMMarkObjectDestroy.c)
 *     ??4?$SharedPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEAU2@@Z @ 0x1C007B150 (--4-$SharedPointerFieldpMonitorFirst@UtagMONITOR@@@tagKERNELDISPLAYINFO@@QEAAPEAUtagMONITOR@@PEA.c)
 */

__int64 __fastcall DestroyMonitor(char *BaseAddress)
{
  __int64 v2; // r8
  __int64 v3; // r9
  CCursorClip *v4; // rax
  char *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax
  HBRUSH v9; // rcx
  HBRUSH v10; // rcx
  HBRUSH v11; // rcx
  _QWORD *i; // rdx
  __int64 v13; // r8
  signed __int32 v14[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (int)IsCheckPointerDeviceMonitorsSupported() >= 0 )
    CheckPointerDeviceMonitors(BaseAddress);
  if ( BaseAddress == (char *)gpMonitorMouse )
    gpMonitorMouse = 0LL;
  v4 = gpDispInfo;
  v5 = (char *)*((_QWORD *)gpDispInfo + 12);
  if ( v5 )
  {
    if ( v5 == BaseAddress )
    {
      tagKERNELDISPLAYINFO::SharedPointerFieldpMonitorFirst<tagMONITOR>::operator=(
        (char *)gpDispInfo + 96,
        *((_QWORD *)BaseAddress + 7),
        v2,
        v3);
LABEL_8:
      v4 = gpDispInfo;
    }
    else
    {
      for ( i = v5 + 56; *i; i = (_QWORD *)(*i + 56LL) )
      {
        if ( (char *)*i == BaseAddress )
        {
          v13 = *((_QWORD *)BaseAddress + 7);
          if ( v13 )
            *(_QWORD *)(*(i - 2) + 16LL) = *(_QWORD *)(v13 + 48);
          else
            *(_QWORD *)(*(i - 2) + 16LL) = 0LL;
          *i = v13;
          goto LABEL_8;
        }
      }
    }
  }
  if ( BaseAddress == *((char **)v4 + 11) )
    tagKERNELDISPLAYINFO::SharedPointerFieldpMonitorPrimary<tagMONITOR>::operator=(
      (_QWORD *)v4 + 11,
      *((_QWORD *)v4 + 12));
  *(_QWORD *)(*((_QWORD *)BaseAddress + 5) + 16LL) = 0LL;
  *((_QWORD *)BaseAddress + 7) = 0LL;
  v6 = *((_QWORD *)BaseAddress + 65);
  if ( v6 )
  {
    Win32FreePool(v6);
    *((_QWORD *)BaseAddress + 65) = 0LL;
  }
  v7 = *((_QWORD *)BaseAddress + 66);
  if ( v7 )
  {
    Win32FreePool(v7);
    *((_QWORD *)BaseAddress + 66) = 0LL;
  }
  if ( (int)IsUpdateCursorSizesSupported() >= 0 )
    UpdateCursorSizes();
  _InterlockedOr(v14, 0);
  result = HMMarkObjectDestroy(BaseAddress);
  if ( (_DWORD)result )
  {
    v9 = (HBRUSH)*((_QWORD *)BaseAddress + 11);
    if ( v9 )
      GreDeleteObject(v9);
    v10 = (HBRUSH)*((_QWORD *)BaseAddress + 12);
    if ( v10 )
      GreDeleteObject(v10);
    v11 = (HBRUSH)*((_QWORD *)BaseAddress + 13);
    if ( v11 )
      GreDeleteObject(v11);
    return HMFreeObject(BaseAddress);
  }
  return result;
}
