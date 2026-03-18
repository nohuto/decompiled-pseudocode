/*
 * XREFs of NtDuplicateCompositionInputSink @ 0x1C0151890
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001F380 (UserIsCurrentProcessDwm.c)
 *     ?Release@CompositionObject@@QEBA_JXZ @ 0x1C003C7F0 (-Release@CompositionObject@@QEBA_JXZ.c)
 *     ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C003C810 (-CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0151770 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtDuplicateCompositionInputSink(void *a1, HANDLE *a2)
{
  int v4; // ebx
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF
  CompositionObject *v7; // [rsp+58h] [rbp+20h] BYREF

  Handle = (HANDLE)-1LL;
  v4 = 0;
  if ( !UserIsCurrentProcessDwm() )
    v4 = -1073741790;
  if ( v4 < 0 )
    goto LABEL_11;
  v4 = CompositionInputObject::ResolveHandle(a1, 1u, 1, &v7);
  if ( v4 >= 0 )
  {
    v4 = CompositionObject::CreateHandle(v7, 3u, 0, 0, &Handle);
    CompositionObject::Release(v7);
  }
  if ( v4 < 0 )
  {
LABEL_11:
    if ( Handle != (HANDLE)-1LL )
      NtClose(Handle);
  }
  else
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = Handle;
  }
  return (unsigned int)v4;
}
