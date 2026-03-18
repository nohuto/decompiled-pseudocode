/*
 * XREFs of ?EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z @ 0x1C00093F8
 * Callers:
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00D82E4 (-_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 * Callees:
 *     ?GetDispDescAsASCIIString@EDID_PARSER@MonDescParser@@QEBAXHPEAG@Z @ 0x1C0009040 (-GetDispDescAsASCIIString@EDID_PARSER@MonDescParser@@QEBAXHPEAG@Z.c)
 *     ?GetDispDescAsASCIIStringLength@EDID_PARSER@MonDescParser@@QEBA_KH@Z @ 0x1C00090D0 (-GetDispDescAsASCIIStringLength@EDID_PARSER@MonDescParser@@QEBA_KH@Z.c)
 *     ?Is18ByteDispDesc@EDID_PARSER@MonDescParser@@QEBA_NH@Z @ 0x1C0009154 (-Is18ByteDispDesc@EDID_PARSER@MonDescParser@@QEBA_NH@Z.c)
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C0009190 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     memset @ 0x1C0016A80 (memset.c)
 */

__int64 __fastcall EDIDV1_ObtainDisplayConfigFriendlyName(unsigned __int8 *a1, unsigned __int16 *a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  int i; // ebx
  unsigned __int64 DispDescAsASCIIStringLength; // rsi
  _QWORD v7[12]; // [rsp+20h] [rbp-68h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v7[10] = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v7, a1, 0x80u);
  if ( (int)result >= 0 )
  {
    memset(a2, 0, 0x52uLL);
    v4 = 0LL;
    for ( i = 0; (unsigned int)i < 4; ++i )
    {
      if ( MonDescParser::EDID_PARSER::Is18ByteDispDesc((MonDescParser::EDID_PARSER *)v7, i)
        && *(_BYTE *)(v7[0] + 18LL * i + 57) == 0xFC )
      {
        DispDescAsASCIIStringLength = MonDescParser::EDID_PARSER::GetDispDescAsASCIIStringLength(
                                        (MonDescParser::EDID_PARSER *)v7,
                                        i);
        if ( DispDescAsASCIIStringLength + v4 > 0x28 )
          DispDescAsASCIIStringLength = 40 - v4;
        if ( DispDescAsASCIIStringLength && (unsigned __int64)(v4 + 13) <= 0x28 )
        {
          MonDescParser::EDID_PARSER::GetDispDescAsASCIIString((MonDescParser::EDID_PARSER *)v7, i, &a2[v4]);
          v4 += DispDescAsASCIIStringLength;
        }
      }
    }
    if ( v4 )
      return 0LL;
    else
      return 3221226021LL;
  }
  return result;
}
