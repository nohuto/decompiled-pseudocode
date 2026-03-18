/*
 * XREFs of ?RemoveParentMenu@@YAXPEAUtagMENU@@PEAPEAU1@@Z @ 0x1C01445AC
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00976B4 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     ?UnlockSubMenu@@YAPEAUtagMENU@@PEAU1@PEAPEAU1@@Z @ 0x1C009C6A4 (-UnlockSubMenu@@YAPEAUtagMENU@@PEAU1@PEAPEAU1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RemoveParentMenu(struct tagMENU *a1, struct tagMENU **a2)
{
  __int64 v2; // rdx
  __int64 *v3; // rdx
  __int64 *v4; // r8

  v2 = (__int64)*a2;
  if ( v2 )
  {
    v3 = (__int64 *)(v2 + 104);
    if ( *v3 )
    {
      while ( 1 )
      {
        v4 = (__int64 *)*v3;
        if ( *(struct tagMENU **)(*v3 + 8) == a1 )
          break;
        v3 = (__int64 *)*v3;
        if ( !*v4 )
          return;
      }
      *v3 = *v4;
      RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v4);
    }
  }
}
