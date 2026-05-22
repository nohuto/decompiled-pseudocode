/*
 * XREFs of ??$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@PEAPEAUHSTRING__@@@Z @ 0x18008CAF4
 * Callers:
 *     ??0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z @ 0x18008F488 (--0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$vector@GV?$allocator@G@std@@@std@@QEAA@_KAEBV?$allocator@G@1@@Z @ 0x1800973DC (--0-$vector@GV-$allocator@G@std@@@std@@QEAA@_KAEBV-$allocator@G@1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(
        _DWORD *a1,
        const DEVPROPKEY *a2,
        HSTRING *a3)
{
  unsigned int String; // edi
  CONFIGRET DevNode_PropertyW; // eax
  signed int v9; // eax
  WCHAR *v10; // rbx
  CONFIGRET v11; // eax
  signed int v12; // eax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  PBYTE PropertyBuffer[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  ULONG PropertyBufferSize; // [rsp+80h] [rbp+30h] BYREF
  DEVPROPTYPE PropertyType; // [rsp+98h] [rbp+48h] BYREF

  PropertyBufferSize = 0;
  if ( !*a1 )
  {
    String = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6D,
      (__int64)"internal\\onecoreuapanalog\\inc\\input\\common\\devicepropertyhelpers.h",
      (const char *)0x8007139FLL);
    return String;
  }
  DevNode_PropertyW = CM_Get_DevNode_PropertyW(a1[10], a2, &PropertyType, 0LL, &PropertyBufferSize, 0);
  if ( !DevNode_PropertyW )
    return PropertyType != 18 ? 0x8007070C : 0;
  v9 = CM_MapCrToWin32Err(DevNode_PropertyW, 0x507u);
  String = (unsigned __int16)v9 | 0x80070000;
  if ( v9 <= 0 )
    String = v9;
  if ( String == -2147024774 && PropertyBufferSize )
  {
    std::vector<unsigned short>::vector<unsigned short>(PropertyBuffer, (unsigned __int64)PropertyBufferSize >> 1);
    v10 = (WCHAR *)PropertyBuffer[0];
    if ( !*a1 )
    {
      String = -2147019873;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D,
        (__int64)"internal\\onecoreuapanalog\\inc\\input\\common\\devicepropertyhelpers.h",
        (const char *)0x8007139FLL);
LABEL_18:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x84,
        (__int64)"internal\\onecoreuapanalog\\inc\\input\\common\\devicepropertyhelpers.h",
        (const char *)String);
      goto LABEL_20;
    }
    v11 = CM_Get_DevNode_PropertyW(a1[10], a2, &PropertyType, PropertyBuffer[0], &PropertyBufferSize, 0);
    if ( v11 )
    {
      v12 = CM_MapCrToWin32Err(v11, 0x507u);
      String = (unsigned __int16)v12 | 0x80070000;
      if ( v12 <= 0 )
        String = v12;
      if ( (String & 0x80000000) != 0 )
        goto LABEL_18;
    }
    else if ( PropertyType != 18 )
    {
      String = -2147023092;
      goto LABEL_18;
    }
    String = WindowsCreateString(v10, PropertyBufferSize >> 1, a3);
LABEL_20:
    if ( !v10 )
      return String;
    v13 = (PropertyBuffer[2] - (PBYTE)v10) >> 1;
    if ( v13 <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( 2 * v13 < 0x1000 )
      {
LABEL_27:
        operator delete(v10);
        return String;
      }
      if ( ((unsigned __int8)v10 & 0x1F) == 0 )
      {
        v14 = *((_QWORD *)v10 - 1);
        if ( v14 < (unsigned __int64)v10 && (unsigned __int64)v10 - v14 - 8 <= 0x1F )
        {
          v10 = (WCHAR *)*((_QWORD *)v10 - 1);
          goto LABEL_27;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(0x7FFFFFFFFFFFFFFFLL);
    JUMPOUT(0x18008CCBCLL);
  }
  return String;
}
