/*
 * XREFs of ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14003F8C4
 * Callers:
 *     ?AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140040AE0 (-AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140044EE0 (-AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@@Z @ 0x140030948 (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140032784 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

const struct CConnectionInstance *__fastcall CPipeInstance::GetLoopbackConnection(CPipeInstance *this)
{
  __int64 v2; // rax
  const struct CConnectionInstance *result; // rax
  struct CConnectionInstance *v4; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 51) )
  {
    v2 = *((_QWORD *)this + 8);
    if ( !v2 )
      ATL::AtlThrowImpl(-2147467259);
    return *(const struct CConnectionInstance **)(v2 + 16);
  }
  v4 = 0LL;
  CPipeInstance::GetAPONodeAndConnection(this, &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60, 0LL, &v4, 0LL);
  result = v4;
  if ( !v4 )
  {
    v4 = 0LL;
    CPipeInstance::GetAPONodeAndConnection(this, &GUID_fc7dff56_6b8d_45a9_b4ca_266f9ac21693, 0LL, &v4, 0LL);
    result = v4;
    if ( !v4 )
    {
      v2 = *((_QWORD *)this + 8);
      if ( !v2 )
        ATL::AtlThrowImpl(-2147467259);
      return *(const struct CConnectionInstance **)(v2 + 16);
    }
  }
  return result;
}
