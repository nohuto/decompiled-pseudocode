/*
 * XREFs of ?GetDispDescAsASCIIStringLength@EDID_PARSER@MonDescParser@@QEBA_KH@Z @ 0x1C0003104
 * Callers:
 *     ?EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z @ 0x1C0002EC0 (-EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z.c)
 *     ?GetDispDescAsASCIIString@EDID_PARSER@MonDescParser@@QEBAXHPEAG@Z @ 0x1C0002FB4 (-GetDispDescAsASCIIString@EDID_PARSER@MonDescParser@@QEBAXHPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorUserFriendlyName@@YAJPEBEPEAG@Z @ 0x1C001847C (-EDIDV1_ObtainMonitorUserFriendlyName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x1C0018520 (-EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MonDescParser::EDID_PARSER::GetDispDescAsASCIIStringLength(
        MonDescParser::EDID_PARSER *this,
        int a2)
{
  __int64 v2; // r8
  unsigned __int64 i; // rax
  char v4; // cl
  unsigned __int64 v5; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 j; // rcx
  char v8; // dl

  v2 = *(_QWORD *)this + 18LL * a2;
  for ( i = 0LL; i < 0xD; ++i )
  {
    v4 = *(_BYTE *)(i + v2 + 59);
    v5 = i;
    if ( v4 == 10 )
      break;
  }
  result = v5 + 1;
  if ( v4 == 10 )
    result = v5;
  for ( j = result + 1; j < 0xD; ++j )
  {
    v8 = *(_BYTE *)(j + v2 + 59);
    if ( (v8 & 0xDE) != 0 || v8 == 33 )
      return 0LL;
  }
  return result;
}
