/*
 * XREFs of ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C003E05C
 * Callers:
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C003DD30 (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     ?ndisIsValidIfStringParts@@YAEPEBGK@Z @ 0x1C0020694 (-ndisIsValidIfStringParts@@YAEPEBGK@Z.c)
 *     memcmp @ 0x1C0024E20 (memcmp.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     WPP_SF_Z @ 0x1C0040B38 (WPP_SF_Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00B4EFC (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

char __fastcall ndisIfUpdateStringIfNeeded(const unsigned __int16 *a1, __int16 *a2, _WORD *a3, unsigned int a4, int a5)
{
  unsigned __int16 v5; // di
  int v10; // eax
  _QWORD v12[2]; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+34h] [rbp-14h]

  v5 = *a2;
  if ( *a2 != *a3 || (v10 = memcmp(*((const void **)a2 + 1), a3 + 1, v5)) != 0 )
  {
    LOBYTE(v10) = ndisIsValidIfStringParts(a1, v5);
    if ( (_BYTE)v10 )
    {
      memmove(a3 + 1, *((const void **)a2 + 1), v5);
      *a3 = *a2;
      v12[1] = a3;
      v14 = a5;
      v12[0] = a4;
      v13 = 516;
      LOBYTE(v10) = ndisNsiNotifyClientInterfaceChange(a1, 0LL, v12);
    }
    else if ( (unsigned __int8)byte_1C009875D >= 3u )
    {
      LOBYTE(v10) = WPP_SF_Z(191LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a2);
    }
  }
  return v10;
}
