/*
 * XREFs of RIMAssignTouchType @ 0x1C0095C58
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000F028 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     RIMRetrieveLinkCollection @ 0x1C000FC08 (RIMRetrieveLinkCollection.c)
 *     RIMIsParallelDevice @ 0x1C000FF9C (RIMIsParallelDevice.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C001266C (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C00128A8 (rimHidP_GetSpecificValueCaps.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall RIMAssignTouchType(__int64 a1, struct _HIDP_PREPARSED_DATA *a2)
{
  int SpecificButtonCaps; // eax
  int SpecificValueCaps; // eax
  int v6; // ebx
  void *v7; // rax
  USHORT LinkCollection; // ax
  unsigned __int16 v10[2]; // [rsp+40h] [rbp-91h] BYREF
  unsigned int v11[3]; // [rsp+44h] [rbp-8Dh] BYREF
  struct _HIDP_VALUE_CAPS v12; // [rsp+50h] [rbp-81h] BYREF
  struct _HIDP_BUTTON_CAPS v13; // [rsp+A0h] [rbp-31h] BYREF

  v10[0] = 1;
  SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(HidP_Input, 0xDu, 0, 0x47u, &v13, v10, a2);
  if ( (int)(SpecificButtonCaps + 0x80000000) < 0 || SpecificButtonCaps == -1072627705 )
    *(_DWORD *)(a1 + 276) |= 0x10u;
  v10[0] = 1;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Input, 0xDu, 0, 0x51u, &v12, v10, a2);
  v6 = SpecificValueCaps;
  if ( ((SpecificValueCaps + 0x80000000) & 0x80000000) != 0 || SpecificValueCaps == -1072627705 )
  {
    v10[0] = 1;
    v6 = rimHidP_GetSpecificValueCaps(HidP_Feature, 0xDu, 0, 0x55u, &v12, v10, a2);
    if ( v6 < 0 )
    {
      LinkCollection = v12.LinkCollection;
      *(_DWORD *)(a1 + 276) |= 0x80u;
      *(_WORD *)(a1 + 688) = LinkCollection;
    }
    else
    {
      v11[0] = 0;
      *(_DWORD *)(a1 + 24) = 2;
      v7 = Win32AllocPoolZInit(0x28uLL, 1903194962LL);
      *(_QWORD *)(a1 + 672) = v7;
      if ( !v7
        || (unsigned int)RIMIsParallelDevice(a1, (__int64)a2, v11)
        && !(unsigned int)RIMRetrieveLinkCollection(a1, (__int64)a2, v11[0]) )
      {
        return (unsigned int)-1073741668;
      }
    }
  }
  return (unsigned int)v6;
}
