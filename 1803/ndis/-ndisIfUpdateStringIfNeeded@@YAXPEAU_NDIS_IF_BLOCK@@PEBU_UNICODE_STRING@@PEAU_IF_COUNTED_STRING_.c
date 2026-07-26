/*
 * XREFs of ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C003F3AC
 * Callers:
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C003F080 (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     ?ndisIsValidIfStringParts@@YAEPEBGK@Z @ 0x1C001A664 (-ndisIsValidIfStringParts@@YAEPEBGK@Z.c)
 *     memcmp @ 0x1C0025D20 (memcmp.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     WPP_SF_Z @ 0x1C0041C64 (WPP_SF_Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00C078C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

char __fastcall ndisIfUpdateStringIfNeeded(
        const unsigned __int16 *a1,
        const void **a2,
        _WORD *a3,
        unsigned int a4,
        int a5)
{
  unsigned int v5; // ebx
  int v10; // eax
  size_t v11; // r8
  _QWORD v13[2]; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+30h] [rbp-28h]
  int v15; // [rsp+34h] [rbp-24h]

  v5 = *(unsigned __int16 *)a2;
  if ( (_WORD)v5 != *a3 || (v10 = memcmp(a2[1], a3 + 1, *(unsigned __int16 *)a2)) != 0 )
  {
    LOBYTE(v10) = ndisIsValidIfStringParts(a1, v5);
    if ( (_BYTE)v10 )
    {
      memmove(a3 + 1, a2[1], v11);
      *a3 = *(_WORD *)a2;
      v13[1] = a3;
      v15 = a5;
      v13[0] = a4;
      v14 = 516;
      LOBYTE(v10) = ndisNsiNotifyClientInterfaceChange(a1, 0LL, v13);
    }
    else if ( (unsigned __int8)byte_1C009961D >= 3u )
    {
      LOBYTE(v10) = WPP_SF_Z(191LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a2);
    }
  }
  return v10;
}
